//
//  DVD.cpp
//  Media
//
//  Created by Sonia Arteaga on 4/16/18.
//  Copyright © 2018 Sonia Arteaga. All rights reserved.
//

#include "DVD.hpp"
#include <cassert>
using namespace std;

DVD::DVD()
{
    type = "DVD";
    title = "";
    year = 1600;
    hours = 0;
    mins = 0;
    secs = 0;
}
DVD::DVD(string title, int year, int hrs, int mins, int secs)
{
    type = "DVD";
    this->title = title;
    setYear(year);
    setHours(hrs);
    setMins(mins);
    setSecs(secs);
}
void DVD::setHours(int hours)
{
    assert(hours >= 0);
    this->hours = hours;
}
void DVD::setMins(int mins)
{
    assert(mins >= 0 && mins <= 59);
    this->mins = mins;
}
void DVD::setSecs(int secs)
{
    assert(secs >= 0 && secs <= 59);
    this->secs = secs;
}
void DVD::setYear(int year)
{
    assert(year > 0);
    this->year = year;
}
