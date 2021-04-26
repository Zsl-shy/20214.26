#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	//sizeof是获取大小、strlen是字符串长度，指\0之前的字符串长度 
	char arr1[]="abc";
	char arr2[]={'a','b','c'};
	printf("%d\n",sizeof(arr1));//4
	printf("%d\n",sizeof(arr2));//3
	printf("%d\n",strlen(arr1));//3
	printf("%d\n",strlen(arr2));//随机值 
	return 0;
}
