# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    count_of_2.py                                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: 42robotics <marvin@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/31 10:10:13 by 42robotic         #+#    #+#              #
#    Updated: 2018/05/31 10:54:17 by 42robotic        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#pseudeocode
'''
	declare variable i
	declare variable place
	declare variable total
	use i to iterate up to n
	for each iteration set place = i
	create a while loop that will wait until place == 0
	then I will do (place % 10) and compare that output with 2
	if (place % 10 = 2) then I am going to add 1 to my total
	once place == 0 it will check every digit of that number
	then i will iterate, hence counting all the digits up to n. 
'''

def count_of_2(num):

	totalcount = 0;
	i = 2;
	while i <= n:
		place = i
		while place != 0:
			if place % 10 == 2
				totalcount += 1
			place /= 10
		i = i + 1
	return (totalcount)

def main():
	print(count_of_2(25))	
	print(count_of_2(2))	
	print(count_of_2(4))	
	print(count_of_2(13))	

if __name__ == "__main__":
	main()
