/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegarc4 <alegarc4@student.42barcelona>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 20:57:37 by alegarc4          #+#    #+#             */
/*   Updated: 2025/01/04 21:03:32 by alegarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*fizzbuzz(int *n)
{
	if (*n % 3 == 0 && *n % 5 == 0)
	{
		printf("fizzbuzz");
	}
	else if (*n % 3 == 0)
	{
		printf("fizz\n");
	}
	else if (*n % 5 == 0)
	{
		printf("buzz\n");
	}
	else
	{
		printf("%d\n", *n);
	}
	return (0);
}

int	main(void)
{
	int	n;
	int	*ptr;

	ptr = &n;
	ptr = malloc(sizeof(int));
	if (ptr == NULL)
	{
		fprintf(stderr, "Memory allocation failed\n");
		return (1);
	}
	*ptr = 1;
	while (*ptr <= 100)
	{
		fizzbuzz(ptr);
		*ptr += 1;
	}
	free(ptr);
	return (0);
}
