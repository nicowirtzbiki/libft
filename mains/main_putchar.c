#include <fcntl.h>   // para open()
#include <unistd.h>  // para close()
#include <stdio.h>   // para printf()

void	ft_putchar_fd(char c, int fd);

int	main(void)
{
	int	fd;

	// Escrever no terminal (stdout = 1)
	ft_putchar_fd('H', 1);
	ft_putchar_fd('i', 1);
	ft_putchar_fd('!', 1);
	ft_putchar_fd('\n', 1);

	// Escrever em arquivo
	fd = open("char_output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
	{
		perror("Erro ao abrir arquivo");
		return (1);
	}

	ft_putchar_fd('H', fd);
	ft_putchar_fd('i', fd);
	ft_putchar_fd('!', fd);
	ft_putchar_fd('\n', fd);

	close(fd);
	printf("Verifica o arquivo 'char_output.txt' ;)\n");

	return (0);
}