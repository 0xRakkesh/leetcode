/**
 * @param {string} val
 * @return {Object}
 */
var expect = function (val) {
    return {
        toBe: (nums) => { 
            if(nums === val){
                return true
            }
            throw new Error ("Not Equal")
        },
        notToBe: (nums) => {
            if(nums !== val){
                return true
            }
            throw new Error ("Equal")
        }
    }
};
