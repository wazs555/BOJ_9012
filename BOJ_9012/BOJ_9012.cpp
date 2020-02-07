#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct Stack {
	int data[110000];
	int len = 0;

	void push(int x)
	{
		data[len++] = x;
	}
	int pop()
	{
		if (len <= 0)
		{
			printf("NO\n");
			return -1;
		}
		data[len - 1] = 0;
		len--;
	}
	int empty()
	{
		if(len == 0) return 1;
		else
		{
			return 0;
 }
	}
}S;
int main()
{
	char string[55];
	int length, n;

	scanf("%d", &n); // 명령의 개수 입력

	for (int i = 0; i < n; i++)
	{
		S s1; // 구조체 선언
		int k = -5;
		scanf("%s", string);
		length = strlen(string);
		
		for (int j = 0; j < length; j++)
		{
			if (string[j] == '(')
			{
				s1.push(1);
			}
			else
			{
				k = s1.pop();
				if (k == -1) break;

			}
		}
		if (k == -1)
		{
			continue;
		}
		else
		{
			if (s1.empty()) printf("YES\n");
			else printf("NO\n");
		}
		k = 0;
	}


	return 0;
}