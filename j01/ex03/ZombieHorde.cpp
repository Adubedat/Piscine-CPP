/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubedat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 15:37:18 by adubedat          #+#    #+#             */
/*   Updated: 2018/01/10 21:17:06 by adubedat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include <sys/time.h>

ZombieHorde::ZombieHorde(int nb) {

	int 	i;
	struct timeval  tv;

	gettimeofday(&tv, NULL);
	srand(tv.tv_sec * tv.tv_usec);

	this->_zombies = new Zombie[nb];
	ZombieHorde::_zombieNbr = nb;
	for (i = 0; i < nb; i++)
		this->_zombies[i].setName(this->generateRandomName());
	this->announce();
	delete [] this->_zombies;
}

ZombieHorde::~ZombieHorde(void) {
}

std::string	ZombieHorde::generateRandomName(void) const{

	char		name[7];
	std::string	str;
	int			i;
	for (i = 0; i < 6; i++) {
		name[i] = 97 + (rand() % 26);
	}
	name[6] = '\0';
	str = name;
	return (str);
}

void		ZombieHorde::announce(void) const{

	int i;

	for (i = 0; i < ZombieHorde::_zombieNbr; i++) {
		this->_zombies[i].announce();	
	}
}
