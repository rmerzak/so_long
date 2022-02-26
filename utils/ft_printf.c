/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 22:18:31 by rmerzak           #+#    #+#             */
/*   Updated: 2022/02/26 22:19:33 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static int ft_exist(char c)
{
	int i;

	i = 0;
	if (c == 's')
		i = 1;
	if (c == 'd')
		i = 1;
	if (c == 'x')
		i = 1;
	return (i);
}

static void	ft_putchar(char c,int *len)
{
	write(1, &c, 1);
	(*len)++;
}

static void	ft_putstr(char *str,int *len)
{
	int	i;

	i = 0;
	if (!str)
		ft_putstr("(null)",len);
	else
		while(str[i])
		{
			ft_putchar(str[i],len);
			i++;
		}

}
static void	ft_putnbr(long n,int *len)
{
	if (n < 0)
	{
		ft_putchar('-',len);
		n = n * -1;
	}
	if (n < 10)
		ft_putchar(n + 48,len);
	else if (n >= 10)
	{
		ft_putnbr(n/10,len);
		ft_putnbr(n%10,len);
	}
}
static void ft_puthex(unsigned int i,int *len)
{
	char *str;

	str = "0123456789abcdef";
	if (i < 16)
	{
		write(1,&str[i],1);
		(*len)++;
	}
	else if (i >= 16)
	{
		ft_puthex(i/16,len);
		ft_puthex(i%16,len);
	}
}

static void	ft_conversion(char c, va_list args, int *len)
{
	if (c == 's')
		ft_putstr(va_arg(args,char *),len);
	if (c == 'd')
		ft_putnbr(va_arg(args,int),len);
	if (c == 'x')
		ft_puthex(va_arg(args,int),len);
}

int ft_printf(const char *str, ...)
{
	int	len;
	int	i;
	va_list	args;

	len = 0;
	i = 0;
	va_start(args,	str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (ft_exist(str[i]))
					ft_conversion(str[i],args,&len);
		}
		else
			ft_putchar(str[i],&len);
		i++;
	}
	va_end(args);
	return (len);
}