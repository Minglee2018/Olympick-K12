#include <stdio.h>
#include <conio.h>
int a[505],n;
char x;
int main()
{
    printf("moi ban nhap so phan tu trong day so nguyen \n");
    scanf("%d",&n);
    while(n<=0 || n>=505){
        printf("moi ban nhap lai n. \n");
        scanf("%d",&n);
    }

   printf("moi ban nhap %d phan tu cho day so nguyen: \n",n);
    for(int i=1; i<=n; ++i){
        printf(" a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    int first_pos=0,last_pos=0;
    for(int i=1; i<=n; ++i){
        if(a[i]==24){
            if(first_pos==0)
                first_pos=i,last_pos=i;
            else
                last_pos=i;
        }
    }
    if(first_pos==0)
        printf(" khong tim thay vi tri so 24. \n");
    printf("ban co muon tiep tuc khong ? \n");
    fflush(stdin);
    scanf("%c",&x);
    while(x=='Y'){
        fflush(stdin);
        scanf("%c",&x);
    }
    if(x!='N' && x!='Y'){
        printf("ban da nhap sai.");
    }
    else if(x=='N'){
        if(last_pos==first_pos && last_pos==0)
        printf(" khong co so 24 nao trong day so nguyen : \n");
        else if(last_pos==first_pos){
            printf("vi tri dau trung vs vi tri cuoi: %d",first_pos);
        }
        else {
            printf("vi tri dau la: %d \n",first_pos);
            printf("vi tri cuoi la: %d",last_pos);
        }
     }
    return 0;
}
