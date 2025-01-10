/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fibonacci.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgarc4 <alexgarc4@student.42barcelon    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 12:57:16 by alexgarc4         #+#    #+#             */
/*   Updated: 2025/01/10 10:59:03 by alexgarc4        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	fibonacci(int n, int memo[])
{
	if (n == 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (1);
	}
	else
	{
		memo[n] = fibonacci(n - 1, memo) + fibonacci (n - 2, memo);
	}
	return (memo[n]);
}

int	*init_memo(int size)
{
	int	*memo;

	memo = (int *)malloc(sizeof(int) * (size + 1));
	if (!memo)
	{
		printf("Memory allocation failed\n");
		exit(1);
	}
	return (memo);
}

void	print_fibonacci(int size, int *memo)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%d\n", fibonacci(i, memo));
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	size;
	int	*memo;

	if (argc != 2)
	{
		printf("Usage: %s <size of the Fibonacci sequence>\n", argv[0]);
		return (1);
	}
	size = atoi(argv[1]);
	if (size < 0)
	{
		printf("Size must be a non-negative integer.\n");
		return (1);
	}
	memo = init_memo(size);
	print_fibonacci(size, memo);
	free(memo);
	return (0);
}
