#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int secretNumber, guess, attempts = 0;

	srand(time(NULL));
	secretNumber = rand() % 100 + 1;

	printf("Sayı Tahmin oyununa hoş geldin \n");
	printf("1 ile 100 arasında bir sayı tuttum. Tahmin et bakalım!\n");

	do {
		printf("Tahminin: ");
		scanf("%d", &guess);
		attempts++;

		if (guess < secretNumber) {
			printf("Daha büyük bir sayı gir! \n");
		}else if (guess > secretNumber){
			printf("Daha küçük bir sayı gir! \n");
		}else {
			printf("Tebrikler! doğru tahmin :) Toplam deneme: %d\n", attempts);
		}
	} while (guess != secretNumber);

	return 0;
}
