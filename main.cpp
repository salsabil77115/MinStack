#include <iostream>

using namespace std;
class  MinStack{
    struct node{
    int item;
    node *next;

    };
node*Top;
int length;
int Min;
public:
    MinStack(){
        Top=NULL;
    length=0;
    Min=0;}
    bool isempty(){
return length==0;

}
    void push(int x){
        node*newnode=new node();
newnode->item=x;

        if(isempty()){
    newnode->next=0;
Top=newnode;
Min=x;
}
else{
if(x<Min){
    Min=x;
}
newnode->next=Top;
Top=newnode
    ;}
length++;
    }
void pop(){
     if(isempty()){
            cout<<"stack is empty"<<endl;
            }
            else{

    node *cur;
    node* pre;
    cur=Top;
   Top=Top->next;

    delete cur;
        length--;
pre=Top;
if(cur->item==Min){delete &Min;}

        while(pre!=0){

        if(pre->item<Min){

        Min=pre->item;}


            pre=pre->next;
        }
            }
}
int top(){
    return Top->item;
}
int getMin(){
return Min;

}



};
int main()
{

MinStack obj;
obj.push(-2);
obj.push(0);
obj.push(-3);

cout<<obj.getMin()<<endl;
obj.pop();
cout<<obj.top()<<endl;
cout<<obj.getMin()<<endl;

    return 0;
}
