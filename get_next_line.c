/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: net-touz <net-touz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:57:37 by net-touz          #+#    #+#             */
/*   Updated: 2021/11/29 21:28:46 by net-touz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdlib.h> 
#include <unistd.h> 

char	*get_next_line(int fd)
{
	char		*buf;
	static char	c;
	int			total;
	int			status;
	int			twatel;

	buf = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!ft_allocat(buf) || BUFFER_SIZE <= 0)
		return (NULL);
	status = ((twatel = 0), 1);
	while ("allah")
	{
		total = 0;
		while (status == 1 && c != '\n' && total < BUFFER_SIZE)
		{
			status = read(fd, buf + total + twatel, 1);
			if (status == -1)
				return (free(buf), NULL);
			if (status == 0)
			{
				if (!twatel && !total)
					return (free(buf), NULL);
				return ((buf[total + twatel] = '\0'), ft_strdup(buf));
			}
			c = buf[total + twatel];
			total++;
		}
		if (c == '\n')
			return ((buf[total + twatel] = '\0'), c = 0, buf);
		buf = ((twatel += total), ft_join(buf, twatel));
		if (!buf)
			return (NULL);
	}
}
