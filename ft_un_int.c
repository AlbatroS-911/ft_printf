/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_un_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokrabem <tokrabem@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 18:09:58 by tokrabem          #+#    #+#             */
/*   Updated: 2026/02/18 20:55:03 by tokrabem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_un_int(unsigned int num, int fd)
{	
	unsigned int	max;
	
	max = 4294967295;
	if (num < 0)
	{
		num *= -1;
		max = max - num + 1; 
		ft_putchar_fd(max + 48, fd);
	}
	else
	{
		if (num >= 0 && num <= 9)
			ft_putchar_fd(num + 48, fd);
		else
		{
			ft_un_int(num / 10, fd);
			ft_un_int(num % 10, fd);
		}
	}
}


