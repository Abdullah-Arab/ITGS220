#include<stdio.h>
int main(){
    int i,j,row=0,column=0,notZero=1,sparse[30][3],array[30][30];
    printf(" Enter the number of Rows in the Array: ");
    scanf("%d",&row);

    printf("\n Enter the number of columnumns in the Array: ");
    scanf("%d",&column);
    printf("\nEnter The elements of the Array:\n");
        for(i=0;i<row;i++){
            for(j=0;j<column;j++){
            printf("\tArray[%d][%d]",i,j);
            scanf("%d",&array[i][j]);   }}
            for(i=0;i<row;i++){
            for(j=0;j<column;j++){
            if(array[i][j]!=0){
            sparse[notZero][0]=i;
            sparse[notZero][1]=j;
            sparse[notZero][2]=array[i][j];
            notZero++;  }}}
            sparse[0][0]=row;
            sparse[0][1]=column;
            sparse[0][2]=notZero-1;
            printf("The Sparse Array = [%d+1,3] = [%d,3]",notZero-1,notZero);
            printf("\n\trow\tcolumn\tval\n");
            for(i=0;i<notZero;i++){
            for(j=0;j<3;j++){
            printf("\t%d",sparse[i][j]);
            }
            printf("\n");
            }
            return 0;}