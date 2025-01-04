# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ex01.sh                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alegarc4 <alegarc4@student.42barcelona>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/04 21:25:38 by alegarc4          #+#    #+#              #
#    Updated: 2025/01/04 21:44:58 by alegarc4         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

fizzbuzz() 
{
        n=$1 
        if (( n % 3 == 0 && n % 5 == 0 )); 
        then
        {
                echo "fizzbuzz"
        }
        elif (( n % 3 == 0 ));
        then
        {
                echo "fizz"
        }
        elif (( n % 5 == 0 )); 
        then
        {
                echo "buzz"
        }
        else
        {
                echo "$n"
        }
        fi
        return 0
}

main() 
{
        i=1
        while (( i <= 100 )); 
        do 
        {
                fizzbuzz $i
                (( i++ ))       
        }
        done
        return 0
}
main