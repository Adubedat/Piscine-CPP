/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubedat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 15:18:02 by adubedat          #+#    #+#             */
/*   Updated: 2018/01/12 19:16:26 by adubedat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.class.hpp"
#include <sys/time.h>

ClapTrap::ClapTrap(void) :
	_hitPoints(100),
	_maxHitPoints(100),
	_energyPoints(100),
	_maxEnergyPoints(100),
	_level(1),
	_name("unknown"),
	_meleeAttackDamage(30),
	_rangedAttackDamage(20),
	_armorDamageReduction(5) {

	struct timeval  tv;

	gettimeofday(&tv, NULL);
	srand(tv.tv_sec * tv.tv_usec);
	std::cout << "Default constructor called for CL4P-TP" << std::endl;
}

ClapTrap::ClapTrap(std::string name) :
	_hitPoints(100),
	_maxHitPoints(100),
	_energyPoints(100),
	_maxEnergyPoints(100),
	_level(1),
	_name(name),
	_meleeAttackDamage(30),
	_rangedAttackDamage(20),
	_armorDamageReduction(5) {

	struct timeval  tv;

	gettimeofday(&tv, NULL);
	srand(tv.tv_sec * tv.tv_usec);
	std::cout << "Name constructor called for CL4P-TP" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src) {

	struct timeval  tv;

	std::cout << "Copy constructor called for CL4P-TP" << std::endl;
	gettimeofday(&tv, NULL);
	srand(tv.tv_sec * tv.tv_usec);
	*this = src;
}

ClapTrap::~ClapTrap(void) {

	std::cout << "Destructor called for CL4P-TP" << std::endl;
}

ClapTrap &		ClapTrap::operator=(ClapTrap const & rhs) {
	
	std::cout << "Assignation operator called for CL4P-TP" << std::endl;

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

void				ClapTrap::setName(std::string const name) {

	this->_name = name;
}

unsigned int		ClapTrap::getHitPoints(void) const {

	return(this->_hitPoints);
}

unsigned int		ClapTrap::getMaxHitPoints(void) const {

	return(this->_maxHitPoints);
}

unsigned int		ClapTrap::getEnergyPoints(void) const {

	return(this->_energyPoints);
}

unsigned int		ClapTrap::getMaxEnergyPoints(void) const {

	return(this->_maxEnergyPoints);
}

unsigned int		ClapTrap::getLevel(void) const {

	return(this->_level);
}

std::string	ClapTrap::getName(void) const {

	return(this->_name);
}

unsigned int		ClapTrap::getMeleeAttackDamage(void) const {

	return(this->_meleeAttackDamage);
}

unsigned int		ClapTrap::getRangedAttackDamage(void) const {

	return(this->_rangedAttackDamage);
}

unsigned int		ClapTrap::getArmorDamageReduction(void) const {

	return(this->_armorDamageReduction);
}

void				ClapTrap::rangedAttack(std::string const & target) {

	std::cout << "CL4P-TP " << this->_name << " attacks " << target
		<< " at range, causing " << this->_rangedAttackDamage
		<< " points of damage !" << std::endl;
}

void				ClapTrap::meleeAttack(std::string const & target) {

	std::cout << "CL4P-TP " << this->_name << " attacks " << target
		<< " at melee, causing " << this->_meleeAttackDamage
		<< " points of damage !" << std::endl;
}

void				ClapTrap::takeDamage(unsigned int amount) {

	if ((amount - this->_armorDamageReduction) > this->_hitPoints)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= (amount - this->_armorDamageReduction);
	std::cout << "CL4P-TP " << this->_name << " take "
		<< amount - this->_armorDamageReduction
		<< " points of damage. He has " << this->_hitPoints
		<< " hit points left" << std::endl;
}

void				ClapTrap::beRepaired(unsigned int amount) {

	if ((amount + this->_hitPoints) > this->_maxHitPoints)
		this->_hitPoints = 100;
	else
		this->_hitPoints += amount;
	std::cout << "CL4P-TP " << this->_name << " get repaired by "
		<< amount << " hit points. He now has " << this->_hitPoints
		<< " hit points " << std::endl;
}
