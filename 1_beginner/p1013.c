  #include <stdio.h>
  #include <stdlib.h>

  int main()
    {
    int v1, v2, v3, MaiorAB = 0, MaiorABC = 0;
    
    scanf("%d", &v1);
    scanf("%d", &v2);
    scanf("%d", &v3);

    MaiorAB = (v1+v2+abs(v1-v2))/2;
    MaiorABC = (v3+MaiorAB+abs(v3-MaiorAB))/2;  
    printf("%d eh o maior", MaiorABC); 
    
    printf("\n");
    return(0);
    }
