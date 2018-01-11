/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubedat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 17:47:42 by adubedat          #+#    #+#             */
/*   Updated: 2018/01/10 19:13:38 by adubedat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
#define HUMAN_H

#include "Brain.hpp"

class Human
{
public:

	Human(void);
	~Human(void);
	std::string		identify(void) const;
	Brain const		&getBrain(void) const;

private:

	Brain const _brain;

};

#endif /* HUMAN_H */
