/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingstephane <kingstephane@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 21:23:45 by kingstephan       #+#    #+#             */
/*   Updated: 2026/01/07 15:46:42 by kingstephan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractionalBits = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	fixedValue = 0;
};

Fixed::Fixed (const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	fixedValue = other.fixedValue;
};

Fixed& Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	fixedValue = other.fixedValue;
	return (*this);
};

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (fixedValue);
};

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	fixedValue = raw;
};

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
};
