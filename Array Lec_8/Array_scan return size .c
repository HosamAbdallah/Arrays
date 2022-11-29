


/** C program to scan an array from user and print it**/

/** Lec_8 **/

int array_scan2(int *arr)
{
    int size,i;
    printf("enter your size numbers:");
    scanf("%d",&size);
    printf("enter your number not more than 100:\n");
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
	// return size 3shan a5le l 3dad L elements bta3t L array....L user howa ely bay7ddha 
    return size;
}

int main()
{
	int arr3[]= {0};
	int size=array_scan2(arr3);
	//5ale array_print ta5od l size ely fe element l enta d5ltha w kol mara t3del 3la nfs element
    array_print(arr3,size);

    return 0;
}






