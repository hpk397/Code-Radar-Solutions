 #include <stdio.h>
int main()
{
	int  i, j, Count, n;	
 	scanf("%d", &n);               //Declare size array	
    int a[n], Freq[n];            //Declare two arrays
 	for (i = 0; i < n; i++)       //Initialize both the arrays
	{
    	    scanf("%d", &a[i]);
    	    Freq[i] = -1;         /* Initially initialize frequencies to -1 */
   	}      
   //Count the frequency of each element
	for (i = 0; i < n; i++)
	{
		Count = 1;
		for(j = i + 1; j < n; j++)
		{
    		if(a[i] == a[j])    //Check for duplicate elements
    		{
    			Count++;
    			Freq[j] = 0;    /* Make sure not to count frequency of same element again */
    		}
    	}
    	if(Freq[i] != 0)        /* If frequency of current element is not counted */
    	{
    		Freq[i] = Count;
		}
	}
    /* Print frequency of each element*/
  	for (i = 0; i < n; i++)
  	{
  		if(Freq[i] != 0)        
  		{
  			printf("%d %d\n", a[i], Freq[i]);
		}		
  	}	     
 	return 0;
}