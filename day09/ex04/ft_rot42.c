/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 15:56:11 by ydang             #+#    #+#             */
/*   Updated: 2016/07/22 16:07:38 by ydang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i] >= 'k')
				str[i] -= 10;
			else
				str[i] += 16;
		}
		i++;
	}
	return (str);
}

char	*ft_uppercase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (str[i] >= 'K')
				str[i] -= 10;
			else
				str[i] += 16;
		}
		i++;
	}
	return (str);
}

char	*ft_rot42(char *str)
{
	ft_lowercase(str);
	ft_uppercase(str);
	return (str);
}
