


/** lec_14 time 7.23

**  Time complexity bta3 l Function de= O(n)
**  (5ale balak).....Algorithm da ha3ml heap sort 3shan artabo + freq array
                     bs me7tag msa7ah msh sabta fa l size bta3o momken ykon kber gedan **/
					 
int array_MostRepeated_heapFrq(int *arr,int size,int *pnum)
{
    int i,max,min,count_size,max_r=0;
    max=arr[0];
    min=arr[0];
    for(i=0; i<size; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        else {}
        if(arr[i]<min)
        {
            min=arr[i];
        }
        else {}
    }
    count_size=max-min+1;
    int *count=(int*)calloc(count_size,sizeof(int));
    /** lazem check 3l memory lw mal2tsh feha mesa7a arga3 zero**/
    if(count==0)
    {
        return 0;
    }
    for(i=0; i<size; i++)
    {
        //ha3ml Frequency array
        count[arr[i]-min]++;/**tar7t - min 3shan momken awel element fe l array maykonsh=0**/
    }
    for(i=0; i<count_size; i++)
    {
        if(count[i]>max_r)
        {
            max_r=count[i];
            *pnum=i+min;
        }
        else {}
    }
    free(count);
    return max_r;
}

int mai()
{

	int arr3[]= {10,2,3,4,1,12,3,5,3,6,3,7,10,10,10,10,10};
    int size3=sizeof(arr3)/sizeof(*(arr3));
    int num;
    int repeat=array_MostRepeated_heapFrq(arr3,size3,&num);
    printf("the Max repeated =%d was found in num:%d\n",repeat,num);
	
	return 0;
}
	