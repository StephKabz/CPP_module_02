/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingstephane <kingstephane@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 17:17:39 by kingstephan       #+#    #+#             */
/*   Updated: 2026/01/08 18:50:13 by kingstephan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractionalBits = 8;

Fixed::Fixed()
{
	//std::cout << "Default constructor called" << std::endl;
	value = 0;
};

Fixed::Fixed(const int n)
{
	//std::cout << "Int constructor called" << std::endl;
	value = n * (1 << fractionalBits); 
};

Fixed::Fixed(const float f)
{
	//std::cout << "Float constructor called" << std::endl;
	value = roundf(f * (1 << fractionalBits));
}

Fixed::Fixed (const Fixed &other)
{
	//std::cout << "Copy constructor called" << std::endl;
	value = other.value;
};

Fixed& Fixed::Fixed::operator=(const Fixed &other)
{
	//std::cout << "Copy assignment Fixed::operator called" << std::endl;
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

bool Fixed::operator<(Fixed const &other) const
{
	if (this->value < other.value)
		return (true);
	return (false);
};

bool Fixed::operator>(Fixed const &other) const
{
	if (this->value > other.value)
		return (true);
	return (false);
};

bool Fixed::operator<=(Fixed const &other) const
{
	if (this->value < other.value || this->value == other.value)
		return (true);
	return (false);
};

bool Fixed::operator>=(Fixed const &other) const
{
	if (this->value > other.value || this->value == other.value)
		return (true);
	return (false);
};

bool Fixed::operator==(Fixed const &other) const
{
	if (this->value == other.value)
		return (true);
	return (false);
};

bool Fixed::operator!=(Fixed const &other) const
{
	if (this->value != other.value)
		return (true);
	return (false);
};

Fixed Fixed::operator+(Fixed const &other) const
{
	Fixed result;

	result.value = this->value + other.value;
	return (result);
};

Fixed Fixed::operator-(Fixed const &other) const
{
	Fixed result;

	result.value = this->value - other.value;
	return (result);
};

Fixed Fixed::operator*(Fixed const &other) const
{
	Fixed result;

	result.value = (this->value * other.value) >> fractionalBits;
	return (result);
};

Fixed Fixed::operator/(Fixed const &other) const
{
	Fixed result;

	result.value = (this->value << fractionalBits) / other.value;
	return (result);
};

Fixed& Fixed::operator++(void)
{
	this->value++;
	return (*this);
};

Fixed Fixed::operator++(int)
{
	Fixed old = *this;
	this->value++;
	return (old);
};

Fixed& Fixed::operator--(void)
{
	this->value--;
	return (*this);
};

Fixed Fixed::operator--(int)
{
	Fixed old;
	this->value--;
	return (old);
};

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
};

const Fixed& Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a < b)
		return (a);
	return (b);
};

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
};

const Fixed& Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (a);
	return (b);
};

Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
};