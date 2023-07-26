function compactObject(obj) {
  if (Array.isArray(obj)) {
    return obj.filter(Boolean).map(compactObject);
  } else if (typeof obj === 'object' && obj !== null) {
    const compactedObj = {};
    for (const key in obj) {
      const compactedValue = compactObject(obj[key]);
      if (Boolean(compactedValue)) {
        compactedObj[key] = compactedValue;
      }
    }
    return compactedObj;
  } else {
    return obj;
  }
}
