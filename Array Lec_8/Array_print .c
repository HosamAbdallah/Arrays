

void array_print(int *arr,int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("%2d  ",arr[i]); // arr[i]....*(arr+i) there're same
    }
     printf("\n");
}

int main()
{
    int arr[10]= {1,3,5,7,9};
    array_print(arr,10);


//notes
	
	//hayzwed 40  [ int arr[10] it's step=10*4=40].... 3shan haytba3 3nwan l array l ba3do 
	printf("%d\n",&arr+1);
	
	//arr[0] print awel element=1 .... *(arr) haytba3 tany element 
    printf("%d  %d\n",arr[0],*(arr+1));
	
	//haytba3 talet element=3
    printf("==========%d\n",*(arr+2));


  return 0;
}











