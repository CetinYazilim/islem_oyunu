1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
86
87
88
89
90
91
92
93
94
95
96
97
98
99
100
101
102
103
104
105
106
107
108
109
110
111
112
113
114
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (void) {
    printf("Cetin Yazilim 2015\n");
    int puan = 0;
    while(1) {
        int secim;
        srand(time(NULL));
        printf("\nToplama --> 1\nCikartma --> 2\n"
                "Carpma --> 3\nBolme --> 4\nCikis --> Baska bir rakam\n"
                "Seciminiz: ");
        scanf("%d", &secim);
        if(secim == 1) {
            printf("Secime geri donmek icin 0 a basin");
            while(1) { 
                int cevap;
                int sayi1 = rand() % 100;
                int sayi2 = rand() % 100;
                printf("\n%d + %d = ? ", sayi1,sayi2);
                scanf("%d", &cevap);
                if(cevap == sayi1 + sayi2) {
                    printf("Dogru Cevap");
                    puan += 5;
                    printf("\nPuaniniz: %d\n", puan);
                    continue;
                }
                else if(cevap == 0)
                    break;
                else {
                    printf("Yanlis Cevap");
                    puan -= 2;
                    printf("\nPuaniniz: %d\n", puan);
                    continue;
                }
            }
        }
        else if(secim == 2) {
            printf("Secime geri donmek icin 0 a basin");
            while(1) {
                int cevap;
                int sayi1 = rand() % 100;
                int sayi2 = rand() % 100;
                printf("\n%d - %d = ? ", sayi1,sayi2);
                scanf("%d", &cevap);
                if(cevap == sayi1 - sayi2) {
                    printf("\nDogru Cevap");
                    puan += 5;
                    printf("\nPuaniniz: %d", puan);
                    continue;
                }
                else if(cevap == 0) 
                    break;
                else {
                    printf("\nYanlis cevap");
                    puan -= 2;
                    printf("\nPuaniniz: %d", puan);
                    continue;
                }
            }
        }
        else if(secim == 3) {
            printf("Secime geri donmek icin 0 a basin");
            while(1) {
                int cevap;
                int sayi1 = rand() % 100;
                int sayi2 = rand() % 100;
                printf("\n%d * %d = ? ", sayi1,sayi2);
                scanf("%d", &cevap);
                if(cevap == sayi1 * sayi2) {
                    printf("\nDogru Cevap");
                    puan += 5;
                    printf("\nPuaniniz: %d", puan);
                    continue;
                }
                else if(cevap == 0) 
                    break;
                else {
                    printf("\nYanlis cevap");
                    puan -= 2;
                    printf("\nPuaniniz: %d", puan);
                    continue;
                }
            }
        }
        else if(secim == 4) {
            printf("Secime geri donmek icin 0 a basin");
            while(1) {
                int cevap;
                int sayi1 = rand() % 100;
                int sayi2 = rand() % 100;
                printf("\n%d / %d = ? ", sayi1,sayi2);
                scanf("%d", &cevap);
                if(cevap == sayi1 / sayi2) {
                    printf("\nDogru Cevap");
                    puan += 5;
                    printf("\nPuaniniz: %d", puan);
                    continue;
                }
                else if(cevap == 0) 
                    break;
                else {
                    printf("\nYanlis cevap");
                    puan -= 2;
                    printf("\nPuaniniz: %d", puan);
                    continue;
                }
            }
        }
        else
            break;
    }
    return 0;
}
