#include "iostream"
using namespace std ;

#ifndef TODOAPP_DATEFORMAT_H
#define TODOAPP_DATEFORMAT_H
class date{
private:
    int day ;
    int month ;
    int year ;
public:
    void setDate () {
        char c ;
        cout << "Write the deadline date as dd/mm/yy format \n" ;
        cin >> day >> c >> month >> c >> year ;
    }
    string getDate(){
        return to_string(day) + '/' + to_string(month) + '/' + to_string(year) ;
    }
};



#endif //TODOAPP_DATEFORMAT_H

