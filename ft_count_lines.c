/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_lines.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 11:42:54 by mortega-          #+#    #+#             */
/*   Updated: 2021/10/21 13:42:40 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_count_lines(char *file)
{
	int		fd;
	int		lines;
	char	*l;

	lines = 0;
	fd = open(file, O_RDONLY);
	while (get_next_line(fd, &l) > 0)
	{
		free(l);
		lines++;
	}
	free(l);
	close(fd);
	return (lines);
}
