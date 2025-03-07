class Solution {
    public List<List<Integer>> fourSum(int[] nums, int target) {
        int n = nums.length;
        Arrays.sort(nums);
        List<List<Integer>> result = new ArrayList<>();
        Set<String> set = new HashSet<>();

        for (int i = 0; i < n; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            for (int j = i + 1; j < n; j++) {
                if (j > i + 1 && nums[j] == nums[j - 1]) {
                    continue;
                }
                int k = j + 1;
                int l = n - 1;
                while (k < l) {
                    if (nums[i] + nums[j] + nums[k] + nums[l] <= target) {
                        long sum = (long) nums[i] + (long) nums[j] + (long) nums[k] + (long) nums[l];
                        if (sum == target) {
                            int[] temp = {nums[i], nums[j], nums[k], nums[l]};
                            Arrays.sort(temp);
                            set.add(Arrays.toString(temp));
                            k++;
                            l--;
                        } else if (sum < target) {
                            k++;
                        } else {
                            l--;
                        }
                    } else {
                        l--;
                    }
                }
            }
        }

        for (String s : set) {
            String[] temp = s.substring(1, s.length() - 1).split(", ");
            List<Integer> list = new ArrayList<>();
            for (String str : temp) {
                list.add(Integer.parseInt(str));
            }
            result.add(list);
        }

        return result;
    }
}