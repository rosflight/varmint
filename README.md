# Varmint

This repository contains a board implementation of the [ROSflight firmware](https://github.com/rosflight/rosflight_firmware) for AeroVironment's Varmint FCU package, a STM32H753 based flight controller with a NVIDIA Jetson Orin NX on board. 

This code is based off of a [STM32cubeMX](https://www.st.com/en/development-tools/stm32cubemx.html) project, which enables quick configuration of the H7 processor. STM32cubeMX works by generating code for the configuration specified by the STM32cubeMX software. The generated code contains sections of "BEGIN USER CODE" and "END USER CODE" that the developer can then add their code inside. User code inside of these sections will persist between reconfigurations of the H7, while anything outside will be overwritten.

STM32cubeMX generates code in the *Core*, *Drivers*, *Middlewares* and *USB_DEVICE* folders. The *board* folder contains the majority of the non-generated code, and the *test* folder contains files used for testing.

This repository can be compiled as a standalone project or as a submodule of the firmware. Standalone compilation is only used for testing, as none of the ROSflight firmware functionality is included. When compiling with the firmware repository, use the CMakeLists.txt file found in the root of the firmware repo.
