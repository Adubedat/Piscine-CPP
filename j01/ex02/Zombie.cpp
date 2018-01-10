/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubedat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 14:35:04 by adubedat          #+#    #+#             */
/*   Updated: 2018/01/10 14:49:26 by adubedat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type) {

	std::cout << "<" << this->_name << " " << this->_type
	<< "> zombie created." << std::endl;
}

Zombie::~Zombie(void) {

	std::cout << "<" << this->_name << " " << this->_type
	<< "> zombie destroyed." << std::endl;
}

void	Zombie::announce(void) const{

	std::cout << "<" << this->_name << " " << this->_type
	<< "> In your head, in your head ! Zombie, zombie, zombie-ie-ie" << std::endl;
}
