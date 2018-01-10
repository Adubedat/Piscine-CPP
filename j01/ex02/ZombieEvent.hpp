/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubedat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 14:50:39 by adubedat          #+#    #+#             */
/*   Updated: 2018/01/10 15:19:20 by adubedat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_H
# define ZOMBIE_EVENT_H

#include "Zombie.hpp"

class ZombieEvent
{
public:

	ZombieEvent(void);
	~ZombieEvent(void);
	void	setZombieType(std::string type);
	Zombie*	newZombie(std::string name);

private:

	std::string _zombieType;

};

#endif
