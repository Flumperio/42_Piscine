/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juasanto <juasanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 13:03:43 by juasanto          #+#    #+#             */
/*   Updated: 2020/02/17 18:56:38 by juasanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int max;
	int min;
	int traspaso;

	max = size;
	min = 0;
	traspaso = 0;
	while (min < max)
	{
		traspaso = tab[min];
		tab[min] = tab[max];
		tab[max] = traspaso;
		min++;
		max--;
	}
}
