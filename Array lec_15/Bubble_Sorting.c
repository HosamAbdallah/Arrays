

/****** Bubble Sorting *******/

/** Bubble Sort bybdel kol l element bl b3do **/

void Bubble_sort(int* arr,int size)
{
    /**flag_sort creates to check if array is sorted or not...3shan y2lel 3dad l lfat **/
    int flag_sort=0; 
    for(int j=0; j<size; j++)/** loop de bt3ed l code l gowaha */
    {
        flag_sort=1;
        for(int i=0; i<size-1-j; i++) /** [i<size-1-j]...3shan a3ml optmisition l 3dad l lfat**/
        {
            /** if(arr[i]<arr[i+1])...de lw 3ayez arteb mn l kber ll so8yer */
            if(arr[i]>arr[i+1])
            {
                /** swap using Temp */
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
                flag_sort=0;
            }
        }
        if(flag_sort==1)
        {
            break;
        }
    }
}


int main()
{
    int size;
    int arr[]= {22,42,8,1,3,5,7,9,11,13,15};
    size=sizeof(arr)/sizeof(*(arr));
    array_print(arr,size);
    array_sorting(arr,size);
    array_print(arr,size);
    return 0;
}