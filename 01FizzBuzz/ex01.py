# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ex01.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alegarc4 <alegarc4@student.42barcelona>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/04 21:46:18 by alegarc4          #+#    #+#              #
#    Updated: 2025/01/04 21:46:18 by alegarc4         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/usr/bin/python3

def fizzbuzz(n: int) -> str:
        if(n % 3 == 0 and n % 5 == 0):
            print("FizzBuzz")
        elif(n % 3 == 0):
            print("Fizz")
        elif(n % 5 == 0):
            print("Buzz")
        else:
            print(str(n))

def main() -> int:
     i: int
     
     i = 1
     while(i <= 100):
        fizzbuzz(i)
        i += 1

  
if __name__ == "__main__":
     main()