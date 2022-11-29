


/** Lec_9 **/

/* C program to swap two array with [2 different size] */

void array_swap(int*arr1,int size_1,int*arr2,int size_2)
{
    int temp;
    if(size_1>size_2)
    {
        size_1=size_2;
    }
    for(int i=0; i<size_1; i++)
    {
        // swap arr2 in arr1
        temp=arr1[i];
        arr1[i]=arr2[i];
        arr2[i]=temp;
    }
}

/*********************************************************/

void array_swap_2(int*a,int size1,int*b,int size2)
{
    int i,temp;
    if(size1==size2)
    {
        for(i=0;i<size1;i++)
        {
            temp=a[i];
            a[i]=b[i];
            b[i]=temp;
        }
    }
    else if(size1>size2)
    {
        // Assign in smaller array
        for(i=0;i<size2;i++)
        {
            temp=a[i];
            a[i]=b[i];
            b[i]=temp;
        }
    }
    else
    {
        for(i=0;i<size1;i++)
        {
            temp=a[i];
            a[i]=b[i];
            b[i]=temp;
        }
    }
}
/************************************************************/



int main()
{
	int arr1[]= {1,2,3,4};
    int arr2[]= {10,20,30,40,50};

    // ha2sem size l array kolo 3la size first elemnt=4 3shan ageb 3dad L elements
    int size1=sizeof(arr1)/sizeof(*(arr1));
    int size2=sizeof(arr2)/sizeof(*(arr2));

    printf("print arrays before swapping\n");
    printf("\n");
    array_print(arr1,size1);
    array_print(arr2,size2);
    printf("\n");
	
    printf("print arrays after swapping\n");
    printf("\n");
    array_swap(arr1,size1,arr2,size2);
    array_print(arr1,size1);
    array_print(arr2,size2);



    return 0;
}



















