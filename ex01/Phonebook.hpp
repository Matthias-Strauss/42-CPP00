/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 19:23:16 by mstrauss          #+#    #+#             */
/*   Updated: 2024/09/29 17:43:31 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <string>
#include <iomanip>

class PhoneBook
{
public:
	PhoneBook();
	~PhoneBook();

	void addContact();
	void searchContact();
	void displayContact();

private:
	std::string _truncateString(std::string str);

	Contact _contacts[8];

	int _nbContacts;
	int _usersAdded;
};

#endif
