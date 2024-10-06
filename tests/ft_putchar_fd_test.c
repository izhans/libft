#include <fcntl.h>
#include <unistd.h>
#include "../libft.h"

// https://www.thinkage.ca/gcos/expl/c/lib/open.html
int main()
{
	int fd = open("README.md", O_WRONLY | O_APPEND);

	ft_putchar_fd('l', fd);
	ft_putchar_fd('o', fd);
	close(fd);
}
