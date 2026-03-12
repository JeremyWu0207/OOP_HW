#ifndef SKIN_H_INCLUDED
#define SKIN_H_INCLUDED

#include <string>
using namespace std;

class skin {
private:
    string characterName;
    string skinName;
    int price;
    bool isSold;

public:
    skin(string cName = "", string sName = "", int p = 0);

    string getCharacterName();
    string getSkinName();
    int getPrice();
    bool getIsSold();

    void setCharacterName(string cName);
    void setSkinName(string sName);
    void setPrice(int p);
    void setIsSold(bool sold);
};

#endif
