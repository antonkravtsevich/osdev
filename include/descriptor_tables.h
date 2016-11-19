#ifndef        DESCRIPTOR_TABLES_H
#define        DESCRIPTOR_TABLES_H

#include    "include/stdlib.h"

/*---------------------------------------------------
//    Запись глобальной таблицы дескрипторов (GDT)
//-------------------------------------------------*/
struct gdt_entry_struct
{
  uint16    limit_low;   /* Младшее слово лимита */
  uint16    base_low;    /* Младшее слово базы */
  uint8     base_middle; /* Средняя часть базы */
  uint8     access;      /* Байт доступа */
  uint8     granularity; /* Байт гранулярности */
  uint8     base_high;   /* Старшая часть базы */
  
}__attribute__((packed));

typedef    struct    gdt_entry_struct    gdt_entry_t;

/*---------------------------------------------------
//  Структура с указателями на GDT
//-------------------------------------------------*/
struct gdt_ptr_struct
{
  uint16    limit;
  uint16    base;
  
}__attribute__((packed));

typedef    struct    gdt_ptr_struct    gdt_ptr_t;

/* Инициализация таблиц дескрипторов */
void init_descriptor_tables(void);

#endif