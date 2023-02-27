// Memory map for a PickleBoy GameBoy Emulator

#include <iostream>

// Address range: 0000 - 7FFF (32KB)
// Description: Cartridge ROM (fixed)
// Notes: The first 16KB is usually bank 0 and cannot be swapped out
const uint16_t ROM_BANK_0_START_ADDRESS = 0x0000;
const uint16_t ROM_BANK_0_END_ADDRESS = 0x3FFF;
const uint16_t ROM_BANK_SWITCHABLE_START_ADDRESS = 0x4000;
const uint16_t ROM_BANK_SWITCHABLE_END_ADDRESS = 0x7FFF;

// Address range: 8000 - 9FFF (8KB)
// Description: Video RAM (VRAM)
const uint16_t VIDEO_RAM_START_ADDRESS = 0x8000;
const uint16_t VIDEO_RAM_END_ADDRESS = 0x9FFF;

// Address range: A000 - BFFF (8KB)
// Description: Cartridge RAM (switchable)
const uint16_t EXTERNAL_RAM_START_ADDRESS = 0xA000;
const uint16_t EXTERNAL_RAM_END_ADDRESS = 0xBFFF;

// Address range: C000 - CFFF (4KB)
// Description: Work RAM (fixed)
const uint16_t WORK_RAM_BANK_0_START_ADDRESS = 0xC000;
const uint16_t WORK_RAM_BANK_0_END_ADDRESS = 0xCFFF;

// Address range: D000 - DFFF (4KB)
// Description: Work RAM (switchable)
const uint16_t WORK_RAM_SWITCHABLE_START_ADDRESS = 0xD000;
const uint16_t WORK_RAM_SWITCHABLE_END_ADDRESS = 0xDFFF;

// Address range: E000 - FDFF (7.5KB)
// Description: Echo of Work RAM
const uint16_t ECHO_RAM_START_ADDRESS = 0xE000;
const uint16_t ECHO_RAM_END_ADDRESS = 0xFDFF;

// Address range: FE00 - FE9F (160 bytes)
// Description: Sprite attribute table (OAM)
const uint16_t SPRITE_TABLE_START_ADDRESS = 0xFE00;
const uint16_t SPRITE_TABLE_END_ADDRESS = 0xFE9F;

// Address range: FEA0 - FEFF (96 bytes)
// Description: Not used
const uint16_t UNUSED_START_ADDRESS = 0xFEA0;
const uint16_t UNUSED_END_ADDRESS = 0xFEFF;

// Address range: FF00 - FF7F (128 bytes)
// Description: I/O registers
const uint16_t IO_REGISTERS_START_ADDRESS = 0xFF00;
const uint16_t IO_REGISTERS_END_ADDRESS = 0xFF7F;

// Address range: FF80 - FFFE (127 bytes)
// Description: High RAM (HRAM)
const uint16_t HIGH_RAM_START_ADDRESS = 0xFF80;
const uint16_t HIGH_RAM_END_ADDRESS = 0xFFFE;

// Address range: FFFF - FFFF (1 byte)
// Description: Interrupt Enable Register (IER)
const uint16_t INTERRUPT_ENABLE_REGISTER_ADDRESS = 0xFFFF;