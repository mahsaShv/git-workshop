#include <stdio.h>
int definePart1( int n , int i ){
	int k;
	for ( k = 1 ; k <= n ; k++ )
	{
		
		if ( i >= ( k - 1 ) * n - ( k - 2 ) && i <= k * n - ( k - 1 ) )
			return k;
	}
	return 0;
}
int definePart( int n , int i)
{
	int partCounter = 0 , LengthCounter = n ,Counter = 1;

	for( ; LengthCounter >= 0 ; LengthCounter--  )
	{
		partCounter+=LengthCounter;

		if( i <= partCounter ) return Counter;
		Counter++;
	}
	//change miknm
		
	return 0;

}
int main()
{
	int n;
	int i , j = 1;
	scanf("%d" , &n );
	int part;
	
	for( i = 1 ; i <= n * ( n + 1 ) / 2 || j <= n - 1 ; i++ ){
		if ( i > n * ( n + 1 ) / 2 )
		{
			i = 1;
			printf("\n");
			j++;
		}
		part = definePart( n , i );
		// printf("\n%d" , part);

		

		if ( part % 2 == 1 )
		{
			part = n - part + 1;
			
			if ( n % 2 == 1 ){
				
				if ( i + j == n / 2 + 1 + part / 2 + 1 + ( n - part ) * ( n + part + 1 ) / 2 )
					printf("/");
				else 
					printf(" ");
			}
			else{

				if ( i + j == n / 2 + ( n - part ) * ( n + part + 1 ) / 2 + 1 + part / 2 )
					printf("/");
				else
					printf(" ");

			}
				     
				
		}
		else{

			part = n - part + 1;

			if ( n % 2 == 1 )
			{
				
				
				if ( j == i - ( ( n - part ) * ( n + part + 1 ) / 2 - ( ( n - 1 - part ) / 2 ) ) )
					printf("\\");
				else
					printf(" ");
					
			}
			else{
				// printf("\nformul = %d" ,i - ( ( n - part ) * ( n + part + 1 ) / 2 - ( ( n - 1 - part ) / 2 ) ) );
				if ( j == i - ( ( n - part ) * ( n + part + 1 ) / 2 - ( ( n - 1 - part ) / 2 ) ) )
					printf("\\");
				else
					printf(" ");



			}


		}






		


	}

	
	return 0;
}