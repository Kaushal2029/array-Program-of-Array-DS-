#include<stdio.h>
int main() {
	
	int a[30];
	int i,pos,num,size;
	
	printf("Enter the Array size:->");
	scanf("%d",&size);
	
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the Position:->");
	scanf("%d",&pos);
	printf("Enter the New Element of Array:->");
	scanf("%d",&num);
	
	if(pos>size||pos<=0)
	{
		printf("Invaild pos!!");
	}
	else
	{
		for(i=size;i>pos;i--){
			a[i]=a[i-1];
		}
		a[pos]=num;
		size++;
		for (i=0;i<size;i++){
			printf("%d",a[i]);
			}
			
	} return 0;
}
