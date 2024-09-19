/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:06:25 by mstrauss          #+#    #+#             */
/*   Updated: 2024/09/19 19:54:44 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "megaphone.hpp"

//

int main(int ac, char **av)
{
	int i;
	unsigned long j;

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	else
	{
		i = 1;
		while (i < ac)
		{
			std::string str(av[i]);
			j = 0;
			while (j < str.length())
			{
				std::cout << static_cast<char>(std::toupper(str[j]));
				j++;
			}
			i++;
		}
	}
	std::cout << std::endl;
	return (0);
}
