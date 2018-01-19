/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubedat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 17:38:27 by adubedat          #+#    #+#             */
/*   Updated: 2018/01/19 18:21:39 by adubedat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>

template<typename T>
void		easyfind(T const & container, int value) {
	typename std::vector<int>::const_iterator it;

	it = std::find(container.begin(), container.end(), value);
	if (it != container.end())
		std::cout << "Founded value " << *it << std::endl;
	else
		throw std::exception();
}

#endif
