#ifndef        TEXT_FRAMEBUFFER_H
#define        TEXT_FRAMEBUFFER_H
/* Адрес начала видеопамяти */
#define        VIDEO_MEMORY    0xB8000

/*    Цвета текстового режима        */
#define        BLACK        0x0
#define        BLUE         0x1
#define        GREEN        0x2
#define        CIAN         0x3
#define        RED          0x4
#define        MAGENA       0x5
#define        BROWN        0x6

#define        LIGHT_GRAY   0x7
#define        DARK_GRAY    0x8
#define        LIGHT_BLUE   0x9
#define        LIGHT_GREEN  0xA
#define        LIGHT_CIAN   0xB
#define        LIGHT_RED    0xC
#define        LIGHT_MAGENA 0xD
#define        LIGHT_BROWN  0xE
#define        WHITE        0xF

#define        SCREEN_WIDTH  80
#define        SCREEN_HEIGHT 25

#include    "common.h"

  void init_tty();
  void out_char(char chr);
  void out_string(char *str);
  void clear_screen();
  void set_text_attr(char attr);
  void move_cursor(unsigned int pos);
  void printf(char *fmt, ...);

#endif
