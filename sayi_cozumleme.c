#include <stdio.h>
void main()
{

	int sayi;
	printf("Lutfen cozumlemek istediginiz 4 basamakli sayiyi giriniz:");
	scanf("%d",&sayi);
	int binlerBasamagi=sayi/1000;
	int yuzlerBasamagi=(sayi%1000)/100;
	int onlarBasamagi=((sayi%1000)%100)/10;
	int birlerBasamagi=((sayi%1000)%100)%10;
	printf("Girdiginiz sayida;\n");
	printf("%d tane binlik var.\n",binlerBasamagi);
	printf("%d tane yuzluk var.\n",yuzlerBasamagi);
	printf("%d tane onluk var.\n",onlarBasamagi);
	printf("%d tane birlik var.\n",birlerBasamagi);


}
