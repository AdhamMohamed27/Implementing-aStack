//
//  Header.h
//  Adham Salem#900222456
//
//  Created by Adham Mohamed  on 14/09/2023.
//

#ifndef Header_h
#define Header_h
class Stack{
public:
    
    Stack();
    Stack(int n);
    ~Stack();
    void push(int n);
    int pop();
    void name(char n);
    char Name;
    bool isempty();
    bool isfull();
    void display();
    
private:
    int * pointer;
    int top,Maxsize;
};

#endif /* Header_h */
