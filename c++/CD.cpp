//
//  CD.cpp
//  Media
//
//  Created by Sonia Arteaga on 4/16/18.
//  Copyright © 2018 Sonia Arteaga. All rights reserved.
//

#include "CD.hpp"
#include <iostream>
using namespace std;

CD::CD()
{
    year = 1600;
    title = "";
    type = "CD";
}
CD::CD(string title, int year, const vector<string>& trackList)
{
    this->title = title;
    this->year = year;
    tracks = trackList;
    type = "CD";
}
