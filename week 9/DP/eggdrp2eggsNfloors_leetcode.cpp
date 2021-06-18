class Solution {
public:
    int twoEggDrop(int n) {
            
        for(int i=0;i<n;i++)
        {
            if((i*(i+1)/2)>=n)
                return i;
        }
        return n;
    }
};