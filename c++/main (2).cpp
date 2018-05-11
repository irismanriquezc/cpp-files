//
//  main.cpp
//  Media
//
//  Created by Sonia Arteaga on 4/16/18.
//  Copyright © 2018 Sonia Arteaga. All rights reserved.
//

#include <iostream>
#include "CD.hpp"
#include "DVD.hpp"
#include <vector>
using namespace std;

void display(const Media& m);

int main() {
  vector<string>tracks;
  tracks.push_back("Song 1");
  tracks.push_back("Song 2");

  CD cd1("Songs list", 2001, tracks);
  display(cd1);

  DVD mov1("coco", 2017, 2, 30, 32);
  display(mov1);

    return 0;
}
void display(const Media& m)
{
    cout << "Type: " << m.getType() << endl;
}
