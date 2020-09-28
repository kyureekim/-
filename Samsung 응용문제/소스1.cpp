#include <iostream>
#include <string>
#include <sstream>
using namespace std;


class cal {
private:
    string getnum; // ���� �Է� 
    string operate_c; //������ �Է� 
    int op[4];
    int* num; // �Է��� ���� �迭
    int size; // size 
    int plus, minus, div, mul; // +-/* ����
    int min, max; //result

public:

   


    cal(string getnum) {
        this->getnum = getnum;
        minus = mul = div = plus = 0; 
        min = 1000000, max = -10000000;
    }
    void set() {

        setNum();
        setOp();
        
    }

    void setNum() {
        stringstream ss(getnum);
        string k;
        num = new int;
        int i = 0;
        while (ss >> k) {
            num[i++] = stoi(k);
        }
        ss.clear();

        size = i;


        

    }

    void setOp() {
        cout << size - 1 << "���� �����ڸ� �Է��Ͻÿ�: " << endl;

        getline(cin, operate_c);



        for (int i = 0; i < size - 1; i++) {
            if (operate_c[i] == '+')
                plus++;
            else if (operate_c[i] == '-')
                minus++;
            else if (operate_c[i] == '*')
                mul++;
            else if (operate_c[i] == '/')
                div++;
            else cout << "�ٽ� �Է��Ͻÿ�." << endl;
        }

        op[0] = plus;
        op[1] = minus;
        op[2] = mul;
        op[3] = div;
    }

    void getMin_Max(int result, int idx) {
        if (idx == size)
        {
            if (result > max)
                max = result;
            if (result < min)
                min = result;
            return;
        }
        for (int i = 0; i < 4; i++)
        {
            if (op[i] > 0)
            {
                op[i]--; // ������ �ϳ� ��������Ƿ� 1�� �ٿ���
                if (i == 0)
                    getMin_Max(result + num[idx], idx + 1);
                else if (i == 1)
                    getMin_Max(result - num[idx], idx + 1);
                else if (i == 2)
                    getMin_Max(result * num[idx], idx + 1);
                else
                    getMin_Max(result / num[idx], idx + 1);
                op[i]++; // �ٸ� �����ڸ� ����� ���̹Ƿ� �Ʊ� �ٿ��� ������ ���� �÷���
            }
        }
        return;
    }

    void result() {
        getMin_Max(num[0], 1);
        cout << "max: " << max << "min: " << min << endl;
    }


};
int main() {
    string getnum;
    cout << "���ڸ� �Է��Ͻÿ�: ";
    getline(cin, getnum);
    cal a(getnum);
    a.set();
    a.result();



}