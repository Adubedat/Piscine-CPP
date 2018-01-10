/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubedat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 14:35:04 by adubedat          #+#    #+#             */
/*   Updated: 2018/01/10 15:54:28 by adubedat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type) {

}

Zombie::~Zombie(void) {

}

void	Zombie::setName(std::string name) {

	this->_name = name;
}

void	Zombie::announce(void) const{

	std::cout << "<" << this->_name << " " << this->_type
	<< "> In your head, in your head ! Zombie, zombie, zombie-ie-ie" << std::endl;
}
