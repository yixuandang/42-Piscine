/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_take_place.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 18:47:16 by ydang             #+#    #+#             */
/*   Updated: 2016/07/22 10:28:56 by ydang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	int h;

	h = hour;
	if (hour >= 12)
		h = hour % 12;
	if (h == 0 && hour == 12)
		h = 12;
	if (hour >= 0 && hour <= 24)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
		if (hour == 0)
			printf("12.00 A.M. AND 1.00 A.M.\n");
		else if (hour < 11)
			printf("%d.00 A.M. AND %d.00 A.M.\n", h, h + 1);
		else if (hour == 11)
			printf("11.00 A.M. AND 12.00 P.M.\n");
		else if (hour == 23)
			printf("11.00 P.M. AND 12.00 A.M.\n");
		else if (hour == 24)
			printf("12.00 A.M. AND 1.00 A.M.\n");
		else if (hour < 23)
			printf("%d.00 P.M. AND %d.00 P.M.\n", h, (h + 1) % 12);
	}
}
