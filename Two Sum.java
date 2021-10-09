class Solution {
    fun twoSum(nums: IntArray, target: Int): IntArray {
        val map = mutableMapOf<Int, Int>()
        nums.forEachIndexed { i, x ->
            val need = target - x
            if (map.containsKey(need)) {
                return intArrayOf(map[need]!!, i)
            }
            map[x] = i
        }
        return intArrayOf()
    }
}
