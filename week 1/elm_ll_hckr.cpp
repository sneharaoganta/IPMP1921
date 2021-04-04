// 11.https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list
// Status: All test cases accepted
// Code:
void printLinkedList(SinglyLinkedListNode* head) {
SinglyLinkedListNode* temp;
temp = head;
while(temp!=NULL){
cout<<temp->data<<"\n";
temp = temp->next;
}
}