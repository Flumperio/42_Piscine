/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juasanto <juasanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 09:48:59 by juasanto          #+#    #+#             */
/*   Updated: 2020/02/20 12:44:28 by juasanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int unsigned cont;

	cont = 0;
	while (str[cont] != 0)
	{
		if (str[cont] >= 48 && str[cont] <= 57)
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
