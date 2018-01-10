/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubedat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 14:35:11 by adubedat          #+#    #+#             */
/*   Updated: 2018/01/10 16:06:09 by adubedat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie
{
public:

	Zombie(std::string name = "unknown", std::string type = "unknown");
	~Zombie(void);
	void	announce(void) const;
	void	setName(std::string name);

private:

	std::string _name;
	std::string _type;

};

#endif
