class Solution {
public:
    string integertoroman(int s)
    {
        switch(s)
        {
            case 1000:
                return "M";
            case 900:
                return "CM";
            case 500:
                return "D";
            case 400:
                return "CD";
            case 100:
                return "C";
            case 90:
                return "XC";
            case 50:
                return "L";
            case 40:
                return "XL";
            case 10:
                return "X";
            case 9:
                return "IX";
            case 5:
                return "V";
            case 4:
                return "IV";
            case 1:
                return "I";
        }
        return "";
    }
    string intToRoman(int num) {
        string result = "";
        int value[13]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        for(int i=0;i<13;i++)
        {
            while(num>=value[i])
            {
                result = result + integertoroman(value[i]);
                num = num - value[i];
            }
        }
        return result;
    }
};