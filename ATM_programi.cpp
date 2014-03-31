#include<stdio.h>
#include<conio.h>
void main()
{
	int hesapNo;
	int sifre;
	int secim;
	int cekilen;
	int kalan;
	int ilave;
	int sonTutar;
	int hesap2;
	int gonderilen;
	int sonKalan;
	printf("Hesap no:");
	scanf("%d",&hesapNo);
	printf("Sifre:");
	scanf("%d",&sifre);
	if(hesapNo==1234 && sifre==1400)//sıfre=1400 hesap no:1234
	{
		printf("Hosgeldiniz..\n");
		printf("\n");
		printf("1.Bakiye\n2.Para Cekme\n3.Para Yatirma\n4.Para Transfer\n5.Iptal\n");
		printf("Yapmak istediginiz islemin numarasini giriniz:");
		scanf("%d",&secim);
		if(secim==1)
		{
			printf("Bakiyeniz = 1000 TL");
		}
		else if(secim==2)
		{
				printf("Cekmek istediginiz tutari giriniz:");
			scanf("%d",&cekilen);
			if(cekilen<=1000)
			{
			
			kalan=1000-cekilen;
			printf("Hesabinizda kalan miktar:%d\n",kalan);
			}
			else
				printf("Hesabinizdaki miktardan daha fazla cekim yapamazsiniz.Lutfen cekmek istediginiz miktari tekrar giriniz.");
		}
		else if(secim==3)
		{
			printf("Yatirmak istediginiz miktari giriniz:");
			scanf("%d",&ilave);
			sonTutar=1000+ilave;
			printf("Hesabinizda %d TL bulunmaktadir.\n",sonTutar);
		}
		else if(secim==4)
		{
				printf("Transfer yapmak istediginiz hesap numarasi:");
			scanf("%d",&hesap2);
			printf("Transfer etmek istediginiz miktari giriniz:");
			scanf("%d",&gonderilen);
			if(gonderilen<=1000)
			{
			
			printf("Isleminiz basariyla gerceklestirildi...\n");
			sonKalan=1000-gonderilen;
			printf("Hesabinizda kalan miktar %d TL dir.\n",sonKalan);
			}
			else
				printf("Hesabinizdaki miktardan daha kucuk bır miktar girerek tekrar deneyiniz...");
		}
		else if(secim==5)
			printf("Isleminiz sonlandirildi...\n");
	}
	else
		printf("Hesap numaraniz veya sifreniz hatali..\n");
}
