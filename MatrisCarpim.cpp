#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *p = NULL;
    int n1,m1;
    int n2,m2;
    int i, j;  
    int k=0,s=0;
    if((p = fopen("matris.txt", "r")) != NULL)
	{ 
        fscanf(p, "%d" "%d", &n1, &m1);
        int matris1[n1][m1];
        int A[n1*m1];
        for(i = 0; i < n1; i++)
		{         
            for(j = 0; j < m1; j++)
			{             
                fscanf(p, "%d", &matris1[i][j]);
                A[k]=matris1[i][j];  
                k++;
            }    
        }
        fscanf(p, "%d" "%d", &n2, &m2);
        int matris2[n2][m2];
        int B[n2*m2];
        for(i = 0; i < n2; i++)
		{         
            for(j = 0; j < m2; j++)
			{             
                fscanf(p, "%d", &matris2[i][j]);
                B[s]=matris2[i][j];  
                s++;
            }    
        }
        if(m1 != n2)
		{
            printf("Ilk matrisin sutun sayisi ile ikinci matrisin satir sayisi esit olmalidir.\n");
        }
         else //else içinde çarpım işlemini yapıyoruz
		{
			int carpim_boyutu = n1 * m2;
			int N = n2;
			int carp[carpim_boyutu] ;
			for(int o =0; o< carpim_boyutu ; o ++) //intilaze etmek için boyut kadar 0 giriyoruz.
			{
				carp[o]=0;
			}
			int x = 0;			
			for (int s = 0; s < carpim_boyutu; s=s+m2)
			{
			for(int y = 0; y < m2; y++)
			{
				int kontrol = 0;
				for (int p = 0; p < N; p++) 
				{
					carp[s+y] = carp[s+y] + (A[x + p] * B[y + kontrol]);
					kontrol = kontrol + m2;
				}
			}
			x = x + N;
			}
			for (int x = 0; x < carpim_boyutu  ; x++) //carpım sonucunu ekrana yazdıran döngü
			{
				printf("%d ", carp[x]);
				if ((x+1) % m2 == 0) 
				{
					printf("\n");
				}
			}
            FILE *f = NULL; //carpım sonucunu dosyaya yazdıran işlemler
            f = fopen("sonuc.txt","w");
            for (i = 0; i< carpim_boyutu ; i++) 
			{ 
                 
                    fprintf(f,"%2d ",carp[i]); 
                if((i+1)% m2 ==0)
            		fprintf(f,"\n");     
            } 
            fclose(f);
        }  
    }
    else
	{	
    	printf("Dosya bulunamadi.");
	}
    fclose(p); 
}
