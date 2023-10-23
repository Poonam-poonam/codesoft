#include<iostream>
#include<string>
#include<vector>
using namespace std;
void display_menu(){
cout<<"-----------> TO DO LIST <-----------"<<endl;
cout<<"1. Add task."<<endl;
cout<<"2. View task."<<endl;
cout<<"3. Marked task as completed."<<endl;
cout<<"---------------------------------------------"<<endl;
cout<<"enter your choice : "<<endl;
}

int main(){
    vector<string> tasks;
    vector<bool> completed;
    int choice;
    string task;
    while(true){
        display_menu();
        cin>>choice;
        switch(choice){
            case 1:
            cout<<"enter your task:   ";
            cin.ignore();
            getline(cin, task);
            tasks.push_back(task);
            completed.push_back(false);
            cout<<"task added succesfully : "<<endl;
            break;
            case 2: 
            cout<<"task : "<<endl;
            for(size_t i=0; i<task.size(); ++i){
                 cout<<(completed[i] ? "[X]" : "[]")<<tasks[i]<<endl;
            }
            break;
            case 3: 
            cout<<"enter the task number i.e to be marked complete : ";
            int task_number;
            cin>>task_number;
            if(task_number>= 1 && task_number <= static_cast<int>(task.size())){
                completed[task_number - 1]=true;
                cout<<"task marked as completed. "<<endl;
            }
            else{
                cout<<"invalid task number."<<endl;
            }
            break;
            case 4:
            cout<<"!! bye bye and have a nice day !!"<<endl;
            return 0;
            default: cout<<"invalid choice . please enter correct choice again."<<endl;
        }
    }
    return 0;
}