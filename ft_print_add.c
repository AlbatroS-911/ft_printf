/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_add.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokrabem <tokrabem@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 10:27:39 by tokrabem          #+#    #+#             */
/*   Updated: 2026/02/23 20:37:17 by tokrabem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_add(void *address)
{
	int	counter;

	counter = 0;
	ft_putstr_fd("0x", 1);
	counter = ft_putnbr_base((unsigned long)address, "0123456789abcdef");
	return (ft_strlen("0x") + counter);
}
