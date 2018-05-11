//
//  Media.hpp
//  Media
//
//  Created by Sonia Arteaga on 4/16/18.
//  Copyright © 2018 Sonia Arteaga. All rights reserved.
//

#ifndef Media_hpp
#define Media_hpp

#include <string>
using namespace std;

class Media
{
    public:
        Media(){this->type = "";}
        Media(string type){this->type = type;}
        void setType(string type){this->type = type;}
        string getType()const {return type;}
    
    protected:
        string type;
};

#endif /* Media_hpp */
