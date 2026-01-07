/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingstephane <kingstephane@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 21:21:55 by kingstephan       #+#    #+#             */
/*   Updated: 2026/01/07 15:42:30 by kingstephan      ###   ########.fr       */
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
	int	fixedValue;
	static const int fractionalBits;
public:
	Fixed();
	Fixed (const Fixed &other);
	Fixed& operator =(const Fixed &other);
	~Fixed();
	int	getRawBits(void) const;
	void setRawBits(int const raw);
};


#endif