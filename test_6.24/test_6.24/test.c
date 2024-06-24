#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int Fib(int n)
//{
//	if (n <= 2)
//		return n;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int n = 10;
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	int n = 10;
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d ", &arr[i]);
//	}
//	int k = 0;
//	scanf("%d", &k);
//	int j = 0;
//	int count = 0;
//	for (i = 0; i < n - count; i++)
//	{
//		if (arr[i] == k)
//		{
//			for (j = i; j < 9; j++)
//			{
//				arr[j] = arr[j + 1];
//			}
//			count++;
//		}
//	}
//	for (i = 0; i < n - count; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int arr[100];
//	int max = 0;
//	int min = 100;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i] > max)
//			max = arr[i];
//		if (arr[i] < min)
//			min = arr[i];
//	}
//	printf("%d\n", max - min);
//	return 0;
//}

//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch) == 1)
//	{
//		if (ch >= 'a' && ch <= 'z')
//			printf("%c\n", ch = ch - 32);
//		else if (ch >= 'A' && ch <= 'Z')
//			printf("%c\n", ch = ch + 32);
//		getchar();
//	}
//	return 0;
//}

//int main()
//{
//	char ch = 0;
//	while (scanf(" %c", &ch) == 1)
//	{
//		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//		{
//			printf("%c is an alphabet.\n",ch);
//		}
//		
//		else
//		{
//			printf("%c is not an alphabet.\n",ch);
//		}
//	}
//	return 0;
//}

//#include<math.h>
//int main()//655:6*55+65*5. 1461 :1*461+14*61+146*1
//{
//	int i = 0;
//	for (i = 10000; i < 100000; i++)
//	{
//		int j = 0;
//		int sum = 0;
//		for (j = 1; j <= 4; j++)
//		{
//			int k = (int)pow(10, j);
//			sum = sum + (i / k) * (i % k);
//		}
//		if (i == sum)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}

//int main()//15:1111//8:1000
//{
//	int n = 3;
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int n1 = 1999;
//	int n2 = 2299;
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n1 >> i) & 1) != ((n2 >> i) & 1))
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int n = 10;
//	int i = 0;
//	printf("偶数位：");//00000000 00000000 00000000 00001111
//	for (i = 30; i >= 0; i--)
//	{
//		printf("%d", (n >> i) & 1);
//		i--;
//	}
//	printf("\n");
//	printf("奇数位：");
//	for (i = 31; i >= 0; i--)
//	{
//		printf("%d", (n >> i) & 1);
//		i--;
//	}
//	printf("\n");
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 25;
//	int b = 30;
//	int i = a > b ? a : b;
//	for (;; i++)
//	{
//		if (i % a == 0 && i % b == 0)
//		{
//			printf("%d\n", i);
//			break;
//		}
//	}
//	return 0;
//}

//#include<string.h>
//void reverse(char* string,int left, int right)
//{
//	while (left < right)
//	{
//		char tmp = string[left];
//		string[left] = string[right];
//		string[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char string[] = "I like BeiJing.";
//	int len = strlen(string);
//	int left = 0;
//	int right = len - 1;
//	reverse(string, left, right);
//	printf("%s\n", string);//.gniJieB ekil I
//	int i = 0;
//	int j = 0;
//	while (i<len - 1)
//	{
//		for (; j < len; j++)
//		{
//			if (string[j] == ' ')
//				break;
//		}
//		reverse(string, i, j - 1);
//		i = ++j;
//	}
//	printf("%s\n", string);
//	return 0;
//}

#include<string.h>
void reverse(char* left, char* right)
{
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
int main()
{
	char arr[] = "I like BeiJing.";
	int len = strlen(arr);
	reverse(arr, arr + len - 1);
	printf("%s\n", arr);

	char* start = arr;
	while (*start)
	{
		char* end = start;
		while (*end != ' ' && *end != '\0')
			end++;
		reverse(start, end - 1);
		if (*end != '\0')
			start = end + 1;
		else
			start = end;
	}
	printf("%s\n", arr);

	return 0;
}