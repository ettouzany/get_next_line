/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: net-touz <net-touz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:57:37 by net-touz          #+#    #+#             */
/*   Updated: 2021/11/22 11:07:40 by net-touz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h> 
#include <stdio.h> 
#include <fcntl.h> 

char	*get_next_line(int fd)
{
	static int	line_dyal_zap;
	static int	read_from_buffer_dyal_zap;
	char		*c_dyal_zap;
	long		zap;

	line_dyal_zap++;
	c_dyal_zap = (char *) calloc(100, sizeof(char));
	while ()
	{
		read(fd, c_dyal_zap, 1);
	}
	zap = read(fd, c_dyal_zap, 100);
	c_dyal_zap[zap] = '\0';
	return (c_dyal_zap);
}

int	main(int ac, char **av)
{
	int	fd;
	//int	sz;
	char** c;
	size_t i=-1;
	//int buff =  
		c[i] = get_next_line(fd);
	
	fd = open("foo.txt", O_RDONLY); 
	//if (fd < 0) { perror("r1"); exit(1); } 
	printf("%s",c[0]);
}
