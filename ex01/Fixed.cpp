/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingstephane <kingstephane@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 16:39:55 by kingstephan       #+#    #+#             */
/*   Updated: 2026/01/07 17:58:29 by kingstephan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractionalBits = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	value = 0;
};

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;
	value = n * (1 << fractionalBits); 
};

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	value = roundf(f * (1 << fractionalBits));
}

Fixed::Fixed (const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	value = other.value;
};

Fixed& Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	value = other.value;
	return (*this);
};

float Fixed::toFloat(void) const
{
	return (static_cast<float>(value) / (1 << fractionalBits));
};

int	Fixed::toInt(void) const
{
	return ((value) / (1 << fractionalBits));
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed) {
    out << fixed.toFloat();
    return out;
}; //fonction pour l'operateur <<. en parametre on a le flux de sortie et l'objet

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
};