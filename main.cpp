#include <iostream>
using namespace std;

void hisobla(float narx, float tolov) {
    if (tolov >= narx) {
        float qaytim = tolov - narx;
        cout << "Qaytim: " << qaytim << endl;
    } else if (tolov > 0 && tolov < narx) {
        float yetishmaydi = narx - tolov;
        cout << "Yetishmaydi: " << yetishmaydi << endl;
    } else {
        cout << "Xato: noto‘g‘ri to‘lov kiritildi!" << endl;
    }
}

int main() {
    float narx, tolov;

    cout << "Narxni kiriting: ";
    cin >> narx;

    cout << "To‘lovni kiriting: ";
    cin >> tolov;

    hisobla(narx, tolov);

    return 0;
}
