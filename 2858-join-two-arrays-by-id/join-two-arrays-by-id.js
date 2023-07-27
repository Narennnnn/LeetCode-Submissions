/* @param {Array} arr1
 * @param {Array} arr2
 * @return {Array}
 */
var join = function(arr1, arr2) {
    const idSet = new Set();
    const idToObjectMap = {};

    // Helper function to merge two objects based on the id key
    function mergeObjects(obj1, obj2) {
        const mergedObj = { ...obj1 };
        for (const [key, value] of Object.entries(obj2)) {
            mergedObj[key] = value;
        }
        return mergedObj;
    }

    // Process arr1
    for (const obj of arr1) {
        const id = obj.id;
        idSet.add(id);
        idToObjectMap[id] = obj;
    }

    // Process arr2
    for (const obj of arr2) {
        const id = obj.id;
        idSet.add(id);
        if (idToObjectMap[id]) {
            idToObjectMap[id] = mergeObjects(idToObjectMap[id], obj);
        } else {
            idToObjectMap[id] = obj;
        }
    }

    // Convert the map back to an array of objects and sort by id
    const joinedArray = Array.from(idSet).map(id => idToObjectMap[id]);
    joinedArray.sort((a, b) => a.id - b.id);

    return joinedArray;
};