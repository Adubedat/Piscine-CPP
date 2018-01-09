/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubedat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 15:00:46 by adubedat          #+#    #+#             */
/*   Updated: 2018/01/09 19:16:07 by adubedat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include <stdlib.h>
#include <sstream>
#include <iomanip>

void	add_contact(Contact *newContact)
{
	std::string input;

	Contact::newContact();
	std::cout << "Enter new contact first name :" << std::endl;
	std::getline(std::cin, input);
	newContact->setFirstName(input);
	std::cout << "Enter new contact last name :" << std::endl;
	std::getline(std::cin, input);
	newContact->setLastName(input);
	std::cout << "Enter new contact nickname :" << std::endl;
	std::getline(std::cin, input);
	newContact->setNickName(input);
	std::cout << "Enter new contact login :" << std::endl;
	std::getline(std::cin, input);
	newContact->setLogin(input);
	std::cout << "Enter new contact address :" << std::endl;
	std::getline(std::cin, input);
	newContact->setAddress(input);
	std::cout << "Enter new contact email :" << std::endl;
	std::getline(std::cin, input);
	newContact->setEmail(input);
	std::cout << "Enter new contact phone number :" << std::endl;
	std::getline(std::cin, input);
	newContact->setPhoneNumber(input);
	std::cout << "Enter new contact birthday :" << std::endl;
	std::getline(std::cin, input);
	newContact->setBirthday(input);
	std::cout << "Enter new contact favorite meal :" << std::endl;
	std::getline(std::cin, input);
	newContact->setFavoriteMeal(input);
	std::cout << "Enter new contact underwear color :" << std::endl;
	std::getline(std::cin, input);
	newContact->setUnderwearColor(input);
	std::cout << "Enter new contact darkest secret :" << std::endl;
	std::getline(std::cin, input);
	newContact->setDarkestSecret(input);
}

void	print_contact(Contact contact)
{
	std::cout << "first name : " << contact.getFirstName() << std::endl;
	std::cout << "last name : " << contact.getLastName() << std::endl;
	std::cout << "nickname : " << contact.getNickName() << std::endl;
	std::cout << "login : " << contact.getLogin() << std::endl;
	std::cout << "address : " << contact.getAddress() << std::endl;
	std::cout << "email : " << contact.getEmail() << std::endl;
	std::cout << "phone number : " << contact.getPhoneNumber() << std::endl;
	std::cout << "birthday : " << contact.getBirthday() << std::endl;
	std::cout << "favorite meal : " << contact.getFavoriteMeal() << std::endl;
	std::cout << "underwear color : " << contact.getUnderwearColor() << std::endl;
	std::cout << "darkest secret : " << contact.getDarkestSecret() << std::endl;
}

void	print_raw(int i, std::string first, std::string last, std::string nick)
{
	if (first.size() > 10) {
		first.resize(10);
		first.replace(9, 1, ".");
	}
	if (last.size() > 10) {
		last.resize(10);
		last.replace(9, 1, ".");
	}
	if (nick.size() > 10) {
		nick.resize(10);
		nick.replace(9, 1, ".");
	}
	std::cout << std::setw(10) << std::right << i + 1 << "|";
	std::cout << std::setw(10) << std::right << first << "|";
	std::cout << std::setw(10) << std::right << last << "|";
	std::cout << std::setw(10) << std::right << nick << "|";
	std::cout << std::endl;
}

void	search_contact(Contact *contacts, int nbContact)
{
	int 				i;
	std::string			input;
	std::stringstream	ss;
	int					index;
	
	for (i = 0; i < nbContact; i++)
	{
		print_raw(i, contacts[i].getFirstName(), contacts[i].getLastName(),
			contacts[i].getNickName());
	}
	while (true)
	{
		std::cout << "Choose an index" << std::endl;
		std::getline(std::cin, input);
		ss.str(input);
		if (ss >> index && index > 0 && index <= nbContact)
		{
			print_contact(contacts[index - 1]);
			return;
		}
		else
		{
			input.clear();
			ss.clear();
			ss.str("");
			std::cout << "Wrong index" << std::endl;
		}
	}
}

void	get_input(void)
{
	std::string input;
	Contact		contacts[8];
	int			nbContact;

	while (true) {
		std::cout << "Please enter a command (ADD, SEARCH or EXIT)" << std::endl;
		std::getline(std::cin, input);
		nbContact = Contact::getNbInst();
		if (input.compare("ADD") == 0)
		{
			if (nbContact >= 8) {
				std::cout << "Can not add more than 8 contacts" << std::endl;
			}
			else
				add_contact(&contacts[nbContact]);
		}
		else if (input.compare("SEARCH") == 0)
			search_contact(contacts, nbContact);
		else if (input.compare("EXIT") == 0)
			return ;
		else
			std::cout << "Wrong input" << std::endl;
	}
}

int 	main(void)
{
	get_input();
	return 0;
}
