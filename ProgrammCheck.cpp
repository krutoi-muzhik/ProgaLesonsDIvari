#define CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int Verification(int N, struct client* bank, struct client* bank_new);

int Check(struct balance* total_balance);

int main() {
	int i1 = 0;
	int i2 = 0;
	i1 = Verification(N, client* bank, client* bank_new);
	i2 = Check(balance* total_balance);
}

int Verification(int N, struct client bank*, struct client* bank_new) {
	int i = 0;                                         // счетчик
	int BreakOrNot = 1;                                // если 1 - цикл идет, 0 - цикл завершается
	for (i = 0; (i < N) && (BreakOrNot); i ++) {
		if (bank[i].identification_number != bank_new[i].identification_number) BreakOrNot = 0;
		if (bank[i].account != bank_new[i].account) BreakOrNot = 0;
		if (bank[i].amount != bank_new[i].amount) BreakOrNot = 0;
		if (bank[i].code != bank_new[i].code) BreakOrNot = 0;
	}
	return BreakOrNot;
}

int Check(struct balance* total_balance) {
	int i = 0;
	int BreakOrNot = 1;
	for (i = 0; (i < 5) && (BreakOrNot); i++) {
		if (total_balance.currency_start[i] != total_balance.currency_cipher[i]) {
			printf("\nError! Not matching currency index is %d \n", i);
			BreakOrNot = 0;
		}
	}
	return BreakOrNot;
}