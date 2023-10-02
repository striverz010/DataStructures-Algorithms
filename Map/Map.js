let arr=[1,1,2,2,3,4,4,5,6,7];
let n=arr.length;

//declaring the map
let mpp=new Map();
for(let i=0;i<n;i++){

    //findgin whether the element is there or not in map
    if(mpp.has(arr[i])){
        mpp.set(arr[i],mpp.get(arr[i])+1);
    }
    else{
        mpp.set(arr[i],1);
    }
}

//printing the occurane of the elements...
for(let [key,value] of mpp.entries()){
    console.log(key, value);
}
