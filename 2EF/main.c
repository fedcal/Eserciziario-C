#include <stdio.h>
#include <stdlib.h>

void CaricareMatrice(int x, int y, float M[x][y]);
void SommareMatrici(int x, int y, float M1[x][y], float M2[x][y]);
void MoltiplicareMatricePerN(float p, int x, int y, float M[x][y]);
void VisualizzareMatrice(int x, int y, float M[x][y]);

int main()
{
    int n1=0,m1=1,n2=1,m2=0,scelta=4;
    float moltiplicatore=0;
    printf("\n Inserire le dimensioni delle due matrici (le dimensioni delle righe e delle colonne delle due matrici devono essere uguali) \n");
    while((n1!=n2)&&(m1!=m2)){
        printf("\n Inserire numero righe prima matrice \n");
        scanf("%d",&n1);
        printf("\n Inserire numero colonne prima matrice \n");
        scanf("%d",&m1);
        printf("\n Inserire numero righe seconda matrice \n");
        scanf("%d",&n2);
        printf("\n Inserire numero colonne seconda matrice \n");
        scanf("%d",&m2);
    }

    int Mat1[n1][m1];

    int Mat2[n2][m2];
    CaricareMatrice(n1,m1,Mat1);
    VisualizzareMatrice(n1,m1,Mat1);
    CaricareMatrice(n2,m2,Mat2);
    VisualizzareMatrice(n2,m2,Mat2);
    printf("\n SOMMA DELLE MATRICI \n");
    SommareMatrici(n1,m1,Mat1,Mat2);
    printf("\n Inserire il numero che dovra' moltiplicare la matrice: \n");
    scanf("%f",&moltiplicatore);
    printf("\n Inserire 1 per moltiplicare la prima matrice, 2 per moltiplicare la seconda matrice \n");
    scanf("%d",&scelta);
    if(scelta==1)
        MoltiplicareMatricePerN(moltiplicatore,n1,m1,Mat1);
    else
        MoltiplicareMatricePerN(moltiplicatore,n2,m2,Mat2);
}

void CaricareMatrice(int x, int y, float M[x][y]){
    int i,j;
    i=0;
    printf("\nInserimento matrice %dx%d\n",x,y);
    while(i<x){
        j=0;
        printf("\n");
        while(j<y)
            {
                printf("\nMat[%d][%d]: ",i,j);
                scanf("%f",&M[i][j]);
                j++;
            }
        i++;
    }

}

void VisualizzareMatrice(int x, int y, float M[x][y]){
    int i,j;
    i=0;
    printf("\nVisualizzazione Matrice:");
    while(i<x){
        j=0;
        printf("\n");
        while(j<y){
            printf("%f\t",M[i][j]);
            j++;
        }
        i++;
    }
}

void SommareMatrici(int x, int y, float M1[x][y], float M2[x][y]){
    int i,j,l,m;
    float M3[x][y];
    i=0;
    while(i<x){
        j=0;
        while(j<y)
            {
                M3[i][j]=(M1[i][j])+(M2[i][j]);
                j++;
            }
        i++;
    }

    VisualizzareMatrice(x,y,M3);
}

void MoltiplicareMatricePerN(float p, int x, int y, float M[x][y]){
    int i,j;
    i=0;
    while(i<x){
        j=0;
        while(j<y)
            {
                M[i][j]=M[i][j]*p;
                j++;
            }
        i++;
    }
    VisualizzareMatrice(x,y,M);
 }

