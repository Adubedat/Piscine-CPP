/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubedat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 16:53:55 by adubedat          #+#    #+#             */
/*   Updated: 2018/01/10 18:05:04 by adubedat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream>

Brain::Brain(int iq) : _iq(iq) {

	std::cout << this->_iq << " iq brain created." << std::endl;
}

Brain::~Brain(void) {

}

std::string	Brain::identify(void) const{

	std::string	address;
	std::ostringstream ss;

	ss << (void const*)this;
	address = ss.str();
	return (address);
}
