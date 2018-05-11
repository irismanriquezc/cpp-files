#include "workContact.hpp"
#include "contact.hpp"
#include <iostream>

using namespace std;

int main() {
WorkContact cont[5] = {WorkContact("Casey Jones","318-455-4312", "cjones@comp.com", "Hills Bank", "318-222-2323","Accountant"),WorkContact("King Kong","318-843-1101", "kkong@comp.com", "Hills Bank", "318-222-2525","Accountant"),WorkContact("Jaime King","831-847-1702", "jking@abc.com", "ABC Ventures", "831-255-8533","Software Engineer"),
WorkContact("Johanna Cruz","831-344-3742", "jocruz@abc.com", "ABC Ventures", "831-255-8221","Sr. Software Engineer"),WorkContact("Juana Martinez","831-747-9702", "jmartinez@22Code.com", "22Code", "831-552-6570","Research Scientist") };

    for(int i = 0;i<5;i++){
        cout << "           "<<endl;
        cout<< i+1 <<". "<<cont[i]<<endl;
    }
    return 0;
}
