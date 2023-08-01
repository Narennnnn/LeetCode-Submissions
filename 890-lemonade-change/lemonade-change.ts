function lemonadeChange(bills: number[]): boolean {
    let availableFives = 0;
    let availableTens = 0;

    for (let i = 0; i < bills.length; i++) {
        const curr = bills[i];

        if (curr === 5) {
            availableFives++;
        } else if (curr === 10) {
            if (availableFives === 0) return false;
            availableFives--;
            availableTens++;
        } else if (curr === 20) {
            if (availableTens > 0 && availableFives > 0) {
                availableTens--;
                availableFives--;
            } else if (availableFives >= 3) {
                availableFives -= 3;
            } else {
                return false;
            }
        }
    }

    return true;
}
