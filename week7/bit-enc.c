#include <stdio.h>

void encrypt(char*);
void decrypt(char*);

int main(void) {
	char plaintext[] = "Hanbat National University";
	char key = 'M';

	printf("Original: %s\n", plaintext);

	encrypt(plaintext);

	printf("Encrypted: %s\n", plaintext);

	decrypt(plaintext);

	printf("Decrypted: %s\n", plaintext);

	return 0;
}

void encrypt(char* plainText) {
	for (int i = 0 ; )
}
void decrypt(char* encryptedText) {

}