/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juasanto <juasanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 13:03:43 by juasanto          #+#    #+#             */
/*   Updated: 2020/02/17 18:58:35 by juasanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int max;
	int min;
	int traspaso;

	max = size;
	min = 0;
	traspaso = 0;
	while (min < max)
	{
		if (tab[min] > tab[min + 1])
		{
			traspaso = tab[min];
			tab[min] = tab[min + 1];
			tab[min + 1] = traspaso;
			min = -1;
		}
		min++;
	}
}
