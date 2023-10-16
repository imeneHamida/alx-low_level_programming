#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

int main(void)
{
char charset[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
int charset_length = sizeof(charset) - 1;
char password[PASSWORD_LENGTH + 1];
int i;
    
srand(time(NULL));

for (i = 0; i < PASSWORD_LENGTH; i++)
{
int random_index = rand() % charset_length;
password[i] = charset[random_index];
}
    
password[PASSWORD_LENGTH] = '\0';
printf("Generated Password: %s\n", password);
    
return (0);
}
