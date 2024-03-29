### project settings ###

cmake_minimum_required(VERSION 3.8)
set(CMAKE_SYSTEM_NAME Generic)
project(varmint C CXX ASM)

# specify cross-compilers and tools
set(CMAKE_C_COMPILER arm-none-eabi-gcc)
set(CMAKE_CXX_COMPILER arm-none-eabi-g++)
set(CMAKE_ASM_COMPILER  arm-none-eabi-gcc)
set(CMAKE_AR arm-none-eabi-ar)
set(CMAKE_OBJCOPY arm-none-eabi-objcopy)
set(CMAKE_OBJDUMP arm-none-eabi-objdump)
set(SIZE arm-none-eabi-size)

### source files ###

# Add test directory if being compiled without rosflight_firmware. Normally ROSFLIGHT_SOURCES is
#  provided by the CMakeLists.txt file in the root of the firmware repo and has the source files
#  for the firmware.
if(NOT DEFINED ROSFLIGHT_SOURCES)
    include_directories(test)
    set(ROSFLIGHT_SOURCES "test/main.cpp")
endif()

include_directories(
    board/include
    board/include/drivers
    Core/Inc
    USB_DEVICE/App
    USB_DEVICE/Target
    Drivers/STM32H7xx_HAL_Driver/Inc
    Drivers/STM32H7xx_HAL_Driver/Inc/Legacy
    Drivers/CMSIS/Device/ST/STM32H7xx/Include
    Drivers/CMSIS/Include
    Middlewares/ST/STM32_USB_Device_Library/Core/Inc
    Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Inc
)

file(GLOB_RECURSE VARMINT_SOURCES
    "board/src/*.cpp"
    "Core/Src/*.c"
    "Core/Startup/startup_stm32h753vihx.s"
    "USB_DEVICE/*.c"
    "Drivers/*.c"
    "Middlewares/*.c"
)

set(LINKER_SCRIPT ${CMAKE_CURRENT_SOURCE_DIR}/STM32H753VIHX_FLASH.ld)
add_link_options(-T ${LINKER_SCRIPT})

### preprocessor, compiler, linker options ###

add_definitions(-DDEBUG -DUSE_HAL_DRIVER -DSTM32H753xx)

add_compile_definitions(ARM_MATH_CM4;ARM_MATH_MATRIX_CHECK;ARM_MATH_ROUNDING)
add_compile_options(-Wall)
add_compile_options(-mfloat-abi=hard -mfpu=fpv4-sp-d16)
add_compile_options(-mcpu=cortex-m7 -mthumb -mthumb-interwork)
add_compile_options(-ffunction-sections -fdata-sections -fno-common -fmessage-length=0)
add_compile_options($<$<COMPILE_LANGUAGE:ASM>:-x$<SEMICOLON>assembler-with-cpp>)

add_link_options(-mfloat-abi=hard -mfpu=fpv4-sp-d16)
add_link_options(-Wl,-gc-sections,--print-memory-usage,-Map=${PROJECT_BINARY_DIR}/${PROJECT_NAME}.map)
add_link_options(-mcpu=cortex-m7 -mthumb -mthumb-interwork)

### build target ###

add_executable(${PROJECT_NAME}.elf ${ROSFLIGHT_SOURCES} ${VARMINT_SOURCES} ${LINKER_SCRIPT})
target_compile_definitions(${PROJECT_NAME}.elf PUBLIC
  GIT_VERSION_HASH=0x${GIT_VERSION_HASH}
  GIT_VERSION_STRING=\"${GIT_VERSION_STRING}\"
)
# Used for specifying which board to instantiate in the main.cpp of the firmware
target_compile_definitions(${PROJECT_NAME}.elf PRIVATE BUILD_VARMINT_BOARD)

set(HEX_FILE ${PROJECT_BINARY_DIR}/${PROJECT_NAME}.hex)
set(BIN_FILE ${PROJECT_BINARY_DIR}/${PROJECT_NAME}.bin)

add_custom_command(TARGET ${PROJECT_NAME}.elf POST_BUILD
    COMMAND ${CMAKE_OBJCOPY} -Oihex $<TARGET_FILE:${PROJECT_NAME}.elf> ${HEX_FILE}
    COMMAND ${CMAKE_OBJCOPY} -Obinary $<TARGET_FILE:${PROJECT_NAME}.elf> ${BIN_FILE}
        COMMENT "Building ${HEX_FILE}
Building ${BIN_FILE}")

