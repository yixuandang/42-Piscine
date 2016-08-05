/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 09:59:01 by ydang             #+#    #+#             */
/*   Updated: 2016/07/16 16:22:16 by ydang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int counter;
	int b;

	counter = 0;
	b = counter * counter;
	while (nb > b)
	{
		counter++;
		if (nb == counter * counter)
		{
			return (counter);
		}
	}
	return (0);
}
