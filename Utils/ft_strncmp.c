/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <clecat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 15:41:39 by clecat            #+#    #+#             */
/*   Updated: 2022/06/02 14:45:47 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../SRC/pipex.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int				i;
	size_t			j;
	unsigned char	*s3;
	unsigned char	*s4;

	s3 = (unsigned char *)s1;
	s4 = (unsigned char *)s2;
	i = 0;
	j = 1;
	if (n == 0)
		return (-1);
	while (s3[i] && s4[i] && s3[i] == s4[i] && j < n)
	{	
		i++;
		j++;
	}
	return (s3[i] - s4[i]);
}
