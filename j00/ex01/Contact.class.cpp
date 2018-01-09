/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubedat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 14:53:04 by adubedat          #+#    #+#             */
/*   Updated: 2018/01/09 19:07:20 by adubedat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void	Contact::newContact(void)
{
	Contact::_NbInst += 1;
}

void	Contact::setFirstName(std::string str) {
	this->_firstName.assign(str);
}

void	Contact::setLastName(std::string str) {
	this->_lastName.assign(str);
}

void	Contact::setNickName(std::string str) {
	this->_nickName.assign(str);
}

void	Contact::setLogin(std::string str) {
	this->_login.assign(str);
}

void	Contact::setAddress(std::string str) {
	this->_address.assign(str);
}

void	Contact::setEmail(std::string str) {
	this->_email.assign(str);
}

void	Contact::setPhoneNumber(std::string str) {
	this->_phoneNumber.assign(str);
}

void	Contact::setBirthday(std::string str) {
	this->_birthday.assign(str);
}

void	Contact::setFavoriteMeal(std::string str) {
	this->_favoriteMeal.assign(str);
}

void	Contact::setUnderwearColor(std::string str) {
	this->_underwearColor.assign(str);
}

void	Contact::setDarkestSecret(std::string str) {
	this->_darkestSecret.assign(str);
}

std::string	Contact::getFirstName(void) const {
	return (this->_firstName);
}

std::string	Contact::getLastName(void) const {
	return (this->_lastName);
}

std::string	Contact::getNickName(void) const {
	return (this->_nickName);
}

std::string	Contact::getLogin(void) const {
	return (this->_login);
}

std::string	Contact::getAddress(void) const {
	return (this->_address);
}

std::string	Contact::getEmail(void) const {
	return (this->_email);
}

std::string	Contact::getPhoneNumber(void) const {
	return (this->_phoneNumber);
}

std::string	Contact::getBirthday(void) const {
	return (this->_birthday);
}

std::string	Contact::getFavoriteMeal(void) const {
	return (this->_favoriteMeal);
}

std::string	Contact::getUnderwearColor(void) const {
	return (this->_underwearColor);
}

std::string	Contact::getDarkestSecret(void) const {
	return (this->_darkestSecret);
}
int		Contact::getNbInst(void)
{
	return (Contact::_NbInst);
}

int Contact::_NbInst = 0;
