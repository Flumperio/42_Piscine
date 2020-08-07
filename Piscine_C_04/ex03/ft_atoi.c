/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juasanto <juasanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 19:15:59 by juasanto          #+#    #+#             */
/*   Updated: 2020/02/26 19:18:52 by juasanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

void	ft_putchar(char n)
{
	write(1, &n, 1);
}

void	ft_cal_print(int n_print)
{
	int		cont;
	char	arr[11];

	cont = 0;
	while (n_print != 0)
	{
		arr[cont] = ((n_print % 10) + 48);
		n_print = n_print / 10;
		cont++;
	}
	cont--;
	while (cont >= 0)
	{
		ft_putchar(arr[cont]);
		cont--;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	else if (nb == 0)
		ft_putchar('0');
	else if (nb < 0)
	{
		nb = nb * -1;
		ft_putchar('-');
		ft_cal_print(nb);
	}
	else
		ft_cal_print(nb);
}
