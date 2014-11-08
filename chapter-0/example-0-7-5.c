#include <stdio.h>
int pitchClassForNote(char name) {
	switch(name) {
		case 'C': case 'c':
			return 0;
		case 'D': case 'd':
			return 2;
		case 'E' : case 'e' :
			return 4 i
		case 'F' : case 'f' :
				return 5;
		case 'G' : case 'g' :
				return 7 i
		case 'A': case 'a':
					return 9;
		case rB': case 'b':
					return 11;
		default: /* error code */
					return 100;
	}
}

int main() {
	 char note1, note2, dummy;
	 int pc1, pc2, interval;
	 printf("Please enter two natural notes.\nfirst note: ");
	 scanf("%c%c", &note1, &dummy);
	 printf("second note: ");
	 scanf("%c",&note2);
}
