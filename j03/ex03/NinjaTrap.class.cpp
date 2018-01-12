/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubedat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 15:18:02 by adubedat          #+#    #+#             */
/*   Updated: 2018/01/12 21:22:04 by adubedat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.class.hpp"

NinjaTrap::NinjaTrap(void) : ClapTrap() {
	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 5;
	this->_armorDamageReduction = 0;

	std::cout << "Default constructor called for NINJA-TP" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name) {
	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 5;
	this->_armorDamageReduction = 0;

	std::cout << "Name constructor called for NINJA-TP" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const & src) {

	std::cout << "Copy constructor called for NINJA-TP" << std::endl;
	*this = src;
}

NinjaTrap::~NinjaTrap(void) {

	std::cout << "Destructor called for NINJA-TP" << std::endl;
}

NinjaTrap &		NinjaTrap::operator=(NinjaTrap const & rhs) {
	
	std::cout << "Assignation operator called for NINJA-TP" << std::endl;

	this->_hitPoints = rhs.getHitPoints();
	this->_maxHitPoints = rhs.getMaxHitPoints();
	this->_energyPoints = rhs.getEnergyPoints();
	this->_maxEnergyPoints = rhs.getMaxEnergyPoints();
	this->_level = rhs.getLevel();
	this->_name = rhs.getName();
	this->_meleeAttackDamage = rhs.getMeleeAttackDamage();
	this->_rangedAttackDamage = rhs.getRangedAttackDamage();
	this->_armorDamageReduction= rhs.getArmorDamageReduction();
	return (*this);
}

void				NinjaTrap::rangedAttack(std::string const & target) {

	std::cout << "NINJA-TP " << this->_name << " attacks " << target
		<< " at range, causing " << this->_rangedAttackDamage
		<< " points of damage !" << std::endl;
}

void				NinjaTrap::meleeAttack(std::string const & target) {

	std::cout << "NINJA-TP " << this->_name << " attacks " << target
		<< " at melee, causing " << this->_meleeAttackDamage
		<< " points of damage !" << std::endl;
}

void				NinjaTrap::takeDamage(unsigned int amount) {

	if ((amount - this->_armorDamageReduction) > this->_hitPoints)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= (amount - this->_armorDamageReduction);
	std::cout << "NINJA-TP " << this->_name << " take "
		<< amount - this->_armorDamageReduction
		<< " points of damage. He has " << this->_hitPoints
		<< " hit points left" << std::endl;
}

void				NinjaTrap::beRepaired(unsigned int amount) {

	if ((amount + this->_hitPoints) > this->_maxHitPoints)
		this->_hitPoints = 100;
	else
		this->_hitPoints += amount;
	std::cout << "NINJA-TP " << this->_name << " get repaired by "
		<< amount << " hit points. He now has " << this->_hitPoints
		<< " hit points " << std::endl;
}

void				NinjaTrap::ninjaShoebox(FragTrap const & target) {

	std::cout << "NINJA-TP " << this->_name << " attacks FR4G-TP " << target.getName()
		<< " with shoebox attack and it's not very effective. " << std::endl; 
}

void				NinjaTrap::ninjaShoebox(ScavTrap const & target) {

	std::cout << "NINJA-TP " << this->_name << " attacks SC4V-TP " << target.getName()
		<< " with shoebox attack and it's effective. " << std::endl; 
}

void				NinjaTrap::ninjaShoebox(NinjaTrap const & target) {

	std::cout << "NINJA-TP " << this->_name << " attacks NINJA-TP "
		<< target.getName() 
		<< " with shoebox attack and it's very effective. " << std::endl; 
}
