/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubedat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 19:40:07 by adubedat          #+#    #+#             */
/*   Updated: 2018/01/10 19:56:59 by adubedat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include "Weapon.hpp"

class HumanA
{
public:
	HumanA (std::string name, Weapon &weapon);
	~HumanA (void);
	void	attack(void) const;

private:
	std::string	_name;
	Weapon		&_weapon;
};

#endif
