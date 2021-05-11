#include <lvgl/lvgl.h>

/*******************************************************************************
 * Size: 16 px
 * Bpp: 3
 * Opts: --font ../font/Roboto/Roboto-LightItalic.ttf -r 0x20-0x7F --size 16 --format lvgl --bpp 3 --lv-include lvgl/lvgl.h  -o robot_ightItalic_16.c
 ******************************************************************************/

#ifndef ROBOT_IGHTITALIC_16
#define ROBOT_IGHTITALIC_16 1
#endif

#if ROBOT_IGHTITALIC_16

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t gylph_bitmap[] = {
    /* U+20 " " */

    /* U+21 "!" */
    0x1, 0x50, 0x6, 0xc0, 0x9, 0x2, 0x40, 0x1a,
    0x0, 0x78, 0xe, 0x40, 0x24, 0x0, 0x80, 0xa0,
    0x11, 0x0, 0xe8, 0x0,

    /* U+22 "\"" */
    0x18, 0x50, 0xc9, 0xcb, 0xa, 0x50,

    /* U+23 "#" */
    0x3, 0xb0, 0xc, 0x7, 0x2a, 0xa, 0x3, 0xbb,
    0x16, 0x80, 0x1d, 0x8b, 0x63, 0xf0, 0x1d, 0x6b,
    0x47, 0xa0, 0x16, 0x43, 0x50, 0x39, 0x80, 0x44,
    0xc, 0x90, 0x16, 0x4, 0xf5, 0x5b, 0xbc, 0x83,
    0xc7, 0x63, 0xd8, 0x80, 0x2a, 0x8, 0x1e, 0xe8,
    0x5e, 0x6,

    /* U+24 "$" */
    0x3, 0x90, 0x1f, 0xb8, 0x1e, 0x55, 0x50, 0x32,
    0x91, 0xf6, 0x1, 0x5c, 0x43, 0x3, 0x10, 0x32,
    0x20, 0x8, 0x1a, 0x10, 0x13, 0x20, 0x3c, 0xff,
    0x62, 0x7, 0x1b, 0x30, 0x1f, 0x26, 0xc1, 0x50,
    0x3e, 0x68, 0xc, 0x90, 0x17, 0x9b, 0x6a, 0x40,
    0x4f, 0x46, 0x60, 0x62, 0x18, 0x18,

    /* U+25 "%" */
    0xe, 0xe4, 0x7, 0x1d, 0x74, 0x0, 0x50, 0x5c,
    0xe, 0x88, 0x12, 0x9, 0x4, 0xe0, 0x17, 0xba,
    0x20, 0x80, 0xa5, 0x87, 0xc0, 0x3e, 0x92, 0xac,
    0xd, 0x3d, 0xd7, 0x90, 0x8, 0x25, 0xc, 0x81,
    0xf0, 0x30, 0x4, 0x85, 0xa0, 0x3b, 0x21, 0x0,
    0xbd, 0xae, 0x0,

    /* U+26 "&" */
    0x2, 0x5b, 0x28, 0x18, 0xcd, 0x81, 0x1, 0x2a,
    0x0, 0x90, 0x1b, 0x82, 0x98, 0x12, 0x57, 0xe0,
    0x31, 0x13, 0x10, 0x23, 0xa8, 0x18, 0x8f, 0x1c,
    0xa0, 0xc4, 0xd0, 0x41, 0xde, 0x8, 0x15, 0xa2,
    0x94, 0x40, 0x30, 0x34, 0xfb, 0x3e, 0x8,

    /* U+27 "'" */
    0x18, 0xb6, 0xc1, 0x0,

    /* U+28 "(" */
    0x3, 0xfc, 0xa8, 0x12, 0xf4, 0xa, 0x50, 0x27,
    0x40, 0xd5, 0x81, 0x26, 0x6, 0xdc, 0xc, 0x98,
    0x18, 0x90, 0x1f, 0xe2, 0x7, 0xff, 0x15, 0x81,
    0xdd, 0x81, 0x96, 0x3, 0xa2, 0x0,

    /* U+29 ")" */
    0x3, 0xf3, 0x60, 0x33, 0xc0, 0x77, 0x60, 0x65,
    0x80, 0xe6, 0x7, 0xfc, 0x40, 0xff, 0x88, 0x19,
    0x20, 0x1b, 0x60, 0x19, 0x20, 0x12, 0x60, 0x6f,
    0x0, 0x91, 0x20, 0xb, 0xc0, 0x2d, 0x40, 0xc0,

    /* U+2A "*" */
    0x3, 0x60, 0x3c, 0x58, 0x1b, 0x36, 0x2f, 0x0,
    0xc2, 0xa1, 0x80, 0xcd, 0xc0, 0x4b, 0x42, 0x80,
    0xd4, 0x40, 0x20,

    /* U+2B "+" */
    0x3, 0x14, 0x7, 0xd4, 0x81, 0xf1, 0x20, 0x3e,
    0x68, 0x9, 0x7f, 0x1f, 0xe2, 0xbf, 0x65, 0xfc,
    0x40, 0x99, 0x3, 0xed, 0xc0, 0xf8, 0xa0, 0x30,

    /* U+2C "," */
    0xd, 0x86, 0x45, 0x97, 0xc0,

    /* U+2D "-" */
    0x7b, 0x40,

    /* U+2E "." */
    0x5, 0xd0,

    /* U+2F "/" */
    0x3, 0xca, 0x1, 0xe9, 0x0, 0x72, 0x40, 0x3d,
    0x20, 0xe, 0x68, 0xf, 0x58, 0x7, 0x3a, 0x7,
    0xab, 0x3, 0x9d, 0x3, 0xd5, 0x81, 0xce, 0x81,
    0xea, 0xc0, 0xe9, 0x0, 0x78,

    /* U+30 "0" */
    0x2, 0x7b, 0x40, 0x67, 0xb5, 0x28, 0x15, 0xa0,
    0x9, 0x0, 0x34, 0x6, 0x20, 0x36, 0x1, 0xf3,
    0x40, 0x62, 0x0, 0x81, 0xc4, 0x1, 0x3, 0x26,
    0x7, 0xdb, 0x0, 0x10, 0x32, 0x60, 0x12, 0x0,
    0xb4, 0x5, 0x7e, 0xd3, 0x0,

    /* U+31 "1" */
    0x0, 0xaa, 0x9b, 0x1b, 0x5d, 0x9, 0x80, 0x10,
    0x22, 0xc0, 0x91, 0x2, 0xf8, 0x8, 0xb0, 0x24,
    0x40, 0x88, 0x11, 0x60, 0x48, 0x80,

    /* U+32 "2" */
    0x2, 0x9b, 0x28, 0x1b, 0x7d, 0xaa, 0x1, 0x23,
    0x0, 0xd0, 0x15, 0x3, 0xe4, 0x40, 0x9b, 0x1,
    0xe3, 0x60, 0x1c, 0x7f, 0x1, 0xef, 0xc4, 0xe,
    0xdc, 0x81, 0xda, 0x10, 0x3b, 0x44, 0x7, 0x43,
    0x36, 0xc4, 0x0,

    /* U+33 "3" */
    0x2, 0x9b, 0x29, 0x2, 0xdf, 0x67, 0xe0, 0x9,
    0xb0, 0x4, 0x4, 0xa8, 0x18, 0x81, 0xe3, 0x68,
    0xd, 0x3e, 0xe8, 0xd, 0x3e, 0x80, 0x7c, 0x53,
    0x5, 0x1, 0xf3, 0xc0, 0x64, 0x81, 0x21, 0x1,
    0x19, 0x1, 0xe6, 0xcf, 0x40, 0x0,

    /* U+34 "4" */
    0x3, 0xd6, 0x80, 0xf3, 0x44, 0xe, 0x35, 0xe0,
    0x3b, 0xe2, 0xc0, 0xd6, 0x4, 0x40, 0xa6, 0x40,
    0x81, 0x22, 0xc1, 0x60, 0xc, 0xa0, 0x11, 0x1,
    0x46, 0xd4, 0x78, 0x4d, 0xb2, 0xd8, 0x7, 0x91,
    0x3, 0xfe,

    /* U+35 "5" */
    0x1, 0xff, 0x50, 0x57, 0xfa, 0x85, 0x80, 0xf6,
    0x40, 0x79, 0x5d, 0x8c, 0x9, 0x6d, 0x54, 0x2,
    0xa0, 0x13, 0x81, 0xe6, 0x1, 0x1, 0x99, 0x10,
    0xd, 0xb0, 0x28, 0x1, 0x28, 0x41, 0xb3, 0xe0,
    0x0,

    /* U+36 "6" */
    0x3, 0x2b, 0x90, 0x14, 0xf3, 0x20, 0xc, 0x52,
    0x6, 0xb0, 0xe, 0x6a, 0x6c, 0x60, 0x32, 0xda,
    0xa8, 0x2e, 0x80, 0x4c, 0x9, 0x1, 0x32, 0x7,
    0x99, 0x4, 0xd, 0xf0, 0x70, 0x3, 0x8, 0x41,
    0xb3, 0xd0,

    /* U+37 "7" */
    0x5b, 0x77, 0xcb, 0x6e, 0x50, 0xe, 0x21, 0x1,
    0xde, 0x1, 0xc9, 0x8, 0x1d, 0x20, 0xe, 0x74,
    0xf, 0x56, 0x7, 0x4a, 0x7, 0x14, 0xc0, 0xe9,
    0x0, 0x72, 0x8, 0xe,

    /* U+38 "8" */
    0x2, 0x7b, 0x44, 0xa, 0x7d, 0x9f, 0x1, 0x28,
    0x0, 0xa2, 0x8, 0x1c, 0xc8, 0x21, 0x0, 0xb4,
    0x5, 0x2f, 0xec, 0xc0, 0x3f, 0xed, 0x40, 0x1b,
    0x40, 0xd, 0x61, 0x20, 0x18, 0xf0, 0x40, 0xef,
    0x82, 0x42, 0x1, 0xb2, 0x1, 0xfb, 0x67, 0xc0,
    0x0,

    /* U+39 "9" */
    0x1, 0x36, 0x40, 0x2b, 0xf6, 0x8, 0x10, 0x60,
    0x22, 0x1f, 0x80, 0xc4, 0x3, 0x3, 0xe6, 0x4,
    0x80, 0x78, 0x1, 0x44, 0x15, 0xd8, 0x6e, 0x0,
    0xf6, 0x3a, 0xc0, 0xe8, 0x80, 0xe8, 0x60, 0x5,
    0xb3, 0xd0, 0x20,

    /* U+3A ":" */
    0xa, 0x85, 0x0, 0x10, 0x3f, 0xf8, 0x4, 0x5,
    0x60,

    /* U+3B ";" */
    0x0, 0xe0, 0x7, 0x40, 0x88, 0x1f, 0xfc, 0x54,
    0x80, 0x30, 0x12, 0x40, 0xe0, 0x6, 0x80, 0x0,

    /* U+3C "<" */
    0x3, 0xcd, 0x1, 0x9e, 0xe8, 0x19, 0x86, 0x81,
    0x6d, 0x30, 0x24, 0xe3, 0x3, 0xa6, 0xf9, 0x81,
    0xd3, 0xe6, 0x7, 0x1a, 0xc0,

    /* U+3D "=" */
    0xf, 0x6e, 0xa1, 0xed, 0xd4, 0xf, 0xed, 0xbc,
    0x40,

    /* U+3E ">" */
    0x9, 0x0, 0xf3, 0xf9, 0x1, 0x8d, 0xfd, 0x90,
    0x18, 0xdf, 0x58, 0x11, 0x9e, 0x30, 0xaf, 0xd8,
    0xc3, 0xf3, 0x20, 0x27, 0x48, 0x1c,

    /* U+3F "?" */
    0x7, 0x68, 0x83, 0xfb, 0x7e, 0xa, 0x90, 0x48,
    0x36, 0x3, 0xfa, 0x30, 0x33, 0x30, 0x9, 0xea,
    0x6, 0xb4, 0x6, 0x34, 0xe, 0x2c, 0xe, 0x20,
    0x7b, 0x90, 0x30,

    /* U+40 "@" */
    0x3, 0x95, 0xad, 0x90, 0xf, 0xae, 0xb5, 0xb2,
    0xe2, 0x6, 0xbe, 0x1, 0x8f, 0x80, 0x53, 0xa0,
    0xad, 0x20, 0x40, 0x89, 0x20, 0xf5, 0xa8, 0x3,
    0x21, 0x20, 0x5, 0x80, 0xb0, 0x39, 0x90, 0xe0,
    0x7, 0x80, 0xc5, 0x0, 0xa8, 0x6, 0x40, 0x3b,
    0x6e, 0x7, 0x91, 0x0, 0x4c, 0x7, 0xf8, 0x90,
    0x20, 0x7a, 0x1, 0x48, 0xb, 0x0, 0xba, 0xcb,
    0x68, 0x6, 0x21, 0xea, 0x1d, 0xa2, 0x5, 0x39,
    0x3, 0xfe, 0x3a, 0xdd, 0x0, 0xf0,

    /* U+41 "A" */
    0x3, 0xd6, 0x1, 0xf1, 0x64, 0xf, 0xbc, 0x60,
    0x79, 0x4, 0x7, 0xd2, 0x3, 0x40, 0x64, 0x10,
    0xc4, 0xd, 0x20, 0x1, 0xc0, 0x48, 0x20, 0xd,
    0x80, 0xa1, 0xda, 0xe4, 0x2, 0x1f, 0x6c, 0x48,
    0x48, 0x3, 0x93, 0x4d, 0x1, 0xdf, 0x0,

    /* U+42 "B" */
    0x1, 0x3f, 0xb5, 0x3, 0x1d, 0xfb, 0x1a, 0x4,
    0xc8, 0x14, 0x40, 0x44, 0xc, 0x88, 0x2, 0x80,
    0x8c, 0xe0, 0x1a, 0xd9, 0xf7, 0x20, 0x34, 0xd9,
    0xef, 0x2, 0x28, 0x9, 0x34, 0x1, 0x90, 0x31,
    0x2, 0x20, 0x72, 0x40, 0x48, 0xd, 0x50, 0x6,
    0x76, 0xe8, 0x0,

    /* U+43 "C" */
    0x3, 0x4d, 0xa4, 0x6, 0xdb, 0x78, 0x40, 0x58,
    0x80, 0x1b, 0x40, 0xb4, 0x6, 0x40, 0x2d, 0x1,
    0xc6, 0x4, 0x80, 0x7e, 0x24, 0x7, 0xff, 0x36,
    0x80, 0x48, 0x6, 0x98, 0x7, 0x80, 0x4d, 0x30,
    0xa, 0xed, 0x7c, 0x0,

    /* U+44 "D" */
    0x1, 0x3f, 0x6c, 0x60, 0x63, 0x7e, 0xd4, 0x2,
    0x68, 0xa, 0xa0, 0x22, 0x7, 0x26, 0x9, 0x1,
    0xdc, 0x3, 0x40, 0x77, 0x1, 0xb8, 0x1c, 0x48,
    0x12, 0x3, 0x9a, 0xd, 0x1, 0x93, 0x0, 0x40,
    0xe9, 0x0, 0x90, 0x12, 0xd0, 0x86, 0x76, 0xbf,
    0x20, 0x0,

    /* U+45 "E" */
    0x1, 0x3e, 0xdc, 0x80, 0x1d, 0xbc, 0x80, 0x32,
    0x7, 0xe2, 0x7, 0xe2, 0x80, 0xfc, 0xd6, 0xda,
    0x1, 0x69, 0xb6, 0x80, 0x45, 0x1, 0xf9, 0x90,
    0x3f, 0x10, 0x3f, 0x12, 0x3, 0xf3, 0x3b, 0x73,
    0x0,

    /* U+46 "F" */
    0x1, 0x3e, 0xdc, 0x80, 0x1b, 0xb7, 0x20, 0xd,
    0x1, 0xf8, 0x81, 0xf8, 0x90, 0x1f, 0x9b, 0x1,
    0xfb, 0x2d, 0xb4, 0x2, 0x37, 0x6d, 0x0, 0x9b,
    0x1, 0xf8, 0x90, 0x1f, 0x12, 0x3, 0xf3, 0x40,
    0x7e,

    /* U+47 "G" */
    0x2, 0x9b, 0x4c, 0xb, 0x7d, 0xaa, 0xc4, 0xac,
    0xb, 0xd0, 0x98, 0x18, 0xc6, 0x80, 0xf2, 0xd8,
    0x7, 0xcd, 0x80, 0x3d, 0x9d, 0x82, 0x1, 0xec,
    0x44, 0x10, 0x39, 0xb2, 0x40, 0x38, 0x94, 0xa4,
    0xa, 0xa0, 0x1f, 0xdb, 0x54, 0x0,

    /* U+48 "H" */
    0x1, 0x18, 0x1c, 0xa8, 0x2, 0x80, 0xe2, 0x40,
    0x19, 0x3, 0xb6, 0x0, 0x20, 0x79, 0xb0, 0x28,
    0xf, 0x12, 0xd, 0x6d, 0xe2, 0x3, 0x4d, 0xba,
    0x30, 0x5, 0x1, 0xc4, 0x80, 0x32, 0x7, 0x6c,
    0x0, 0x40, 0xf3, 0x60, 0x48, 0xf, 0x12, 0xd,
    0x1, 0xe2, 0x0,

    /* U+49 "I" */
    0x0, 0xa0, 0x3, 0xc0, 0x62, 0x1, 0xb0, 0x2,
    0x40, 0x90, 0x6, 0xc0, 0xe, 0x1, 0x88, 0x6,
    0xc0, 0x9, 0x2, 0x40, 0x0,

    /* U+4A "J" */
    0x3, 0xe8, 0x80, 0xf9, 0x30, 0x3e, 0x24, 0x7,
    0xff, 0xc, 0xa0, 0x3e, 0x44, 0xf, 0xbf, 0x1,
    0xf1, 0x41, 0x10, 0x32, 0x23, 0x30, 0x24, 0x80,
    0x34, 0x0, 0x64, 0x0, 0x57, 0x67, 0xe2, 0x0,

    /* U+4B "K" */
    0x1, 0x18, 0x19, 0xe0, 0x22, 0x40, 0x4e, 0xe0,
    0x26, 0x80, 0x3d, 0x80, 0x62, 0x2, 0x6a, 0x6,
    0x24, 0x21, 0xa0, 0x73, 0x51, 0xd0, 0x3d, 0x99,
    0x4c, 0xf, 0x17, 0x64, 0x1, 0xe7, 0x1, 0x94,
    0xe, 0x20, 0x4d, 0x88, 0x11, 0x20, 0x34, 0xe0,
    0x4d, 0x1, 0x93, 0x60, 0x0,

    /* U+4C "L" */
    0x1, 0x18, 0x1e, 0x24, 0x7, 0x9a, 0x3, 0xc4,
    0xf, 0x12, 0x3, 0xcd, 0x1, 0xed, 0xc0, 0xf1,
    0x20, 0x3c, 0xd0, 0x1e, 0x20, 0x78, 0x90, 0x1e,
    0x67, 0x6e, 0x0,

    /* U+4D "M" */
    0x1, 0x38, 0x1f, 0x2e, 0x4, 0x40, 0xfd, 0x0,
    0xcd, 0x90, 0x1c, 0xd8, 0x81, 0xb6, 0x1, 0xd7,
    0xb0, 0x5, 0xb2, 0x3, 0x4a, 0x70, 0x6, 0x4c,
    0x4, 0x53, 0xc4, 0x6, 0xe1, 0x10, 0x12, 0x3,
    0x60, 0x4, 0x86, 0x40, 0xb4, 0x9, 0x0, 0x68,
    0x2c, 0x3f, 0x2, 0x40, 0x44, 0x1, 0x69, 0x90,
    0xd8, 0x1, 0x20, 0x34, 0x80, 0x7, 0x0, 0x68,
    0x9, 0x21, 0x1, 0x88, 0x0,

    /* U+4E "N" */
    0x1, 0x28, 0x1c, 0x68, 0x2, 0x88, 0x19, 0x10,
    0xd, 0xa8, 0x1b, 0xe0, 0x6, 0x30, 0x31, 0x60,
    0x90, 0x70, 0x9, 0x10, 0xd0, 0x8c, 0xf, 0x6e,
    0x1, 0xb0, 0x28, 0x1, 0x20, 0x16, 0x82, 0x20,
    0x1a, 0x0, 0x5a, 0xfc, 0x0, 0x81, 0xa4, 0x14,
    0x9, 0x1, 0x88, 0x44, 0x34, 0x7, 0x40, 0x20,

    /* U+4F "O" */
    0x3, 0x4d, 0xf1, 0x3, 0x6f, 0xbf, 0x88, 0xb,
    0x18, 0x3, 0x68, 0x26, 0x80, 0xcd, 0xd, 0x40,
    0xfc, 0x90, 0xe, 0x20, 0x9, 0x1, 0xcd, 0x80,
    0xfd, 0xb0, 0xf, 0xc9, 0x84, 0x80, 0x66, 0x80,
    0x48, 0x20, 0x1d, 0x80, 0xc, 0xfb, 0x3e, 0x0,

    /* U+50 "P" */
    0x1, 0x3e, 0xd8, 0x81, 0x1d, 0xb7, 0xc0, 0x4c,
    0x81, 0x16, 0x80, 0x10, 0x3c, 0x41, 0x40, 0x72,
    0x40, 0xc8, 0x11, 0xa8, 0x8c, 0xf6, 0xa7, 0x80,
    0xe, 0xda, 0xa0, 0x26, 0x40, 0xfc, 0x40, 0xfc,
    0x48, 0xf, 0xcd, 0x1, 0xf8,

    /* U+51 "Q" */
    0x3, 0x4d, 0xa2, 0x4, 0x76, 0xdf, 0x80, 0xbc,
    0x40, 0xd, 0x81, 0x34, 0x6, 0x48, 0x36, 0x1,
    0xc4, 0x2, 0x40, 0x38, 0x80, 0x24, 0x7, 0x34,
    0x7, 0xed, 0xc0, 0xfc, 0x98, 0x24, 0x6, 0x88,
    0x4, 0xe0, 0x4d, 0x40, 0xa, 0x6d, 0x4c, 0x6,
    0x5b, 0x4a, 0x1, 0xfa, 0x90, 0x0,

    /* U+52 "R" */
    0x1, 0x3f, 0x6c, 0xa0, 0x63, 0xbe, 0xcf, 0xc0,
    0x48, 0x81, 0x25, 0x1, 0xff, 0x14, 0x7, 0x24,
    0x8, 0x81, 0x1d, 0x40, 0x77, 0xb3, 0xf9, 0x0,
    0x3b, 0x60, 0x40, 0x91, 0x0, 0x41, 0x3, 0xf2,
    0xa0, 0x9, 0x1, 0xab, 0x0, 0xd0, 0x18, 0x92,
    0x0,

    /* U+53 "S" */
    0x2, 0x7b, 0xf4, 0x3, 0x5d, 0x9f, 0x85, 0x0,
    0x5d, 0x2, 0x88, 0x3, 0x60, 0x3a, 0x0, 0x4a,
    0x3, 0x30, 0x2d, 0x2a, 0x3, 0xc7, 0x4d, 0x84,
    0xf, 0x19, 0xf0, 0x4, 0x40, 0xc5, 0x10, 0x68,
    0x1c, 0x80, 0x36, 0x40, 0x55, 0x90, 0x1b, 0xf6,
    0xd4, 0x0,

    /* U+54 "T" */
    0x7b, 0x5f, 0x6c, 0x1e, 0xd0, 0xdb, 0x1, 0xc4,
    0xf, 0xc9, 0x81, 0xf8, 0x90, 0x1f, 0xbe, 0x3,
    0xf2, 0x60, 0x7e, 0x24, 0x7, 0xe2, 0x7, 0xe2,
    0xc0, 0xfc, 0x88, 0x1f, 0xbf, 0x1, 0xe0,

    /* U+55 "U" */
    0x1, 0x50, 0x1d, 0x80, 0x9a, 0x3, 0x88, 0x11,
    0x3, 0x89, 0x0, 0x24, 0x7, 0x36, 0x0, 0xd0,
    0x1c, 0x70, 0x3, 0xc0, 0xec, 0x40, 0x62, 0x7,
    0x36, 0x0, 0xd8, 0xe, 0x24, 0x0, 0x90, 0x18,
    0xa0, 0x22, 0x40, 0x69, 0x80, 0xaf, 0x2, 0x81,
    0x81, 0x3b, 0xbe, 0xf4, 0x8,

    /* U+56 "V" */
    0x88, 0xf, 0x63, 0xf0, 0x1c, 0xd8, 0xa2, 0x7,
    0x58, 0xa, 0x3, 0x26, 0x40, 0x10, 0x34, 0x80,
    0x26, 0x80, 0x26, 0x40, 0xb1, 0x1, 0x20, 0xc,
    0x70, 0x2c, 0x81, 0x93, 0x12, 0x0, 0xf8, 0xb2,
    0x7, 0x9f, 0x80, 0x7d, 0x82, 0x3, 0x80,

    /* U+57 "W" */
    0x70, 0xd, 0x20, 0xd, 0x19, 0x3, 0x99, 0x3,
    0x36, 0x4, 0x9, 0xb8, 0x9, 0x20, 0x6c, 0x5,
    0x60, 0x1b, 0xc0, 0x40, 0x93, 0x3, 0x99, 0x0,
    0x40, 0x78, 0x18, 0x7, 0x40, 0xf3, 0x20, 0x90,
    0xac, 0x8, 0x89, 0x0, 0x3b, 0x2c, 0xc, 0xca,
    0x40, 0x4, 0xaf, 0x3, 0xaa, 0x2, 0x7d, 0x20,
    0x18, 0xb8, 0x4, 0x5a, 0x3, 0xba, 0x3, 0xd4,
    0xc,

    /* U+58 "X" */
    0x0, 0x78, 0x1d, 0x28, 0x11, 0x4c, 0x9, 0x25,
    0x3, 0x4a, 0x0, 0xde, 0x7, 0x10, 0x87, 0x84,
    0xf, 0x49, 0x26, 0x7, 0xc8, 0x28, 0x7, 0xe2,
    0x4c, 0xf, 0xef, 0x59, 0x3, 0xea, 0x92, 0x40,
    0x1e, 0x62, 0x4, 0x84, 0xc, 0x6d, 0x1, 0x48,
    0x3, 0x7e, 0x3, 0x34, 0x4,

    /* U+59 "Y" */
    0x70, 0xe, 0x38, 0x36, 0x3, 0xbf, 0x0, 0x48,
    0x5, 0x11, 0x1, 0xf8, 0x2, 0x48, 0x4, 0x90,
    0x4, 0xe0, 0x73, 0x56, 0x88, 0x1d, 0x68, 0x30,
    0x3c, 0x45, 0x3, 0xf1, 0x3, 0xf2, 0x60, 0x7e,
    0x24, 0x7, 0xef, 0xc0, 0x78,

    /* U+5A "Z" */
    0x2, 0xdb, 0xdd, 0x81, 0x6d, 0xd0, 0xb0, 0x3e,
    0x37, 0x81, 0xfb, 0xd2, 0x7, 0xd6, 0x90, 0x1f,
    0x30, 0xc0, 0xf9, 0x5a, 0x3, 0xe3, 0x78, 0x1f,
    0xbd, 0x20, 0x7d, 0x52, 0x1, 0xf3, 0x10, 0xf,
    0xd1, 0x6d, 0xe0, 0x0,

    /* U+5B "[" */
    0x0, 0xf6, 0x1, 0x6f, 0x80, 0x99, 0x3, 0x10,
    0x31, 0x20, 0x33, 0x60, 0x31, 0xc0, 0x6e, 0x40,
    0xc9, 0x81, 0x89, 0x1, 0x88, 0x18, 0xb0, 0x33,
    0x20, 0x6d, 0xc0, 0xc4, 0x80, 0xe9, 0x0, 0x40,

    /* U+5C "\\" */
    0x50, 0x3, 0x20, 0xb, 0x3, 0xe4, 0x80, 0x39,
    0x0, 0xb0, 0x2, 0xc0, 0xf9, 0x90, 0x19, 0x0,
    0x3c, 0x2, 0x40,

    /* U+5D "]" */
    0x2, 0xba, 0x81, 0x58, 0x40, 0xc7, 0x81, 0xb1,
    0x3, 0x36, 0x3, 0x12, 0x3, 0x10, 0x31, 0x60,
    0x64, 0x40, 0xdf, 0x80, 0xc5, 0x1, 0x99, 0x3,
    0x10, 0x31, 0x20, 0x33, 0x40, 0x5a, 0x70, 0x0,

    /* U+5E "^" */
    0x2, 0x58, 0xd, 0x0, 0xc9, 0x44, 0x4, 0x8e,
    0x83, 0xa1, 0x61, 0x58, 0x2c,

    /* U+5F "_" */
    0xbb, 0x75,

    /* U+60 "`" */
    0xc, 0xc, 0xc0, 0x3a, 0x0,

    /* U+61 "a" */
    0x0, 0xb6, 0x90, 0x3, 0x3e, 0xca, 0x1, 0x72,
    0x1, 0x20, 0x64, 0xc, 0xc1, 0x9b, 0x48, 0x97,
    0xdb, 0x11, 0x69, 0x0, 0x2c, 0x7, 0x0, 0xb9,
    0x10, 0xed, 0x4e, 0x0,

    /* U+62 "b" */
    0x1, 0x50, 0x1e, 0x68, 0xf, 0x10, 0x3e, 0x20,
    0x79, 0x36, 0xde, 0x0, 0x28, 0xee, 0x58, 0xf1,
    0x0, 0xf8, 0x24, 0x2, 0x60, 0x9, 0x1, 0x30,
    0x4, 0xc, 0x71, 0x3, 0xaa, 0x42, 0x80, 0x44,
    0x7d, 0xd9, 0xc4, 0x0,

    /* U+63 "c" */
    0x0, 0x6e, 0xc4, 0x0, 0xf9, 0xb2, 0x11, 0xf8,
    0x80, 0xa8, 0x1, 0x2, 0x6c, 0x90, 0xf, 0xfe,
    0x13, 0x20, 0x6a, 0xb, 0x20, 0x2e, 0x1, 0xfb,
    0x69, 0x80,

    /* U+64 "d" */
    0x3, 0xe5, 0x0, 0xf8, 0xf0, 0x3e, 0xe4, 0xf,
    0x93, 0x0, 0x76, 0x89, 0x81, 0xfd, 0xb2, 0x10,
    0x12, 0x8, 0xe, 0xc0, 0x24, 0x2, 0x24, 0xa,
    0x3, 0x7c, 0x18, 0x1c, 0x58, 0x60, 0x72, 0x20,
    0xb2, 0x2, 0x90, 0x2f, 0xda, 0xf6, 0x0,

    /* U+65 "e" */
    0x0, 0x6e, 0xc4, 0x0, 0xe9, 0xbc, 0x1, 0xe9,
    0x5, 0x21, 0x24, 0x5, 0xcb, 0x1b, 0x6a, 0x1,
    0xed, 0xcd, 0x88, 0x1e, 0x2d, 0x0, 0x4c, 0x6,
    0xfb, 0x4c, 0x0,

    /* U+66 "f" */
    0x2, 0x3b, 0x10, 0x17, 0xec, 0x80, 0x26, 0x40,
    0xc7, 0x1, 0xb4, 0xb8, 0x80, 0xc7, 0xe2, 0x4,
    0x48, 0xe, 0x20, 0x72, 0x60, 0x71, 0x20, 0x3b,
    0xe0, 0x38, 0xb0, 0x39, 0x10, 0x30,

    /* U+67 "g" */
    0x0, 0x76, 0x8e, 0x0, 0x7f, 0x6c, 0x80, 0x52,
    0x8, 0xe, 0xc0, 0x24, 0x2, 0x24, 0xa, 0x3,
    0x7c, 0x18, 0x1c, 0x58, 0x60, 0x72, 0x20, 0xb2,
    0x2, 0x90, 0x2f, 0xda, 0xe6, 0x4, 0x76, 0x5f,
    0xc0, 0x21, 0x0, 0xd2, 0x0, 0x91, 0xb3, 0xe0,
    0x20,

    /* U+68 "h" */
    0x1, 0x50, 0x1e, 0x6c, 0x7, 0x89, 0x1, 0xe2,
    0x7, 0x93, 0x5b, 0xc0, 0x5, 0x9d, 0xca, 0x1d,
    0x30, 0x18, 0x85, 0x40, 0xf1, 0x20, 0x2c, 0x41,
    0x3, 0x34, 0x58, 0x18, 0x84, 0x40, 0xc4, 0x7c,
    0x4, 0x98,

    /* U+69 "i" */
    0x3, 0xd5, 0x0, 0xa8, 0xe, 0x38, 0x3, 0x60,
    0x7, 0x0, 0xc4, 0x3, 0x60, 0x4, 0x81, 0x20,
    0xd, 0x80, 0x1c, 0x0,

    /* U+6A "j" */
    0x3, 0xaa, 0x3, 0xa2, 0x3, 0x88, 0x1c, 0x68,
    0x1c, 0xc8, 0x1d, 0xb8, 0x1c, 0x50, 0x1c, 0xc8,
    0x1c, 0x40, 0xe2, 0x80, 0xe6, 0x40, 0xed, 0xc0,
    0xe2, 0x80, 0xc5, 0x90, 0x2d, 0xf8, 0x8,

    /* U+6B "k" */
    0x1, 0x50, 0x1e, 0x6c, 0x7, 0x89, 0x1, 0xe2,
    0x7, 0x93, 0x2, 0xcc, 0x1c, 0x3, 0x46, 0x39,
    0x2d, 0x10, 0x4, 0x3f, 0x20, 0x23, 0x48, 0x1e,
    0xd6, 0x1, 0x14, 0x53, 0x40, 0x11, 0x1, 0xe0,
    0xf, 0xc0, 0xa, 0x60,

    /* U+6C "l" */
    0x1, 0x18, 0x2, 0x80, 0x32, 0x0, 0x80, 0x24,
    0x1, 0xa0, 0x7, 0x80, 0xc4, 0x3, 0x40, 0x8,
    0x2, 0x40, 0x1b, 0x0, 0x38, 0x0,

    /* U+6D "m" */
    0xa, 0x3d, 0xe8, 0x5b, 0x28, 0x2, 0x8e, 0xee,
    0xed, 0xa0, 0xd5, 0x0, 0xae, 0x0, 0x48, 0x1a,
    0x2, 0xf4, 0xc, 0xc1, 0x20, 0x22, 0x40, 0x48,
    0x82, 0x6, 0x68, 0xb, 0xf2, 0x60, 0x62, 0x6,
    0x28, 0xe0, 0x22, 0x40, 0x66, 0x79, 0x2, 0x68,
    0xc, 0x40,

    /* U+6E "n" */
    0xa, 0xbd, 0x90, 0x1, 0x63, 0x61, 0x43, 0xa6,
    0x3, 0x10, 0x68, 0x1e, 0x44, 0xb, 0x10, 0x40,
    0xcd, 0x16, 0x6, 0x21, 0x10, 0x31, 0x1f, 0x1,
    0x26, 0x0,

    /* U+6F "o" */
    0x0, 0x6e, 0xc6, 0x4, 0x7c, 0xd9, 0x50, 0xf,
    0xc4, 0x7, 0x80, 0x82, 0x4, 0x48, 0x24, 0x3,
    0xf7, 0x3, 0x14, 0xe, 0x3, 0x4e, 0x13, 0x40,
    0x20, 0x40, 0x3c, 0xd8, 0x28, 0x0,

    /* U+70 "p" */
    0x0, 0xa4, 0x6f, 0x0, 0x8b, 0xd9, 0xca, 0x1,
    0xe2, 0x1, 0xf8, 0x2, 0x40, 0x26, 0x4, 0x48,
    0xf, 0x88, 0x19, 0x60, 0x98, 0x1a, 0xa0, 0x51,
    0x1, 0x11, 0x1e, 0x46, 0xc1, 0x0, 0x24, 0xbb,
    0x20, 0x11, 0x20, 0x3c, 0x48, 0xf, 0x80,

    /* U+71 "q" */
    0x0, 0x76, 0x8e, 0x0, 0x7f, 0x6c, 0x80, 0x52,
    0x8, 0xe, 0xc0, 0x24, 0x2, 0x24, 0xa, 0x3,
    0x7c, 0x18, 0x1c, 0x58, 0x60, 0x72, 0x20, 0xb2,
    0x2, 0x90, 0x2f, 0xda, 0xe6, 0x4, 0x76, 0x51,
    0x80, 0xfb, 0x90, 0x3e, 0x4c, 0x0,

    /* U+72 "r" */
    0xa, 0xbf, 0x1, 0x43, 0xc1, 0xe3, 0x2, 0x28,
    0xc, 0x88, 0x18, 0x81, 0x8b, 0x3, 0x22, 0x6,
    0xf8, 0xc,

    /* U+73 "s" */
    0x0, 0xf6, 0x88, 0x7, 0xb5, 0xf0, 0xd, 0xc0,
    0x18, 0x3, 0x70, 0x26, 0x1, 0xfb, 0x90, 0x19,
    0x5d, 0xd0, 0x44, 0xb, 0xe0, 0x10, 0xa, 0x60,
    0xb6, 0xd5, 0x0,

    /* U+74 "t" */
    0x0, 0xe0, 0x17, 0xc0, 0xe7, 0x29, 0xc3, 0x50,
    0x4, 0x8, 0xb0, 0x24, 0x40, 0xbf, 0x1, 0x14,
    0x6, 0x60, 0x5e, 0xc0,

    /* U+75 "u" */
    0x6, 0x81, 0xb8, 0x6, 0x40, 0xfb, 0x70, 0x22,
    0x80, 0x12, 0x2, 0x44, 0x3, 0x40, 0x5f, 0x80,
    0x10, 0x31, 0x40, 0x7c, 0x88, 0x2, 0x40, 0x28,
    0x1b, 0xf6, 0xd2, 0x0,

    /* U+76 "v" */
    0x1c, 0xc, 0xe0, 0x20, 0x6b, 0x3, 0x40, 0x1a,
    0x1, 0x88, 0xb, 0x0, 0x2c, 0x1a, 0x2, 0x2c,
    0x58, 0x7, 0x34, 0x7, 0x39, 0x40, 0xec, 0x88,
    0x10,

    /* U+77 "w" */
    0xc0, 0x47, 0x81, 0x2a, 0xc8, 0xa, 0x6, 0x90,
    0x58, 0x4, 0x84, 0x10, 0x78, 0x9, 0x5, 0x8b,
    0x0, 0x10, 0x93, 0x90, 0x90, 0x1e, 0xe8, 0x3d,
    0xa0, 0xc, 0xd6, 0x19, 0xb0, 0x1, 0x48, 0x0,
    0xb6, 0x3, 0xa0, 0x1a, 0x1, 0x0,

    /* U+78 "x" */
    0x1, 0x50, 0x16, 0x40, 0x24, 0x0, 0xa9, 0x0,
    0x16, 0x98, 0x80, 0x69, 0x16, 0x80, 0xe2, 0x50,
    0xf, 0x57, 0xc0, 0xe6, 0x23, 0x20, 0x4a, 0xd0,
    0x90, 0x5, 0x38, 0x4, 0xc8,

    /* U+79 "y" */
    0x1, 0xc0, 0xce, 0x0, 0x24, 0x5, 0x60, 0x4,
    0xc0, 0x34, 0x5, 0xf0, 0xb, 0x0, 0x91, 0xd,
    0x1, 0x8b, 0x16, 0x1, 0xe7, 0x40, 0xf3, 0xac,
    0xf, 0x1a, 0x7, 0xc9, 0x81, 0xeb, 0x0, 0xe9,
    0xb1, 0x1, 0xc0,

    /* U+7A "z" */
    0x1, 0x36, 0xdd, 0x0, 0x9b, 0x55, 0x20, 0x1c,
    0xad, 0x1, 0xc6, 0x70, 0x3d, 0xf8, 0x81, 0xda,
    0x90, 0x3a, 0x26, 0x7, 0x33, 0x0, 0xf4, 0x7b,
    0x64, 0x0,

    /* U+7B "{" */
    0x3, 0x98, 0x1d, 0x88, 0x1a, 0x42, 0x3, 0x34,
    0x6, 0x24, 0x7, 0x36, 0x3, 0x8e, 0x3, 0x1a,
    0xc0, 0x9e, 0xe0, 0x67, 0x28, 0x1c, 0x90, 0xf,
    0x30, 0x39, 0x90, 0x38, 0x81, 0xe4, 0x40, 0xe2,
    0x10, 0x1d, 0x40, 0xc0,

    /* U+7C "|" */
    0x1, 0x40, 0x98, 0x1e, 0x2c, 0x3, 0xc0, 0x9,
    0x0, 0xec, 0x1, 0x20, 0xc, 0x9, 0x80, 0x24,
    0x1, 0xf0, 0x4, 0x80, 0x66, 0x0,

    /* U+7D "}" */
    0x2, 0x40, 0x79, 0xe0, 0x38, 0xa4, 0x3, 0xb9,
    0x3, 0xff, 0x81, 0xc8, 0x1c, 0x40, 0xf6, 0xc0,
    0x39, 0xb4, 0x3, 0x6b, 0x0, 0x92, 0x80, 0xdb,
    0x81, 0xc4, 0x80, 0xe6, 0x80, 0xc9, 0x81, 0x94,
    0xa0, 0x63, 0x80, 0xc0,

    /* U+7E "~" */
    0x1, 0x74, 0x2, 0x2c, 0x5f, 0xbe, 0x22, 0x10,
    0x50, 0x73, 0xec, 0x40
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 62, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 57, .box_w = 4, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 20, .adv_w = 73, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 26, .adv_w = 146, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 68, .adv_w = 139, .box_w = 9, .box_h = 16, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 114, .adv_w = 185, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 157, .adv_w = 154, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 196, .adv_w = 44, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 200, .adv_w = 80, .box_w = 6, .box_h = 18, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 230, .adv_w = 82, .box_w = 6, .box_h = 18, .ofs_x = -1, .ofs_y = -4},
    {.bitmap_index = 262, .adv_w = 107, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 281, .adv_w = 141, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 305, .adv_w = 49, .box_w = 3, .box_h = 4, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 310, .adv_w = 72, .box_w = 5, .box_h = 1, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 312, .adv_w = 61, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 314, .adv_w = 100, .box_w = 8, .box_h = 13, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 343, .adv_w = 139, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 380, .adv_w = 139, .box_w = 5, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 402, .adv_w = 139, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 437, .adv_w = 139, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 475, .adv_w = 139, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 509, .adv_w = 139, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 542, .adv_w = 139, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 576, .adv_w = 139, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 604, .adv_w = 139, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 645, .adv_w = 139, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 680, .adv_w = 53, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 689, .adv_w = 50, .box_w = 4, .box_h = 12, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 705, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 726, .adv_w = 139, .box_w = 8, .box_h = 4, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 735, .adv_w = 130, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 757, .adv_w = 114, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 784, .adv_w = 228, .box_w = 14, .box_h = 15, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 854, .adv_w = 156, .box_w = 10, .box_h = 12, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 893, .adv_w = 153, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 936, .adv_w = 163, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 972, .adv_w = 164, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1014, .adv_w = 143, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1047, .adv_w = 141, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1080, .adv_w = 171, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1118, .adv_w = 177, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1161, .adv_w = 67, .box_w = 4, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1182, .adv_w = 138, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1214, .adv_w = 158, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1259, .adv_w = 132, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1286, .adv_w = 216, .box_w = 14, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1347, .adv_w = 178, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1395, .adv_w = 169, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1435, .adv_w = 154, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1472, .adv_w = 169, .box_w = 10, .box_h = 14, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1518, .adv_w = 159, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1559, .adv_w = 148, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1601, .adv_w = 150, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1632, .adv_w = 165, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1677, .adv_w = 154, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1716, .adv_w = 224, .box_w = 14, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1773, .adv_w = 153, .box_w = 12, .box_h = 12, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1818, .adv_w = 150, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1855, .adv_w = 150, .box_w = 11, .box_h = 12, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1891, .adv_w = 61, .box_w = 6, .box_h = 16, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1923, .adv_w = 99, .box_w = 4, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1942, .adv_w = 61, .box_w = 6, .box_h = 16, .ofs_x = -2, .ofs_y = -3},
    {.bitmap_index = 1974, .adv_w = 105, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1987, .adv_w = 108, .box_w = 7, .box_h = 1, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 1989, .adv_w = 72, .box_w = 4, .box_h = 3, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 1994, .adv_w = 134, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2022, .adv_w = 139, .box_w = 8, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2058, .adv_w = 129, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2084, .adv_w = 139, .box_w = 9, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2123, .adv_w = 130, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2150, .adv_w = 84, .box_w = 7, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2180, .adv_w = 139, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2221, .adv_w = 138, .box_w = 8, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2255, .adv_w = 57, .box_w = 4, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2275, .adv_w = 58, .box_w = 7, .box_h = 15, .ofs_x = -3, .ofs_y = -3},
    {.bitmap_index = 2306, .adv_w = 123, .box_w = 8, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2342, .adv_w = 57, .box_w = 4, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2364, .adv_w = 221, .box_w = 13, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2406, .adv_w = 138, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2432, .adv_w = 140, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2462, .adv_w = 139, .box_w = 9, .box_h = 12, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 2501, .adv_w = 140, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2539, .adv_w = 85, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2557, .adv_w = 127, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2584, .adv_w = 81, .box_w = 5, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2604, .adv_w = 138, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2632, .adv_w = 121, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2657, .adv_w = 189, .box_w = 11, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2695, .adv_w = 122, .box_w = 9, .box_h = 9, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 2724, .adv_w = 119, .box_w = 9, .box_h = 12, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 2759, .adv_w = 122, .box_w = 9, .box_h = 9, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 2785, .adv_w = 83, .box_w = 7, .box_h = 17, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 2821, .adv_w = 56, .box_w = 4, .box_h = 14, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2843, .adv_w = 83, .box_w = 7, .box_h = 17, .ofs_x = -2, .ofs_y = -4},
    {.bitmap_index = 2879, .adv_w = 171, .box_w = 10, .box_h = 3, .ofs_x = 0, .ofs_y = 3}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Pair left and right glyphs for kerning*/
