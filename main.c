#include <stdio.h>
#include <math.h>

float area_rectangle(float a, float b){
    return a*b;
}

void opr(){
    printf("1)4-х угольник\n2)Равные углы\n");
}

int sxema(int x, int y){
    if((x-y==-4 && x>=-4 && y<=6) || (x-y==4 && x>=0 && y<=2) || (x+y==-4 && x>=-4 && y>=-4) || (x+y==8 && y>=2 && y<=6)){
        return 1;
    }
    else
        return 0;
}

void paint(char c){
    for (int y=10; y>=-10; y--)
    {
        for (int x=-10; x<=10; x++)
        {
            if(sxema(x,y)==1){
                printf("%c ",c);
            }
            else
                printf("  ");
        }
        printf("\n");
    }
}

int main() {
    int n;
    float x,y;
    int g=1;
    char c;
    while (g==1) {
        char c;
        printf("Наклоненный квадрат.\n1) рассчитать площадь;\n2) вывести определение фигуры;\n3) нарисовать фигуру;\n4) Выход\n");
        scanf("%i",&n);
        getchar();
        switch(n){
            case (1):
                printf("Введите a\n");
                scanf("%f",&x);
                printf("Введите b\n");
                scanf("%f",&y);
                printf("S=%.0f\n",area_rectangle(x,y));
                break;
            case (2):
                opr();
                break;
            case (3):
                printf("Введите символ\n");
                scanf("%c",&c);
                getchar();
                paint(c);
                break;
            case 4:
                g=0;
                break;
            default:
                printf("Что-то пошло не так!)\n");
                break;
        }
        printf("------------------------------\n");
    }
}
