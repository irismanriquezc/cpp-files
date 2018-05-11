//
//  rectangle.cpp
//  CSS2A_C4_LAb
//
//  Created by Sonia Arteaga on 2/9/17.
//  Copyright © 2017 Sonia Arteaga. All rights reserved.
//

#include "rectangle.h"

Rectangle::Rectangle()
{
    unit_width = 1;
    unit_length = 1;
    length = 1;
    width = 1;
}
Rectangle::Rectangle(double len, double wid)
{
    unit_width = 1;
    unit_length = 1;
    if(len > 0 && wid > 0)
    {
        length = len;
        width = wid;
    }
    else
    {
        length = 1;
        width = 1;
    }
}
void Rectangle::setLength(double len)
{
    if(len > 0)
        length = len;
    else
        length = 1;
}
void Rectangle::setWidth(double wid)
{
    if(wid > 0)
        width = wid;
    else
        width = 1;
}
double Rectangle::getLength()
{
    return length;
}
double Rectangle::getWidth()
{
    return width;
}
double Rectangle::getArea()
{
    return (length * width);
}
double Rectangle::getPerimeter()
{
    return (2 * length) + (2 * width);
}
double Rectangle::calculateUnitRectArea()
{
    return 1;
}
