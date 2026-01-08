/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingstephane <kingstephane@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 17:17:17 by kingstephan       #+#    #+#             */
/*   Updated: 2026/01/08 17:57:26 by kingstephan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstring>
#include <cstdlib>
#include <string>
#include <fstream>
#include <cmath>

class Fixed
{
private:
	int	value;
	static const int fractionalBits;
public:
	Fixed();
	Fixed (const Fixed &other);
	Fixed (const int n);
	Fixed (const float f);
	Fixed& operator =(const Fixed &other);
	float toFloat(void) const;
	int toInt(void) const;

	// operateur de comparaison
	bool operator<(Fixed const &other) const;
	bool operator>(Fixed const &other) const;
	bool operator<=(Fixed const &other) const;
	bool operator>=(Fixed const &other) const;
	bool operator==(Fixed const &other) const;
	bool operator!=(Fixed const &other) const;

	// operateur Arithmethique
	Fixed operator+(Fixed const &other) const;
	Fixed operator-(Fixed const &other) const;
	Fixed operator*(Fixed const &other) const;
	Fixed operator/(Fixed const &other) const;

	// operateur Incrementation/Decrementation
	Fixed& operator++(void);
	Fixed operator++(int);
	Fixed& operator--(void);
	Fixed operator--(int);

	// min et max
	static Fixed& min(Fixed &a, Fixed &b);
	static const Fixed& min(Fixed const &a, Fixed const &b);
	static Fixed& max(Fixed &a, Fixed &b);
	static const Fixed& max(Fixed const &a, Fixed const &b);
	~Fixed();
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);


#endif