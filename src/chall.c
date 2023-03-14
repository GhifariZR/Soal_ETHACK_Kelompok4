#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int guess(int N)
{
    int number, guess;
 
    //Seed random number generator
    srand(time(NULL));
 
    // Generate a random number
    number = rand() % N;
 
    printf("Please insert your input between"
           " 1 and %d\n",
           N);
 
    // Using a do-while loop that will
    // work until user guesses
    // the correct number
    do {
        // Input by user
        scanf("%d", &guess);
 
        // When user guesses lower
        // than actual number
        if (guess > number)
 
        {
            printf("Lower number "
                   "please!\n");
        }
 
        // When user guesses higher
        // than actual number
        else if (number > guess)
 
        {
            printf("Higher number"
                   " please!\n");
        }
 
        // Printing number of times
        // user has taken to guess
        // the number
        else
            printf("You are right!\n");
    
    } while (guess != number);
    
    return number;
}

int main(int argc, char const *argv[]) {
	setvbuf(stdout, NULL, _IONBF, 0);
	int N =10000;
	
	printf("One day, your friend bafer asking for help\n"
	"\n"
	"Bafer: Hey, Can you help me with my phone?\n"
	"You  : What Happen with your phone?\n"
	"Bafer: I forget my password, I heard you are a hacker!\n"
	"You  : No Worry, Gimme a day, and i will open your phone!\n"
	"Bafer: Thanks! I will leave it to you then.\n"
	"\n"
    );
    
    printf("To be Honest, You don't know how to do it!\n"
	"But, You know how to program!\n"
	"So you Using Script to bruteforce your way to find it.\n"
	"You Program is smart, it will give a respond:\n"
	"need to be higher or lower!\n"
	"So Your program will ask Higher input number or Lower input number!\n"
	"\n"
    );
 
    // Function call
    int password = guess(N);
    
    printf("You meet Bafer after you know the password.\n"
	"Bafer: Hey, I just remember, I think the password is my favorite number! Do you found out my password is? \n"
	"With the power of String Format, you can write Bafer memory Brain, So He remember His favorite number!\n"
	);
	int bafer_memory = 0x5;
	char buf[16];

	puts("Enter a Bafer Favorite Number (Max 10 digits)");
	scanf("%10s", buf);

	printf("Bafer Memory Brain become: ");
	printf(buf, &bafer_memory);
	printf("\n");

	if(bafer_memory == password)
		system("echo \"Bafer: Yeah that's right! That's my Favorite number\"; cat flag.txt");
	else
		puts("Bafer: Wow! It open my phone. But I don't think that's my favorite number.");
	return 0;
}
