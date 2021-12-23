/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: net-touz <net-touz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:47:12 by net-touz          #+#    #+#             */
/*   Updated: 2021/11/29 20:29:37 by net-touz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

char	*ft_strdup(char *s1);

char	*ft_join(char *s1, int lenght);

char	*get_next_line(int fd);

int		ft_allocat(void *p);

#endif