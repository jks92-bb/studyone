public class BankAccount {
    private int balance;    // 잔고

    private String name;    // 계좌주 성명

    public BankAccount(int balance, String name) {
        this.name = name;
        deposit(balance);
    }

    // 입금
    public void deposit(int amount) {
        this.balance += amount;
        System.out.println(amount + " 원이 입금처리 되었습니다.");
        this.showBalance();
    }

    //출금
    public void withdraw(int amount) {
        if (this.balance <= amount) {
            System.out.println("잔고가 부족합니다.");
            this.showBalance();
            return;
        }
        this.balance -= amount;
        System.out.println(amount + "원이 출금처리 되었습니다.");
        this.showBalance();
    }

    public void showBalance() {
        System.out.println(this.name +"님의 현재 잔고:"+ this.balance);
    }

    // 백도어 느낌.
    //public void setBalance(int balance) {
    //    this.balance = balance;
    // }
}
