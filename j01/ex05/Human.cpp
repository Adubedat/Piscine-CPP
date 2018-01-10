/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubedat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 17:47:44 by adubedat          #+#    #+#             */
/*   Updated: 2018/01/10 19:00:36 by adubedat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void) {

}

Human::~Human(void) {

}

std::string		Human::identify(void) const{

	return (this->_brain.identify());
}

Brain const		&Human::getBrain(void) const{

	return(this->_brain);
}
