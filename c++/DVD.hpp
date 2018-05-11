//
//  DVD.hpp
//  Media
//
//  Created by Sonia Arteaga on 4/16/18.
//  Copyright © 2018 Sonia Arteaga. All rights reserved.
//

#ifndef DVD_hpp
#define DVD_hpp

#include <string>
#include "Media.hpp"
using namespace std;

class DVD : public Media
{
    public:
        DVD();
        DVD(string title, int year, int hrs, int mins, int secs);
        void setTitle(string title){this->title = title;}
        void setYear(int year);
        void setHours(int hours);
        void setMins(int mins);
        void setSecs(int secs);
    protected:
        string title;
        int year,
            hours,
            mins,
            secs;
};

#endif /* DVD_hpp */
