#include <iostream>
#include <string>
using namespace std;

class DaraxtSifat {
private:
    string tur;
    int yoshi;
    float balandlik;
    string yaproqRangi;

public:
    void show() {
        static int k = 0;
        cout << ++k << " - Daraxt sifati:" << endl << endl;
        cout << "Turi: " << tur << endl;
        cout << "Yoshi: " << yoshi << endl;
        cout << "Balandligi: " << balandlik << " metr" << endl;
        cout << "Yaproq rangi: " << yaproqRangi << endl << endl;
    }

    void input() {
        static int k = 0;
        cout << ++k << " - Daraxt sifatini kiriting:" << endl << endl;
        cout << "Turi: "; cin >> tur;
        cout << "Yoshi: "; cin >> yoshi;
        cout << "Balandligi: "; cin >> balandlik;
        cout << "Yaproq rangi: "; cin >> yaproqRangi;
        cout << endl;
    }

    void qidir() {
        int k;
        cout << "Izlash turini kiriting: " << endl;
        cout << "Turi: 1" << endl;
        cout << "Yoshi: 2" << endl;
        cout << "Balandligi: 3" << endl;
        cout << "Yaproq rangi: 4" << endl;
        cin >> k;

        if(k==1) {
            string s;
            cout << "Qidirilayotgan tur: "; cin >> s;
            if(tur.compare(s) == 0) {
                cout << "Bunday turdagi daraxt mavjud:" << endl;
                show();
            }
        }

        if(k==2) {
            int s;
            cout << "Qidirilayotgan yoshi: "; cin >> s;
            if(yoshi == s) {
                cout << "Bunday yoshdagi daraxt mavjud:" << endl;
                show();
            }
        }

        if(k==3) {
            float s;
            cout << "Qidirilayotgan balandlik: "; cin >> s;
            if(balandlik == s) {
                cout << "Bunday balandlikdagi daraxt mavjud:" << endl;
                show();
            }
        }

        if(k==4) {
            string s;
            cout << "Qidirilayotgan yaproq rangi: "; cin >> s;
            if(yaproqRangi.compare(s) == 0) {
                cout << "Bunday yaproq rangidagi daraxt mavjud:" << endl;
                show();
            }
        }
    }
};

int main() {
    DaraxtSifat d[100];
    int N;
    cout << "Daraxtlar sonini kiriting: "; cin >> N;
    for(int i = 0; i < N; i++) {
        d[i].input();
    }

    for(int i = 0; i < N; i++) {
        d[i].qidir();
    }
}
