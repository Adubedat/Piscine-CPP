/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubedat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 19:45:53 by adubedat          #+#    #+#             */
/*   Updated: 2018/01/18 22:04:44 by adubedat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
	Array<int>	a(5);
	Array<int>	b(10);
	Array<int>  d;

	std::cout << "Test parameter constructor and size() :" << std::endl;
	std::cout << a.size() << std::endl;
	std::cout << b.size() << std::endl;
	Array<int>	c(a);
	a[0] = 42;
	c[0] = 84;
	std::cout << "Test [] operator :" << std::endl;
	std::cout << a[0] << std::endl;
	std::cout << c[0] << std::endl;
	a = c;
	std::cout << "Test copy :" << std::endl;
	std::cout << a[0] << std::endl;
	std::cout << c[0] << std::endl;
	a[0] = 21;
	c[0] = 128;
	std::cout << "Test value assignation after copy :" << std::endl;
	std::cout << a[0] << std::endl;
	std::cout << c[0] << std::endl;
	std::cout << "Test index out of bounds :" << std::endl;
	std::cout << c[5] << std::endl;
	return 0;
}
