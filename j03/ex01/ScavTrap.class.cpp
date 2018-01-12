/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubedat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 15:18:02 by adubedat          #+#    #+#             */
/*   Updated: 2018/01/12 18:04:21 by adubedat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.class.hpp"
#include <sys/time.h>

ScavTrap::ScavTrap(void) :
	_hitPoints(100),
	_maxHitPoints(100),
	_energyPoints(50),
	_maxEnergyPoints(50),
	_level(1),
	_name("unknown"),
	_meleeAttackDamage(20),
	_rangedAttackDamage(15),
	_armorDamageReduction(3) {

	struct timeval  tv;

	gettimeofday(&tv, NULL);
	srand(tv.tv_sec * tv.tv_usec);
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) :
	_hitPoints(100),
	_maxHitPoints(100),
	_energyPoints(50),
	_maxEnergyPoints(50),
	_level(1),
	_name(name),
	_meleeAttackDamage(20),
	_rangedAttackDamage(15),
	_armorDamageReduction(3) {

	struct timeval  tv;

	gettimeofday(&tv, NULL);
	srand(tv.tv_sec * tv.tv_usec);
	std::cout << "ScavTrap name constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src) {

	struct timeval  tv;

	std::cout << "ScavTrap constructor called" << std::endl;
	gettimeofday(&tv, NULL);
	srand(tv.tv_sec * tv.tv_usec);
	*this = src;
}

ScavTrap::~ScavTrap(void) {

	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap &		ScavTrap::operator=(ScavTrap const & rhs) {
	
	std::cout << "ScavTrap assignation operator called" << std::endl;

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

void				ScavTrap::setName(std::string const name) {

	this->_name = name;
}

unsigned int		ScavTrap::getHitPoints(void) const {

	return(this->_hitPoints);
}

unsigned int		ScavTrap::getMaxHitPoints(void) const {

	return(this->_maxHitPoints);
}

unsigned int		ScavTrap::getEnergyPoints(void) const {

	return(this->_energyPoints);
}

unsigned int		ScavTrap::getMaxEnergyPoints(void) const {

	return(this->_maxEnergyPoints);
}

unsigned int		ScavTrap::getLevel(void) const {

	return(this->_level);
}

std::string	ScavTrap::getName(void) const {

	return(this->_name);
}

unsigned int		ScavTrap::getMeleeAttackDamage(void) const {

	return(this->_meleeAttackDamage);
}

unsigned int		ScavTrap::getRangedAttackDamage(void) const {

	return(this->_rangedAttackDamage);
}

unsigned int		ScavTrap::getArmorDamageReduction(void) const {

	return(this->_armorDamageReduction);
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
