var expect = function(val) {
  return {
    toBe: function(val1) {
      if (val === val1)
        return true;
      else
        throw "Not Equal";
    },
    notToBe: function(val2) {
      if (val !== val2)
        return true;
      else
        throw "Equal";
    }
  };
};


