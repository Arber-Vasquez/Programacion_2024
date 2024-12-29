#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // Para std::find_if
using namespace std;

// Clase Medicamento
class Medicamento {
private:
    string nombre;
    int stock;
    double precio;

public:
    Medicamento(string n, int s, double p) : nombre(n), stock(s), precio(p) {}

    string getNombre() const { return nombre; }
    int getStock() const { return stock; }
    double getPrecio() const { return precio; }

    void actualizarStock(int cantidad) { stock += cantidad; }
    void mostrarInformacion() const {
        cout << "Nombre: " << nombre 
             << " | Stock: " << stock 
             << " | Precio: $" << precio << endl;
    }
};

// Clase Farmacia
class Farmacia {
private:
    vector<Medicamento> inventario;

    // Buscar un medicamento por nombre
    auto buscarMedicamento(const string& nombre) {
        return find_if(inventario.begin(), inventario.end(), 
                       [&nombre](const Medicamento& m) {
                           return m.getNombre() == nombre;
                       });
    }

public:
    void agregarMedicamento(const string& nombre, int stock, double precio) {
        auto it = buscarMedicamento(nombre);
        if (it != inventario.end()) {
            cout << "El medicamento ya existe. Actualizando stock...\n";
            it->actualizarStock(stock);
        } else {
            inventario.emplace_back(nombre, stock, precio);
            cout << "Medicamento agregado correctamente.\n";
        }
    }

    void listarMedicamentos() const {
        if (inventario.empty()) {
            cout << "El inventario está vacío.\n";
            return;
        }
        cout << "\nInventario de la farmacia:\n";
        for (const auto& med : inventario) {
            med.mostrarInformacion();
        }
    }

    void buscarMedicamentoPorNombre(const string& nombre) const {
        auto it = find_if(inventario.begin(), inventario.end(), 
                          [&nombre](const Medicamento& m) {
                              return m.getNombre() == nombre;
                          });
        if (it != inventario.end()) {
            it->mostrarInformacion();
        } else {
            cout << "Medicamento no encontrado.\n";
        }
    }

    void eliminarMedicamento(const string& nombre) {
        auto it = buscarMedicamento(nombre);
        if (it != inventario.end()) {
            inventario.erase(it);
            cout << "Medicamento eliminado correctamente.\n";
        } else {
            cout << "Medicamento no encontrado.\n";
        }
    }
};

// Función para mostrar el menú
void mostrarMenu() {
    cout << "\n--- Gestión de Farmacia ---\n";
    cout << "1. Agregar medicamento\n";
    cout << "2. Listar medicamentos\n";
    cout << "3. Buscar medicamento\n";
    cout << "4. Eliminar medicamento\n";
    cout << "5. Salir\n";
    cout << "Seleccione una opción: ";
}

int main() {
    Farmacia farmacia;
    int opcion;

    do {
        mostrarMenu();
        cin >> opcion;
        cin.ignore(); // Limpiar el buffer

        switch (opcion) {
            case 1: {
                string nombre;
                int stock;
                double precio;
                cout << "Ingrese el nombre del medicamento: ";
                getline(cin, nombre);
                cout << "Ingrese la cantidad en stock: ";
                cin >> stock;
                cout << "Ingrese el precio: ";
                cin >> precio;
                farmacia.agregarMedicamento(nombre, stock, precio);
                break;
            }
            case 2:
                farmacia.listarMedicamentos();
                break;
            case 3: {
                string nombre;
                cout << "Ingrese el nombre del medicamento a buscar: ";
                cin.ignore();
                getline(cin, nombre);
                farmacia.buscarMedicamentoPorNombre(nombre);
                break;
            }
            case 4: {
                string nombre;
                cout << "Ingrese el nombre del medicamento a eliminar: ";
                cin.ignore();
                getline(cin, nombre);
                farmacia.eliminarMedicamento(nombre);
                break;
            }
            case 5:
                cout << "Saliendo del sistema...\n";
                break;
            default:
                cout << "Opción inválida. Intente de nuevo.\n";
        }
    } while (opcion != 5);

    return 0;
}
