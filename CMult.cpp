#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int scalarProduct(vector<int> v1, vector<int> v2) {
    int result = 0;
    for (int i = 0; i < v1.size(); ++i) {
        result += v1[i] * v2[i];
    }
    return result;
}

int main() {
    int num_vectors;
    cout << "Number of vecs: ";
    cin >> num_vectors;

    vector<vector<int>> vectors(num_vectors);

    for (int i = 0; i < num_vectors; ++i) {
        int size;
        cout << "////////////////////////////" << endl;
        cout << "Dim " << i + 1 << ": ";
        cin >> size;

        vectors[i].resize(size);

        cout << "Enter values " << i + 1 << ": "<< endl;
        for (int j = 0; j < size; ++j) {
            cin >> vectors[i][j];
        }
    }

    cout << "////////////////////////////" ;
    cout << "////////////////////////////" << endl;
   
    for (int i = 0; i < num_vectors; ++i) {
        cout << "Vec " << i + 1 << ": ";
        for (int j = 0; j < vectors[i].size(); ++j) {
            cout << vectors[i][j] << " ";
        }
        cout << endl;
    }


    int  s;
    do
    {
             cout << "////////////////////////////" << endl;
            int index1, index2;
            cout << "Enter numbers of vecs for Mul: "<< endl;
            cin >> index1 >> index2;
          /* if (vectors[index1].size() != vectors[index2].size()) {
                cout << "Incorrect!" << endl;
                return 0;}*/
           
            // Проверяем, что введенные номера векторов корректны
            if (index1 < 1 || index1 > num_vectors || index2 < 1 || index2 > num_vectors) {
                cout << "Incorrect!" << endl;
                return 0;
            }

            // Вычисляем скалярное произведение выбранных векторов
            int result = scalarProduct(vectors[index1 - 1], vectors[index2 - 1]);
            cout << "Mult " << index1 << " and " << index2 << ": " << result << endl;
            cout << "////////////////////////////"<< endl;
            cout << "To Proceed enter 1 ";
            cin >> s;
        
    } while (s == 1);

    return 0;
}
