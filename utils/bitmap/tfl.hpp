#pragma once

#include "bitmap_fonts.hpp"

const bitmap::font_t tfl {
  .height = 8,
  .max_width = 5,
  .widths = {
    3, 1, 3, 5, 4, 4, 5, 2, 3, 3, 3, 3, 2, 3, 2, 4,
    4, 3, 4, 4, 4, 4, 4, 4, 4, 4, 1, 2, 3, 3, 3, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 4, 4, 4, 5, 4, 4,
    4, 4, 4, 4, 5, 4, 4, 5, 4, 4, 4, 2, 4, 2, 3, 3,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 1, 4, 4, 1, 5, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 5, 4, 4, 4, 3, 1, 3, 4, 1,
//  Extra
//  Æ  Þ  ß  æ  þ  £  ¥  ©  °
    5, 4, 4, 5, 4, 4, 4, 4, 3
  },
  .data = {
    0x00,0x00,0x00,0x00,0x00, //
    0x5f,0x00,0x00,0x00,0x00, // !
    0x03,0x00,0x03,0x00,0x00, // "
    0x28,0x7c,0x28,0x7c,0x28, // #
    0x24,0x7a,0x2f,0x12,0x00, // $
    0x66,0x10,0x08,0x66,0x00, // %
    0x3a,0x45,0x4d,0x32,0x48, // &
    0x0b,0x07,0x00,0x00,0x00, // '
    0x1c,0x22,0x41,0x00,0x00, // (
    0x41,0x22,0x1c,0x00,0x00, // )
    0x54,0x38,0x54,0x00,0x00, // *
    0x10,0x38,0x10,0x00,0x00, // +
    0x80,0x60,0x00,0x00,0x00, // ,
    0x10,0x10,0x10,0x00,0x00, // -
    0x60,0x60,0x00,0x00,0x00, // .
    0x60,0x18,0x06,0x01,0x00, // /
    0x3e,0x41,0x41,0x3e,0x00, // 0
    0x42,0x7f,0x40,0x00,0x00, // 1
    0x62,0x51,0x49,0x46,0x00, // 2
    0x22,0x41,0x49,0x36,0x00, // 3
    0x18,0x14,0x12,0x7f,0x00, // 4
    0x4f,0x49,0x49,0x31,0x00, // 5
    0x3e,0x45,0x45,0x39,0x00, // 6
    0x01,0x79,0x05,0x03,0x00, // 7
    0x36,0x49,0x49,0x36,0x00, // 8
    0x26,0x49,0x49,0x3e,0x00, // 9
    0x24,0x00,0x00,0x00,0x00, // :
    0x64,0x00,0x00,0x00,0x00, // ;
    0x10,0x28,0x44,0x00,0x00, // <
    0x28,0x28,0x28,0x00,0x00, // =
    0x44,0x28,0x10,0x00,0x00, // >
    0x02,0x51,0x09,0x06,0x00, // ?
    0x3e,0x49,0x55,0x5e,0x00, // @
    0x7e,0x09,0x09,0x7e,0x00, // A
    0x7f,0x49,0x49,0x36,0x00, // B
    0x3e,0x41,0x41,0x22,0x00, // C
    0x7f,0x41,0x41,0x3e,0x00, // D
    0x7f,0x49,0x49,0x41,0x00, // E
    0x7f,0x09,0x09,0x01,0x00, // F
    0x3e,0x41,0x49,0x3a,0x00, // G
    0x7f,0x08,0x08,0x7f,0x00, // H
    0x41,0x7f,0x41,0x00,0x00, // I
    0x30,0x40,0x40,0x3f,0x00, // J
    0x7f,0x08,0x14,0x63,0x00, // K
    0x7f,0x40,0x40,0x40,0x00, // L
    0x7f,0x02,0x04,0x02,0x7f, // M
    0x7f,0x02,0x04,0x7f,0x00, // N
    0x3e,0x41,0x41,0x3e,0x00, // O
    0x7f,0x09,0x09,0x06,0x00, // P
    0x3e,0x41,0x21,0x5e,0x00, // Q
    0x7f,0x09,0x19,0x66,0x00, // R
    0x46,0x49,0x49,0x31,0x00, // S
    0x01,0x01,0x7f,0x01,0x01, // T
    0x3f,0x40,0x40,0x3f,0x00, // U
    0x7f,0x40,0x20,0x1f,0x00, // V
    0x3f,0x40,0x20,0x40,0x3f, // W
    0x77,0x08,0x08,0x77,0x00, // X
    0x47,0x48,0x48,0x3f,0x00, // Y
    0x71,0x49,0x45,0x43,0x00, // Z
    0x7f,0x41,0x00,0x00,0x00, // [
    0x01,0x06,0x18,0x60,0x00, // "\"
    0x41,0x7f,0x00,0x00,0x00, // ]
    0x04,0x02,0x04,0x00,0x00, // ^
    0x40,0x40,0x40,0x00,0x00, // _
    0x01,0x01,0x00,0x00,0x00, // `
    0x20,0x54,0x54,0x78,0x00, // a
    0x7f,0x44,0x44,0x38,0x00, // b
    0x38,0x44,0x44,0x28,0x00, // c
    0x38,0x44,0x44,0x7f,0x00, // d
    0x38,0x54,0x54,0x58,0x00, // e
    0x7e,0x09,0x09,0x02,0x00, // f
    0x18,0xa4,0xa4,0x7c,0x00, // g
    0x7f,0x04,0x04,0x78,0x00, // h
    0x7d,0x00,0x00,0x00,0x00, // i
    0x60,0x80,0x80,0x7d,0x00, // j
    0x7f,0x10,0x28,0x44,0x00, // k
    0x7f,0x00,0x00,0x00,0x00, // l
    0x7c,0x04,0x78,0x04,0x78, // m
    0x7c,0x04,0x04,0x78,0x00, // n
    0x38,0x44,0x44,0x38,0x00, // o
    0xfc,0x24,0x24,0x18,0x00, // p
    0x18,0x24,0x24,0xfc,0x00, // q
    0x7c,0x08,0x04,0x04,0x00, // r
    0x48,0x54,0x54,0x24,0x00, // s
    0x04,0x3f,0x44,0x40,0x00, // t
    0x3c,0x40,0x40,0x7c,0x00, // u
    0x7c,0x40,0x20,0x1c,0x00, // v
    0x3c,0x40,0x20,0x40,0x3c, // w
    0x6c,0x10,0x10,0x6c,0x00, // x
    0x1c,0xa0,0xa0,0x7c,0x00, // y
    0x64,0x54,0x4c,0x00,0x00, // z
    0x08,0x3e,0x41,0x00,0x00, // {
    0x7f,0x00,0x00,0x00,0x00, // |
    0x41,0x3e,0x08,0x00,0x00, // }
    0x08,0x04,0x08,0x04,0x00, // ~
    0x00,0x00,0x00,0x00,0x00,
    // Extra
    0x7e,0x09,0x7f,0x49,0x49, // Æ
    0x7e,0x24,0x24,0x18,0x00, // Þ
    0x7e,0x09,0x49,0x36,0x00, // ß
    0x20,0x54,0x78,0x54,0x58, // æ
    0x7f,0x24,0x24,0x18,0x00, // þ
    0x08,0x7e,0x49,0x41,0x00, // £
    0x47,0x48,0x48,0x3f,0x00, // ¥
    0x38,0x44,0x44,0x28,0x00, // ©
    0x02,0x05,0x02,0x00,0x00, // °
    // Accents + Offsets
    // All chars are shifted 8px down into a 32 pixel canvas for combining with accents.
    // Accent shift values (the first two numbers in each line below) move the accent down to meet them.
    // These are the shift values for lower and UPPER case letters respectively.
    6,4, 0x00,0x00,0x01,0x02,0x00, // Grave
    6,4, 0x00,0x00,0x02,0x01,0x00, // Acute
    6,4, 0x00,0x02,0x01,0x02,0x00, // Circumflex
    6,4, 0x00,0x01,0x02,0x01,0x02, // Tilde
    6,4, 0x00,0x01,0x00,0x01,0x00, // Diaresis
    6,4, 0x00,0x02,0x05,0x02,0x00, // Ring Above
    6,4, 0x00,0x80,0x40,0x00,0x00, // Stroke
    9,9, 0x00,0x00,0xa0,0x40,0x00  // Cedilla
  }
};