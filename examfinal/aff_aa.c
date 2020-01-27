/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_aa.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmanyath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 12:39:02 by zmanyath          #+#    #+#             */
/*   Updated: 2020/01/27 13:35:55 by zmanyath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			if (argv[1][i] == 'a')
			{
				write(1, "a\n", 2);
				return (0);
			}
			i++;
		}
		write(1, "\n", 1);
	}
	else
		write(1, "a\n", 2);
}