/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubedat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 14:56:30 by adubedat          #+#    #+#             */
/*   Updated: 2018/01/09 19:07:59 by adubedat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include <iostream>

class Contact {

public:
	
	Contact(void);
	~Contact(void);

	static int		getNbInst(void);
	static void		newContact(void);
	void			setFirstName(std::string str);
	void			setLastName(std::string str);
	void			setNickName(std::string str);
	void			setLogin(std::string str);
	void			setAddress(std::string str);
	void			setEmail(std::string str);
	void			setPhoneNumber(std::string str);
	void			setBirthday(std::string str);
	void			setFavoriteMeal(std::string str);
	void			setUnderwearColor(std::string str);
	void			setDarkestSecret(std::string str);
	std::string		getFirstName(void) const;
	std::string		getLastName(void) const;
	std::string		getNickName(void) const;
	std::string		getLogin(void) const;
	std::string		getAddress(void) const;
	std::string		getEmail(void) const;
	std::string		getPhoneNumber(void) const;
	std::string		getBirthday(void) const;
	std::string		getFavoriteMeal(void) const;
	std::string		getUnderwearColor(void) const;
	std::string		getDarkestSecret(void) const;

private:
	
	static int	_NbInst;
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickName;
	std::string	_login;
	std::string	_address;
	std::string	_email;
	std::string	_phoneNumber;
	std::string	_birthday;
	std::string	_favoriteMeal;
	std::string _underwearColor;
	std::string	_darkestSecret;

};

void	get_input(void);
#endif
