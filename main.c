#include <stdio.h>
#include <stdlib.h>
void swap(int *a,int *b){
int temp=*a;
*a=*b;
*b=temp;
}
void selection_sort(int *a,int n){
int i,j,min_index;
for(i=0;i<n-1;i++){
    min_index=i;
    for(j=i+1;j<n;j++){
        if(a[j]<a[min_index]){
            min_index=j;
        }
    }
    swap(&a[min_index],&a[i]);
}
}
void print_array(int *a,int n){
for(  int i=0;i<n;i++){
    printf("%d\t",a[i]);
}
}
void insertion_sort(int *a,int n){
int key,i,j;
for(i=1;i<=n-1;i++){
    key=a[i];
    j=i-1;
    while(j>=0&&a[j]>key){
        swap(&a[j],&a[j+1]);
        j-=1;
    }
}
}
void bubble_sort(int *a,int n){
for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){//last elements would be sorted
    if(a[j]>a[j+1]){
        swap(&a[j],&a[j+1]);
    }
}
}
}

int main()
{
printf("\t\tSORTING ALGORITHMS\n\n");
int a[]={78,2,18,12,82,1};
int n=sizeof(a)/sizeof(a[0]);
printf("Original array is\n");
print_array(a,n);
printf("\n\n");
int k;
printf("Choose 1 for Selection sort\nChoose 2 for Insertion sort\nChoose 3 for Bubble sort\n\n");
scanf("%d",&k);
switch(k){

case 1:
selection_sort(a,n);
break;
case 2:
insertion_sort(a,n);
break;
case 3:
bubble_sort(a,n);
break;
}
printf("Sorted array is\n\n");
print_array(a,n);
return 0;
}
