# PickleBoy-GameBoy-Emulator

PickleBoy is a work-in-progress GameBoy emulator written in C++. The goal of the project is to accurately emulate the hardware of the original GameBoy.

![demo!](/demo/pokemon.gif)

## GameBoy Memory Area

   0x0000-0x00FF   +---------------------+
                    | Restart and         |
                    | Interrupt Vectors   |
                    +---------------------+
   0x0100-0x014F   +---------------------+
                    | Cartridge Header    |
                    | Area                |
                    +---------------------+
   0x0150-0x3FFF   +---------------------+
                    | Cartridge ROM -     |
                    | Bank 0 (fixed)      |
                    |                     |
                    | Cartridge ROM -     |
                    | Switchable Banks    |
                    | 1-xx               |
                    +---------------------+
   0x4000-0x7FFF   +---------------------+
                    | Cartridge ROM -     |
                    | Switchable Banks    |
                    | 1-xx               |
                    +---------------------+
   0x8000-0x97FF   +---------------------+
                    | Character RAM       |
                    +---------------------+
   0x9800-0x9BFF   +---------------------+
                    | BG Map Data 1       |
                    +---------------------+
   0x9C00-0x9FFF   +---------------------+
                    | BG Map Data 2       |
                    +---------------------+
   0xA000-0xBFFF   +---------------------+
                    | Cartridge RAM       |
                    | (If Available)      |
                    +---------------------+
   0xC000-0xCFFF   +---------------------+
                    | Internal RAM - Bank |
                    | 0 (fixed)           |
                    +---------------------+
   0xD000-0xDFFF   +---------------------+
                    | Internal RAM - Bank |
                    | 1-7 (switchable -   |
                    | CGB only)           |
                    +---------------------+
   0xE000-0xFDFF   +---------------------+
                    | Echo RAM - Reserved,|
                    | Do Not Use          |
                    +---------------------+
   0xFE00-0xFE9F   +---------------------+
                    | OAM - Object        |
                    | Attribute Memory    |
                    +---------------------+
   0xFEA0-0xFEFF   +---------------------+
                    | Unusable Memory     |
                    +---------------------+
   0xFF00-0xFF7F   +---------------------+
                    | Hardware I/O        |
                    | Registers           |
                    +---------------------+
   0xFF80-0xFFFE   +---------------------+
                    | Zero Page - 127     |
                    | bytes               |
                    +---------------------+
   0xFFFF          +---------------------+
                    | Interrupt Enable    |
                    | Flag                |
                    +---------------------+
