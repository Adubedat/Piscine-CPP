/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubedat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 15:28:10 by adubedat          #+#    #+#             */
/*   Updated: 2018/01/11 15:51:03 by adubedat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_H
# define FIXED_CLASS_H

class Fixed
{
public:

	Fixed(void);
	Fixed(Fixed const & src);
	~Fixed (void);

	Fixed &		operator=(Fixed const & src);
	int			getRawBits(void) const;
	void		setRawBits(int const raw);

private:

	int					_value;
	static const int	_bits;

};

#endif
