/**
 * @param {number} n
 * @return {Function} counter
 */
var createCounter = function(n) {
    
    return function() {
        ans = n;
        n = n+1;
        return ans;
    };
};

