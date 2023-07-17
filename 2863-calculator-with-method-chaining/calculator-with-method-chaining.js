class Calculator {
  /** 
   * @param {number} value
   */
  constructor(value) {
    this.value = value;
    this.result = value;
  }

  /** 
   * @param {number} value
   * @return {Calculator}
   */
  add(value) {
    this.result += value;
    return this;
    console.log(this.result);
  }

  /** 
   * @param {number} value
   * @return {Calculator}
   */
  subtract(value) {
    this.result -= value;
    return this;
  }

  /** 
   * @param {number} value
   * @return {Calculator}
   */  
  multiply(value) {
    this.result *= value;
    return this;
  }

  /** 
   * @param {number} value
   * @return {Calculator}
   */
  divide(value) {
     if (typeof value !== 'number' || value === 0) {
      throw new Error("Division by zero is not allowed");
    }
    this.result /= value;
    return this;
  }
  
  /** 
   * @param {number} value
   * @return {Calculator}
   */
  power(value) {
    this.result = Math.pow(this.result, value);
    return this;
  }
    
  /** 
   * @return {number}
   */
  getResult() {
    console.log(this.result);
    return this.result;
  }
}

