

/** C program to find Most Repeated Num in array sorted...(metrateb) using (1)loop **/

/************** Lec_9 **************/


int array_MostRepeated_sorted(int *arr,int size,int *pnum)
{
    int i,count=0,max=0;
    //new counter to indicate the num of loops
    int c2=0; // ba7seb meno 3aded lfat loop 
    for(i=0; i<size; i++)
    {
        c2++;
        if(arr[i]==arr[i+1])
        {
            count++;
        }
        else
        {
            if(count>max)
            {
                max=count;
                *pnum=arr[i];
            }
            count=0;
        }

    }
    //c2=(n*n)=size4*size4; ....when n is the size4=sizeof(arr4)/sizeof(*(arr4));
    printf("c2=%d\n",c2);
    return max+1;
}



int main()
{

    int arr4[]= {1,1,1,2,2,5,4,6,8,9,10,12,12,12,12,12};
    int num4;
    int size4=sizeof(arr4)/sizeof(*(arr4));
    printf("size4=:%d\n",size4);
    int repeat2=array_MostRepeatedNumber(arr4,size4,&num4);
    printf("\n Max repeat is:%d  the num is:%d\n",repeat2,num4);
    return 0;
}






