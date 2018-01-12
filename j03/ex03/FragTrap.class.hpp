/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubedat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 15:01:29 by adubedat          #+#    #+#             */
/*   Updated: 2018/01/12 19:16:15 by adubedat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_CLASS_H
# define FRAG_TRAP_CLASS_H

#include <iostream>
#include "ClapTrap.class.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(FragTrap const & src);
	~FragTrap (void);

	FragTrap &		operator=(FragTrap const & rhs);
	void			rangedAttack(std::string const & target);
	void			meleeAttack(std::string const & target);
	void			vaulthunter_dot_exe(std::string const & target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);
};

#endif
