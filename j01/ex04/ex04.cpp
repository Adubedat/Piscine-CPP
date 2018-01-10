/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubedat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 16:14:21 by adubedat          #+#    #+#             */
/*   Updated: 2018/01/10 16:19:04 by adubedat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string	*pstr = &str;
	std::string	&rstr = str;

	std::cout << *pstr << std::endl;
	std::cout << rstr << std::endl;
	return 0;
}
