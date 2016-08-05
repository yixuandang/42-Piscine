/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 06:47:36 by ydang             #+#    #+#             */
/*   Updated: 2016/07/16 08:01:38 by ydang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int c;
	int result;

	c = 1;
	result = 1;
	if (nb == 0)
	{
		return (1);
	}
	else if (nb < 0)
	{
		return (0);
	}
	else
	{
		while (c <= nb)
		{
			result = result * c;
			c++;
		}
	}
}
