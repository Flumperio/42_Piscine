/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juasanto <juasanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 16:57:37 by juasanto          #+#    #+#             */
/*   Updated: 2020/02/27 10:35:45 by juasanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	cont;
	int				strncmp;

	cont = 0;
	strncmp = 0;
	if (n == 0)
		return (0);
	while (s1[cont] == s2[cont] && (s1[cont] && (cont < n - 1)))
		cont++;
	strncmp = s1[cont] - s2[cont];
	return (strncmp);
}
