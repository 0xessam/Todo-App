#include "vector"
using namespace std ;
#ifndef TODOAPP_USER_H
#define TODOAPP_USER_H

class User {
private:
    vector<Task>tasks ;
public:

    void add_task(){
        tasks.push_back(Task()) ;
    }
    void show_Tasks(){
        if(tasks.empty()){
            cout << "Todo list is empty :( .\n" ;
            return;
        }
        for(int i=0 ; i<tasks.size() ; i++) {
            cout << '[' << i+1 << ']' ;
            tasks[i].print_task() ;
        }
    }
    void show_completed_tasks(){
        if(tasks.empty()){
            cout << "Todo list is empty :( .\n" ;
            return;
        }
        int counter{};
        for(int i=0 ; i<tasks.size() ; i++) {
            if (tasks[i].is_completed() == 0 )
                continue;
            cout << '[' << ++counter << ']' ;
            tasks[i].print_task() ;
        }
        if (counter==0) cout << "there is no completed tasks\n" ;

    }
    void show_incompleted_tasks(){
        if(tasks.empty()){
            cout << "Todo list is empty :( .\n" ;
            return;
        }
        int counter{};
        for(int i=0 ; i<tasks.size() ; i++) {
            if (tasks[i].is_completed() )
                continue;
            cout << '[' << ++counter << ']' ;
            tasks[i].print_task() ;
        }
        if (counter==0) cout << "there is no incompleted tasks\n" ;

    }
    void delete_task (){
        if(tasks.empty()){
            cout << "Todo list is empty :( .\n" ;
            return;
        }
        cout << "Enter the number of the task between 1 to " << tasks.size() << '\n' ;
        cout << "if you don't know the number of the task enter -1 and the list numbers will be shown \n" ;
        int choice ; cin >> choice ;
        if (choice >= 1 and choice <= tasks.size())
        {
            tasks.erase(tasks.begin()+choice-1) ;
            return;
        }
        else if (choice==-1){
            show_Tasks() ;
            delete_task() ;
        }
        else {
            cout << "invalid input \n";
            delete_task() ;
        }

    }
    bool empty(){
        return tasks.empty() ;
    }
    int size(){
        return tasks.size() ;
    }
    void mark(int i){
        tasks[--i].mark_as_completed() ;
    }




};
#endif
