/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juasanto <juasanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 11:03:59 by juasanto          #+#    #+#             */
/*   Updated: 2020/02/20 15:34:24 by juasanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int cont;

	cont = -1;
	while (src[++cont] != 0)
	{
		dest[cont] = src[cont];
	}
	dest[cont] = 0;
	return (dest);
}
