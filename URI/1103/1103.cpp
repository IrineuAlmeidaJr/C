#include<stdio.h>

int main()
{
	int h1, m1, h2, m2;
	scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
	while (1)
	{
		h1=h1*60;
		h2=h2*60;
		if (h1==0 && h2==0 && m1==0 && m2==0)
			break;
		else
			if (h1==h2 && m1>=m2)
				printf("%d\n", 1440+(-1*(m1-m2)));
			else
				if (h1==h2 && m1<=m2)
					printf("%d\n", 1440+(m2-m1));
				else
					if(h1>h2 && m1>=m2)
						printf("%d\n", -1*((h1-h2-1440)+(m1-m2)));
					else
						if(h1>h2 && m1<=m2)
							printf("%d\n", -1*((h1-h2-1440)+(m2-m1)));
						else
							if (h1<h2 && m1>=m2)
								printf("%d\n", (h2-h1)+(m1-m2));
							else
								if (h1<h2 && m1<=m2)
									printf("%d\n", (h2-h1)+(m2-m1));
		
	scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

	}
	return 0;
}
