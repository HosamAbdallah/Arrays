


/** Lec_9 **/

/* C program to swap two array with [2 equal size] */

void array_swap2(int *arr1,int size1,int *arr2,int size2)
{
    int i,temp;
	if(size1==size2)
    {
			for(i=0;i<size1;i++)
		{
			// swap arr2 in arr1
			temp=arr1[i];
			arr1[i]=arr2[i];
			arr2[i]=temp;
		}
		//ha return size1 to indicate lya en (size1=size2) 
		return size1;
    }
    else
	{
		return 0;
	}
}
int main()
{
    int arr1[]= {1,2,3,4,5,6};
    int arr2[]= {10,20,30,40,50,60};

    // ha2sem size l array kolo 3la size first elemnt=4 3shan ageb 3dad L elements
    int size1=sizeof(arr1)/sizeof(*(arr1));
    int size2=sizeof(arr2)/sizeof(*(arr2));

    printf("print arrays before swapping\n");
    printf("\n");
    array_print(arr1,size1);
    array_print(arr2,size2);
    printf("\n");
	
	/** lazem size1=size2 3shan Function (array_swap2) tsht8al**/
    printf("print arrays after swapping\n");
    printf("\n");
    int after_swap= array_swap2(arr1,size1,arr2,size2);
	 printf("arrya_swap output=%d\n",after_swap);
	 
    array_print(arr1,size1);
    array_print(arr2,size2);



    return 0;
}





