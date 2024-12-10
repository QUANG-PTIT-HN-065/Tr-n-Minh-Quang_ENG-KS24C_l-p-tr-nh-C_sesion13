#include<stdio.h>
#include<math.h>
int nguyenTo(int n) {
    if (n < 2) return 0; 
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0; 
    }
    return 1; 
}
void xuly(int a,int b,int c,int arr[b][c]){
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a == 2)
            {
                printf("%2d  ",arr[i][j]);
            }else if (a == 3)
            {
                if (i == 0 && j == 0 || i == 0 && j == c - 1 || i == b - 1 && j == 0 || i == b - 1 && j == c - 1)
                {
                    printf("%2d ",arr[i][j]);
                }else
                {
                    printf(" 0 ");
                }
            }else if (a == 4)
            {
                if (i == 0 || j == 0 || i == b - 1 || j == c - 1)
                {
                    printf("%2d ",arr[i][j]);
                }else
                {
                    printf(" 0 ");
                } 
            }else if (a == 5)
            {
                if (i == j || i + j == b - 1)
                {
                    printf("%2d",arr[i][j]);
                }else
                {
                    printf(" 0 ");
                } 
            }else if (a == 6)
            {
                nguyenTo(arr[i][j]);
                if (nguyenTo(arr[i][j])==1)
                {
                    printf("%2d",arr[i][j]);
                }else
                {
                    printf(" 0 ");
                }
            }
        }
        printf("\n");
    }
}
int main(){
    int x,n,m;
    int Arr[5][5];
    do
    {
        printf("-----MENU-----\n");
        printf("1. Nhap gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. In ra cac phan tu o goc theo ma tran\n");
        printf("4. In ra cac phan tu nam tren duong bien theo ma tran\n");
        printf("5. In ra cac phan tu nam tren duong cheo chinh va cheo phu theo ma tran\n");
        printf("6. In ra cac phan tu la so nguyen to theo ma tran\n");
        printf("7. thoat\n");
        x = 0;
        do
        {
            printf("lua chon cau bn la: ");
            scanf("%d",&x);
        } while (x<1||x>7);
        if (x == 1)
        {
            do
            {
                printf("hay nhap so hang: ");
                scanf("%d",&n);
                printf("hay nhap so cot: ");
                scanf("%d",&m);
                
            } while (n<1||m<1);
            Arr[n][m];
            printf("cac gi tri phai khac 0\n");
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    do
                    {
                        printf("hay nhap gia tri o hang %d cot %d: ",i+1,j+1);
                        scanf("%d",&Arr[i][j]);
                    } while (Arr[i][j]==0);
                }
            }
        }else if (x == 2)
        {
            xuly(x,n,m,Arr);
        }else if (x == 3)
        {
            xuly(x,n,m,Arr);
        }else if (x == 4)
        {
            xuly(x,n,m,Arr);
        }else if (x == 5)
        {
            xuly(x,n,m,Arr);
        }else if (x == 6)
        {
            xuly(x,n,m,Arr);
        }else if (x == 7)
        {
            printf("the end:");
            break;
        }
    } while (1);
    return 0;
}