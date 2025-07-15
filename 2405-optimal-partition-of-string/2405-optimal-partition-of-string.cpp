class Solution {
public:
    int partitionString(string s) {
        int arr[26];
        fill(begin(arr),end(arr),-1);
        int n=s.size();
        int count=0;
        int newstring=0;
        for(int i=0;i<n;i++)
        {
            char lol = s[i];
            if(arr[lol - 'a']>=newstring){  //a ko 2 pr dekha & 0=0 || arr[a]=0,i=2,newstring=0
                count++; //count = 1
                newstring=i;  //newstring = 2
            }
            arr[lol-'a']=i; //arr[a]=2
            cout<<arr[lol-'a'];
        }
        cout<<endl<<arr[25]<<endl;
        return count+1;
    }
};