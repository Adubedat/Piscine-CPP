/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubedat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 15:28:10 by adubedat          #+#    #+#             */
/*   Updated: 2018/01/11 20:03:27 by adubedat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_H
# define FIXED_CLASS_H

# include <iostream>

class Fixed
{
public:

	Fixed(void);
	Fixed(int const val);
	Fixed(float const val);
	Fixed(Fixed const & src);
	~Fixed (void);

	Fixed &					operator=(Fixed const & src);
	bool					operator<(Fixed const & src) const;
	bool					operator>(Fixed const & src) const;
	bool					operator<=(Fixed const & src) const;
	bool					operator>=(Fixed const & src) const;
	bool					operator==(Fixed const & src) const;
	bool					operator!=(Fixed const & src) const;
	Fixed					operator+(Fixed const & src);
	Fixed					operator-(Fixed const & src);
	Fixed					operator*(Fixed const & src);
	Fixed					operator/(Fixed const & src);
	Fixed &					operator++();
	Fixed					operator++(int);
	Fixed &					operator--();
	Fixed					operator--(int);
	int						getRawBits(void) const;
	void					setRawBits(int const raw);
	float					toFloat(void) const;
	int						toInt(void) const;
	static Fixed &			max(Fixed & a, Fixed & b);
	static Fixed &			min(Fixed & a, Fixed & b);
	static Fixed const &	max(Fixed const & a, Fixed const & b);
	static Fixed const &	min(Fixed const & a, Fixed const & b);

private:

	int					_value;
	static const int	_bits;

};

std::ostream &	operator<<(std::ostream & o, Fixed const & src);

#endif
