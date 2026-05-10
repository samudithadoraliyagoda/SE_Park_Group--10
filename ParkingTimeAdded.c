#include<stdio.h>
#include <time.h>

int main(){

    clock_t start, end;
    double elapsed;
    int i,a,n,b,n1,fee,tot;
    char ans;

    struct arr1{
        int posv,posc,posb;
        int avv,avb,avc;
        int tv,tc,tb;
    };

    struct arr1 s[5];

    for(i=0;i<5;i++){
        s[i].avv=0;
        s[i].avb=0;
        s[i].avc=0;
        s[i].posv=i;
        s[i].posc=i;
        s[i].posb=i;
    }

    char m;
    int t1,t2;

    printf("=== Vehicle Parking Management System  ===\n");
    printf("================== DEMO ==================\n");
    printf("Van  rate : 200 per second\n");
    printf("Car  rate : 100 per second\n");
    printf("Bike rate :  50 per second\n");
    printf("==========================================\n");

    while(1){

        printf("\nEnter(i) , Exit(o) or Press q to Quit -> ");
        scanf(" %c",&ans);

        if(ans == 'i'){

            printf("Enter Your Vehicle Type\nVan(v) , Car(c) , Bike(b)\n");
            scanf(" %c",&m);

            if(m=='v'){

                printf("\n-- Available Van Slots --\n");
                for(a=0;a<5;a++){
                    if(s[a].avv==0){
                        printf("Slot available :V%d\n",s[a].posv);
                    }
                }

                while(1){
                    printf("Choose Your Slot (Only number):");
                    scanf("%d",&n);

                    if(n<0||n>=5){
                        printf("invalid\n");
                        continue;
                    }

                    if(s[n].avv==1){
                        printf("Its Occupied\n");
                    }else{
                        while(1){
                            start = clock();
                            s[n].tv=t1;
                            printf("Setting V%d Occupied\n",n);
                            s[n].avv=1;
                            break;
                        }
                        break;
                    }
                }

                printf("\n-- Available Van Slots --\n");
                for(b=0;b<5;b++){
                    if(s[b].avv==0){
                        printf("Slot available :V%d\n",s[b].posv);
                    }
                }

            }else if(m=='c'){

                printf("\n-- Available Car Slots --\n");
                for(a=0;a<5;a++){
                    if(s[a].avc==0){
                        printf("Slot available :C%d\n",s[a].posc);
                    }
                }

                while(1){
                    printf("Choose Your Slot (Only number):");
                    scanf("%d",&n);

                    if(n<0||n>=5){
                        printf("invalid\n");
                        continue;
                    }

                    if(s[n].avc==1){
                        printf("Its Occupied\n");
                    }else{
                        while(1){
                            start = clock();
                            s[n].tc=t1;
                            printf("Setting C%d Occupied\n",n);
                            s[n].avc=1;
                            break;
                        }
                        break;
                    }
                }

                printf("\n-- Available Car Slots --\n");
                for(b=0;b<5;b++){
                    if(s[b].avc==0){
                        printf("Slot available :C%d\n",s[b].posc);
                    }
                }

            }else if(m=='b'){

                printf("\n-- Available Bike Slots --\n");
                for(a=0;a<5;a++){
                    if(s[a].avb==0){
                        printf("Slot available :B%d\n",s[a].posb);
                    }
                }

                while(1){
                    printf("Choose Your Slot (Only number):");
                    scanf("%d",&n);

                    if(n<0||n>=5){
                        printf("invalid\n");
                        continue;
                    }

                    if(s[n].avb==1){
                        printf("Its Occupied\n");
                    }else{
                        while(1){
                            start = clock();
                            s[n].tb=t1;
                            printf("Setting B%d Occupied\n",n);
                            s[n].avb=1;
                            break;
                        }
                        break;
                    }
                }

                printf("\n-- Available Bike Slots --\n");
                for(b=0;b<5;b++){
                    if(s[b].avb==0){
                        printf("Slot available :B%d\n",s[b].posb);
                    }
                }

            }else{
                printf("Invalid vehicle type\n");
            }

        }else if(ans == 'o'){

            printf("Enter Your Vehicle Type\nVan(v) , Car(c) , Bike(b)\n");
            scanf(" %c",&m);

            if(m=='v'){

                int anyOccupied=0;
                for(a=0;a<5;a++){
                    if(s[a].avv==1){
                        printf("Occupied Slots :V%d\n",s[a].posv);
                        anyOccupied=1;
                    }
                }

                if(!anyOccupied){
                    printf("No occupied van slots\n");
                }else{
                    while(1){
                        printf("Enter Your Vehicle Slot Number :");
                        scanf("%d",&n1);

                        if(n1>=0&&n1<5&&s[n1].avv==1){
                            break;
                        }else{
                            printf("invalid\n");
                        }
                    }

                    while(1){
                        end = clock();
                        elapsed = (double)(end - start) / CLOCKS_PER_SEC;
                        printf("Parked time: %.2f seconds\n", elapsed);
                        tot = elapsed * 200;
                        printf("Your fees : %d\n",tot);

                        while(1){
                            printf("Pay Your fee :");
                            scanf("%d",&fee);

                            if(fee==tot){
                                printf("Payment successful!\n");
                                printf("Setting V%d Available\n",n1);
                                s[n1].avv=0;
                                break;
                            }else{
                                printf("Wrong amount. Required: %d. Try again\n",tot);
                            }
                        }
                        break;
                    }
                }

            }else if(m=='c'){

                int anyOccupied=0;
                for(a=0;a<5;a++){
                    if(s[a].avc==1){
                        printf("Occupied Slots :C%d\n",s[a].posc);
                        anyOccupied=1;
                    }
                }

                if(!anyOccupied){
                    printf("No occupied car slots\n");
                }else{
                    while(1){
                        printf("Enter Your Vehicle Slot Number :");
                        scanf("%d",&n1);

                        if(n1>=0&&n1<5&&s[n1].avc==1){
                            break;
                        }else{
                            printf("invalid\n");
                        }
                    }

                    while(1){
                        end = clock();
                        elapsed = (double)(end - start) / CLOCKS_PER_SEC;
                        printf("Parked time: %.2f seconds\n", elapsed);
                        tot = elapsed * 100;
                        printf("Your fees : %d\n",tot);

                        while(1){
                            printf("Pay Your fee :");
                            scanf("%d",&fee);

                            if(fee==tot){
                                printf("Payment successful!\n");
                                printf("Setting C%d Available\n",n1);
                                s[n1].avc=0;
                                break;
                            }else{
                                printf("Wrong amount. Required: %d. Try again\n",tot);
                            }
                        }
                        break;
                    }
                }

            }else if(m=='b'){

                int anyOccupied=0;
                for(a=0;a<5;a++){
                    if(s[a].avb==1){
                        printf("Occupied Slots :B%d\n",s[a].posb);
                        anyOccupied=1;
                    }
                }

                if(!anyOccupied){
                    printf("No occupied bike slots\n");
                }else{
                    while(1){
                        printf("Enter Your Vehicle Slot Number :");
                        scanf("%d",&n1);

                        if(n1>=0&&n1<5&&s[n1].avb==1){
                            break;
                        }else{
                            printf("invalid\n");
                        }
                    }

                    while(1){
                       end = clock();
                        elapsed = (double)(end - start) / CLOCKS_PER_SEC;
                        printf("Parked time: %.2f seconds\n", elapsed);
                        tot = elapsed * 50;
                        printf("Your fees : %d\n",tot);

                        while(1){
                            printf("Pay Your fee :");
                            scanf("%d",&fee);

                            if(fee==tot){
                                printf("Payment successful!\n");
                                printf("Setting B%d Available\n",n1);
                                s[n1].avb=0;
                                break;
                            }else{
                                printf("Wrong amount. Required: %d. Try again\n",tot);
                            }
                        }
                        break;
                    }
                }
            }else{
                printf("Invalid vehicle type\n");
            }

        }else if(ans == 'q'){
            printf("Goodbye!\n");
            break;
        }else{
            printf("invalid option\n");
        }
    }

    return 0;
}
