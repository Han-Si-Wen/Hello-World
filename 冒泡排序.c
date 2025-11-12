#include<stdio.h>
int main () {
int a=0,i=0;
int arr[10]={9,8,7,6,5,2,3,1,4,0};
int ret = sizeof(arr)/sizeof(arr[0]);
for(i=0;i<ret-1;i++){
for(a=0;a<ret-1-i;a++){
if(arr[a]>arr[a+1]){
int temp=0;
     temp=arr[a];
     arr[a]=arr[a+1];
     arr[a+1]=temp;
}
}
}
int b=0;
for(b=0;b<ret;b++){
printf("%d ",arr[b]);

}

return 0;}