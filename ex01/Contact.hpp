/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 13:15:37 by mstrauss          #+#    #+#             */
/*   Updated: 2024/09/29 18:08:22 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
public:
	/* ------------------------------- Constructor ------------------------------ */
	Contact();
	Contact(std::string firstName, std::string lastName, std::string nickname,
			std::string phoneNumber, std::string darkestSecret);
	Contact(const Contact &other);
	
	/* ------------------------------- Destructor ------------------------------- */
	~Contact();

	/* ------------------------ Copy assignment operator ------------------------ */
	Contact &operator=(const Contact &other);

	/* -------------------------------- Setters -------------------------------- */
	void setFirstName(std::string str);
	void setLastName(std::string str);
	void setNickname(std::string str);
	void setPhoneNumber(std::string str);
	void setDarkestSecret(std::string str);

	/* -------------------------------- Getters -------------------------------- */
	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getNickname() const;
	std::string getPhoneNumber() const;
	std::string getDarkestSecret() const;

private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickname;
	std::string _phoneNumber;
	std::string _darkestSecret;
};

#endif