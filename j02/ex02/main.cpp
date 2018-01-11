/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubedat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 15:50:01 by adubedat          #+#    #+#             */
/*   Updated: 2018/01/11 22:10:17 by adubedat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	
	a = Fixed(2.5f);
	Fixed c(15);
	std::cout << "a < c ? : " << std::boolalpha << (a < c) << std::endl;
	std::cout << "a > c ? : " << std::boolalpha << (a > c) << std::endl;
	std::cout << "a <= c ? : " << std::boolalpha << (a <= c) << std::endl;
	std::cout << "a >= c ? : " << std::boolalpha << (a >= c) << std::endl;
	std::cout << "a == c ? : " << std::boolalpha << (a == c) << std::endl;
	std::cout << "a != c ? : " << std::boolalpha << (a != c) << std::endl;
	std::cout << "a + c ? : " << (a + c) << std::endl;
	std::cout << "a - c ? : " << (a - c) << std::endl;
	std::cout << "a * c ? : " << (a * c) << std::endl;
	std::cout << "c / a ? : " << (c / a) << std::endl;

	return 0;
}
