class Solution {
    public void setZeroes(int[][] matrix) {
        int m=matrix.length;
        int n=matrix[0].length;
        int x=1;
        int y=1;
        //check in fist row and make x 0.
        for(int j=0;j<n;j++)
        {
            if(matrix[0][j]==0)
            {
                x=0;
            }
        }
        //check in first column and make y=0.
        for(int i=0;i<m;i++)
        {
            if(matrix[i][0]==0)
            {
                y=0;
            }
        }
        // agar first row and first column cchhod kar kahi bache hue matrix me zero ata hai to first row and column me usi ke samne 0 bana dete hai jo x na dy ko show karega.
        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        // jab first row me jaha 0 ata hai us sare column ko 0 bana dete hai
        for(int j=1;j<n;j++)
        {
            if(matrix[0][j]==0)
            {
                for(int i=0;i<m;i++)
                {
                    matrix[i][j]=0;
                }
            }
        }
         // jab first column me jaha 0 ata hai us sare row ko 0 bana dete hai
         for(int i=1;i<m;i++)
        {
            if(matrix[i][0]==0)
            {
                for(int j=0;j<n;j++)
                {
                    matrix[i][j]=0;
                }
            }
        }
        //agar y=0 rah jata hai to first coumn  ke sare lement 0 bana dete hai.
        if(y==0)
        {
            for(int i=0;i<m;i++)
            {
               matrix[i][0]=0;
            }
        }
         //agar x=0 rah jata hai to first row  ke sare lement 0 bana dete hai.
        if(x==0)
        {
            for(int j=0;j<n;j++)
            {
               matrix[0][j]=0;
            }
        }


        
    }
}
