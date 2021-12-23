/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <mortega-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 16:44:52 by mortega-          #+#    #+#             */
/*   Updated: 2021/10/21 13:42:49 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int	main(void)
{
	int			fd;
	char		*str;
	int			r;
	int			i;

	r = ft_count_lines("ft_count_lines.c");
	printf("\n|%d|\n", r);
	i = 0;
	fd = open("lotr.txt", O_RDONLY);
	r = get_next_line(fd, &str);
	while (r > 0)
	{
		printf("line %i=>%s\n", i + 1, str);
		free(str);
		r = get_next_line(fd, &str);
		i++;
	}
	free(str);
	printf("%s\n", str);
	system("leaks a.out");
	return (0);
}
