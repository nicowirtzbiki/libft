#include <fcntl.h>   // para open()
#include <unistd.h>  // para write(), close()
#include <stdio.h>   // para printf()

// declaração da função (se estiver em outro arquivo .c/.h)
void	ft_putstr_fd(char *s, int fd);

int	main(void)
{
	int	fd;

	//Teste no terminal (stdout = 1)
	ft_putstr_fd("Hello terminal!\n", 1);

	//Teste no arquivo
	fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
	{
		perror("Erro ao abrir/criar arquivo");
		return (1);
	}
	ft_putstr_fd("Hello arquivo!\n", fd);
	close(fd);
	printf("Mensagem escrita em 'output.txt' também!\n");
	return (0);
}