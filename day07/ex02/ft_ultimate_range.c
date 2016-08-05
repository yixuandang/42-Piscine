/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 22:25:20 by ydang             #+#    #+#             */
/*   Updated: 2016/07/21 23:34:29 by ydang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*range_v;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	range_v = (int*)malloc(sizeof(int) * (max - min));
	if (range_v == NULL)
	{
		return (0);
	}
	while (min < max)
	{
		range_v[i] = min;
		min++;
		i++;
	}
	*range = range_v;
	return (i);
}
