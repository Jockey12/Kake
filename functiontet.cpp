// Created by Jockey 
// functiontet.cpp 
// DO Not edit or tweak unless you asked me
// will be changing the file name.
#include "include_files.h"

using namespace std;

// Definition of user-defined function doPrint()
void doPrint() // doPrint() is the called function in this example
{
    cout << "In doPrint()\n";
}

// makes a function called "textAnswer"
void textAnswer() 
{
    
    
   
    cout << "Starting textAnswer\n";
    char choice='Y';
    int answert;
    bool valid = true;
        while(valid){
        cout << "Do you want to start textAnswer(Y/N)" << endl;
        cin >> choice;
        if(choice =='N' || choice =='n'){
        cout << "Good bye then :(\n";
            break;
        if(choice !='Y' || choice !='y'){
            cout << "Hello welcome to textAnswer\n";
            cout << "To begin press Y. " << endl;            
            cin >> answert;
            cout << "test\n";
        }
        

            }  
          }
     }


void housePrint()
{
    std::cout << "House()\n";
}


// Definition of function main()
int main()
{
    cout << "Starting main()\n";
    doPrint(); // Interrupt main() by making a function call to doPrint(). main() is the caller.
    housePrint(); // Prints housePrint()
    cout << "Ending main()\n"; // this statement is executed after doPrint() ends
    textAnswer();
    
    return 0;
}

/* End of functiontet.cpp */
