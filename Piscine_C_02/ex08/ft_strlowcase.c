/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juasanto <juasanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 09:48:59 by juasanto          #+#    #+#             */
/*   Updated: 2020/02/20 14:52:55 by juasanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int unsigned cont;

	cont = -1;
	while (str[++cont] != 0)
	{
		if (str[cont] >= 65 && str[cont] <= 90)
			str[cont] = (str[cont] + 32);
	}
	return (str);
}
