#include<stdio.h>

int main(){

    int i,a,n,b,n1,fee,tot;
    char ans;
    struct arr1{
        char vtype[50];
        int posv ;
        int posc;
        int posb;
        int avv;
        int avc;
        int avb;
    };

    struct arr1 s[10];
     for(i=0;i< 5;i++)
    {
        s[i].avv=0;
        s[i].avb=0;
        s[i].avc=0;
        s[i].posv =i ;
        s[i].posc = i;
        s[i].posb =i;
        printf("avv %d\n",s[i].avv);
        printf("posv %d\n",s[i].posv);
        printf("avc %d\n",s[i].avc);
        printf("posc %d\n",s[i].posc);
        printf("avb %d\n",s[i].avb);
        printf("posb %d\n",s[i].posb);



    }
    char m;
    int t1,t2;


    while(1){

        printf("in(i) , out(o) or Quit(q)?");
        scanf(" %c",&ans);
        if( ans == 'i'){
            printf("Enter Your Vehicle Type\nvan(v) , car(c) , Bike(b) ,\n");
            scanf(" %c" ,&m);

                if(m=='v'){
                    printf("Entering Time  :(24h)\n");
                    scanf("%d" ,&t1);
                    for(a=0;a < 5;a++){
                        if(s[a].avv==0){
                            printf("Slot available :v%d\n",s[a].posv);
                        }
                    }
                    printf("Choose Your Slot :");
                    scanf("%d",&n);
                    s[n].avv=1;

                    for(b=0;b < 5;b++){
                        if(s[b].avv==0){
                            printf("Slot available :v%d\n",s[b].posv);
                        }
                    }

                }else if(m == 'c'){
                    printf("Entering Time  :(24h)\n");
                    scanf("%d" ,&t1);

                    for(a=0;a < 5;a++){
                        if(s[a].avc==0){
                            printf("Slot available :c%d\n",s[a].posc);
                        }
                    }
                    printf("Choose Your Slot :");
                    scanf("%d",&n);
                    s[n].avc=1;

                    for(b=0;b < 5;b++){
                        if(s[b].avc==0){
                            printf("Slot available :c%d\n",s[b].posc);
                        }
                    }

                }else if(m == 'b'){
                    printf("Entering Time  :(24h)\n");
                    scanf("%d" ,&t1);

                    for(a=0;a < 5;a++){
                        if(s[a].avb==0){
                            printf("Slot available :b%d\n",s[a].posb);
                        }
                    }
                    printf("Choose Your Slot :");
                    scanf("%d",&n);
                    s[n].avb=1;

                    for(b=0;b < 5;b++){
                        if(s[b].avb==0){
                            printf("Slot available :b%d\n",s[b].posb);
                        }
                    }

                }else{
                    printf("No Parking");
                }

        }else if( ans == 'o'){
        printf("Enter Your Vehicle Type\nvan(v) , car(c) , Bike(b)\n");
        scanf(" %c" ,&m);

        if( m == 'v'){

                for(a=0;a < 5;a++){
                if(s[a].avv==1){
                    printf("Slot available :v%d\n",s[a].posv);
                    }
                }
                printf("Enter ur number :");
                scanf("%d",&n1);
                printf("Enter ur exit time : (24h)\n");
                scanf("%d",&t2);
                tot = (t2-t1)*50;
                printf("ur fees : %d\n", tot);
                while(1){

                printf("pay ur fee :");
                scanf("%d",&fee);
                if(fee == tot){

                    s[n1].avv = 0;
                    break;
                }

                }




        }else if(m == 'c'){

              for(a=0;a < 5;a++){
                if(s[a].avc==1){
                    printf("Slot available :c%d\n",s[a].posc);
                    }
                }
                printf("Enter ur number :");
                scanf("%d",&n1);
                printf("Enter ur exit time : (24h)\n");
                scanf("%d",&t2);
                tot = (t2-t1)*50;
                printf("ur fees : %d\n", tot);
                while(1){

                printf("pay ur fee :");
                scanf("%d",&fee);
                if(fee == tot){
                    s[n1].avc = 0;
                    break;
                }

                }

        }else if( m=='b'){
              for(a=0;a < 5;a++){
                if(s[a].avb==1){
                    printf("Slot available :b%d\n",s[a].posb);
                    }
                }
                printf("Enter ur number :");
                scanf("%d",&n1);
                printf("Enter ur exit time : (24h)\n");
                scanf("%d",&t2);
                tot = (t2-t1)*50;
                printf("ur fees : %d\n", tot);
                while(1){

                printf("pay ur fee :");
                scanf("%d",&fee);
                if(fee == tot){

                    s[n1].avb = 0;
                    break;
                }

                }

        }

    }else if( ans == 'q'){

        break;
    }
    }

    return 0;
}
