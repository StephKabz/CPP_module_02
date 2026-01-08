/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingstephane <kingstephane@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 17:56:15 by kingstephan       #+#    #+#             */
/*   Updated: 2026/01/08 18:49:27 by kingstephan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0) 
{};

Point::Point(float xVal, float yVal) : x(xVal), y(yVal)
{};

Point::Point(const Point &other) : x(other.x), y(other.y)
{};

Fixed Point::getX() const
{
	return (x);
};

Fixed Point::getY() const
{
	return (y);
};

Point& Point::operator=(Point const &other)
{
	(void)other;
	return (*this);
};

Point::~Point()
{

};

