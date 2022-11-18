/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiarinov <aiarinov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 13:35:57 by aiarinov          #+#    #+#             */
/*   Updated: 2022/10/18 14:02:32 by aiarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "Error" <<std::endl;
	else
	{
		for (int i = 1; i < argc; i++)
			for (int j = 0; argv[i][j] != '\0'; j++)
				std::cout << (unsigned char)std::toupper(argv[i][j]);
		std::cout << std::endl;
	}
	return (0);
}
