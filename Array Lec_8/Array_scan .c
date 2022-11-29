
/** C program to scan an array from user and print it**/

int array_scan(int* arr)
{
    int i,size;
    printf("enter your size not more than 100:\n");
    scanf("%d",&size);
    printf("enter your number not more than 100:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    return size;
}

int main()
{
	int arr3[10]= {0};
    array_scan2(arr3);
    array_print(arr3,10);
	return 0;
}

















