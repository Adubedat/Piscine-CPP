/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubedat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 14:45:48 by adubedat          #+#    #+#             */
/*   Updated: 2018/01/10 15:23:08 by adubedat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

std::string	generateRandomName(void) {

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

void	randomChump() {
	
	Zombie	zmb(generateRandomName(), "random");

	zmb.announce();
}

int main(void)
{
	ZombieEvent event1;
	ZombieEvent event2;
	Zombie*		zombie1;
	Zombie*		zombie2;
	Zombie*		zombie3;

	event1.setZombieType("warrior");
	event2.setZombieType("archer");
	zombie1 = event1.newZombie("Jacques");
	zombie2 = event1.newZombie("Barnabe");
	zombie3 = event2.newZombie("Robert");
	zombie1->announce();
	zombie2->announce();
	zombie3->announce();
	delete zombie1;
	delete zombie2;
	delete zombie3;
	randomChump();
	randomChump();
	return 0;
}
