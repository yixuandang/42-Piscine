/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 06:01:59 by ydang             #+#    #+#             */
/*   Updated: 2016/07/19 20:00:18 by ydang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int num;
	int index;
	int neg;

	num = 0;
	index = 0;
	neg = 1;
	while (str[index] <= ' ' || str[index] == '+' || str[index] == '0')
	{
		index++;
	}
	if (str[index] == '-')
	{
		neg = -1;
		index++;
	}
	while (str[index] != '\0')
	{
		if (!(((str[index] - '0') >= 0) && ((str[index] - '0') <= 9)))
			return (0);
		num = num * 10 + (str[index] - '0');
		index++;
	}
	num = num * neg;
	return (num);
}
