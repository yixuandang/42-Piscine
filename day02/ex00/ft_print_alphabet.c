/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet1.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 07:01:32 by ydang             #+#    #+#             */
/*   Updated: 2016/07/14 15:29:34 by ydang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void ft_print_alphabet(void)
{
     char c;
     c = 'a';
     
     while ( c <= 'z' )
     {
          ft_putchar (c);
          c = c + 1;
     }
     ft_putchar('\n');
}
