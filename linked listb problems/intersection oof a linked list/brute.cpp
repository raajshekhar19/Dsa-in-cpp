/* 
temp se iterate ->map m store the node
iterate through the second node and if found the same node then return


Node * temp = head1;
map<int,int> mpp;
while(temp){
mpp[temp]=1;
temp = temp->next;
}
temp = head2;
while(temp){
  if(mpp.find(temp)!=mpp.end()){
  return temp
  }
}
return NULL;



 */