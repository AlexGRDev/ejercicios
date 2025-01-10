/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04Primo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgarc4 <alexgarc4@student.42barcelon    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 00:57:37 by alexgarc4         #+#    #+#             */
/*   Updated: 2025/01/10 02:10:04 by alexgarc4        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	primo(int n)
{
	int	i;

	if (n <= 1)
	{
		return (0);
	}
	i = 0;
	while (i <= n)
	{
		if (i % n == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(void)
{
	int	n;

	printf("Ingrese un numero: ");
	scanf("%d", &n);
	if (primo(n))
	{
		printf("El numero %d es primo\n", n);
	}
	else
	{
		printf("El numero %d no es primo\n", n);
	}
	return (0);
}
