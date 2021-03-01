#include<stdio.h>
#include<Windows.h>
int main()
{
	unsigned int i;
	for (i = 9;i >= 0;i--)
	{
		printf("%u\n", i);
		Sleep(1000);//休息一秒
	}
	return 0;
}

int main()
{
	char a[1000];
	int i;
	for (i = 0;i < 1000;i++)
	{
		a[i] = -1 - i;
	}
	//-128
	//11111111111111111111111111111111
	//-129
	//100000000000000000000000000000001
	//111111111111111111111111111111110
	//111111111111111111111111111111111
	//000000000000000000000000001111111
	//所以-129就是127
	printf("%d", strlen(a));//strlen是统计字符串的长度-‘\0’是字符串的结束表示
	                        //'\0'的ASCII码值0
	return 0;
}

unsigned char i = 0;
int main()
{
	for (i = 0;i <= 255;i++)
	{
		printf("hello world\n");
		//无符号，所以都大于0，到255之后又变为0了，所以死循环
	}
	return 0;
}