class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       /////////////////////////////

    int max_size = nums1.size() + nums2.size();
    int p1 = 0;
    int p2 = 0;
    double temp = 0;
    vector<int> result;

    while (p1 < nums1.size() && p2 < nums2.size())
    {
        if (nums1[p1] <= nums2[p2])
        {
            result.push_back(nums1[p1]);
            p1++;
        }
        else
        {
            result.push_back(nums2[p2]);
            p2++;
        }
    }

    // Añadir elementos restantes de nums1, si los hay
    while (p1 < nums1.size())
    {
        result.push_back(nums1[p1]);
        p1++;
    }

    // Añadir elementos restantes de nums2, si los hay
    while (p2 < nums2.size())
    {
        result.push_back(nums2[p2]);
        p2++;
    }


    if (result.size() % 2 == 0)
    {

        temp = static_cast<double>(result[(result.size() - 1) / 2] + result[result.size() / 2]) / 2;

        
        return temp;
    }
    else
    {
        temp = result[result.size() / 2];
        
        return temp;
    }
        
        
        
        ///////////////////////////////////////
    }
};