#include<stdio.h>

int main(){

    int i,a,n,b;
    struct arr1{
        char vtype[50];
        int pos ;
        int av;
    };

    struct arr1 s[10];
     for(i=0;i< 5;i++)
    {
        s[i].av=0;
        s[i].pos =i;
        printf("av %d\n",s[i].av);
        printf("pos %d\n",s[i].pos);

    }
    char m;
    int t;


    while(1){
        printf("Enter Your Vehicle Type\n van(v) , car(c) , Bike(b) ,Quit(q)\n");
        scanf(" %c" ,&m);
        printf("Entering Time  :(24h)\n");
        scanf("%d" ,&t);

        if(m == 'q'){
            break;
        }else{

            if(m=='v'){
                for(a=0;a < 5;a++){
                    if(s[a].av==0){
                        printf("Slot available :v%d\n",s[a].pos);
                    }
                }
                printf("Choose Your Slot :");
                scanf("%d",&n);
                s[n].av=1;

                for(b=0;b < 5;b++){
                    if(s[b].av==0){
                        printf("Slot available :v%d\n",s[b].pos);
                    }
                }

            }else if(m == 'c'){

                for(a=0;a < 5;a++){
                    if(s[a].av==0){
                        printf("Slot available :v%d\n",s[a].pos);
                    }
                }
                printf("Choose Your Slot :");
                scanf("%d",&n);
                s[n].av=1;

                for(b=0;b < 5;b++){
                    if(s[b].av==0){
                        printf("Slot available :v%d\n",s[b].pos);
                    }
                }

            }else if(m == 'b'){

                for(a=0;a < 5;a++){
                    if(s[a].av==0){
                        printf("Slot available :v%d\n",s[a].pos);
                    }
                }
                printf("Choose Your Slot :");
                scanf("%d",&n);
                s[n].av=1;

                for(b=0;b < 5;b++){
                    if(s[b].av==0){
                        printf("Slot available :v%d\n",s[b].pos);
                    }
                }

            }else{
                printf("No Parking");
            }
        }
    }

    return 0;
}
