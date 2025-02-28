class Solution {
    public int lastStoneWeight(int[] stones) {
        //PriorityQueue<Integer> Q = new PriorityQueue<>();
        PriorityQueue<Integer> Q = new PriorityQueue<>(Collections.reverseOrder());
        int size=stones.length;
        int ele=0;
        for(int i=0;i<size;i++)
        {
            ele=stones[i];
            Q.add(ele);
        }
        while (Q.size() > 1) {
            int el1 = Q.peek();
            Q.poll();
            int el2 = Q.peek();
            Q.poll();
            if((el1-el2)!=0){
                int newVar = Math.abs(el1 - el2);
                Q.add(newVar);
            }
            
        }
        int e=0;
        if(Q.size()>0){
            e = Q.peek();
        }
        return e;
    }
}