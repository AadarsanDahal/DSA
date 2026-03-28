#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

class Stack{
    private:
    int top = -1;
    int MAX = 30;
    string arr[30];
    public:
    void push(string S){
        if(top == MAX -1){
            cout << "Stackover Flow" << endl;
        }
        else{
            top++;
            arr[top] = S;
            cout << "Pushed '" << S << "' to the stack." << endl;
        }
    }
    void pop(){
        if(top == -1){
            cout << "Stack Under Flow" << endl;  
        }else{
            top--;
            cout << arr[top] << " Popped from the stack." << endl ;
        }
    }
    void peek(){
        if(top == -1){
            cout << "Stack is Empty" << endl;
        }
        else{
            cout << "The top character is " << "'" << arr[top] << "'" << endl;
            cout << "Program Made BY : Aadarsan Dahal" << endl;
        }
    }
    void display(){
        if(top == -1){
            cout << "The stack is Empty" << endl;
        }
        else{
            cout << "Stack elements: ";
            for(int i = 0; i <= top ; i++){
                cout << arr[i] ;
            }
        }
        cout << endl;
    }
};

int main(){
    Stack s;
    s.push("A");
    s.push("p");
    s.push("p");
    s.push("l");
    s.push("e");
    s.push(" ");
    s.push("p");
    s.push("h");
    s.push("o");
    s.push("n");
    s.push("e");
    s.display();
    s.peek();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.display();
    s.peek();

    getch();
    return 0;
}
