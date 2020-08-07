/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juasanto <juasanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 11:03:59 by juasanto          #+#    #+#             */
/*   Updated: 2020/02/20 16:20:45 by juasanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int unsigned cont;

	cont = 0;
	while (str[cont] != 0)
	{
		if (!(str[cont] >= 97 && str[cont] <= 122) &&
				!(str[cont] >= 65 && str[cont] <= 90))
			return (0);
		cont++;
	}
	return (1);
}
