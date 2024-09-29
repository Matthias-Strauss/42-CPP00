/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 12:01:28 by mstrauss          #+#    #+#             */
/*   Updated: 2024/09/29 18:00:28 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

/* -------------------------------------------------------------------------- */
/*                         Constructor and Destructor                         */
/* -------------------------------------------------------------------------- */
Contact::Contact()
{
	// std::cout << "Contact created using default constructor" << std::endl;
}

Contact::Contact(std::string firstName, std::string lastName, std::string nickname,
				 std::string phoneNumber, std::string darkestSecret) : _firstName(firstName),
																	   _lastName(lastName),
																	   _nickname(nickname),
																	   _phoneNumber(phoneNumber),
																	   _darkestSecret(darkestSecret)
{
	std::cout << "Contact created using parameterized constructor" << std::endl;
}

Contact::Contact(const Contact &other)
{
	*this = other;
	std::cout << "Contact created using copy constructor" << std::endl;
}

Contact::~Contact()
{
	// std::cout << "Contact destroyed" << std::endl;
}

/* ------------------------ Copy assignment operator ------------------------ */

Contact &Contact::operator=(const Contact &other)
{
	setFirstName(other.getFirstName());
	setLastName(other.getLastName());
	setNickname(other.getNickname());
	setPhoneNumber(other.getPhoneNumber());
	setDarkestSecret(other.getDarkestSecret());
	return (*this);
}

/* -------------------------------------------------------------------------- */
/*                                   Setters                                  */
/* -------------------------------------------------------------------------- */

void Contact::setFirstName(std::string str)
{
	_firstName = str;
}

void Contact::setLastName(std::string str)
{
	_lastName = str;
}

void Contact::setNickname(std::string str)
{
	_nickname = str;
}

void Contact::setPhoneNumber(std::string str)
{
	_phoneNumber = str;
}

void Contact::setDarkestSecret(std::string str)
{
	_darkestSecret = str;
}

/* -------------------------------------------------------------------------- */
/*                                   Getters                                  */
/* -------------------------------------------------------------------------- */

std::string Contact::getFirstName() const
{
	return (_firstName);
}

std::string Contact::getLastName() const
{
	return (_lastName);
}

std::string Contact::getNickname() const
{
	return (_nickname);
}

std::string Contact::getPhoneNumber() const
{
	return (_phoneNumber);
}

std::string Contact::getDarkestSecret() const
{
	return (_darkestSecret);
}
