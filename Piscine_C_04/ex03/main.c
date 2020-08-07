/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juasanto <juasanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 17:07:10 by juasanto          #+#    #+#             */
/*   Updated: 2020/02/26 19:18:45 by juasanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int ft_atoi(char *a)
{
	int	cont;
	int	valor;

	valor = 0;
	cont = 0;
	while ((a[cont] >= 48) && (a[cont] <= 57))
	{
		printf("Value: %d --- A: %c --- cont%d\n", valor, a[cont], cont);
		valor = valor * 10 + (a[cont] - 48);
		cont++;
	}
	return(valor);
}


int main(int argc, char **argv)
{
	int		value;
	char	*str;
	int		cont;

	str = argv[1];
	cont = 0;
	while (str[cont] != 0)
	{
		if (!(str[cont] >= 48) && !(str[cont] <= 57))
			printf("Caracter: %c\n", str[cont]);
		cont++;
	}

}



// 	value = ft_atoi(str);
// 	printf("Valor: %d\n", value);


// }
