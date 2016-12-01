#include<stdio.h>
#include<stdlib.h>
#define MAX 50
void merge(int arr[],int low,int mid,int high);
void mergesort(int arr[],int low, int high);

int main(){
    printf("merge sort operation is starting\n");

    printf("enter size of array to be sorted!!\n");

    int n;
    scanf("%d",&n);
    int arr[n];
    printf("enter the element in array list\n");
    int i;
    for(i=0;i<n;i++){
        printf("Enter %d element of array\n",i);
        scanf("%d",&arr[i]);
        printf("\n");
    }
    mergesort(arr,0,n);
    printf("Now the sorted element are following\n");
    int j;
    for( j=0;j<n;j++){
        printf("element at %d index is %d ",i,arr[j]);
        printf("\n");
    }
    printf("Merge sort operation is finished");
    return 0;

}

void mergesort(int arr[],int low,int high){

    int mid;

    if(low<high){
         mid=(low+high)/2;
         mergesort(arr,low,mid);
         mergesort(arr,mid+1,high);
         merge(arr,low,mid,high);
}
    }

void merge(int arr[],int low,int mid,int high){
    int i,m,k,l,temp[MAX];
    l=low;
    i=low;
    m=mid+1;
    while((l<=mid)&&(m<=high)){
         if(arr[l]<=arr[m]){
             temp[i]=arr[l];
             l++;
         }
         else{
             temp[i]=arr[m];
             m++;
         }
         i++;
    }
    if(l>mid){
         for(k=m;k<=high;k++){
             temp[i]=arr[k];
             i++;
         }
    }
    else{
         for(k=l;k<=mid;k++){
             temp[i]=arr[k];
             i++;
         }
    }
    for(k=low;k<=high;k++){
         arr[k]=temp[k];
    }
}
