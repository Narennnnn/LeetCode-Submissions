function numberOfEmployeesWhoMetTarget(hours: number[], target: number): number {
  let ans=0
  for(let i=0;i<hours.length;i++)if(hours[i]>=target)ans++
  return ans;
};