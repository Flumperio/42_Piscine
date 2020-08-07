/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juasanto <juasanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 16:57:37 by juasanto          #+#    #+#             */
/*   Updated: 2020/02/25 18:52:58 by juasanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	cont;
	int				strcat;

	cont = 0;
	strcat = 0;
	while (dest[cont] != 0)
		cont++;
	while (src[strcat] != 0)
	{
		dest[cont] = src[strcat];
		cont++;
		strcat++;
	}
	dest[cont] = 0;
	return (dest);
}
