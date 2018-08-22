#include <stdio.h>
#include "ft_printf.h"
#include <unistd.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_CTYPE, "");
	ft_printf("%S\n", L"ДОБРО ПОЖАЛОВАТЬ В КИНО");
	return (0);
}
