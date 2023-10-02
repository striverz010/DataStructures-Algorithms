import java.util.*;
class Solution{
    public static void main(String args[]){
        
        int arr[] = {10, 20, 20, 10, 10, 20, 5, 20};
        int n=arr.length;
        
        HashMap<Integer,Integer>mpp=new HashMap<Integer,Integer>();
        for(int i=0;i<n;i++){
            if(mpp.containsKey(arr[i])){

                mpp.put(arr[i],mpp.get(arr[i])+1);
            }
            else{
                mpp.put(arr[i],1);
            }
        }

        for (Map.Entry entry : mpp.entrySet()) {
            System.out.println(entry.getKey() + " " + entry.getValue());
        }
    }
}