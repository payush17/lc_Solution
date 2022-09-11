class Solution {
    public int[] asteroidCollision(int[] asteroids) {
        Stack<Integer> stack = new Stack<>();
        for(int o : asteroids){
            if(o>0)
                stack.push(o);//positive asteroid
            else{
                while(!stack.isEmpty() && stack.peek()>0 && stack.peek()<Math.abs(o))
                    stack.pop();
                if(stack.isEmpty() || stack.peek()<0)
                    stack.push(o);
                else if(stack.peek()+o==0)//equal asteroid of opposite sign
                    stack.pop();
            }
        }
        int []  rem = new int[stack.size()];
        for(int i=rem.length-1;i>=0;i--){
            rem[i]=stack.pop();
            
        }
        return rem;
    }
}