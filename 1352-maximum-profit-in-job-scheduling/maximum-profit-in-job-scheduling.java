class Solution {
private class Job{
    private int startTime,endTime,profit;
    public Job(int s,int e,int p){
        startTime=s;
        endTime=e;
        profit=p;
    }
}
    public int jobScheduling(int[] startTime, int[] endTime, int[] profit) {
     List<Job>jobs=new ArrayList();
     for(int i=0;i<startTime.length;i++){
         jobs.add(new Job(startTime[i],endTime[i],profit[i]));
     }   
     Collections.sort(jobs,(a,b)->(a.endTime-b.endTime));
     TreeMap<Integer, Integer>map=new TreeMap();//<Time,MaxProfit>
     int ans=0;
     for(Job currJob:jobs){
         Integer entryTillStartTime=map.floorKey(currJob.startTime);
         Integer maxProfitTillStart=entryTillStartTime==null?0:map.get(entryTillStartTime);
         ans=Math.max(ans,maxProfitTillStart+currJob.profit);
         map.put(currJob.endTime,ans);
     }
     return ans;
    }
}