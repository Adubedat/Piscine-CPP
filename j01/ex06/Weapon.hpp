/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubedat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 19:20:18 by adubedat          #+#    #+#             */
/*   Updated: 2018/01/10 19:38:51 by adubedat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>

class Weapon
{
	
public:
	Weapon(std::string type);
	~Weapon(void);
	std::string const	&getType(void) const;
	void				setType(std::string);

private:
	std::string _type;
};

#endif /* WEAPON_H */
