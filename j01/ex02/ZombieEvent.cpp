/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubedat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 14:54:05 by adubedat          #+#    #+#             */
/*   Updated: 2018/01/10 15:23:24 by adubedat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void) {

	std::cout << "ZombieEvent created." << std::endl;
	return;
}

ZombieEvent::~ZombieEvent(void) {

	std::cout << "ZombieEvent destroyed." << std::endl;
	return;
}

void		ZombieEvent::setZombieType(std::string type) {

	this->_zombieType = type;
}

Zombie*		ZombieEvent::newZombie(std::string name) {

	Zombie*	newZombie = new Zombie(name, this->_zombieType);
	return (newZombie);
}
