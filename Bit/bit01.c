
#include<stdio.h>

enum BitState
{
	Base = 0,               //00000000
	poison = 1 << 0,        //00000001
	Sleep = 1 << 1,         //00000010
	paralysis = 1 << 2,     //00000100
	Burn = 1 << 3,          //00001000
	AtkUp = 1 << 4,         //00010000
	AtkDown = 1 << 5           //00100000
};

typedef unsigned int UINT;

void DisplayStatus(UINT s);
void ChangeFlag(UINT* s);
void ClearFlag(UINT* s);

main()
{
	UINT MyState = Base;

	ChangeFlag(&MyState);
	DisplayStatus(MyState);

	ClearFlag(&MyState);
	DisplayStatus(MyState);
}

void DisplayStatus(UINT s)
{
	printf("****現在の状態****\n");

	if (s & poison)
	{
		printf("毒\n");
	}
	if (s & Sleep)
	{
		printf("睡眠\n");
	}
	if (s & paralysis)
	{
		printf("麻痺\n");
	}
	if (s & Burn)
	{
		printf("火傷\n");
	}
	if (s & AtkUp)
	{
		printf("攻撃力上昇\n");
	}
	if (s & AtkDown)
	{
		printf("攻撃力低下\n");
	}
	if (s == Base)
	{
		printf("初期状態\n");
	}
	printf("*********************\n");
}

void ChangeFlag(UINT* s) 
{
	int a;

	while (1)
	{
		printf("どの状態にしますか？\n");
		printf("1:毒 2:睡眠 3:麻痺 4:火傷 5:攻撃↑ 6:攻撃↓ 0:入力終了 ");
		scanf("%d", &a);
		if (a == 0)
		{
			break;
		}

		switch (a)
		{
		case 1:
		  *s |= poison;
		  break;
		case 2:
		  *s |= Sleep;
		  break;
		case 3:
		  *s |= paralysis;
		  break;
		case 4:
		  *s |= Burn;
		  break;
		case 5:
		  *s |= AtkUp;
		  break;
		case 6:
		  *s |= AtkDown;
		  break;
		default:  //1~6に当てはまらないとき
		  break;
		}
	}
}

void ClearFlag(UINT* s)
{
	int a;

	while (1)
	{
		printf("どの状態を解除しますか？\n");
		printf("1:毒 2:睡眠 3:麻痺 4:火傷 5:攻撃↑ 6:攻撃↓ 7:全回復 0:入力終了 ");
		scanf("%d", &a);
		if (a == 0)
		{
			break;
		}

		switch (a)
		{
		case 1:
			*s &= ~poison;
			break;
		case 2:
			*s &= ~Sleep;
			break;
		case 3:
			*s &= ~paralysis;
			break;
		case 4:
			*s &= ~Burn;
			break;
		case 5:
			*s &= ~AtkUp;
			break;
		case 6:
			*s &= ~AtkDown;
			break;
		case 7:
			*s = Base;
		default:  //1~6に当てはまらないとき
			break;
		}
	}
}