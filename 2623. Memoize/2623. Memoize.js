/**
 * @param {Function} fn
 */
 function memoize(fn) {
    const mp = {};
    return function(...args) {
       const key = args.join('#');
       if(mp[key] == undefined) mp[key] = fn(...args);
       return mp[key];
    }
}


/** 
 * let callCount = 0;
 * const memoizedFn = memoize(function (a, b) {
 *	 callCount += 1;
 *   return a + b;
 * })
 * memoizedFn(2, 3) // 5
 * memoizedFn(2, 3) // 5
 * console.log(callCount) // 1 
 */