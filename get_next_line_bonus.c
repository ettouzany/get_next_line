/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: net-touz <net-touz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:57:37 by net-touz          #+#    #+#             */
/*   Updated: 2021/11/29 20:31:15 by net-touz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h> 
#include <stdio.h> 
#include <fcntl.h> 
// typedef struct fds
// {
// 	int fd_id;
// 	size_t rest;
// 	fds *next;
// } fds;

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 5
#endif
char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*output;

	i = 0;
	while (s1[i])
		i++;
	output = (char *)malloc(i + 1);
	if (!output)
		return (NULL);
	i = 0;
	while (*s1)
		output[i++] = *s1++;
	output[i] = '\0';
	return (output);
}

char	*ft_join(char *s1, int lenght)
{
	char	*output;
	int		i;

	i = 0;
	s1[lenght] = '\0';
	output = (char *)malloc((lenght + 1 + BUFFER_SIZE) * sizeof(char));
	if (!output)
		return (free(s1), NULL);
	while (s1[i])
	{
		output[i] = s1[i];
		i++;
	}
	output[i]='\0';
	return (free(s1), output);
}

// char	*get_next_line(int fd)
// {
// 	//static int	read_from_buffer_dyal_zap;
// 	char		*c_dyal_zap;
// 	//static fds *f;
// 	//char		*temp_dyal_zapi;
// 	//long		zap;
// 	int			status = 1;
// 	size_t i = 0;
// 	c_dyal_zap = (char *) malloc(BUFFER_SIZE* sizeof(char));
// 	status = read(fd, c_dyal_zap, 1);
// 	if(status==1)
// 	i++;
// 	while (	
// 				status == 1 && 
// 				*c_dyal_zap != '\n' && 
// 				*c_dyal_zap
// 				)
// 	{
// 		if(i > BUFFER_SIZE)
// 		{
			
// 			c_dyal_zap = ft_strjoin(c_dyal_zap-i+1,i);
// 			//printf("+++%s\n",c_dyal_zap);
// 			c_dyal_zap = c_dyal_zap+i-1;
// 			//printf("+++++%s\n",c_dyal_zap);
// 		}
// 		status = read(fd, ++c_dyal_zap, 1);
// 		i++;
// 		//printf("%s--\n",c_dyal_zap-i+1);
// 	}
// 	//c_dyal_zap = ft_strjoin(c_dyal_zap-i+1,i);
// 	*++c_dyal_zap = '\0';
// 	if(!i) return NULL;
// 	return (c_dyal_zap-i);
// }


#ifndef BUFFER_SIZE
#define BUFFER_SIZE 5
#endif

char	*get_next_line(int fd)
{
	char		*buf;
	char		*str;
	static char	c;
	int			total;
	int			status;
	int			twatel;

	if (BUFFER_SIZE <= 0)
		return (NULL);
	buf = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buf)
		return (NULL);
	twatel = 0;
	status = 1;
	while ("allah")
	{
		total = 0;
		while (c != '\n' && total < BUFFER_SIZE)
		{
			status = read(fd, buf + total + twatel, 1);
			if (status == -1)
				return (free(buf), NULL);
			if (status == 0)
				break ;
			c = buf[total + twatel];
			total++;
		}
		if (c == '\n')
		{
			buf[total + twatel] = '\0';
			c = 0;
			return (buf);
		}
		if (status == 0)
		{
			if (!twatel && !total)
				return (free(buf), NULL);
			buf[total + twatel] = '\0';
			str = ft_strdup(buf);
			return (free(buf), str);
		}
		twatel += total;
		buf = ft_join(buf, twatel);
		if (!buf)
			return (NULL);
	}
	
}


// int	main()
// {
// 	int	fd;
// 	//int	sz;
// 	char* c;
// 	//int i=-1;
// 	fd = open("foo.txt", O_RDONLY); 
// 	c = get_next_line(fd);
// 	//printf("%s",c);
// 	while (c != NULL)
// 	{
// 		printf("%s",c);
// 		c = get_next_line(fd);
// 	}
// }
