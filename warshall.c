#include<stdio.h>
int main(){
	int a[10][10],size,i,j,k;
	printf("\nEnter the size");
	scanf("%d",&size);
	for(i=1;i<=size;i++)
		for(j=1;j<=size;j++)
			scanf("%d",&a[i][j]);
	printf("\nEnter the boolean directed graph");
	for(k=1;k<=size;k++)
		for(i=1;i<=size;i++)
			for(j=1;j<=size;j++)
				a[i][j]=a[i][j]||a[i][k]&&a[k][j];
	
	printf("\nTransitive closure: \n");
	for(i=1;i<=size;i++){
		for(j=1;j<=size;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
}

