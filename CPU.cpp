// CPU.cpp is based on a custom chip called Sharp LR35902

#include <iostream>
#include <fstream>
#include <cstdint>
#include <vector>
#include <string>
#include <stdexcept>
#include <chrono>

struct FlagsRegister {
    bool zero;
    bool subtraction;
    bool half_carry;
    bool carry;
};

// Define bit positions for each flag
const int ZERO_FLAG_BYTE_POSITION = 7;
const int SUBTRACTION_FLAG_BYTE_POSITION = 6;
const int HALF_CARRY_FLAG_BYTE_POSITION = 5;
const int CARRY_FLAG_BYTE_POSITION = 4;

// Implement `From` trait to convert FlagsRegister to u8
inline uint8_t convertFlagsRegisterToByte(const FlagsRegister& flags) {
    return (flags.zero ? 1 : 0) << ZERO_FLAG_BYTE_POSITION
        | (flags.subtraction ? 1 : 0) << SUBTRACTION_FLAG_BYTE_POSITION
        | (flags.half_carry ? 1 : 0) << HALF_CARRY_FLAG_BYTE_POSITION
        | (flags.carry ? 1 : 0) << CARRY_FLAG_BYTE_POSITION;
}

// Implement `Into` trait to convert u8 to FlagsRegister
inline FlagsRegister convertByteToFlagsRegister(uint8_t byte) {
    return {
        bool((byte >> ZERO_FLAG_BYTE_POSITION) & 0x1),
        bool((byte >> SUBTRACTION_FLAG_BYTE_POSITION) & 0x1),
        bool((byte >> HALF_CARRY_FLAG_BYTE_POSITION) & 0x1),
        bool((byte >> CARRY_FLAG_BYTE_POSITION) & 0x1)
    };
}

class GameBoyCPU {
public:
    // Constructor
    GameBoyCPU() {
        // Initialize registers to 0
        a = b = c = d = e = h = l = 0;
        f.zero = f.subtraction = f.half_carry = f.carry = false;
    }

    // 8-bit registers
    uint8_t a; // Accumulator
    uint8_t b, c; // BC register pair
    uint8_t d, e; // DE register pair
    uint8_t h, l; // HL register pair

    // Flags register
    FlagsRegister f;

    // 16-bit registers
    uint16_t get_bc() const { return (b << 8) | c; }
    void set_bc(uint16_t value) { b = (value >> 8) & 0xFF; c = value & 0xFF; }
};

int main() {
    // Create an instance of the GameBoyCPU class
    GameBoyCPU cpu;

    // TODO: Add your emulator logic here

    return 0;
}