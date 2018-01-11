/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubedat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 15:27:49 by adubedat          #+#    #+#             */
/*   Updated: 2018/01/11 18:42:33 by adubedat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <cmath>

Fixed::Fixed(void) {

	this->_value = 0;
}

Fixed::Fixed(Fixed const &	src) {

	*this = src;
}

Fixed::Fixed(int const val) {

	this->_value = val * (1 << this->_bits);
}

Fixed::Fixed(float const val) {

	this->_value = roundf((val * (float)(1 << this->_bits)) + 0.5f);
}

Fixed::~Fixed(void) {

}

Fixed &		Fixed::operator=(Fixed const & src) {

	this->_value = src.getRawBits();
	return (*this);
}

bool		Fixed::operator<(Fixed const & src) const{

	return (this->_value < src.getRawBits());
}

bool		Fixed::operator>(Fixed const & src) const{

	return (this->_value > src.getRawBits());
}

bool		Fixed::operator<=(Fixed const & src) const{

	return (this->_value <= src.getRawBits());
}

bool		Fixed::operator>=(Fixed const & src) const{

	return (this->_value >= src.getRawBits());
}

bool		Fixed::operator==(Fixed const & src) const{

	return (this->_value == src.getRawBits());
}

bool		Fixed::operator!=(Fixed const & src) const{

	return (this->_value != src.getRawBits());
}

Fixed &		Fixed::operator+(Fixed const & src) {

	this->_value += src.getRawBits();
	return (*this);
}

Fixed &		Fixed::operator-(Fixed const & src) {

	this->_value -= src.getRawBits();
	return (*this);
}

Fixed &		Fixed::operator*(Fixed const & src) {

	this->_value = roundf((float)this->_value * (float)src.getRawBits()
			/ (float)(1 << this->_bits) + 0.5f);
	return (*this);
}

Fixed &		Fixed::operator/(Fixed const & src) {

	this->_value = roundf((float)this->_value / (float)src.getRawBits()
		* (float)(1 << this->_bits) + 0.5f);
	return (*this);
}

Fixed &		Fixed::operator++() {

	this->_value += 1;
	return (*this);
}

Fixed		Fixed::operator++(int) {

	Fixed tmp(*this);
	this->_value += 1;
	return (tmp);
}

Fixed &		Fixed::operator--() {

	this->_value -= 1;
	return (*this);
}

Fixed		Fixed::operator--(int) {

	Fixed tmp(*this);
	this->_value -= 1;
	return (tmp);
}

int			Fixed::getRawBits(void) const {

	return (this->_value);
}

void		Fixed::setRawBits(int const raw) {

	this->_value = raw;
}

float		Fixed::toFloat(void) const {

	return ((float)this->_value / (float)(1 << this->_bits));
}

int			Fixed::toInt(void) const {

	return (this->_value / (1 << this->_bits));
}

Fixed &			Fixed::max(Fixed & a, Fixed & b) {

	return ((a < b) ? b : a);
}

Fixed &			Fixed::min(Fixed & a, Fixed & b) {

	return ((a > b) ? b : a);
}

Fixed const &	Fixed::max(Fixed const & a, Fixed const & b){

	return ((a < b) ? b : a);
}

Fixed const &	Fixed::min(Fixed const & a, Fixed const & b){

	return ((a > b) ? b : a);
}

std::ostream &	operator<<(std::ostream & o, Fixed const & src) {

	o << src.toFloat();
	return (o);
}

const int	Fixed::_bits = 8;
