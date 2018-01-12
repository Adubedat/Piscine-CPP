/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubedat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 16:10:27 by adubedat          #+#    #+#             */
/*   Updated: 2018/01/12 17:57:11 by adubedat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.class.hpp"
#include "ScavTrap.class.hpp"

int main(void)
{

	ScavTrap st1("Jean");
	FragTrap ft1("Robert");

	ft1.rangedAttack("bwak");
	ft1.meleeAttack("bwak");
	ft1.takeDamage(35);
	ft1.takeDamage(80);
	ft1.beRepaired(50);
	ft1.beRepaired(70);
	ft1.vaulthunter_dot_exe("random");
	ft1.vaulthunter_dot_exe("random");
	ft1.vaulthunter_dot_exe("random");
	ft1.vaulthunter_dot_exe("random");
	ft1.vaulthunter_dot_exe("random");
	st1.rangedAttack("bwak");
	st1.meleeAttack("bwak");
	st1.takeDamage(35);
	st1.takeDamage(80);
	st1.beRepaired(50);
	st1.beRepaired(70);
	st1.challengeNewcomer("Dark-Nicolas");
	st1.challengeNewcomer("Dark-Nicolas");
	st1.challengeNewcomer("Dark-Nicolas");
	st1.challengeNewcomer("Dark-Nicolas");
	st1.challengeNewcomer("Dark-Nicolas");
	return 0;
}
