/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubedat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 14:35:11 by adubedat          #+#    #+#             */
/*   Updated: 2018/01/10 14:47:18 by adubedat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie
{
public:

	Zombie(std::string name, std::string type);
	~Zombie(void);
	void	announce(void) const;

private:

	std::string _name;
	std::string _type;

};

#endif
