#include<stdio.h>

int main(){

    int i,a,n,b;
    struct arr1{
        char vtype[50];
        int posv ;
        int posc;
        int posb;

        int av;
    };

    struct arr1 s[10];
     for(i=0;i< 5;i++)
    {
        s[i].av=0;
        s[i].posv =i ;
        s[i].posc = i;
        s[i].posb =i;
        printf("av %d\n",s[i].av);
        printf("posv %d\n",s[i].posv);
        printf("posc %d\n",s[i].posc);
        printf("posb %d\n",s[i].posb);



    }
    char m;
    int t;


    while(1){
        printf("Enter Your Vehicle Type\nvan(v) , car(c) , Bike(b) ,Quit(q)\n");
        scanf(" %c" ,&m);
        printf("Entering Time  :(24h)\n");
        scanf("%d" ,&t);

        if(m == 'q'){
            break;
        }else{

            if(m=='v'){
                for(a=0;a < 5;a++){
                    if(s[a].av==0){
                        printf("Slot available :v%d\n",s[a].posv);
                    }
                }
                printf("Choose Your Slot :");
                scanf("%d",&n);
                s[n].av=1;

                for(b=0;b < 5;b++){
                    if(s[b].av==0){
                        printf("Slot available :v%d\n",s[b].posv);
                    }
                }

            }else if(m == 'c'){

                for(a=0;a < 5;a++){
                    if(s[a].av==0){
                        printf("Slot available :c%d\n",s[a].posc);
                    }
                }
                printf("Choose Your Slot :");
                scanf("%d",&n);
                s[n].av=1;

                for(b=0;b < 5;b++){
                    if(s[b].av==0){
                        printf("Slot available :c%d\n",s[b].posc);
                    }
                }

            }else if(m == 'b'){

                for(a=0;a < 5;a++){
                    if(s[a].av==0){
                        printf("Slot available :b%d\n",s[a].posb);
                    }
                }
                printf("Choose Your Slot :");
                scanf("%d",&n);
                s[n].av=1;

                for(b=0;b < 5;b++){
                    if(s[b].av==0){
                        printf("Slot available :b%d\n",s[b].posb);
                    }
                }

            }else{
                printf("No Parking");
            }
        }
    }

    return 0;
}
