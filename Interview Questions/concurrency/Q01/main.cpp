class DatabaseConnection {
    static DatabaseConnection* instance;
    DatabaseConnection() { std::cout << "A database connection is created.\n"; }
public:
    static DatabaseConnection* getInstance() {
        if (instance == nullptr)
            instance = new DatabaseConnection();
        return instance;
    }
};
DatabaseConnection* DatabaseConnection::instance = nullptr;

void thread_function() {
    DatabaseConnection* connection = DatabaseConnection::getInstance();
    // Use the connection
}
int main() {
    // Create two threads that executes thread_function
}