static const uint8_t kern_pair_glyph_ids[] =
{
    1, 53,
    3, 3,
    3, 8,
    3, 34,
    3, 66,
    3, 68,
    3, 69,
    3, 70,
    3, 72,
    3, 78,
    3, 79,
    3, 80,
    3, 81,
    3, 82,
    3, 84,
    3, 88,
    8, 3,
    8, 8,
    8, 34,
    8, 66,
    8, 68,
    8, 69,
    8, 70,
    8, 72,
    8, 78,
    8, 79,
    8, 80,
    8, 81,
    8, 82,
    8, 84,
    8, 88,
    9, 55,
    9, 56,
    9, 58,
    13, 3,
    13, 8,
    15, 3,
    15, 8,
    16, 16,
    34, 3,
    34, 8,
    34, 32,
    34, 36,
    34, 40,
    34, 48,
    34, 50,
    34, 53,
    34, 54,
    34, 55,
    34, 56,
    34, 58,
    34, 80,
    34, 85,
    34, 86,
    34, 87,
    34, 88,
    34, 90,
    34, 91,
    35, 53,
    35, 55,
    35, 58,
    36, 10,
    36, 53,
    36, 62,
    36, 94,
    37, 13,
    37, 15,
    37, 34,
    37, 53,
    37, 55,
    37, 57,
    37, 58,
    37, 59,
    38, 53,
    38, 68,
    38, 69,
    38, 70,
    38, 71,
    38, 72,
    38, 80,
    38, 82,
    38, 86,
    38, 87,
    38, 88,
    38, 90,
    39, 13,
    39, 15,
    39, 34,
    39, 43,
    39, 53,
    39, 66,
    39, 68,
    39, 69,
    39, 70,
    39, 72,
    39, 80,
    39, 82,
    39, 83,
    39, 86,
    39, 87,
    39, 90,
    41, 34,
    41, 53,
    41, 57,
    41, 58,
    42, 34,
    42, 53,
    42, 57,
    42, 58,
    43, 34,
    44, 14,
    44, 36,
    44, 40,
    44, 48,
    44, 50,
    44, 68,
    44, 69,
    44, 70,
    44, 72,
    44, 78,
    44, 79,
    44, 80,
    44, 81,
    44, 82,
    44, 86,
    44, 87,
    44, 88,
    44, 90,
    45, 3,
    45, 8,
    45, 34,
    45, 36,
    45, 40,
    45, 48,
    45, 50,
    45, 53,
    45, 54,
    45, 55,
    45, 56,
    45, 58,
    45, 86,
    45, 87,
    45, 88,
    45, 90,
    46, 34,
    46, 53,
    46, 57,
    46, 58,
    47, 34,
    47, 53,
    47, 57,
    47, 58,
    48, 13,
    48, 15,
    48, 34,
    48, 53,
    48, 55,
    48, 57,
    48, 58,
    48, 59,
    49, 13,
    49, 15,
    49, 34,
    49, 43,
    49, 57,
    49, 59,
    49, 66,
    49, 68,
    49, 69,
    49, 70,
    49, 72,
    49, 80,
    49, 82,
    49, 85,
    49, 87,
    49, 90,
    50, 53,
    50, 55,
    50, 56,
    50, 58,
    51, 53,
    51, 55,
    51, 58,
    53, 1,
    53, 13,
    53, 14,
    53, 15,
    53, 34,
    53, 36,
    53, 40,
    53, 43,
    53, 48,
    53, 50,
    53, 52,
    53, 53,
    53, 55,
    53, 56,
    53, 58,
    53, 66,
    53, 68,
    53, 69,
    53, 70,
    53, 72,
    53, 78,
    53, 79,
    53, 80,
    53, 81,
    53, 82,
    53, 83,
    53, 84,
    53, 86,
    53, 87,
    53, 88,
    53, 89,
    53, 90,
    53, 91,
    54, 34,
    55, 10,
    55, 13,
    55, 14,
    55, 15,
    55, 34,
    55, 36,
    55, 40,
    55, 48,
    55, 50,
    55, 62,
    55, 66,
    55, 68,
    55, 69,
    55, 70,
    55, 72,
    55, 80,
    55, 82,
    55, 83,
    55, 86,
    55, 87,
    55, 90,
    55, 94,
    56, 10,
    56, 13,
    56, 14,
    56, 15,
    56, 34,
    56, 53,
    56, 62,
    56, 66,
    56, 68,
    56, 69,
    56, 70,
    56, 72,
    56, 80,
    56, 82,
    56, 83,
    56, 86,
    56, 94,
    57, 14,
    57, 36,
    57, 40,
    57, 48,
    57, 50,
    57, 55,
    57, 68,
    57, 69,
    57, 70,
    57, 72,
    57, 80,
    57, 82,
    57, 86,
    57, 87,
    57, 90,
    58, 7,
    58, 10,
    58, 11,
    58, 13,
    58, 14,
    58, 15,
    58, 34,
    58, 36,
    58, 40,
    58, 43,
    58, 48,
    58, 50,
    58, 52,
    58, 53,
    58, 54,
    58, 55,
    58, 56,
    58, 57,
    58, 58,
    58, 62,
    58, 66,
    58, 68,
    58, 69,
    58, 70,
    58, 71,
    58, 72,
    58, 78,
    58, 79,
    58, 80,
    58, 81,
    58, 82,
    58, 83,
    58, 84,
    58, 85,
    58, 86,
    58, 87,
    58, 89,
    58, 90,
    58, 91,
    58, 94,
    59, 34,
    59, 36,
    59, 40,
    59, 48,
    59, 50,
    59, 68,
    59, 69,
    59, 70,
    59, 72,
    59, 80,
    59, 82,
    59, 86,
    59, 87,
    59, 88,
    59, 90,
    60, 43,
    60, 54,
    66, 3,
    66, 8,
    66, 87,
    66, 90,
    67, 3,
    67, 8,
    67, 87,
    67, 89,
    67, 90,
    67, 91,
    68, 3,
    68, 8,
    70, 3,
    70, 8,
    70, 87,
    70, 90,
    71, 3,
    71, 8,
    71, 10,
    71, 62,
    71, 68,
    71, 69,
    71, 70,
    71, 72,
    71, 82,
    71, 94,
    73, 3,
    73, 8,
    76, 68,
    76, 69,
    76, 70,
    76, 72,
    76, 82,
    78, 3,
    78, 8,
    79, 3,
    79, 8,
    80, 3,
    80, 8,
    80, 87,
    80, 89,
    80, 90,
    80, 91,
    81, 3,
    81, 8,
    81, 87,
    81, 89,
    81, 90,
    81, 91,
    83, 3,
    83, 8,
    83, 13,
    83, 15,
    83, 66,
    83, 68,
    83, 69,
    83, 70,
    83, 71,
    83, 72,
    83, 80,
    83, 82,
    83, 85,
    83, 87,
    83, 88,
    83, 90,
    85, 80,
    87, 3,
    87, 8,
    87, 13,
    87, 15,
    87, 66,
    87, 68,
    87, 69,
    87, 70,
    87, 71,
    87, 72,
    87, 80,
    87, 82,
    88, 13,
    88, 15,
    89, 68,
    89, 69,
    89, 70,
    89, 72,
    89, 80,
    89, 82,
    90, 3,
    90, 8,
    90, 13,
    90, 15,
    90, 66,
    90, 68,
    90, 69,
    90, 70,
    90, 71,
    90, 72,
    90, 80,
    90, 82,
    91, 68,
    91, 69,
    91, 70,
    91, 72,
    91, 80,
    91, 82,
    92, 43,
    92, 54
};

