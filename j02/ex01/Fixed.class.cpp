/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubedat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 15:27:49 by adubedat          #+#    #+#             */
/*   Updated: 2018/01/11 17:11:18 by adubedat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <cmath>

Fixed::Fixed(void) {

	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

Fixed::Fixed(Fixed const &	src) {

	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(int const val) {

	std::cout << "Int constructor called" << std::endl;
	this->_value = val * (1 << this->_bits);
}

Fixed::Fixed(float const val) {


	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf((val * (float)(1 << this->_bits)) + 0.5f);
}

Fixed::~Fixed(void) {

	std::cout << "Destructor called" << std::endl;
}

Fixed &		Fixed::operator=(Fixed const & src) {

	std::cout << "Assignation operator called" << std::endl;
	this->_value = src.getRawBits();
	return (*this);
}

int			Fixed::getRawBits(void) const {

	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void		Fixed::setRawBits(int const raw) {

	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

float		Fixed::toFloat(void) const {

	std::cout << "Int constructor called" << std::endl;
	return ((float)this->_value / (float)(1 << this->_bits));
}

int			Fixed::toInt(void) const {

	return (this->_value / (1 << this->_bits));
}

std::ostream &	operator<<(std::ostream & o, Fixed const & src) {

	o << src.toFloat();
	return (o);
}

const int	Fixed::_bits = 8;
