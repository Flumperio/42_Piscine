/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juasanto <juasanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 09:48:59 by juasanto          #+#    #+#             */
/*   Updated: 2020/02/20 19:49:38 by juasanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int unsigned cont;

	cont = -1;
	while (str[++cont] != 0)
	{
		if (str[cont] >= 65 && str[cont] <= 90)
			str[cont] = (str[cont] + 32);
	}
	cont = 0;
	if (str[cont] >= 97 && str[cont] <= 122)
		str[cont] = str[cont] - 32;
	cont = 0;
	while (str[++cont] != 0)
	{
		if (str[cont] >= 97 && str[cont] <= 122)
			if (!(str[cont - 1] >= 48 && str[cont - 1] <= 57))
				if (!(str[cont - 1] >= 97 && str[cont - 1] <= 122) && \
				!(str[cont - 1] >= 65 && str[cont - 1] <= 90))
					str[cont] = str[cont] - 32;
	}
	return (str);
}
