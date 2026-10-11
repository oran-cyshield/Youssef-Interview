class PaymentProcessor {
public:
    double processPayment(const std::string& type, double amount) {
        double total = amount;
        if (type == "CASH") { }
        else if (type == "CREDIT") total += amount * 0.03;
        else if (type == "PAYPAL") total += 1.5;
        else { std::cout << "Unknown payment type\n"; return 0; }
        std::cout << "Payment type: " << type << " | Total charged: " << total << "\n";
        return total;
    }
};