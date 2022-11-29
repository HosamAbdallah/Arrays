

/** C program to find Most Repeated Num in array doesn't sorted...(msh metrateb) using (2)loop **/

/************** Lec_9 **************/


//mono numbers from 0 to 9
int array_MostRepeatedNumber_mono(int*arr,int size,int *pnum)
{
    int i,max=0;
    //count[10] da array mn 10 elements fe {{count[0]=0,count[1]=0,cont[2]=0.....,count[9]=0}
    int count[10]={0};
    for(i=0;i<size;i++)
    {
        //Ex:count[arr[0]]=count[1]=1
        count[arr[i]]++;
    }
    for(i=0;i<10;i++)
    {
        if(count[i]>max)
        {
            max=count[i];
            *pnum=i;
        }
    }
    return max;
}

int main()
{
	
	int arr4[]= {1,3,2,1,1,2,2,5,4,6,8,9,2,0};
    int num4;
    int size4=sizeof(arr4)/sizeof(*(arr4));
    printf("size4=:%d\n",size4);
	
    int repeat2=array_MostRepeatedNumber_mono(arr4,size4,&num4);
    printf("\n Max repeat is:%d  the num is:%d\n",repeat2,num4);
    return 0;
}








