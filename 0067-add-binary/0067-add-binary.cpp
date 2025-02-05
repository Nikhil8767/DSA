class Solution {
public:
    string addBinary(string a, string b) {

        string result = "";
        int i = a.size() - 1, j = b.size() - 1, carry = 0;

        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;
            if (i >= 0) sum += a[i--] - '0'; // Convert char to int
            if (j >= 0) sum += b[j--] - '0'; // Convert char to int
            
            result += (sum % 2) + '0';  // Append binary digit
            carry = sum / 2;  // Update carry
        }

        reverse(result.begin(), result.end()); // Reverse to get correct order
        return result;


        // find the mistake here i am unable to find it ***********************
        // string result="";
        // // int sum;
        // int i=a.length()-1,j=b.length()-1,carry=0;
        
        // while(i>=0 || j>=0 || carry){
        //     int sum=carry;
        //     if(i>=0){   sum+=a[i--]-'0';}
        //     if(j>=0){sum+=a[j--]-'0';}
            
        //     result+=(sum % 2)+'0';
        //     carry=sum/2;

        // }
        //  reverse(result.begin(), result.end()); // Reverse to get correct order
        // return result;
    }
};