/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 17:28:26 by ydang             #+#    #+#             */
/*   Updated: 2016/07/21 21:37:17 by ydang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		size;
	char	*n_str;

	i = 0;
	size = 0;
	while (src[size] != '\0')
	{
		size++;
	}
	n_str = (char*)malloc(sizeof(*n_str) * (size));
	if (n_str == NULL)
	{
 		return (NULL);
	}
	while (i < size)
	{
		n_str[i] = src[i];
		i++;
	}
	n_str[size] = '\0';
	return (n_str);
}