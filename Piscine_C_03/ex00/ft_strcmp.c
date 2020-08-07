/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juasanto <juasanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 17:07:12 by juasanto          #+#    #+#             */
/*   Updated: 2020/02/26 13:30:42 by juasanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int cont;
	int strcmp;

	cont = 0;
	strcmp = 0;
	while (s1[cont] == s2[cont] && s1[cont] != 0)
		cont++;
	strcmp = s1[cont] - s2[cont];
	return (strcmp);
}
