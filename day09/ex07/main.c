/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 17:13:55 by ydang             #+#    #+#             */
/*   Updated: 2016/07/22 17:14:16 by ydang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int ft_collatz_conjecture(unsigned int base);

int main(void)
{
		printf("%d\n", ft_collatz_conjecture(1));
			printf("%d\n", ft_collatz_conjecture(2));
				printf("%d\n", ft_collatz_conjecture(3));
					printf("%d\n", ft_collatz_conjecture(4));
						printf("%d\n", ft_collatz_conjecture(5));
							printf("%d\n", ft_collatz_conjecture(6));
								return (0);
}
