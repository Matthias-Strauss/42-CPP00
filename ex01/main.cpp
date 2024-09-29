/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 17:33:24 by mstrauss          #+#    #+#             */
/*   Updated: 2024/09/29 17:54:14 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main(void)
{
	PhoneBook phonebook;
	std::string command;

	while (true)
	{
		std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
		if (!(std::cin >> command))
		{
			std::cout << "Exiting phonebook due to input error or EOF" << std::endl;
			break;
		}
		if (command == "ADD")
			phonebook.addContact();
		else if (command == "SEARCH")
			phonebook.searchContact();
		else if (command == "EXIT")
		{
			std::cout << "Exiting phonebook" << std::endl;
			break;
		}
		else
			std::cout << "Invalid command" << std::endl;
	}
	return (0);
}