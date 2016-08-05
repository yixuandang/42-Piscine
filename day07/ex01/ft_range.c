/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 21:44:41 by ydang             #+#    #+#             */
/*   Updated: 2016/07/21 22:17:07 by ydang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		i;
	int		*range_v;

	i = 0;
	if (min >= max)
	{
		return (0);
	}
	range_v = (int*)malloc(sizeof(*range) * (max - min));
	while (min < max)
	{
		range_v[i] = min;
		min++;
		i++;
	}
	return (range_v);
}
