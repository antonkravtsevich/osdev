/* ОСТАВЛЕН ДЛЯ СОВМЕСТИМОСТИ, НЕ ИСПОЛЬЗУЕТСЯ*/

#ifndef        COMMON_H
#define        COMMON_H

  /* 32-битные типы данных */
  typedef    unsigned int      u32int;
  typedef    int               s32int;
  /* 16-битные типы данных */
  typedef    unsigned short    u16int;
  typedef    short             s16int;
  /* 8-битные типы данных */
  typedef    unsigned char     u8int;
  typedef    char              s8int;
  
  /* Send byte in port */
  void outb(u16int port, u8int value);
/* Get byte from port */
  u8int inb(u16int port);
  /* Get word from port */
  u16int inw(u16int port);
  
  
#endif