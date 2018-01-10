/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubedat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 14:03:28 by adubedat          #+#    #+#             */
/*   Updated: 2018/01/10 14:21:54 by adubedat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string color) : _color(color) {

	std::cout << "A " << this->_color << " pony is born." << std::endl;
	return;
}

Pony::~Pony(void) {

	std::cout << "A " << this->_color << " pony died." << std::endl;
	return;
}

void	Pony::talk(void) const{

	std::cout << "Hey ! I'm a " << this->_color << " pony !" << std::endl;
}
