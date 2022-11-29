



void array_print(int *arr,int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("%2d  ",arr[i]); // arr[i]....*(arr+i) there're same
    }
     printf("\n");
}
int IsPrime(int num)
{
    if( (num==0)||(num==1) )
       {
           return 0;
       }
       int i;
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            //not prime
            return 0;
        }
    }
    return 1;
}

void array_deletePirme(int* arr,int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        if(IsPrime(arr[i]))
        {
            // kda ha3ml delete ll Prime Numbers
            arr[i]=0;
        }
    }
}

int main()
{

		int arr[10]= {1,2,3,5,7,9,11,12,16,23};
		array_print(arr,10);
        array_deletePirme(arr,10);
        array_print(arr,10);
		   return 0;
}

















