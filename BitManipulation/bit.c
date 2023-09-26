#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int GetBit(int num, int pos);
int SetBit(int num, int pos);
int ClearBit(int num, int pos);
int Reversbit(int num);
int CountBit(int num);
int PowerofTwo(unsigned int num);

int GetBit(int num, int pos) {
    return (num >> pos) & 1;
}

int SetBit(int num, int pos) {
    return num | (1 << pos);
}

int ClearBit(int num, int pos) {
    return num & ~(1<< pos);
}

int Reversbit(int num) {
    int left = 31, right = 0;
    while (left > right) {
        int lBit = (num >> left) & 1;
        int rBit = (num >> right) & 1;
        
        if (lBit != rBit) {
            num ^= (1 << left) | (1 << right); 
        }
        left--;
        right++;
    }
    return num;
}
int CountBit(int num) {
    int count = 0;
    while (num) {
        num &= (num - 1);
        count++;
    }
    return count;
}

int PowerofTwo(unsigned int num) {
    int count = 0;
    while (num) {
        count += num & 1;
        num >>= 1;
    }
    return count == 1;
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        printf("Options:\n");
        printf("1: GetBit\n");
        printf("2: SetBit\n");
        printf("3: ClearBit\n");
        printf("4: Reversbit\n");
        printf("5: CountBit\n");
        printf("6: PowerofTwo\n");
        return 1;
    }

    int option = atoi(argv[1]);

    switch (option) {
        case 1:
            if(argc != 4) {
                return 1;
            }
            printf("%d\n", GetBit(atoi(argv[2]), atoi(argv[3])));
            break;

        case 2:
            if(argc != 4) {
                return 1;
            }
            printf("%d\n", SetBit(atoi(argv[2]), atoi(argv[3])));
            break;

        case 3:
            if(argc != 4) {
                return 1;
            }
            printf("%d\n", ClearBit(atoi(argv[2]), atoi(argv[3])));
            break;

        case 4:
            if(argc != 3) {
                return 1;
            }
            printf("%d\n", Reversbit(atoi(argv[2])));
            break;

        case 5:
            if(argc != 3) {
                return 1;
            }
            printf("%d\n", CountBit(atoi(argv[2])));
            break;

        case 6:
            if(argc != 3) {
                return 1;
            }
            printf("%d\n", PowerofTwo(atoi(argv[2])));
            break;

        default:
            printf("Invalid option (1-6)\n");
            break;
    }

    return 0;
}

