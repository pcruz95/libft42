#include "libft.h"

#define UTF8_CP1 0x80
#define UTF8_BX 0x80
#define UTF8_B2 0xC0

void	ft_putchar_fd(char c, int fd)
{
	unsigned char	unicode;

	if ((unsigned char)c >= UTF8_CP1)
	{
		unicode = (unsigned char)c / 0x40 + UTF8_B2;
		write(fd, &unicode, 1);
		unicode = (unsigned char)c % 0x40 + UTF8_BX;
		write(fd, &unicode, 1);
	}
	else
		write(fd, &c, sizeof(char));
}
