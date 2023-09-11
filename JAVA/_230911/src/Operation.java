public class Operation {
    public static void main(String[] args) {
        BankAccount ba1 = new BankAccount(10000,"a");

        BankAccount ba2 = new BankAccount(50000, "B");

        ba1.deposit(10000);

        ba2.withdraw(10000);

        ba1.withdraw(10001);

    }
}
