/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokrabem <tokrabem@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 09:33:20 by tokrabem          #+#    #+#             */
/*   Updated: 2026/02/18 21:06:50 by tokrabem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "stdio.h"

static size_t	count_digit(int nbr)
{
	int	counter;

	counter = 0;
	if (nbr <= 0)
		counter++;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		counter++;
	}
	return (counter);
}

static size_t	count_unsigned(unsigned int nbr)
{
	int	counter;

	counter = 0;
	if (nbr == 0)
		counter++;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		counter++;
	}
	return (counter);
}

int	ft_printf(const char *format, ...)
{
	va_list p_arg;
	int		count;
	int 	i;
	char	*str;
	
	i = 0;
	count = 0;
	va_start(p_arg, format);
	while (format[i])
	{
		if(format[i] == '%')
		{
			i++;
			if (format[i] == 'd' || format[i] == 'i')
			{
				int nb = va_arg(p_arg, int);
				ft_putnbr_base(nb, "0123456789");
				count = count + count_digit(nb);
			}
			else if (format[i] == 'c')
			{
				count ++;
				ft_putchar_fd(va_arg(p_arg, int), 1);
			}	
			else if (format[i] == 's')
			{
				
				str = va_arg(p_arg, char *);
				ft_putstr_fd(str, 1);
				count = count + ft_strlen(str);
			}
			else if (format[i] == 'p')
				ft_print_add(va_arg(p_arg, unsigned long));
			else if (format[i] == 'x')
				ft_putnbr_base(va_arg(p_arg, unsigned int), "0123456789abcdef");
			else if (format[i] == 'X')
				ft_putnbr_base(va_arg(p_arg, unsigned int), "0123456789ABCDEF");
			else if (format[i] == 'u')
			{
				unsigned int uni = va_arg(p_arg, unsigned int);
				ft_un_int(uni, 1);
				count = count + count_unsigned(uni);
			}
			else if (format[i] == '%')
				ft_putchar_fd('%', 1);
		}
		else
		{
			ft_putchar_fd(format[i], 1);
			count++;	
		}
		i++;
	}
	va_end(p_arg);
	return(count);
}
