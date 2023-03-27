#include <iostream>
using namespace std;

double rerata(double a, double b)
{
    return (a + b) / 2;
}

string status(double r, double n)
{
    if (r >= 70 || n > 80)
        return "diterima";
    else
        return "ditolak";
}

int main()
{
    double nilM, nilB;
    string nama [20];
    int lulus, gagal, counter;
    string statuslg [20];
    lulus = 0;
    counter = 0;
    gagal = 0;
    int i = 0;
    int l = 0;

    do {
        cout << "\nmasukan nama = ";
        cin >> nama[i];
        cout << "masukkan nilai matematika = " ;
        cin >> nilM;
        cout << "masukkan nilai bahasa inggris = ";
        cin >> nilB;
        cout << endl;

        // rerata = (nilM+nilB)/2
        // rata = rerata(nilM, nilB)
        // st = status(rata)
        // st = status(rerata(nilM, nilB));
       statuslg [l] = status(rerata(nilM, nilB), nilM);
        {
            if (statuslg[l] == "diterima")
                lulus ++;
            else
                gagal ++;
        }
        i ++;
        l ++;

    } while (i != 20 && l != 20);
    
    cout << "nama  status"<<endl; 
   
    i = 0, l = 0;
              do {  cout << "" << nama [i];
                cout << " " << statuslg [l]<< endl;

                i ++;
                l ++; 
                counter++;
               
            } while (i != 20 && l != 20);

    cout << "jumlah diterima = " << lulus << endl;
    cout << "jumlah gagal = " << gagal << endl;
}
