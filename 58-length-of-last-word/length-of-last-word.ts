function lengthOfLastWord(s: string): number {
    let newStr = s.trim();
    let ctr = 0;

    for (let i = newStr.length - 1; i >= 0; i--) {
        if (newStr[i] === ' ') {
            break;
        } else {
            ctr++;
        }
    }
    
    console.log("Trimmed String:", newStr);
    return ctr;
}