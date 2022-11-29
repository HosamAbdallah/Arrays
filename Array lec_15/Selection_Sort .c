


/** Selection Sort ***/
void selection_sort(int* arr,int size)
{
    int temp,last=size-1;
    for(int j=0; j<size; j++)
    {
        int max=0;
        for(int i=0; i<size-j; i++)/** 3amlt i<size-j....3shan kol mara malfesh l array kolo */
        {
            if(arr[i]>arr[max])/** ba7ot akbar element fe...arr[max]*/
            {
                max=i;
            }
        }
        /** swap max to last**/
        temp=arr[max];
        arr[max]=arr[last];
        arr[last]=temp;
        last--;
    }
}




int main()
{

    int arr[]= {22,42,8,9,1,3,5,7,9,11,13,15};
    int size=sizeof(arr)/sizeof(*(arr));
    array_print(arr,size);
    selection_sort(arr,size);
    array_print(arr,size);
    return 0;
}

