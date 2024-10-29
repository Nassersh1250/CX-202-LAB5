#include <stdio.h>

int string_length(char sentence[]) { 
	int i=0;
    while(sentence[i]!='\0'){
	    i++;
    }
   return i; 
}

int words(char sentence[]){
	int i = 0;
	int j = 1;
	while (sentence[i]!='\0'){
		if (sentence[i] == ' '){
			j++;
		}
		i++;
	}
	return j;
	
}


int nmvow(char sentence[]){
	int vow = 0;
	int vowa = 0;
	int vowe = 0;
	int vowi = 0;
	int vowo = 0;
	int vowu = 0;
	int i = 0;

	while (sentence[i]!='\0'){
		if (sentence[i]=='a'||sentence[i]=='A'){
			vow++;
			vowa++;
		}
		else if (sentence[i]=='e'||sentence[i]=='E'){
			vow++;
			vowe++;
		}
		else if (sentence[i]=='i'||sentence[i]=='I'){
			vow++;
			vowi++;
		}
		else if(sentence[i]=='o'||sentence[i]=='O'){
			vow++;
			vowo++;
		}
		else if (sentence[i]=='u'||sentence[i]=='U'){
			vow++;
			vowu++;
		}
		i++;
	}

	printf("Frequency of a = %d\n",vowa);
	printf("Frequency of e = %d\n",vowe);
	printf("Frequency of i = %d\n",vowi);
	printf("Frequency of o = %d\n",vowo);
	printf("Frequency of u = %d\n",vowu);

	return vow;

}


int main(){

	char string[]="";


	printf("input sentence\n");
	scanf("%[^\n]%*c",string);
	printf("%s\n",string);
	int strl = string_length(string);
	printf("length of string is = %d\n",strl);
	int wrds = words(string);
	printf("Sentence has %d words\n",wrds);
	int vwl = nmvow(string);
	printf("Sentence has %d vowels\n",vwl);



	return 0;
}

