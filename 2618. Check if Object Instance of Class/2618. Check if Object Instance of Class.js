/**
 * @param {Object} object
 * @param {Function} classFunction
 * @return {boolean}
 */
 var checkIfInstanceOf = function(obj, classFunction) {
    if(obj === null || obj === undefined || typeof classFunction !== 'function')
return false;
   while(obj != null){

       if(obj.__proto__ === classFunction.prototype) return true;
       obj = obj.__proto__;
   }
   return false;
};

/**
* checkIfInstanceOf(new Date(), Date); // true
*/