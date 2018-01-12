/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubedat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 15:18:02 by adubedat          #+#    #+#             */
/*   Updated: 2018/01/12 17:05:10 by adubedat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.class.hpp"
#include <sys/time.h>

FragTrap::FragTrap(void) :
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
	std::cout << "Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) :
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
	std::cout << "Name constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src) {

	struct timeval  tv;

	std::cout << "Copy constructor called" << std::endl;
	gettimeofday(&tv, NULL);
	srand(tv.tv_sec * tv.tv_usec);
	*this = src;
}

FragTrap::~FragTrap(void) {

	std::cout << "Destructor called" << std::endl;
}

FragTrap &		FragTrap::operator=(FragTrap const & rhs) {
	
	std::cout << "Assignation operator called" << std::endl;

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

void				FragTrap::setName(std::string const name) {

	this->_name = name;
}

unsigned int		FragTrap::getHitPoints(void) const {

	return(this->_hitPoints);
}

unsigned int		FragTrap::getMaxHitPoints(void) const {

	return(this->_maxHitPoints);
}

unsigned int		FragTrap::getEnergyPoints(void) const {

	return(this->_energyPoints);
}

unsigned int		FragTrap::getMaxEnergyPoints(void) const {

	return(this->_maxEnergyPoints);
}

unsigned int		FragTrap::getLevel(void) const {

	return(this->_level);
}

std::string	FragTrap::getName(void) const {

	return(this->_name);
}

unsigned int		FragTrap::getMeleeAttackDamage(void) const {

	return(this->_meleeAttackDamage);
}

unsigned int		FragTrap::getRangedAttackDamage(void) const {

	return(this->_rangedAttackDamage);
}

unsigned int		FragTrap::getArmorDamageReduction(void) const {

	return(this->_armorDamageReduction);
}

void				FragTrap::rangedAttack(std::string const & target) {

	std::cout << "FR4G-TP " << this->_name << " attacks " << target
		<< " at range, causing " << this->_rangedAttackDamage
		<< " points of damage !" << std::endl;
}

void				FragTrap::meleeAttack(std::string const & target) {

	std::cout << "FR4G-TP " << this->_name << " attacks " << target
		<< " at melee, causing " << this->_meleeAttackDamage
		<< " points of damage !" << std::endl;
}

void				FragTrap::vaulthunter_dot_exe(std::string const & target) {

	std::string		attackList[5] = {"One shot wonder", "Laser Inferno",
		"Gun Wizard", "Funzerker", "Torgue fiesta"};

	if (this->_energyPoints < 25) {
		std::cout << "FR4G-TP " << this->_name
			<< " doesn't have enough energy" << std::endl;
		return ;
	}
	this->_energyPoints -= 25;
	std::cout << "FR4G-TP " << this->_name << " attacks " << target
		<< " with " << attackList[rand() % 5] << ". It's very effective"
		<< std::endl;
}

void				FragTrap::takeDamage(unsigned int amount) {

	if ((amount - this->_armorDamageReduction) > this->_hitPoints)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= (amount - this->_armorDamageReduction);
	std::cout << "FR4G-TP " << this->_name << " take "
		<< amount - this->_armorDamageReduction
		<< " points of damage. He has " << this->_hitPoints
		<< " hit points left" << std::endl;
}

void				FragTrap::beRepaired(unsigned int amount) {

	if ((amount + this->_hitPoints) > this->_maxHitPoints)
		this->_hitPoints = 100;
	else
		this->_hitPoints += amount;
	std::cout << "FR4G-TP " << this->_name << " get repaired by "
		<< amount << " hit points. He now has " << this->_hitPoints
		<< " hit points " << std::endl;
}
