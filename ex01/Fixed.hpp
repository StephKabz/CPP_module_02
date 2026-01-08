/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingstephane <kingstephane@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 16:34:47 by kingstephan       #+#    #+#             */
/*   Updated: 2026/01/07 17:25:44 by kingstephan      ###   ########.fr       */
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
	~Fixed();
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);


#endif