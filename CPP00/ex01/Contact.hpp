/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiarinov <aiarinov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:32:32 by aiarinov          #+#    #+#             */
/*   Updated: 2022/11/05 11:11:35 by aiarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact
{
	private:
		std::string	firstname;
		std::string	lastname;
		std::string	nickname;
		std::string	phonenumber;
		std::string	darkestSecret;

	public:
		Contact();//constructor
		~Contact();//destructor(delete everything)

		//getters(to access private members, return smth)
		std::string	get_firstname() const;
		std::string	get_lastname() const;
		std::string	get_nickname() const;
		std::string	get_phonenumber() const;
		std::string	get_darkestSecret() const;

		//setters(set smth)
		void	set_firstname(std::string firstname);
		void	set_lastname(std::string lastname);
		void	set_nickname(std::string nickname);
		void	set_phonenumber(std::string number);
		void	set_darkestSecret(std::string secret);
};

std::ostream	&operator<<(std::ostream &os, const Contact &contact);

#endif
