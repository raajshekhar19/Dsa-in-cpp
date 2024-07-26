/* 

//length nikalo
us last index ko head se linkj karo
uske baad kitna rortate karna h iske liye 
length - k% length
ab pointer ko us index p le ke jao 
us pointer k just baad k index ko store karo
aur baad wale idx ko null pe point karo


Node * temp = head;
int length = 1;
while(temp->next){
    length++;
    temp = temp->next;
}
temp ->next = head;
int rotateidx = length - k% length;
temp = head;
Node * newHead = NULL;
int count;
while(temp){
    count++;
    if(count==rotateidx){
        newHead = temp->next;
        break;
    }
    temp =temp->next;
}
temp->next = NULL;
return newHead;
  




 */