#include <stdio.h>

int main(void) { 
int a[10],b[10],c[10],d[10];
int i,j;
 int n,m,k=0,l=0;
  printf("enter the size of a ");
  scanf("%d",&n);
printf("enter the size of b ");
  scanf("%d",&m);
printf("enter the elements of a ");
{
for(i=0;i<n;i++)
  scanf("%d",&a[i ]);}
printf("enter the elements of b ");
 { for(i=0;i<m;i++)
 scanf("%d",&b[i ]);
}  for(i=0;i<n;i++)
  {for(j=0;j<m;j++)
{
if(a[i ]==b[j ])  
c[k]= a[i];
k++;
}}
for(i=0;i<n;i++){
for(k=0;k<n;k++){
if(a[i]=!c[k])
d[l]=a[i];
l++;
}}
l=0;
for(j=0;j<n;j++){
for(k=0;k<n;k++){
if(b[j]=!c[k])
d[l]=b[j];
l++;
}}
  for(l=0;l<n;l++){
  printf(" %d",d[l]);
 } return 0;
}