/* Kerning between the respective left and right glyphs
 * 4.4 format which needs to scaled with `kern_scale`*/
static const int8_t kern_pair_values[] =
{
    -5, -13, -13, -15, -6, -7, -7, -7,
    -7, -2, -2, -8, -2, -7, -10, 1,
    -13, -13, -15, -6, -7, -7, -7, -7,
    -2, -2, -8, -2, -7, -10, 1, 3,
    2, 3, -21, -21, -21, -21, -28, -15,
    -15, -8, -1, -1, -1, -1, -16, -2,
    -11, -9, -12, -1, -2, -1, -6, -4,
    -6, 2, -3, -3, -7, -3, -4, -1,
    -2, -13, -13, -3, -3, -3, -3, -5,
    -3, 3, -2, -2, -2, -2, -2, -2,
    -2, -2, -3, -3, -3, -29, -29, -21,
    -33, 3, -4, -3, -3, -3, -3, -3,
    -3, -3, -3, -3, -3, 2, -4, 2,
    -3, 2, -4, 2, -3, -3, -8, -4,
    -4, -4, -4, -3, -3, -3, -3, -3,
    -3, -3, -3, -3, -3, -5, -8, -5,
    -42, -42, 2, -8, -8, -8, -8, -34,
    -7, -22, -18, -30, -5, -17, -11, -17,
    2, -4, 2, -3, 2, -4, 2, -3,
    -13, -13, -3, -3, -3, -3, -5, -3,
    -40, -40, -17, -25, -4, -3, -1, -2,
    -2, -2, -2, -2, -2, 2, 2, 2,
    -5, -3, -2, -4, -10, -2, -6, -5,
    -27, -29, -27, -10, -3, -3, -30, -3,
    -3, -2, 2, 2, 2, 2, -14, -12,
    -12, -12, -12, -14, -14, -12, -14, -12,
    -9, -14, -12, -9, -7, -10, -9, -7,
    -3, 3, -28, -5, -28, -9, -2, -2,
    -2, -2, 2, -6, -5, -5, -5, -5,
    -6, -5, -4, -3, -1, -1, 2, 2,
    -15, -7, -15, -5, 2, 2, -4, -4,
    -4, -4, -4, -4, -4, -3, -2, 2,
    -6, -3, -3, -3, -3, 2, -3, -3,
    -3, -3, -3, -3, -3, -4, -4, -4,
    3, -6, -26, -6, -26, -12, -4, -4,
    -12, -4, -4, -2, 2, -12, 2, 2,
    2, 2, 2, -9, -8, -8, -8, -3,
    -8, -5, -5, -8, -5, -8, -5, -7,
    -3, -5, -2, -3, -2, -4, 2, 2,
    -3, -3, -3, -3, -3, -3, -3, -3,
    -3, -3, -2, -3, -3, -3, -2, -2,
    -8, -8, -2, -2, -4, -4, -1, -2,
    -1, -2, -1, -1, -2, -2, -2, -2,
    2, 2, 3, 2, -3, -3, -3, -3,
    -3, 2, -13, -13, -2, -2, -2, -2,
    -2, -13, -13, -13, -13, -17, -17, -2,
    -3, -2, -2, -4, -4, -1, -2, -1,
    -2, 2, 2, -15, -15, -5, -2, -2,
    -2, 2, -2, -2, -2, 6, 2, 2,
    2, -2, 2, 2, -13, -13, -2, -2,
    -2, -2, 2, -2, -2, -2, -15, -15,
    -2, -2, -2, -2, -2, -2, 2, 2,
    -13, -13, -2, -2, -2, -2, 2, -2,
    -2, -2, -2, -2, -2, -2, -2, -2,
    -2, -2
};

/*Collect the kern pair's data in one place*/
static const lv_font_fmt_txt_kern_pair_t kern_pairs =
{
    .glyph_ids = kern_pair_glyph_ids,
    .values = kern_pair_values,
    .pair_cnt = 434,
    .glyph_ids_size = 0
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

/*Store all the custom data of the font*/
static lv_font_fmt_txt_dsc_t font_dsc = {
    .glyph_bitmap = gylph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_pairs,
    .kern_scale = 16,
    .cmap_num = 1,
    .bpp = 3,
    .kern_classes = 0,
    .bitmap_format = 1
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
lv_font_t robot_ightItalic_16 = {
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 18,          /*The maximum line height required by the font*/
    .base_line = 4,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};

#endif /*#if ROBOT_IGHTITALIC_16*/
