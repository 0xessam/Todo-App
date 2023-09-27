#include <iostream>
#include <map>
#include "Task.h"
#include "User.h"
#include "dateformat.h"
using namespace std ;
bool re()
{
    cout << "1. go to the choices list again for the same user\n" ;
    cout << "2. go to another user registration\n" ;
    cout << "Enter your choice\n" ;
    int c ; cin >> c ;
    return c==1 ;
}

int main() {
    map<string,User> Users ;
    cout << "  _____               _            _                \n"
            " |_   _|__         __| | ___      / \\   _ __  _ __  \n"
            "   | |/ _ \\ _____ / _` |/ _ \\    / _ \\ | '_ \\| '_ \\ \n"
            "   | | (_) |_____| (_| | (_) |  / ___ \\| |_) | |_) |\n"
            "   |_|\\___/       \\__,_|\\___/  /_/   \\_\\ .__/| .__/ \n"
            "                                       |_|   |_|    \n\n" ;
    cout << "welcome in our to-do app we are happy to help you <3  \n";

    while (true) {
        int choice ;
        string username ;
        cout << "Enter Your username : " ;
        cin >> username ;
        themenu:{};
        cout << "1 : add new Task .\n " ;
        cout << "2 : show all tasks .\n " ;
        cout << "3 : show completed tasks .\n " ;
        cout << "4 : show incompleted tasks .\n " ;
        cout << "5 : delete task .\n " ;
        cout << "6 : mark task as completed .\n " ;
        cout << "6 : End the program .\n " ;
        cout << "Enter your choice: \n" ;
        cin >> choice ;
        User &currentUser = Users[username] ; //
        switch(choice)
        {
            case 1 :{
                currentUser.add_task() ;
               if (re())
                   goto themenu;
               else
               break;
            }
            case 2 :{
                currentUser.show_Tasks() ;
                if (re())
                    goto themenu;
                else
                    break;
            }
            case 3 :{
                currentUser.show_completed_tasks() ;

                if (re())
                    goto themenu;
                else
                    break;
            }
            case 4 :{
                currentUser.show_incompleted_tasks() ;
                if (re())
                    goto themenu;
                else
                    break;
            }
            case 5 :{
                currentUser.delete_task() ;
                if (re())
                    goto themenu;
                else
                    break;
            }
            case 6 :{
                if(currentUser.empty()) {
                        cout << "Todo list is empty :( .\n" ;
                }
                else{
                    cout << "Enter the number of the task between 1 to " << currentUser.size() << '\n' ;
                    cin >> choice ;
                    if (choice >= 1 and choice <= currentUser.size())
                    {
                        currentUser.mark(choice) ;
                    }

                    else {
                        cout << "invalid input \n";
                    }
                }
                if (re())
                    goto themenu;
                else
                    break;
            }
            case 7 :{
                cout << "Good bye nice to meet you :)\n" ;
                return 0 ;
            }
            default: cout << "Invalid choice. Please try again." << endl;
        }

    }








    return 0;
}
