//don't forget school header

int		ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	//hope you understand this logic
	while (s1[i] != '\0' && (s1[i] == s2[j]))
	{
		i++;
		j++;
	}
	return (s1[i] - s2[j]);
}

//DELETE THe code below before submitting

#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_strcmp("zanele", "Zanele"));
	printf("%d\n", ft_strcmp("zanele", "zanele"));
	printf("%d\n", ft_strcmp("Zanele", "zanele"));
	return (0);
}
