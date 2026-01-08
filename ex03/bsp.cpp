/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingstephane <kingstephane@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 18:19:16 by kingstephan       #+#    #+#             */
/*   Updated: 2026/01/08 18:45:22 by kingstephan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed triangleArea(Point const &p1, Point const &p2, Point const &p3)
{
	Fixed area;

	area = ((p2.getX() - p1.getX()) * (p3.getY() - p1.getY())) - ((p3.getX() - p1.getX()) * (p2.getY() - p1.getY()));
	if (area < Fixed(0))
		area = area * Fixed(-1);
	return (area);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed areaPAB;
	Fixed areaPAC;
	Fixed areaPBC;
	Fixed areaABC;

	areaPAB = triangleArea(point, a, b);
	areaPAC = triangleArea(point, a, c);
	areaPBC = triangleArea(point, b, c);
	areaABC = triangleArea(a, b, c);

	if (areaPAB == Fixed(0) || areaPAC == Fixed(0) || areaPBC == Fixed(0))
		return (false);
	Fixed sumArea;

	sumArea = areaPAB + areaPAC + areaPBC;
	if (sumArea == areaABC)
		return (true);
	return (false);
};