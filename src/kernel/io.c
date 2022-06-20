// Dinoloader
// Copyright (C) 2022 dinonull <dinonull@aol.com>
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.

#include "io.h"

void outb(uint16_t portnumber, uint8_t data) {
    asm volatile("outb %0, %1" : : "a" (data), "Nd" (portnumber));
}

uint8_t inb(uint16_t portnumber) {
    uint8_t result;
    asm volatile("inb %1, %0" : "=a" (result) : "Nd" (portnumber));
    return result;
}

void outw(uint16_t portnumber, uint16_t data) {
    asm volatile("outw %0, %1" : : "a" (data), "Nd" (portnumber));
}

uint16_t inw(uint16_t portnumber) {
    uint16_t result;
    asm volatile("inw %1, %0" : "=a" (result) : "Nd" (portnumber));
    return result;
}