/* Problem: 88 Merge Sort Array 
 * Link: https://leetcode.com/problems/merge-sorted-array/?envType=study-plan-v2&envId=top-interview-150
 *
 * /

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        vector<int> arr1;
        for(int i = 0; i < m ; i++)
        {
            arr1.push_back(nums1[i]);
        }
        int i = 0, j = 0, count = 0;
        for(i = 0, j = 0, count = 0 ; count < m+n; count++)
        {
            //cout << "=============" << endl;
            //cout << "i: " << i << endl; 
            //cout << "j: " << j << endl; 
            //cout << "count: " << count << endl; 
            //cout << "arr1: " << arr1[i]  << endl; 
            //cout << "nums2: " << nums2[j] << endl; 
            //cout << "nums1: " << nums1[count] << endl; 

            if(i == m || j == n)
                break;

            if(arr1[i] < nums2[j])
            {
                nums1[count] = arr1[i];
                i++;
            }
            else //if(nums2[j] < arr1[i])
            {
                nums1[count] = nums2[j];
                j++;
            }
            /*else if(nums2[j] == arr1[i])
            {
                nums1[count] = arr1[i];
                nums1[++count] = arr1[i];
                i++;
                j++; 
            }*/

        }
        
        if(i == m)
        {
            while(j < n)
            {
                nums1[count] = nums2[j];
                ++j;
                ++count;
            }
        }
        
        if(j == n)
        {
            while(i < m)
            {
                nums1[count] = arr1[i];
                ++i;
                ++count;
            }
        }
    }
};
