/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubedat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 19:47:39 by adubedat          #+#    #+#             */
/*   Updated: 2018/01/18 21:55:13 by adubedat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>
class Array
{
public:

	Array<T>(void) : _n(0), _array(new T[0]){
	};

	Array<T>(unsigned int n) : _n(n), _array(new T[n]()){
	};

	Array<T>(Array const & src) {
		_n = src.size();
		_array = new T[_n];
		for (unsigned int i = 0; i < _n; ++i) {
			_array[i] = src._array[i];
		}
	};

	virtual ~Array<T>(){
		
		delete [] _array;
	};

	Array &				operator=(Array<T> const & rhs) {
		_n = rhs.size();
		delete [] _array;
		_array = new T[_n];
		for (unsigned int i = 0; i < _n; ++i) {
			_array[i] = rhs._array[i];
		}
		return (*this);
	};

	T &					operator[](unsigned int	const index) const {
		
		if (index >= _n)
			throw std::exception();
		return (_array[index]);
	}

	unsigned int		size(void) const {

		return (_n);
	}

private:

	unsigned int	_n;
	T				*_array;
};

#endif /* ARRAY_H */
