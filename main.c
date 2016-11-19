/*-------------------------------------------------------------------
// Код примитивного ядра
//-----------------------------------------------------------------*/
#include "include/main.h"

int main(void)
{
	init_tty();
	clear_screen();

	int i = 0;

	/* Тестируем вывод текста */
	printf("Hello from myOSkernel!!!\n\n");

	for (i = 0; i < 16; i++)
	{
		set_text_attr(i*16);
		printf("  ");
	}

	return 0;
}