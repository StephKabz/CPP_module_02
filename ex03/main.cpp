/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingstephane <kingstephane@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 18:46:07 by kingstephan       #+#    #+#             */
/*   Updated: 2026/01/08 18:46:10 by kingstephan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main() {
    // Triangle avec sommets (0,0), (10,0), (5,10)
    Point a(0, 0);
    Point b(10, 0);
    Point c(5, 10);
    
    // Test 1: Point à l'intérieur
    Point p1(5, 5);
    std::cout << "Point (5,5) inside: " << bsp(a, b, c, p1) << std::endl;  // 1 (true)
    
    // Test 2: Point à l'extérieur
    Point p2(15, 5);
    std::cout << "Point (15,5) inside: " << bsp(a, b, c, p2) << std::endl;  // 0 (false)
    
    // Test 3: Point sur un sommet
    Point p3(0, 0);
    std::cout << "Point (0,0) inside: " << bsp(a, b, c, p3) << std::endl;  // 0 (false)
    
    // Test 4: Point sur un bord
    Point p4(5, 0);
    std::cout << "Point (5,0) inside: " << bsp(a, b, c, p4) << std::endl;  // 0 (false)
    
    return 0;
}