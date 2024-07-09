# SHUTTLE APP DEVICE
Repository for a GPS tracking device firmware using ESP32.

## Compile, Build, and Flash Firmware

### Prerequisites
- PlatformIO IDE (or VSCode extension)
- ESP-IDF framework

### PlatformIO Building and Uploading Firmware
1. Build Firmware
- Open your project in PlatformIO.
- Click the "Build" button (checkmark icon) to compile your firmware.
2. Flash Firmware
- Connect your ESP32 board to USB.
- Click the "Upload" button (arrow icon) to flash the compiled firmware to your ESP32.

### SDK Configuration - sdkconfig.esp32dev
- Hardware Configuration: Defines settings related to the ESP32 chip, such as clock frequencies, GPIO pin assignments, and peripheral configurations.
Software Features: 
- Enables or disables software components like Wi-Fi, Bluetooth, FreeRTOS, and other libraries included in ESP-IDF.
- Build Options: Controls compiler and linker options, optimization levels, debug information, and memory allocation strategies.
- Library Configuration: Configures options for networking stacks, file systems, and communication protocols supported by the ESP32.