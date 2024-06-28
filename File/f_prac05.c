
#include<stdio.h>
#define MapNum 3
#define H 5   //H(Height:高さ)
#define W 10  //W(Width:幅)

typedef struct 
{
	int m_map[H][W];
}Map;

void DrawMap(Map m);
void SetMap(char* filename, Map* m);

main()
{
	Map MapData;

	char* MapFileNama[MapNum] = { "map0.txt","map1.txt","map2.txt" };
	int select;

	printf("表示するマップ(0,1,2)>");
	scanf("%d", &select);

	SetMap(MapFileNama[select], &MapData);
	DrawMap(MapData);
}

void SetMap(char* filename, Map* m)
{
	FILE* fp;
	char ch;
	int i, j;
	
	if (fp = fopen(filename, "r")) 
	{
		for (i = 0; i < H; i++)
		{
			for (j = 0; j < W; j++) 
			{
				ch = fgetc(fp);
				m->m_map[i][j] = ch - '0';
			}
			fgetc(fp);
		}
		fclose(fp);
	}
}

void DrawMap(Map m)
{
	int i, j;
	for (i = 0; i < H; i++)
	{
		for (j = 0; j < W; j++)
		{
			if (m.m_map[i][j] == 1)
			{
				printf("■");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
