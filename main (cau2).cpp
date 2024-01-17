#include <iostream>
#include <iomanip>

using namespace std;

class VeMayBay {
    public:
        void nhap();
        void xuat();
        int get_giave() {
            return giave;
        }
    private:
        string tenchuyen;
        int ngaybay, giave;
};

class Nguoi {
    public:
        void nhap();
        void xuat();
    protected:
        string hoten, gioitinh;
        int tuoi;
};

class HanhKhach : public Nguoi {
    public:
        void nhap();
        void xuat();
        int TongTien() {
            //VeMayBay *ve = new VeMayBay;
            return (ve->get_giave())*soluong;
        }
    private:
        int soluong;
        VeMayBay *ve = new VeMayBay;
};

void VeMayBay::nhap() {
    cin.ignore();
    cout<<"Nhap ten chuyen: "; getline(cin, tenchuyen);
    cout<<"Nhap ngay bay: "; cin>>ngaybay;
    cout<<"Nhap gia ve: "; cin>>giave;
    
}

void Nguoi::nhap() {
    cout<<"Nhap ho ten: "; getline(cin, hoten);
    cout<<"Nhap gioi tinh: "; getline(cin, gioitinh);
    cout<<"Nhap tuoi: "; cin>>tuoi;
}

void HanhKhach::nhap() {
    
    Nguoi::nhap();
    ve->nhap();
    cout<<"Nhap so luong: "; cin>>soluong;
}

void HanhKhach::xuat() {
    cout<<left<<setw(20)<<hoten<<left<<setw(20)<<gioitinh<<left<<setw(15)<<tuoi<<right<<setw(30)<<TongTien()<<endl;
}

int main() {
    int n;
    cout<<"Nhap so hanh khach: "; cin>>n;
    //VeMayBay ve[n];
    HanhKhach hk[n];
    cin.ignore();
    for(int i=0;i<n;i++)
    {
        cout<<"Nhap thong tin hanh khach: "<<endl;
        hk[i].nhap();
        //ve[i].nhap();
        cin.ignore();
    }
    cout<<"Danh sach hanh khach: "<<endl;
    cout<<left<<setw(20)<<"Ho ten"<<left<<setw(20)<<"Gioi tinh"<<left<<setw(15)<<"Tuoi"<<right<<setw(30)<<"Tong tien"<<endl;
    for(int i=0;i<n;i++)
    {
        hk[i].xuat();
    }
    return 0;
}