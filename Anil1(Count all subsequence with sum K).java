import java.util.*;
public class Solution {

    public static List<List<Integer>> helper(int []arr, long k){
        List<List<Integer>> ans = new ArrayList<>();
        // Traverse the whole array 
        for(int i = 0; i<arr.length; i++){
            long sum = 0; 
            ArrayList<Integer>listSum = new ArrayList<>();
            for(int j = i; j<arr.length; j++){
                sum = sum + arr[j];
                listSum.add(arr[j]);

                // check sum is equal to k then add it to the final list in ans & break it 
                if(sum==k){
                    ans.add(listSum);
                    break;
                }
            }
        }
        return ans;
    }
    public static List< List < Integer > > subarraysWithSumK(int []a, long k) {
        // Write your code 

        return helper(a,k);
    }
}
