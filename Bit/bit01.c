
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
	printf("****���݂̏��****\n");

	if (s & poison)
	{
		printf("��\n");
	}
	if (s & Sleep)
	{
		printf("����\n");
	}
	if (s & paralysis)
	{
		printf("���\n");
	}
	if (s & Burn)
	{
		printf("�Ώ�\n");
	}
	if (s & AtkUp)
	{
		printf("�U���͏㏸\n");
	}
	if (s & AtkDown)
	{
		printf("�U���͒ቺ\n");
	}
	if (s == Base)
	{
		printf("�������\n");
	}
	printf("*********************\n");
}

void ChangeFlag(UINT* s) 
{
	int a;

	while (1)
	{
		printf("�ǂ̏�Ԃɂ��܂����H\n");
		printf("1:�� 2:���� 3:��� 4:�Ώ� 5:�U���� 6:�U���� 0:���͏I�� ");
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
		default:  //1~6�ɓ��Ă͂܂�Ȃ��Ƃ�
		  break;
		}
	}
}

void ClearFlag(UINT* s)
{
	int a;

	while (1)
	{
		printf("�ǂ̏�Ԃ��������܂����H\n");
		printf("1:�� 2:���� 3:��� 4:�Ώ� 5:�U���� 6:�U���� 7:�S�� 0:���͏I�� ");
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
		default:  //1~6�ɓ��Ă͂܂�Ȃ��Ƃ�
			break;
		}
	}
}