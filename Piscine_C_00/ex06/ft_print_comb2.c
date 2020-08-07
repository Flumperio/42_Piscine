/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juasanto <juasanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 20:28:49 by juasanto          #+#    #+#             */
/*   Updated: 2020/02/12 13:05:11 by juasanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	imprimir(int imp_a, int imp_b)
{
	char c;
	char d;

	c = (imp_a / 10) + 48;
	d = (imp_a % 10) + 48;
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, " ", 1);
	c = (imp_b / 10) + 48;
	d = (imp_b % 10) + 48;
	write(1, &c, 1);
	write(1, &d, 1);
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 00;
	b = 00;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			imprimir(a, b);
			if (a != 98 || b != 99)
			{
				write(1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}
