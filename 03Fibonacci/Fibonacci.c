/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fibonacci.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgarc4 <alexgarc4@student.42barcelon    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 12:57:16 by alexgarc4         #+#    #+#             */
/*   Updated: 2025/01/10 01:38:00 by alexgarc4        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	fibibacci(int n, int memo[])
{
	if (memo[n] == 0)
	{
		if (n == 0)
		{
			return 0;
		}
		else if (n == 1)
		{
			return (1);
		}
		else
		{
			memo[n] = fibibacci(n - 1, memo) + fibibacci(n - 2, memo);
			return (memo[n]);
		}
	}
	else
	{
		return (memo[n]);
	}
}

int	main(int argc, char *argv[])
{
	int	size;
	int	*memo;
	int	i;
	int	*ptrI;
	
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
	*memo = (int *)malloc(sizeof(int) * (size + 1));
	if (memo == NULL)
	{
		printf("Memory allocation failed\n");
		return (1);
	}
	i;
	*ptrI = &i;
	ptrI = (int *)malloc(sizeof(int) * (size + 1));
	if (ptrI == NULL)
	{
		printf("Memory allocation failed\n");
		return 1;
	}
	*ptrI = 0;
	while ( *ptrI < size)
	{
		printf("%d \n", fibibacci(*ptrI, memo));
		(*ptrI)++;
	}
	free(memo);
	free(ptrI);
	xreturn (0);        
}

