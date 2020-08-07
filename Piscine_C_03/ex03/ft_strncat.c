/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juasanto <juasanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 16:57:37 by juasanto          #+#    #+#             */
/*   Updated: 2020/02/26 17:39:57 by juasanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	cont;
	unsigned int	strncat;

	cont = 0;
	strncat = 0;
	while (dest[cont] != 0)
	{
		cont++;
	}
	while ((src[strncat] != 0) && (strncat < nb))
	{
		dest[cont] = src[strncat];
		cont++;
		strncat++;
	}
	dest[cont] = 0;
	return (dest);
}
