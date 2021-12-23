/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: net-touz <net-touz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:45:27 by net-touz          #+#    #+#             */
/*   Updated: 2021/11/29 20:33:26 by net-touz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdlib.h> 

char	*ft_strdup(char *s1)
{
	size_t	i;
	char	*output;

	i = 0;
	while (s1[i])
		i++;
	output = (char *)malloc(i + 1);
	if (!output)
	{
		return (NULL);
	}
	i = 0;
	while (s1[i])
	{
		output[i] = s1[i];
		i++;
	}
	output[i] = '\0';
	return (free(s1), output);
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
	output[i] = '\0';
	return (free(s1), output);
}

int	ft_allocat(void *p)
{
	p = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!p)
		return (0);
	else
		return (1);
}
