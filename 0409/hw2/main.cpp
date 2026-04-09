#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    
    while (true) {
        cout << "Input a string or 0 to exit: ";
        cin >> input;
        
        if (input == "0") {
            break;
        }
        
        // 分別記錄三種括號的狀態
        // bal (balance): 目前多出來、尚未被匹配的左括號數量
        // def (deficit): 遇到的右括號前面沒有左括號，產生的缺口數量
        int p_bal = 0, p_def = 0; // 小括號 ()
        int s_bal = 0, s_def = 0; // 中括號 []
        int b_bal = 0, b_def = 0; // 大括號 {}
        
        for (char c : input) {
            if (c == '(') {
                p_bal++;
            } else if (c == ')') {
                if (p_bal > 0) p_bal--; // 有多餘的左括號可以抵銷
                else p_def++;           // 沒得抵銷，產生缺口
            }
            else if (c == '[') {
                s_bal++;
            } else if (c == ']') {
                if (s_bal > 0) s_bal--;
                else s_def++;
            }
            else if (c == '{') {
                b_bal++;
            } else if (c == '}') {
                if (b_bal > 0) b_bal--;
                else b_def++;
            }
        }
        
        // 總共需要補上的數量 = 右括號缺少的左括號數量 + 左括號缺少的右括號數量
        int p_total = p_def + p_bal;
        int s_total = s_def + s_bal;
        int b_total = b_def + b_bal;
        
        // 輸出格式完全對齊範例 (注意逗號後面的空格)
        cout << "Parentheses: " << p_total 
             << ", Square Brackets: " << s_total 
             << ", Braces: " << b_total << "\n\n";
    }
    
    return 0;
}
