/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juasanto <juasanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 16:57:37 by juasanto          #+#    #+#             */
/*   Updated: 2020/02/25 20:08:56 by juasanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int cont1;
	int cont2;

	cont1 = 0;
	if (to_find[0] == 0)
		return (str);
	else
		while (str[cont1] != 0)
		{
			cont2 = 0;
			while (str[cont1 + cont2] == to_find[cont2])
			{
				if (to_find[cont2 + 1] == 0)
					return (str + cont1);
				cont2++;
			}
			cont1++;
		}
	return (0);
}
