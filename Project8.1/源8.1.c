#include <stdio.h>
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	if (num1 > num2)
//		printf("较大值是：%d\n", num1);
//	else
//		printf("较大值是：%d\n", num2);
//	return 0;
//}


//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max;
//	max= Max(num1, num2);
//	printf("Max=%d\n", max);
//
//	return 0;
//}
int main()
{
	int a = 0;//一个整型=4个字节=32个比特位
	int b = ~a;//~--按（二进制）取反
	//原码，反码，补码
	//负数在内存中存储的时候，存储的是二进制的补码，正数是原码
	// 数字最前面1代表负数，0代表正数
	// 由反码变为补码数字最后+1，由补码变为反码数字最后-1（只表示正负，没有实际含义 ）
	//a=00000000000000000000000000000000（补码）
	//a变为反码=11111111111111111111111111111111（这是b的补码）
	// b由补码变为反码=11111111111111111111111111111110
	//b由反码变为原码=10000000000000000000000000000001（所以答案是-1）
	printf("%d\n", b);//打印的是这个数的原码
	return 0;
}








