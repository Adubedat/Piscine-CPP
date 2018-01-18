/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubedat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 18:38:23 by adubedat          #+#    #+#             */
/*   Updated: 2018/01/18 19:12:29 by adubedat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template< typename T>
void		iter(T	*array, int const len, void (fun)(T const &)) {

	for (int i = 0; i < len; ++i) {

		fun(array[i]);
	}
}

template< typename T>
void		print_elem(T const & elem) {

	std::cout << elem << std::endl;
}

int			main(void) {

	char	test[] = {'a', 'b', 'c', 'd', 'e'};

	iter(test, 5, print_elem);
	return 0;
}
