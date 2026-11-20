class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int ow,oh;
        ow=max(0,min(max(ax1,ax2),max(bx1,bx2))-max(min(ax1,ax2),min(bx1,bx2)));
        oh=max(0,min(max(ay1,ay2),max(by1,by2))-max(min(ay1,ay2),min(by1,by2)));
        int areaA = abs(ax2 - ax1) * abs(ay2 - ay1);
        int areaB = abs(bx2 - bx1) * abs(by2 - by1);
        return areaA + areaB - ow * oh;
    }
};