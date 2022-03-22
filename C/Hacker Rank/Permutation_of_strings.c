#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int next_permutation(int n, char **s)
{
	int m;
	char *temp;
	if (m < n)
	{
		for (int i = 0; i < n; i++)
		{
			temp = s[0];
			for (int q = 0; q < n; q++)
			{
				s[q] = s[q + 1];
			}
			s[n - 1] = temp;
		}
		m++;
	}
	else
	{
		return 0;
	}
}

int main()
{
	char **s;
	int n;
	scanf("%d", &n);
	s = calloc(n, sizeof(char *));
	for (int i = 0; i < n; i++)
	{
		s[i] = calloc(11, sizeof(char));
		scanf("%s", s[i]);
	}
	do
	{
		for (int i = 0; i < n; i++)
			printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
	} while (next_permutation(n, s));
	for (int i = 0; i < n; i++)
		free(s[i]);
	free(s);
	return 0;
}