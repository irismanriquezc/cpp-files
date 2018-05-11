//
//  CD.hpp
//  Media
//
//  Created by Sonia Arteaga on 4/16/18.
//  Copyright © 2018 Sonia Arteaga. All rights reserved.
//

#ifndef CD_hpp
#define CD_hpp
#include <string>
#include <vector>
#include "Media.hpp"

using namespace std;

class CD : public Media
{
    public:
        CD();
        CD(string title, int year, const vector<string>& trackList);
        void setTitle(string title){this->title = title;}
        void setYear(int year){this->year = year;}
        string getTitle()const {return title;}
        int getYear()const {return year;}
    protected:
        string title;
        vector<string> tracks;
        int year;
};

#endif /* CD_hpp */
