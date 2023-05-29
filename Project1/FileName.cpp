#include <iostream>
#include <vector>
class Client {
private:
	std::string _name;
	int _id;
	//static std::vector<Client*>_clients;
	void ShowClient() {
		std::cout << "Name: " << _name << '\n';
		std::cout << "ID: " << _id << '\n';

	}
public:
	Client(std::string name, int id, std::vector<Client*>&client) : _name(name), _id(id) {
		//_clients.push_back(this);
		client.push_back(this);
	}

	
	 void ShowClients(std::vector<Client*>&clients) {
	for (const auto& it : clients) {
			it->ShowClient();
		}
	}
};
//std::vector<Client*>Client::_clients;



int main()
{
	std::vector<Client*>clients;
	Client* client1 = new Client("John", 20, clients);
	Client* client2 = new Client("Alex", 15,clients);
	Client* client3 = new Client("Bob", 32,clients);
	client1->ShowClients(clients);
	//Client::ShowClients();

	return 0;
}