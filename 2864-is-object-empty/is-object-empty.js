/**
 * @param {Object | Array} obj
 * @return {boolean}
 */
var isEmpty = function(obj) {
    const arr=Object.keys(obj);
    if(arr.length==0)
     return true;
    else
     return false;
};