/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function(s, t) {
    const s1 = s.split('');
    s1.sort();
    const resS = s1.join('');
    const t1 = t.split('');
    t1.sort();
    const resT = t1.join('');
    console.log(resS+" "+resT);
    if(resS!=resT)
    return false;
    else
    return true;
};