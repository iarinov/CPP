/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiarinov <aiarinov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:32:29 by aiarinov          #+#    #+#             */
/*   Updated: 2022/10/30 15:08:54 by aiarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string	Contact::get_firstname() const
{
	return firstname;
}
std::string	Contact::get_lastname() const
{
	return lastname;
}
std::string	Contact::get_nickname() const
{
	return nickname;
}
std::string	Contact::get_phonenumber() const
{
	return phonenumber;
}
std::string	Contact::get_darkestSecret() const
{
	return darkestSecret;
}

void	Contact::set_firstname(std::string firstname)
{
	this->firstname = firstname;
}

void	Contact::set_lastname(std::string lastname) {
	this->lastname = lastname;
}

void	Contact::set_nickname(std::string nickname) {
	this->nickname = nickname;
}

void	Contact::set_phonenumber(std::string number) {
	this->phonenumber = number;

}

void	Contact::set_darkestSecret(std::string secret) {
	this->darkestSecret = secret;
}

std::ostream	&operator<<(std::ostream &os, const Contact &contact) {
	os << "First name : " << contact.get_firstname() << std::endl;
	os << "Last name: " << contact.get_lastname() << std::endl;
	os << "Nickname: " << contact.get_nickname() << std::endl;
	os << "Phone number: " << contact.get_phonenumber() << std::endl;
	os << "Darkest secret: " << contact.get_darkestSecret() << std::endl;

	return os;
}

