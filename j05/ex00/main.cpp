/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubedat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 16:29:49 by adubedat          #+#    #+#             */
/*   Updated: 2018/01/16 16:52:41 by adubedat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{

	Bureaucrat	a("Jean", 149);
	Bureaucrat	b("Bob", 1);
	Bureaucrat	c("Herve", 180);

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	
	a.decrementGrade();
	std::cout << a << std::endl;
	a.decrementGrade();
	b.incrementGrade();
	std::cout << b << std::endl;
	return 0;
}
