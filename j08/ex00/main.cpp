/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubedat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 18:08:21 by adubedat          #+#    #+#             */
/*   Updated: 2018/01/19 18:15:25 by adubedat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::vector<int>	vec;

	vec.push_back(21);
	vec.push_back(42);
	vec.push_back(84);
	vec.push_back(168);

	try {

		easyfind(vec, 42);
		easyfind(vec, 168);
		easyfind(vec, 268);
	}
	catch (std::exception e) {

		std::cout << "Caugth expection : " << e.what() << std::endl;
	}
	
	return 0;
}
