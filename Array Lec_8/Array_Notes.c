

/** Array_Notes **/ 
//lec.9 at (9.22)

void main(void)
{
    int arr[5]={10,20,30,40,50};
    printf("%d\n",*arr);//OUT: 10 ..... index 0 -> first element
    printf("%d\n", *(arr+2) );//OUT: 30 ..... index 2 -> third element
    printf("%d\n", *arr+2 );
    /* OUT: 10+2=12 ... hena haynfez l (*) dereference l awel
                        ra7 gab address first element w zwed 3aleh 2
    */
}