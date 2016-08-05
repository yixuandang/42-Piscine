/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/27 15:42:46 by ydang             #+#    #+#             */
/*   Updated: 2016/07/27 15:42:49 by ydang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(void *data)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	while (new)
	{
		new->data = data;
		new->NEXT = NULL;
	}
	return (new);
}
