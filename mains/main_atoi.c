
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char *tests[] = {
		"42", 
		"	42",
		"	-42",
		"	+42",
		"\t\n\r\v\f  123",
		"4193 with words",
		"words and 987",
		"-91283472332",
		"91283472332",
		"0",
		"-0",
		"",
		"+",
		"-",
		NULL
		};

	int	i = 0;
	while (tests[i])
	{
		printf("Test \"%s\"\n", tests[i]);
		printf("atoi:    %d\n", atoi(tests[i]));
		printf("ft_atoi: %d\n", ft_atoi(tests[i]));
		printf("---------------------\n");
		i++;
	} 
	return (0);
}
