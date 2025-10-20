#include <fcntl.h>
#include "libft.h"


int	main(void)
{
	ft_putendl_fd("Olá, 42!", 1);
	ft_putendl_fd("Essa string vai para o terminal.", 1);

	int fd = open("saida.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	ft_putendl_fd("Essa vai para o arquivo.", fd);
	ft_putendl_fd("E essa também!", fd);
	close(fd);
}

/*
O_WRONLY → abre o arquivo só para escrita

O_CREAT → cria o arquivo se ele não existir

O_TRUNC → apaga o conteúdo anterior, começando do zero

0644 → define permissões (dono pode escrever e ler; outros só ler)
*/