// khai bao mang 1 chieu 100 phan tu
//  Nhập số phần tử cần nhập và giá trị các phần tử
// In ra giá trị các phần tử đang quản lý
// Thêm một phần từ vào vị trí chỉ định
// Sửa một phần từ ở vị trí chỉ định
// Xóa một phần từ ở vị trí chỉ định
// Sắp xếp các phần tử ( Khi lựa chọn menu cha thì hiển thị menu con )
   // a giam dan 
   // b tang dan 
// Tìm kiếm phần tử nhập vào
    // a tim kiem tuyen tinh 
    // b tim kiem nhi phan
// thoat 
#include<stdio.h>
void chon(int *a,int *b){
    printf("hay chon vi tri: ");
    scanf("%d", a);
    printf("hay chon gia tri");
    scanf("%d", b);
}
int main(){
    int arr[100];
    int luachon,n;
    do
    {
        luachon=0;
        printf("-----MENU-----\n");
        printf("1. Nhap so phan ta can nhap va gia tri cac phan tu\n");
        printf("2. In ra gia tri cac phan tu dang quan ly\n");
        printf("3. Them mot phan tu vao vi tri chi dinh\n");
        printf("4. Sua mot phan tu o vi tri chi dinh\n");
        printf("5. Xoa mot phan tu o vi tri chi dinh\n");
        printf("6. Sap xep cac phan tu\n");
        printf("7. Tim kiem phan tu nhap vao\n");
        printf("8. thoat");
        do
        {
            printf("lua chon cua bn la: ");
            scanf("%d",&luachon);
        } while (luachon<1||luachon>8);
        if (luachon == 1)
        {
            printf("nhay nhap so luong phan tu:");
            scanf("%d",&n);
            for (int i = 0; i < n; i++)
            {
                printf("hay nhap gia tri o vi tri %d: ",i+1);
                scanf("%d",&arr[i]);
            }
            printf("\n");
            arr[n];
        }else if (luachon == 2)
        {
            for (int i = 0; i < n; i++)
            {
                printf("%d ",arr[i]);
            }
            printf("\n");
        }else if (luachon == 3)
        {
            int pos,val;
            chon(&pos, &val);
            if (pos < 1 || pos > n + 1)
            {
                printf("vi tri khong hop le");
            }else
            {
                for (int i = n; i >= pos; i--)
                {
                    arr[i] = arr[i-1];
                }
                arr[pos-1] = val;
                n++;
            }
        }else if (luachon == 4)
        {
            int pos,val;
            chon(&pos, &val);
            if (pos < 1 || pos > n + 1)
            {
                printf("vi tri khong hop le");
            }else
            {
                arr[pos-1] = val;
            }
        }else if (luachon == 5)
        {
            int pos;
            printf("Hay chon vi tri can xoa: ");
            scanf("%d", &pos);
            if (pos < 1 || pos > n) {
                printf("Vi tri khong hop le\n");
            } else {
                for (int i = pos - 1; i < n - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                n--; 
            }
        }else if (luachon == 6)
        {
            int check=0;
            printf("1. giam dan");
            printf("2. tang dan");
            while (check<1||check>2)
            {
                printf("hay chon cach xap sep: ");
                scanf("%d",&check);
            }
            if (check == 1)
            {
                for (int i = 0; i < n; i++)
                {
                    for (int j = i+1; j < n; j++)
                    {
                        if (arr[i]<arr[j])
                        {
                            int temp = arr[i];
                            arr[i]=arr[j];
                            arr[j]=temp;
                        }
                        
                    }
                }
            }else
            {
                 for (int i = 0; i < n; i++)
                {
                    for (int j = i+1; j < n; j++)
                    {
                        if (arr[i]>arr[j])
                        {
                            int temp = arr[i];
                            arr[i]=arr[j];
                            arr[j]=temp;
                        }
                        
                    }
                }
            }  
        }else if (luachon == 7)
        {
            int check1=0;
            printf("1. tim kiem tuyen tinh");
            printf("2. tim kiem nhi phan");
            while (check1<1||check1>2)
            {
                printf("hay chon cach tim kiem: ");
                scanf("%d",&check1);
            }
            int val,count=0;
            printf("hay chon gia tri bn muon tim");
            scanf("%d",&val);
            if (check1==1)
            {
              for (int i = 0; i < n; i++)
              {
                if (arr[i]==val)
                {
                    count++;
                }
              } 
            }else
            {
                int start=0;
                int end = n-1;
                int mid = (start+end)/2;
                while (start<=end)
                {
                    mid = (start+end)/2;
                    if (arr[mid]==val)
                    {
                        count++;
                        break;
                    }else if (arr[mid]>val)
                    {
                        end = mid-1;
                    }else if (arr[mid]<val)
                    {
                        start = mid+1;
                    }
                }
                if (count>0)
                {
                    printf("phan tu bn tim co trong mang");
                }else
                {
                    printf("phan tu bn tim ko co trong mang");
                }
            } 
        }else if (luachon == 8)
        {
            break;
        }
        
    } while (1);
    
    return 0;
}