var chunk = function(arr, size) {
  if (arr.length == 0)
    return arr;

  var resArr = [];
    if (size > arr.length){
    resArr.push(arr);
    return resArr;
    }

  var newArr = [];

  for (let i = 0; i < arr.length; i++) {
    newArr.push(arr[i]);
   // console.log(newArr);

    if (newArr.length == size || (newArr.length<size && i==arr.length-1) ) {
      resArr.push(newArr);
     // console.log(resArr);
      newArr = []; // Reset newArr to an empty array
    }
  }

  return resArr;
};
