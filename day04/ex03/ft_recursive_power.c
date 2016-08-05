/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 08:38:16 by ydang             #+#    #+#             */
/*   Updated: 2016/07/16 08:53:23 by ydang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (power == 0)
	{
		return (1);
	}
	else if (power < 0)
	{
		return (0);
	}
	else
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
}
