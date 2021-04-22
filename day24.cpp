#include <cstddef>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;	
class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};
class Solution{
    public:
    	
    

          Node* removeDuplicates(Node *head)
          {
            //Write your code here
            // Node *save = head->next;
            Node *temp = head;
            // Node *p;

            while(temp->next!=NULL)
            {
                // while(save!=NULL)
                // {
                //     if(temp->data==save->data)
                //     {
                //         //Code for replace
                //         p=save;
                //         temp->next=save->next;
                //         delete p; 
                //     }
                //     save=save->next;
                // }
                // temp=temp->next;
                // save=temp->next;
                if(temp->data==temp->next->data)
                    temp->next = temp->next->next;
                else
                    temp = temp->next;
                
            }

            return head;
          }	
    	
	Node* insert(Node *head,int data)
          {
               Node* p=new Node(data);
               if(head==NULL){
                   head=p;  

               }
               else if(head->next==NULL){
                   head->next=p;

               }
               else{
                   Node *start=head;
                   while(start->next!=NULL){
                       start=start->next;
                   }
                   start->next=p;   

               }
                    return head;
                
            
          }
          void display(Node *head)
          {
                  Node *start=head;
                    while(start)
                    {
                        cout<<start->data<<" ";
                        start=start->next;
                    }
           }
};
			
int main()
{
	Node* head=NULL;
  	Solution mylist;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        head=mylist.insert(head,data);
    }	
    head=mylist.removeDuplicates(head);

	mylist.display(head);
		
}
