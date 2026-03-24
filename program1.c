include <stdio.h>
int main() {
int A[10][10],
B[10][10], 
R[10]
[10], r, c, i, j, k, ch;
printf("Rows and
columns: 
");
scanf("%d%d",&r,
&c);
printf("Matrix
A:\n");
for(i=0;i<r;i++)
for(j=0;j<c;j++)
scanf("%d",&A[i]
[j]);
printf("Matrix
B:\n");
for(i=0;i<r;i++)
for(j=0;j<c;j++)
scanf("%d",&B[i]
[j]);
printf("1.Add
2.Sub 
3.Mul
4.Transpose
A\nChoice: 
");
scanf("%d",&ch);
if(ch==1){
for(i=0;i<r;i++){
for(j=0;j<c;j++){
R[i][j]=A[i][j]+B[i]
[j]; 
printf("%d
",R[i][j]); 
}
printf("\n"); } }
else if(ch==2){
for(i=0;i<r;i++){
for(j=0;j<c;j++){
R[i][j]=A[i][j]-B[i]
[j]; 
printf("%d
",R[i][j]); 
}
printf("\n"); } }
else if(ch==3){
for(i=0;i<r;i++){
for(j=0;j<c;j++){
R[i][j]=0;
for(k=0;k<c;k++)
Rresult[i][j] += A[i][k] * B[k][j];
 }
 printf("Result of Multiplication:\n");
 for(i=0;i<r1;i++){
 for(j=0;j<c2;j++)
 printf("%d ", result[i][j]);
 printf("\n");
 }
 break;
 case 4: // Transpose of A
 printf("Transpose of Matrix A:\n");
 for(i=0;i<c1;i++){
 for(j=0;j<r1;j++)
 printf("%d ", A[j][i]);
 printf("\n");
 }
 break;
 default:
 printf("Invalid choice!\n");
 }
 return 0;
}
    
