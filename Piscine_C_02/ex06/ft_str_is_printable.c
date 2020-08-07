/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juasanto <juasanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 09:48:59 by juasanto          #+#    #+#             */
/*   Updated: 2020/02/20 12:55:02 by juasanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int unsigned cont;

	cont = 0;
	while (str[cont] != 0)
	{
		if (str[cont] >= 32 && str[cont] <= 126)
		{
			cont++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
