/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: net-touz <net-touz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:57:37 by net-touz          #+#    #+#             */
/*   Updated: 2021/11/23 01:22:46 by net-touz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h> 
#include <stdio.h> 
#include <fcntl.h> 

char	*get_next_line(int fd)
{
	//static int	read_from_buffer_dyal_zap;
	char		*c_dyal_zap;
	//long		zap;
	int			status = 1;
	size_t i = 0;
	c_dyal_zap = (char *) malloc(BUFFER_SIZE* sizeof(char));
	status = read(fd, c_dyal_zap, 1);
	if(status==1)
			i++;

	while (status == 1 && *c_dyal_zap != '\n' && *c_dyal_zap && i < BUFFER_SIZE)
	{
		status = read(fd, ++c_dyal_zap, 1);
		//printf("%s",c_dyal_zap);
		i++;
	}
	*++c_dyal_zap = '\0';
	if(!i) return NULL;
	return (c_dyal_zap-i);
}

// int	main()
// {
// 	int	fd;
// 	//int	sz;
// 	char* c;
// 	//int i=-1;
// 	fd = open("foo.txt", O_RDONLY); 
// 	c = get_next_line(fd);
// 	while (c != NULL)
// 	{
// 		//printf("%s",c);
// 		c = get_next_line(fd);
// 	}
// }
