/** 
 * 8x8 monochrome bitmap fonts for rendering
 * Author: Daniel Hepper <daniel@hepper.net>
 * 
 * License: Public Domain
 * 
 * Based on:
 * // Summary: font8x8.h
 * // 8x8 monochrome bitmap fonts for rendering
 * //
 * // Author:
 * //     Marcel Sondaar
 * //     International Business Machines (public domain VGA fonts)
 * //
 * // License:
 * //     Public Domain
 * 
 * Fetched from: http://dimensionalrift.homelinux.net/combuster/mos3/?p=viewsource&file=/modules/gfx/font8_8.asm
 **/

 #include <stdint.h>

// for later use
uint8_t font8x8_misc[10][8] = {
    { 0x1F, 0x33, 0x33, 0x5F, 0x63, 0xF3, 0x63, 0xE3},   // U+20A7 (Spanish Pesetas/Pt)
    { 0x70, 0xD8, 0x18, 0x3C, 0x18, 0x18, 0x1B, 0x0E},   // U+0192 (dutch florijn)
    { 0x3C, 0x36, 0x36, 0x7C, 0x00, 0x7E, 0x00, 0x00},   // U+ (underlined superscript a)
    { 0x1C, 0x36, 0x36, 0x1C, 0x00, 0x3E, 0x00, 0x00},   // U+ (underlined superscript 0)
    { 0x00, 0x00, 0x00, 0x3F, 0x03, 0x03, 0x00, 0x00},   // U+2310 (gun pointing right)
    { 0x30, 0x18, 0x0C, 0x18, 0x30, 0x00, 0x7E, 0x00},   // U+ (less than or equal)
    { 0x0C, 0x18, 0x30, 0x18, 0x0C, 0x00, 0x7E, 0x00},   // U+ (greater than or equal)
    { 0x0C, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+ (grave)
    { 0x0E, 0x00, 0x66, 0x66, 0x3C, 0x18, 0x18, 0x00},   // U+ (Y grave)
    { 0x00, 0x07, 0x00, 0x33, 0x33, 0x3E, 0x30, 0x1F}    // U+ (y grave)
};
