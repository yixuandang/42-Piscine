/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 16:43:11 by ydang             #+#    #+#             */
/*   Updated: 2016/07/22 16:44:22 by ydang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_generic(void)
{
	char	*str;
	int		i;

	i = 0;
	str = "Tu tu tu tu ; Tu tu tu tu\n";
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
