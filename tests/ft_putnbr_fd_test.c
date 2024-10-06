#include <fcntl.h>
#include <unistd.h>
#include "../libft.h"

// https://www.thinkage.ca/gcos/expl/c/lib/open.html
int main()
{
	int fd = open("README.md", O_WRONLY | O_APPEND);

	ft_putnbr_fd(0, fd);
	ft_putchar_fd('\n', fd);
	ft_putnbr_fd(10, fd);
	ft_putchar_fd('\n', fd);
	ft_putnbr_fd(15, fd);
	ft_putchar_fd('\n', fd);
	ft_putnbr_fd(-15, fd);
	ft_putchar_fd('\n', fd);
	ft_putnbr_fd(-8913563, fd);
	ft_putchar_fd('\n', fd);
	ft_putnbr_fd(2147483647, fd);
	ft_putchar_fd('\n', fd);
	ft_putnbr_fd(-2147483648, fd);
	close(fd);
}
