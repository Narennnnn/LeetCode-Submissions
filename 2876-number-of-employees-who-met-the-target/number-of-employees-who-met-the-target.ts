function numberOfEmployeesWhoMetTarget(hours: number[], target: number): number {
  const ans = hours.filter((hoursWorked) => hoursWorked >= target);
  return ans.length;
}
