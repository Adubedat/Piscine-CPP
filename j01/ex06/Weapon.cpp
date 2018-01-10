/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubedat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 19:20:03 by adubedat          #+#    #+#             */
/*   Updated: 2018/01/10 19:39:06 by adubedat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {
	
}

Weapon::~Weapon(void) {

}

std::string const	&Weapon::getType(void) const {
	return (this->_type);
}

void				Weapon::setType(std::string type) {
	this->_type = type;
}
