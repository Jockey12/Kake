// Created by Jockey //
// functiontet.cpp //
/* DO Not edit or tweak unless you asked me */
// will be changing the file name.//

#include "include_files.h"
using namespace std;

// Definition of user-defined function doPrint()
void doPrint() // doPrint() is the called function in this example
{
    cout << "In doPrint()\n";
}

// makes a function called "textAnswer"
// V  V  V  V  V  V

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
            break;

        if(choice =='Y' || choice =='y'){
            cout << " " << endl;
            cout << "Hello welcome to textAnswer\n";
            cin >> answert;
            cout << "To begin press Y. " << endl;
            cin >> answert;
            
            
            
            break;
        }
    else if(choice != 'N' && choice != 'n' && choice != 'Y' && choice != 'y'){
        cout << "Error try again " << endl;
        valid = true;        
      }  
    }  
}

void housePrint()
{
    int a, b;
    int answerq;
    a = 3;
    b = 83;
    answerq = a * b;
    std::cout << answerq;
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
