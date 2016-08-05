/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 07:42:34 by ydang             #+#    #+#             */
/*   Updated: 2016/07/16 07:44:06 by ydang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
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
		return (nb * ft_recursive_factorial(nb - 1));
	}
}
