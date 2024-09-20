/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 12:01:28 by mstrauss          #+#    #+#             */
/*   Updated: 2024/09/20 14:48:25 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.class.hpp"

/* -------------------------------------------------------------------------- */
/*                         Constructor and Destructor                         */
/* -------------------------------------------------------------------------- */
Contact::Contact()
{
	std::cout << "Contact created" << std::endl;
}

Contact::~Contact()
{
	std::cout << "Contact destroyed" << std::endl;
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

std::string Contact::getFirstName()
{
	return (_firstName);
}

std::string Contact::getLastName()
{
	return (_lastName);
}

std::string Contact::getNickname()
{
	return (_nickname);
}

std::string Contact::getPhoneNumber()
{
	return (_phoneNumber);
}

std::string Contact::getDarkestSecret()
{
	return (_darkestSecret);
}
