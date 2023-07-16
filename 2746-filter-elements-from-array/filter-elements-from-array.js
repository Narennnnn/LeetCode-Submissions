var filter = function(arr, fn) {
  var newArr = [];
  
  arr.forEach(function(currentValue, i) {
    if (fn(currentValue,i)) {
      newArr.push(currentValue);
    }
  });
  
  return newArr;
};
