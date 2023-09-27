using namespace std;
#ifndef TODOAPP_TASK_H
#define TODOAPP_TASK_H
class Task {
private:
    string name ;
    string description ;
    bool completed ;
    string date ;
public:
    Task() {
        cout << "Enter the todo name \n" ;
        cin >> name ;
        cout << "Enter the todo description \n" ;
        cin >> description ;
        cout << "Enter the date (dd/mm/yy) \n" ;
        cin >> date ;
    }
    void mark_as_completed() {
        completed = true ;
    }
    bool is_completed(){
        return completed ;
    }
    void print_task() {
        cout << "Task name : " << name << "  " ;
        cout << "Task description : " << description << "  " ;
        cout << "Task deadline : " << date << "  ";
        cout << "status : " << (completed ? "completed \n" : "not completed \n") ;
    }
};



#endif
