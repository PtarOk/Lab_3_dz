#include <locale.h>
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

int main()
{
	setlocale(LC_ALL, "RUS");

	int day, month, year; // ���������� ��� ���� �� ������������
	int day_now, month_now, year_now; // ���������� ��� ����������� ����
	int difference_d = 0, difference_m = 0;
	// ���������� ���� ��������
	puts("������� ���� ������ ��������, ��������, 1 (��� ������ ������ ���� ������)");
	scanf("%d", &day);
	puts("������� ����� ������ ��������, ��������, 3 (��� ������ ����)");
	scanf("%d", &month);
	puts("������� ��� ������ ��������");
	scanf("%d", &year);

	// ���������� ����������� ����
	puts("������� ����������� ����");
	scanf("%d", &day_now);
	puts("������� ����������� �����");
	scanf("%d", &month_now);
	puts("������� ����������� ���");
	scanf("%d", &year_now);

	// ��������, ���� ����� ���� � ����� �������� �������� ������ ����������� ��� � ������

	difference_d = (day >= day_now);			// ������ �������� �����, �� ��������� �������
	month_now -= difference_d;					//if (day >= day_now) month_now--;
												//if (month >= month_now) year_now--;
	difference_m = (month >= month_now);		//if (month >= month_now) year_now--;
	year_now -= difference_m;					

	//����� ���-��
	printf("\n��� ������� - %d ���.\n", year_now - year);

	return 0;
}