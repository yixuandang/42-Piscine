/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 23:07:57 by ydang             #+#    #+#             */
/*   Updated: 2016/07/26 23:17:59 by ydang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *new_array;

	i = 0;
	new_array = (int*)malloc(sizeof(int) * (length));
	while (i < length)
	{
		new_array[i] = f(tab[i]);
		i++;
	}
	return (new_array);
}
