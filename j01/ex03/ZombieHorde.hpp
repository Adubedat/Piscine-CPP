/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubedat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 15:37:27 by adubedat          #+#    #+#             */
/*   Updated: 2018/01/10 16:07:58 by adubedat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_H
# define ZOMBIE_HORDE_H

#include "Zombie.hpp"

class ZombieHorde
{
public:
	ZombieHorde (int nb);
	~ZombieHorde (void);

private:

	int			_zombieNbr;
	Zombie*		_zombies;

	std::string	generateRandomName(void) const;
	void		announce(void) const;

};

#endif
