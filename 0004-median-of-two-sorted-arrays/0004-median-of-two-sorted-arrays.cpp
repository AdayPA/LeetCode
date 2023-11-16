class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    // reduced space
    int totalSize = nums1.size() + nums2.size();
    int p1 = 0;
    int p2 = 0;
    vector<int> result;

    while (p1 < nums1.size() && p2 < nums2.size()) {
        if (nums1[p1] <= nums2[p2]) {
            result.push_back(nums1[p1]);
            p1++;
        } else {
            result.push_back(nums2[p2]);
            p2++;
        }
    }

    while (p1 < nums1.size()) {
        result.push_back(nums1[p1]);
        p1++;
    }

    while (p2 < nums2.size()) {
        result.push_back(nums2[p2]);
        p2++;
    }

    // Imprimir el resultado
    cout << "Merged Vector: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    // Calcular y devolver la mediana
    if (totalSize % 2 == 0) {
        return (result[(totalSize - 1) / 2] + result[totalSize / 2]) / 2.0;
    } else {
        return result[totalSize / 2];
    }
    }
};