/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 23:07:14 by ydang             #+#    #+#             */
/*   Updated: 2016/07/19 23:29:44 by ydang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int z;
	int find_size;

	i = 0;
	z = 0;
	find_size = 0;
	while (to_find[find_size] != '\0')
	{
		find_size++;
	}
	if (find_size == 0)
		return (str);
	while (str[i] != '\0')
	{
		while (to_find[z] == str[i + z])
		{
			if (z == find_size - 1)
				return (str + i);
			z++;
		}
		z = 0;
		i++;
	}
	return (0);
}
