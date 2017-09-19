#include <iostream>
void swap(int *p,int *q){
    int temp = *p;
    *p=*q;
    *q=temp;
}

void max_heapify(int a[],int index,int size){
    
    int left_idx = index*2;
    int right_idx = index*2+1;
    int largest_idx = 0;
    if (left_idx<=size&&a[left_idx]>a[index])
    {
        largest_idx = left_idx;
    }else{largest_idx=index;}
    if (right_idx<=size&&a[right_idx]>a[largest_idx])
    {
        largest_idx=right_idx;
    }
    if(largest_idx!=index){
        swap(&a[index],&a[largest_idx]);
        max_heapify(a,largest_idx,size);
    }
}
int main(int argc, char const *argv[])
{
    int a[] = {27,17,3,16,13,10,1,5,7,12,4,8,9,0};
    int size = sizeof(a)/sizeof(int);
    for(int i=0;i<size;i++){
        max_heapify(a,i,size);
    }
     for(int i=0;i<size;i++){
        std::cout<<a[i]<<std::endl;
    }
    
    return 0;
}