#include <iostream>
#include <string>
#include <sstream>
using namespace std;


class cal {
private:
    string getnum; // 숫자 입력 
    string operate_c; //연산자 입력 
    int op[4];
    int* num; // 입력한 숫자 배열
    int size; // size 
    int plus, minus, div, mul; // +-/* 개수
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
        cout << size - 1 << "개의 연산자를 입력하시오: " << endl;

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
            else cout << "다시 입력하시오." << endl;
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
                op[i]--; // 연산자 하나 사용했으므로 1개 줄여줌
                if (i == 0)
                    getMin_Max(result + num[idx], idx + 1);
                else if (i == 1)
                    getMin_Max(result - num[idx], idx + 1);
                else if (i == 2)
                    getMin_Max(result * num[idx], idx + 1);
                else
                    getMin_Max(result / num[idx], idx + 1);
                op[i]++; // 다른 연산자를 사용할 것이므로 아까 줄였던 연산자 개수 늘려줌
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
    cout << "숫자를 입력하시오: ";
    getline(cin, getnum);
    cal a(getnum);
    a.set();
    a.result();



}