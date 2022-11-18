/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiarinov <aiarinov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:33:53 by aiarinov          #+#    #+#             */
/*   Updated: 2022/10/30 16:36:50 by aiarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : size(0) {
	std::cout<<"Enter one of this three commands" << std::endl;
	std::cout<<"Available commands: ADD, SEARCH, EXIT" << std::endl;
}

PhoneBook::~PhoneBook() {

}

void	PhoneBook::addContact(struct contactInfo info) {
	if (size == 7) {
		size = 0;
	}
	contacts[size].set_firstname(info.firstname);
	contacts[size].set_lastname(info.lastname);
	contacts[size].set_nickname(info.nickname);
	contacts[size].set_phonenumber(info.phonenumber);
	contacts[size].set_darkestSecret(info.darkestSecret);
	size++;
}

void	PhoneBook::printContact(int index) {
	if (index > size) {
		std::cout << "Wrong index" << std::endl;
	} else {
		std::cout << contacts[index] << std::endl;
	}
}

int PhoneBook::getSize() const {
	return size;
}

const Contact *PhoneBook::getContacts() const {
	return contacts;
}

std::ostream	&operator<<(std::ostream &os, const PhoneBook &phonebook) {
	os << "-------------------------------------------" << std::endl;
	os << std::right << std::setw(10) << "index"
		<< "|" << std::setw(10) << "firstname"
		<< "|" << std::setw(10) << "lastname"
		<< "|" << std::setw(10) << "nickname"
		<< std::endl;
	os << "-------------------------------------------" << std::endl;

	const Contact *contacts = phonebook.getContacts();
	for (int i = 0; i < phonebook.getSize(); i++) {
		os << std::setw(10) << i << "|";
		(contacts[i].get_firstname().length() > 10) ? os << std::setw(10) << contacts[i].get_firstname().substr(0, 9) + "." << "|" : os << std::setw(10) << contacts[i].get_firstname() << "|";
		(contacts[i].get_lastname().length() > 10) ? os << std::setw(10) << contacts[i].get_lastname().substr(0, 9) + "." << "|" : os << std::setw(10) << contacts[i].get_lastname() << "|";
		(contacts[i].get_nickname().length() > 10) ? os << std::setw(10) << contacts[i].get_nickname().substr(0, 9) + "." << std::endl : os << std::setw(10) << contacts[i].get_nickname() << std::endl;
	}

	return os;
}
