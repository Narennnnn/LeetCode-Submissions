var map = function(arr, fn) {
    var resArray=[]
    arr.forEach((val, index)=>{
       resArray.push(fn(val, index)) 
    });
    return resArray
};
