//Çàïðîãðàììèðîâàòü ñëåäóþùåå âûðàæåíèå: (à + b — f / à) + f * a * a — (a + b) ×èñëà à, b, f ââîäÿòñÿ ñ êëàâèàòóðû. Îðãàíèçîâàòü ïîëüçîâàòåëüñêèé èíòåðôåéñ, òàêèì îáðàçîì, ÷òîáû áûëî ïîíÿòíî, â êàêîì ïîðÿäêå äîëæíû ââîäèòüñÿ ÷èñëà.//

#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");

    int a, b, f, x;

    cout << "Ââåäèòå öèôðû a, b, f : " << endl;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "f = ";
    cin >> f;

    cout << "Âû÷èñëÿåì ïî ôîðìóëå: x = (a + b - f / a) + f * a * a - (a + b)" << endl;
    x = (a + b - f / a) + f * a * a - (a + b);
    cout << "x = " << x;

    return 0;
}
