#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
};
void insert(Node*&head, int val)
{
    Node* newNode = new Node(); //create a node,it will allocate space and newNode pointer will point this allocated space
    newNode->data = val;  //since newNode is a pointer so it will access data members(data & next) of Node using -> arrow and assign the value passed as argument
    // no node in LL
    newNode->next = NULL;
    if(head==NULL)
    {
        head = newNode;
    }
    // if there are nodes in LL, insert at beginning
    newNode->next = head; //insertion at beginning so newNode has data=val and its next will point to existing LL nodes thus next of newNode will point or store head of existing LL
    head = newNode; //now the newNode is added to LL so head which is currently pointing to 2nd node of LL bcz 1st node is newNode so we need to update head. now head as well as newNode both are pointers storing address of type Node.
    // Update head to newNode (head = newNode;) so now head stores the newNode address which is 1st node of 
    cout<<"New node inserted with value: "<<head->data;
}
int main() {
    Node*head = NULL;
    insert(head, 1);
    return 0;
}