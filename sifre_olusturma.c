#include <stdio.h>
#include <stdlib.h>

int main()
{

	int sifre, sifre2, secim, tc, sifirlamatc, sifre3, sifre4, unutulantc;

	printf("Lutfen olusturmak istedginiz sifreyi rakamlari kullanarak girin: ");
	scanf_s("%d", &sifre);

	printf("Olusturmak istedginiz sifreyi tekrar giriniz: ");
	scanf_s("%d", &sifre2);

	printf("Sifreyi sifirlamak istediginiz zaman kullanacaginiz TC kimlik numaranizi giriniz: ");
	scanf_s("%d", &tc);

	if (sifre == sifre2)
	{

		printf("sifre olusturma basarili, Lutfen islem seciniz...\n1.sifre sifirlama\n2.sifremi unuttum\n3.Cikis yapmak\nSeciminiz: ");
		scanf_s("%d", &secim);


		if (secim == 1 || secim == 2 || secim == 3)
		{

			switch (secim)
			{
			case 1:

				printf("Lutfen TC kimlik numaranizi giriniz: ");
				scanf_s("%d", &sifirlamatc);

				if (tc== sifirlamatc)
				{

					printf("Lutfen olusturmak istedginiz sifreyi rakamlari kullanarak girin: ");
					scanf_s("%d", &sifre3);

					printf("Olusturmak istedginiz sifreyi tekrar giriniz: ");
					scanf_s("%d", &sifre4);

					printf("Sifre sifirlama basarili. Programi kapatmak icin hergangi bir tusa basin, iyi gunler...\n");

				}
				else
				{

					while (tc != sifirlamatc)
					{

						printf("TC kimlik numaraniz eslesmiyor, lutfen tekrar deneyiniz: ");
						scanf_s("%d", &sifirlamatc);

					}

					printf("Lutfen olusturmak istedginiz sifreyi rakamlari kullanarak girin: ");
					scanf_s("%d", &sifre3);

					printf("Olusturmak istedginiz sifreyi tekrar giriniz: ");
					scanf_s("%d", &sifre4);

					if (sifre3 == sifre4)
					{

						printf("Programi kapatmak icin hergangi bir tusa basin, iyi gunler...\n");

					}
					else
					{
						while (sifre3 != sifre4)
						{

							printf("sifreniz eslesmiyor, lutfen tekrar deneyiniz: ");
							scanf_s("%d", &sifre3);

							printf("Olusturmak istedginiz sifreyi tekrar giriniz: ");
							scanf_s("%d", &sifre4);

						}

						printf("Programi kapatmak icin hergangi bir tusa basin, iyi gunler...\n");

					}

				}

			    break;

			case 2: 

				printf("Lutfen TC kimlik numaranizi giriniz: ");
				scanf_s("%d", &unutulantc);

				if (tc==unutulantc)
				{

					printf("Sifreniz: %d\n", sifre);
					printf("Programi kapatmak icin hergangi bir tusa basin, iyi gunler...\n");

				}
				else
				{

					while (tc != unutulantc)
					{

						printf("Lutfen dogru TC kimlik numaranizi giriniz: ");
						scanf_s("%d", &unutulantc);

					}

					printf("Sifreniz: %d\n", sifre);
					printf("Programi kapatmak icin hergangi bir tusa basin, iyi gunler...\n");

				}

				break;

			case 3: printf("Programi kapatmak icin hergangi bir tusa basin, iyi gunler...\n");

			default: printf("Boyle bir islem yok tekrar deneyiniz\n...");
				break;
			}

		}
		else //if kısmını kopyala
		{

			while (secim != 1 && secim != 2 && secim != 3)
			{

				printf("Hatali islem, Lutfen dogru islemi seciniz...\n1.sifre sifirlama\n2.sifremi unuttum\n3.Cikis yapmak\n");
				scanf_s("%d", &secim);

			}

			switch (secim)
			{
			case 1:

				printf("Lutfen TC kimlik numaranizi giriniz: ");
				scanf_s("%d", &sifirlamatc);

				if (tc == sifirlamatc)
				{

					printf("Lutfen olusturmak istedginiz sifreyi rakamlari kullanarak girin: ");
					scanf_s("%d", &sifre3);

					printf("Olusturmak istedginiz sifreyi tekrar giriniz: ");
					scanf_s("%d", &sifre4);

				}
				else
				{

					while (tc != sifirlamatc)
					{

						printf("TC kimlik numaraniz eslesmiyor, lutfen tekrar deneyiniz: ");
						scanf_s("%d", &sifirlamatc);

					}

					printf("Lutfen olusturmak istedginiz sifreyi rakamlari kullanarak girin: ");
					scanf_s("%d", &sifre3);

					printf("Olusturmak istedginiz sifreyi tekrar giriniz: ");
					scanf_s("%d", &sifre4);

					if (sifre3 == sifre4)
					{

						printf("Programi kapatmak icin hergangi bir tusa basin, iyi gunler...\n");

					}
					else
					{
						while (sifre3 != sifre4)
						{

							printf("sifreniz eslesmiyor, lutfen tekrar deneyiniz: ");
							scanf_s("%d", &sifre3);

							printf("Olusturmak istedginiz sifreyi tekrar giriniz: ");
							scanf_s("%d", &sifre4);

						}

						printf("Programi kapatmak icin hergangi bir tusa basin, iyi gunler...\n");

					}

				}

				break;

			case 2:

				printf("Lutfen TC kimlik numaranizi giriniz: ");
				scanf_s("%d", &unutulantc);

				if (tc == unutulantc)
				{

					printf("Sifreniz: %d\n", sifre);
					printf("Programi kapatmak icin hergangi bir tusa basin, iyi gunler...\n");

				}
				else
				{

					while (tc != unutulantc)
					{

						printf("Lutfen dogru TC kimlik numaranizi giriniz: ");
						scanf_s("%d", &unutulantc);

					}

					printf("Sifreniz: %d\n", sifre);
					printf("Programi kapatmak icin hergangi bir tusa basin, iyi gunler...\n");

				}

				break;

			case 3: printf("Programi kapatmak icin hergangi bir tusa basin, iyi gunler...\n");

			default: printf("Boyle bir islem yok tekrar deneyiniz\n...");
				break;
			}


		}

	}
	else // üstediki
	{

		while (sifre != sifre2)
		{
			printf("sifreniz eslesmiyor, lutfen tekrar deneyiniz: ");
			scanf_s("%d", &sifre);

			printf("Olusturmak istedginiz sifreyi tekrar giriniz: ");
			scanf_s("%d", &sifre2);
		}

		if (sifre == sifre2)
		{

			printf("sifre olusturma basarili, Lutfen islem seciniz...\n1.sifre sifirlama\n2.sifremi unuttum\n3.Cikis yapmak\nSeciminiz: ");
			scanf_s("%d", &secim);


			if (secim == 1 || secim == 2 || secim == 3)
			{

				switch (secim)
				{
				case 1:

					printf("Lutfen TC kimlik numaranizi giriniz: ");
					scanf_s("%d", &sifirlamatc);

					if (tc == sifirlamatc)
					{

						printf("Lutfen olusturmak istedginiz sifreyi rakamlari kullanarak girin: ");
						scanf_s("%d", &sifre3);

						printf("Olusturmak istedginiz sifreyi tekrar giriniz: ");
						scanf_s("%d", &sifre4);

					}
					else
					{

						while (tc != sifirlamatc)
						{

							printf("TC kimlik numaraniz eslesmiyor, lutfen tekrar deneyiniz: ");
							scanf_s("%d", &sifirlamatc);

						}

						printf("Lutfen olusturmak istedginiz sifreyi rakamlari kullanarak girin: ");
						scanf_s("%d", &sifre3);

						printf("Olusturmak istedginiz sifreyi tekrar giriniz: ");
						scanf_s("%d", &sifre4);

						if (sifre3 == sifre4)
						{

							printf("Programi kapatmak icin hergangi bir tusa basin, iyi gunler...\n");

						}
						else
						{
							while (sifre3 != sifre4)
							{

								printf("sifreniz eslesmiyor, lutfen tekrar deneyiniz: ");
								scanf_s("%d", &sifre3);

								printf("Olusturmak istedginiz sifreyi tekrar giriniz: ");
								scanf_s("%d", &sifre4);

							}

							printf("Programi kapatmak icin hergangi bir tusa basin, iyi gunler...\n");

						}

					}

					break;

				case 2:

					printf("Lutfen TC kimlik numaranizi giriniz: ");
					scanf_s("%d", &unutulantc);

					if (tc == unutulantc)
					{

						printf("Sifreniz: %d\n", sifre);
						printf("Programi kapatmak icin hergangi bir tusa basin, iyi gunler...\n");

					}
					else
					{

						while (tc != unutulantc)
						{

							printf("Lutfen dogru TC kimlik numaranizi giriniz: ");
							scanf_s("%d", &unutulantc);

						}

						printf("Sifreniz: %d\n", sifre);
						printf("Programi kapatmak icin hergangi bir tusa basin, iyi gunler...\n");

					}

					break;

				case 3: printf("Programi kapatmak icin hergangi bir tusa basin, iyi gunler...\n");

				default: printf("Boyle bir islem yok tekrar deneyiniz\n...");
					break;
				}

			}
			else //if kısmı
			{

				while (secim != 1 && secim != 2 && secim != 3)
				{

					printf("Hatali islem, Lutfen dogru islemi seciniz...\n1.sifre sifirlama\n2.sifremi unuttum\n3.Cikis yapmak\n");
					scanf_s("%d", &secim);

				}

				switch (secim)
				{
				case 1:

					printf("Lutfen TC kimlik numaranizi giriniz: ");
					scanf_s("%d", &sifirlamatc);

					if (tc == sifirlamatc)
					{

						printf("Lutfen olusturmak istedginiz sifreyi rakamlari kullanarak girin: ");
						scanf_s("%d", &sifre3);

						printf("Olusturmak istedginiz sifreyi tekrar giriniz: ");
						scanf_s("%d", &sifre4);

					}
					else
					{

						while (tc != sifirlamatc)
						{

							printf("TC kimlik numaraniz eslesmiyor, lutfen tekrar deneyiniz: ");
							scanf_s("%d", &sifirlamatc);

						}

						printf("Lutfen olusturmak istedginiz sifreyi rakamlari kullanarak girin: ");
						scanf_s("%d", &sifre3);

						printf("Olusturmak istedginiz sifreyi tekrar giriniz: ");
						scanf_s("%d", &sifre4);

						if (sifre3 == sifre4)
						{

							printf("Programi kapatmak icin hergangi bir tusa basin, iyi gunler...\n");

						}
						else
						{
							while (sifre3 != sifre4)
							{

								printf("sifreniz eslesmiyor, lutfen tekrar deneyiniz: ");
								scanf_s("%d", &sifre3);

								printf("Olusturmak istedginiz sifreyi tekrar giriniz: ");
								scanf_s("%d", &sifre4);

							}

							printf("Programi kapatmak icin hergangi bir tusa basin, iyi gunler...\n");

						}

					}

					break;

				case 2:

					printf("Lutfen TC kimlik numaranizi giriniz: ");
					scanf_s("%d", &unutulantc);

					if (tc == unutulantc)
					{

						printf("Sifreniz: %d\n", sifre);
						printf("Programi kapatmak icin hergangi bir tusa basin, iyi gunler...\n");

					}
					else
					{

						while (tc != unutulantc)
						{

							printf("Lutfen dogru TC kimlik numaranizi giriniz: ");
							scanf_s("%d", &unutulantc);

						}

						printf("Sifreniz: %d\n", sifre);
						printf("Programi kapatmak icin hergangi bir tusa basin, iyi gunler...\n");

					}

					break;

				case 3: printf("Programi kapatmak icin hergangi bir tusa basin, iyi gunler...\n");

				default: printf("Boyle bir islem yok tekrar deneyiniz\n...");
					break;
				}


			}

		}




	}

	system("pause");
	return 0;

}
