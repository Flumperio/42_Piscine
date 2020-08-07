/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juasanto <juasanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 09:48:59 by juasanto          #+#    #+#             */
/*   Updated: 2020/02/20 12:51:49 by juasanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int unsigned cont;

	cont = 0;
	while (str[cont] != 0)
	{
		if (str[cont] >= 97 && str[cont] <= 122)
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
