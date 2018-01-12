/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubedat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 16:10:27 by adubedat          #+#    #+#             */
/*   Updated: 2018/01/12 17:07:25 by adubedat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.class.hpp"

int main(void)
{

	FragTrap ft1;

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
	return 0;
}
