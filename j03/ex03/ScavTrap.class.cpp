/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubedat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 15:18:02 by adubedat          #+#    #+#             */
/*   Updated: 2018/01/12 21:21:58 by adubedat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.class.hpp"
#include <sys/time.h>

ScavTrap::ScavTrap(void) : ClapTrap() {
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;

	struct timeval  tv;

	gettimeofday(&tv, NULL);
	srand(tv.tv_sec * tv.tv_usec);
	std::cout << "Default constructor called for SC4V-TP" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;

	struct timeval  tv;

	gettimeofday(&tv, NULL);
	srand(tv.tv_sec * tv.tv_usec);
	std::cout << "Name constructor called for SC4V-TP" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src) {

	struct timeval  tv;

	std::cout << "Copy constructor called for SC4V-TP" << std::endl;
	gettimeofday(&tv, NULL);
	srand(tv.tv_sec * tv.tv_usec);
	*this = src;
}

ScavTrap::~ScavTrap(void) {

	std::cout << "Destructor called for SC4V-TP" << std::endl;
}

ScavTrap &		ScavTrap::operator=(ScavTrap const & rhs) {
	
	std::cout << "Assignation operator called for SC4V-TP" << std::endl;

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

void				ScavTrap::rangedAttack(std::string const & target) {

	std::cout << "SC4V-TP " << this->_name << " attacks " << target
		<< " at range, causing " << this->_rangedAttackDamage
		<< " points of damage !" << std::endl;
}

void				ScavTrap::meleeAttack(std::string const & target) {

	std::cout << "SC4V-TP " << this->_name << " attacks " << target
		<< " at melee, causing " << this->_meleeAttackDamage
		<< " points of damage !" << std::endl;
}

void				ScavTrap::challengeNewcomer(std::string const & target) {

	std::string		challengeList[5] = {
		"You have to kill 1000 enemies",
		"You have to collect 5000 golds",
		"You have to save the princess",
		"You have to kill the dragon",
		"You have to collect a rare mushroom at the top of a mountain"
	};

	std::cout << "SC4V-TP " << this->_name << " say : Hey " << target
		<< " " << challengeList[rand() % 5] << std::endl;
}

void				ScavTrap::takeDamage(unsigned int amount) {

	if ((amount - this->_armorDamageReduction) > this->_hitPoints)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= (amount - this->_armorDamageReduction);
	std::cout << "SC4V-TP " << this->_name << " take "
		<< amount - this->_armorDamageReduction
		<< " points of damage. He has " << this->_hitPoints
		<< " hit points left" << std::endl;
}

void				ScavTrap::beRepaired(unsigned int amount) {

	if ((amount + this->_hitPoints) > this->_maxHitPoints)
		this->_hitPoints = 100;
	else
		this->_hitPoints += amount;
	std::cout << "SC4V-TP " << this->_name << " get repaired by "
		<< amount << " hit points. He now has " << this->_hitPoints
		<< " hit points " << std::endl;
}
