/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubedat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 14:16:52 by adubedat          #+#    #+#             */
/*   Updated: 2018/01/10 14:22:36 by adubedat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	PonyOnTheHeap(void)
{
	Pony	*pony = new Pony("green");

	pony->talk();
	delete pony;
}

void	PonyOnTheStack(void)
{
	Pony pony("blue");

	pony.talk();
}

int main(void)
{
	PonyOnTheHeap();
	PonyOnTheStack();
	return 0;
}
