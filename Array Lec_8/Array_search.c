
/*** C program to search for an element and his index **/
/** linearSearch is O(n) lw array msh metrateb 
	             is O(1) lw array metrateb      */
int array_linearSearch(int *arr,int size,int num)
{
    int i;
    for(i=0; i<size; i++)
    {
        if(arr[i]==num)
        {
            // i....hyrga3le raqam l index
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[10]= {1,3,5,7,9};

    // (2)
    int num;
    scanf("%d",&num);
    int index=array_search(arr,10,num);
    if(index== -1)
    {
        printf("not found");
    }
    else
    {
        printf("num:%d found at index:%d",num,index);
    }

    return 0;
}























