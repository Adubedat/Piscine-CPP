/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubedat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 19:43:24 by adubedat          #+#    #+#             */
/*   Updated: 2018/01/10 19:57:09 by adubedat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) :
	_name(name), _weapon(weapon) {

}

HumanA::~HumanA(void) {

}

void	HumanA::attack(void) const {
	std::cout << this->_name << " attacks with his " << this->_weapon.getType()
		<< std::endl;
}
