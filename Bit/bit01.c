
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
	printf("****Œ»Ý‚Ìó‘Ô****\n");

	if (s & poison)
	{
		printf("“Å\n");
	}
	if (s & Sleep)
	{
		printf("‡–°\n");
	}
	if (s & paralysis)
	{
		printf("–ƒáƒ\n");
	}
	if (s & Burn)
	{
		printf("‰Î\n");
	}
	if (s & AtkUp)
	{
		printf("UŒ‚—Íã¸\n");
	}
	if (s & AtkDown)
	{
		printf("UŒ‚—Í’á‰º\n");
	}
	if (s == Base)
	{
		printf("‰Šúó‘Ô\n");
	}
	printf("*********************\n");
}

void ChangeFlag(UINT* s) 
{
	int a;

	while (1)
	{
		printf("‚Ç‚Ìó‘Ô‚É‚µ‚Ü‚·‚©H\n");
		printf("1:“Å 2:‡–° 3:–ƒáƒ 4:‰Î 5:UŒ‚ª 6:UŒ‚« 0:“ü—ÍI—¹ ");
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
		default:  //1~6‚É“–‚Ä‚Í‚Ü‚ç‚È‚¢‚Æ‚«
		  break;
		}
	}
}

void ClearFlag(UINT* s)
{
	int a;

	while (1)
	{
		printf("‚Ç‚Ìó‘Ô‚ð‰ðœ‚µ‚Ü‚·‚©H\n");
		printf("1:“Å 2:‡–° 3:–ƒáƒ 4:‰Î 5:UŒ‚ª 6:UŒ‚« 7:‘S‰ñ•œ 0:“ü—ÍI—¹ ");
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
		default:  //1~6‚É“–‚Ä‚Í‚Ü‚ç‚È‚¢‚Æ‚«
			break;
		}
	}
}