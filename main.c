#include <stdio.h>
#include "ft_printf.h"
#include <unistd.h>

int main(void)
{
	ft_printf("This is my printf \n %c\n%X\n%s\n",'c',90,"This is a huge test for my printf yeeeeeeeey!!!!!!!!!!!!!!!!!",100);
	printf("%O",100);
	return (0);
}
