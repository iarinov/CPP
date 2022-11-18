/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiarinov <aiarinov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:49:01 by aiarinov          #+#    #+#             */
/*   Updated: 2022/10/30 16:42:23 by aiarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include "ContactInfo.hpp"

int main (void) {
	std::string input;
	PhoneBook	phonebook;

	while(1) {
		std::getline(std::cin, input);
		if (input == "ADD") {
			struct contactInfo info;

			std::cout << "Firstname: ";
			std::getline(std::cin, info.firstname);
			std::cout << "Last name: ";
			std::getline(std::cin, info.lastname);
			std::cout << "Nickname: ";
			std::getline(std::cin, info.nickname);
			std::cout << "Phone number: ";
			std::getline(std::cin, info.phonenumber);
			std::cout << "Darkest secret: ";
			std::getline(std::cin, info.darkestSecret);

			phonebook.addContact(info);
		} else if (input == "SEARCH") {
			std::cout << phonebook << std::endl;

			std::string index;
			std::cout << "index: ";
			std::getline(std::cin, index);
			phonebook.printContact(atoi(index.c_str()));
		} else if (input == "EXIT") {
			break ;
		}
	}
	return(0);
}

