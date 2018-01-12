/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubedat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 15:01:29 by adubedat          #+#    #+#             */
/*   Updated: 2018/01/12 19:28:43 by adubedat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_CLASS_H
# define SCAV_TRAP_CLASS_H

#include <iostream>
#include "ClapTrap.class.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const & src);
	~ScavTrap (void);

	ScavTrap &		operator=(ScavTrap const & rhs);
	void			rangedAttack(std::string const & target);
	void			meleeAttack(std::string const & target);
	void			challengeNewcomer(std::string const & target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);

};

#endif
