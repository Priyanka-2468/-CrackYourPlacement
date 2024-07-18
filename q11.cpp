class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int maxArea=INT_MIN;
        int area=0;
        while(i<j)
        {
            int b=j-i;
            int h=min(height[i],height[j]);
            area=b*h;
            maxArea=max(maxArea,area);
            if(height[i]>height[j])
            j--;
            else
            i++;
        }
        return maxArea;
    }
};