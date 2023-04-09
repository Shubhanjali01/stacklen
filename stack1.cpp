
#include<iostream>
#include<stack>
using namespace std;

//function protocol for display_stack utility
void display_stack(stack<string>name);
int main(){

//creation of stack 
stack<string>name;

//push element into the stack 
name.push("Shubhanjali");
name.push("Summer");
name.push("Sanskar");

cout<<endl;


//get size of the stack
int size=name.size();
cout<<"Size of the stack is :"<<size<<endl;


//check stack is empty of not 
cout<<"Is stack empty ?  ";
if(name.empty()){
    cout<<"yes"<<endl;  
}
else {
    cout<<"No"<<endl;
}


//print stack element 
cout<<"...............Initial Stack...............";
cout<<endl;
display_stack(name);


// remove Sanskar element from the stack
name.pop();


//print stack element
cout<<"................Final Stack.................";
cout<<endl;
display_stack(name);


//get top element 
string top=name.top();
cout<<"Top element :"<<top<<endl;

cout<<endl;
    return 0;
}



//utility function to display stack elements
void display_stack(stack<string>name){
    while(!name.empty()){
        cout<<name.top()<<", ";
        name.pop();

    }
    cout<<endl;
}