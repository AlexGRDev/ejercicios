/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Anagrama.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgarc4 <alexgarc4@student.42barcelon    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 10:00:44 by alexgarc4         #+#    #+#             */
/*   Updated: 2025/01/10 11:11:39 by alexgarc4        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool	anagrama(char *str1, char *str2)
{
	int	i;
	int	j;

	if (strlen(str1) != strlen(str2))
	{
		return (false);
	}
	i = 0;
	while (str1[i] != '\0')
	{
		j = 0;
		while (str2[j] != '\0')
		{
			if (str1[i] == str2[j])
			{
				return (true);
			}
			j++;
		}
		i++;
	}
	return (false);
}

int	main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Usage: %s <string1> <string2>\n", argv[0]);
		return (1);
	}
	if (anagrama(argv[1], argv[2]))
	{
		printf("%s y %s son anagramas\n", argv[1], argv[2]);
	}
	else
	{
		printf("%s y %s no son anagramas\n", argv[1], argv[2]);
	}
	return (0);
}
