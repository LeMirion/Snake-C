int col_det(int l, int b, char p[l][b], int snakePos[][2], int len)
{ 
    for(int i = 0; i<len; i++)
	{
         for(int j = 0; j<len; j++)
		{
                 if(snakePos[0][0]==snakePos[i][j])
			{
		 	 return 1;                 
                 	}
		 else if(snakePos[0][0]>=l || snakePos[0][0]>=b)
			{
			 return 1;  
			 }
                }
         }
}
