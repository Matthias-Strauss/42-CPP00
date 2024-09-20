/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 19:22:14 by mstrauss          #+#    #+#             */
/*   Updated: 2024/09/20 14:46:59 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"

/* -------------------------------------------------------------------------- */
/*                         Constructor and Destructor                         */
/* -------------------------------------------------------------------------- */

PhoneBook::PhoneBook()
{
	_nbContacts = 0;
	_usersAdded = 0;
	std::cout << "Phonebook created" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "Phonebook destroyed" << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                              Member Functions                              */
/* -------------------------------------------------------------------------- */

void PhoneBook::addContact()
{
	Contact newContact;
	std::string userInput;

	std::cout << "Enter first name: ";
	std::getline(std::cin, userInput);
	newContact.setFirstName(userInput);

	std::cout << "Enter last name: ";
	std::getline(std::cin, userInput);
	newContact.setLastName(userInput);

	std::cout << "Enter nickname: ";
	std::getline(std::cin, userInput);
	newContact.setNickname(userInput);

	std::cout << "Enter phone number: ";
	std::getline(std::cin, userInput);
	newContact.setPhoneNumber(userInput);

	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, userInput);
	newContact.setDarkestSecret(userInput);

	_contacts[_usersAdded % 7] = newContact; // CHECK THIS FOR MORE THAN 8 USERS!!!
	_usersAdded++;
	if (_nbContacts < 8)
		_nbContacts++;
}

void PhoneBook::searchContact()
{
	if (_nbContacts == 0)
	{
		std::cout << "No contacts saved. Please add contacts first." << std::endl;
		return;
	}

	std::cout << std::setw(10) << "Index" << "|"
			  << std::setw(10) << "First Name" << "|"
			  << std::setw(10) << "Last Name" << "|"
			  << std::setw(10) << "Nickname" << std::endl;
	for (int i = 0; i < _nbContacts; ++i)
	{
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << _truncateString(_contacts[i].getFirstName()) << "|";
		std::cout << std::setw(10) << _truncateString(_contacts[i].getLastName()) << "|";
		std::cout << std::setw(10) << _truncateString(_contacts[i].getNickname()) << std::endl;
	}
	int index;
	std::cout << "Enter the index of the contact you want to display: " << std::endl;
	std::cin >> index;
	if (index < 0 || index >= _nbContacts)
	{
		std::cout << "Invalid index, please provide an index between 0 and 7" << std::endl;
		return;
	}

	std::cout << "First Name: " << _contacts[index].getFirstName() << std::endl;
	std::cout << "Last Name: " << _contacts[index].getLastName() << std::endl;
	std::cout << "Nickname: " << _contacts[index].getNickname() << std::endl;
	std::cout << "Phone Number: " << _contacts[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << _contacts[index].getDarkestSecret() << std::endl;
}

std::string PhoneBook::_truncateString(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	else
		return (str);
}

int main(void)
{
	PhoneBook phonebook;
	std::string command;

	while (true)
	{
		std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
		std::cin >> command;
		if (command == "ADD")
			phonebook.addContact();
		else if (command == "SEARCH")
			phonebook.searchContact();
		else if (command == "EXIT")
			break;
		else
			std::cout << "Invalid command" << std::endl;
	}
	return (0);
}