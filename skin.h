#ifndef SKIN_H_INCLUDED
#define SKIN_H_INCLUDED
#include <string>
class Skin{
private:
    string Charactername;
    string Skinname;
    int price;
    int is_sold;

public:
    skin(string cname = "", string sname = "", int p = 0, int is_sold = 0);
    string getcname();
    string getsname();
    int getprice();
    int get_is_sold();

    void setcname(string cname);
    void setsname(string sname);
    void setprice(int price);
    void set_is_sold(int is_sold);

};


#endif // SKIN_H_INCLUDED
