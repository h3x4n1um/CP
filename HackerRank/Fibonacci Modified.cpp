#include <bits/stdc++.h>

class super_int{
    public:
        super_int(){
            SetNum("0");
        }

        void SetNum(std::string s){
            BigNum = s;
        }

        std::string GetNum(){
            return BigNum;
        }

        super_int operator+(super_int& s){
            super_int ans;
            std::string a;
            int remember = 0;
            BalanceNum(*this, s);
            for (int i = this->GetSize() - 1; i >= 0; --i){
                int sum = (this->GetNum()[i] - 48) + (s.GetNum())[i] - 48 + remember;
                if (sum > 9){
                    sum = sum - 10;
                    remember = 1;
                }
                else remember = 0;
                char result = sum + 48;
                a = result + a;
            }
            ans.SetNum(a);
            return ans;
        }

        super_int operator*(super_int& s){
            super_int ans;
            return ans;
        }

    private:
        std::string BigNum;

        int GetSize(){
            return BigNum.size();
        }

        void BalanceNum(super_int& a, super_int& b){
            int gap = (int) abs(a.GetSize() - b.GetSize());
            if (gap == 0) return;
            std::string temp;
            temp.append(gap, '0');
            if (a.GetSize() > b.GetSize()) b.SetNum(temp + b.GetNum());
            else a.SetNum(temp + a.GetNum());
        }
};

int n, temp = 1;
super_int t1, t2;

int main() {
    std::string num1, num2;
    std::cin >> num1 >> num2 >> n;
    t1.SetNum(num1);
    t2.SetNum(num2);
    /*while (temp != n){
        super_int tmp = t2;
        t2 = t1 + t2 * t2;
        t1 = tmp;
        ++temp;
    }*/
    super_int temp;
    temp = t1 + t2;
    std:: cout << temp.GetNum();
    return 0;
}
