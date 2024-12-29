#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // Para find_if
using namespace std;

// Clase Producto
class Producto {
private:
    string nombre;
    int cantidad;
    double precio;

public:
    Producto(string n, int c, double p) : nombre(n), cantidad(c), precio(p) {}

    string getNombre() const { return nombre; }
    int getCantidad() const { return cantidad; }
    double getPrecio() const { return precio; }

    void actualizarCantidad(int c) { cantidad += c; }
    void mostrarInformacion() const {
        cout << "Nombre: " << nombre 
             << " | Cantidad: " << cantidad 
             << " | Precio: $" << precio << endl;
    }
};

// Clase Ferretería
class Ferreteria {
private:
    vector<Producto> inventario;

    // Buscar producto por nombre (función miembro)
    vector<Producto>::iterator buscarProducto(const string& nombre) {
        for (auto it = inventario.begin(); it != inventario.end(); ++it) {
            if (it->getNombre() == nombre) {
                return it;
            }
        }
        return inventario.end(); // No encontrado
    }

public:
    void agregarProducto(const string& nombre, int cantidad, double precio) {
        auto it = buscarProducto(nombre);
        if (it != inventario.end()) {
            cout << "El producto ya existe. Actualizando cantidad...\n";
            it->actualizarCantidad(cantidad);
        } else {
            inventario.emplace_back(nombre, cantidad, precio);
            cout << "Producto agregado correctamente.\n";
        }
    }

    void listarProductos() const {
        if (inventario.empty()) {
            cout << "El inventario está vacío.\n";
            return;
        }
        cout << "\nInventario de la ferretería:\n";
        for (const auto& prod : inventario) {
            prod.mostrarInformacion();
        }
    }

    void buscarProductoPorNombre(const string& nombre) const {
        for (const auto& prod : inventario) {
            if (prod.getNombre() == nombre) {
                prod.mostrarInformacion();
                return;
            }
        }
        cout << "Producto no encontrado.\n";
    }

    void eliminarProducto(const string& nombre) {
        auto it = buscarProducto(nombre);
        if (it != inventario.end()) {
            inventario.erase(it);
            cout << "Producto eliminado correctamente.\n";
        } else {
            cout << "Producto no encontrado.\n";
        }
    }
};

// Función para mostrar el menú
void mostrarMenu() {
    cout << "\n--- Gestión de Ferretería ---\n";
    cout << "1. Agregar producto\n";
    cout << "2. Listar productos\n";
    cout << "3. Buscar producto\n";
    cout << "4. Eliminar producto\n";
    cout << "5. Salir\n";
    cout << "Seleccione una opción: ";
}

int main() {
    Ferreteria ferreteria;
    int opcion;

    do {
        mostrarMenu();
        cin >> opcion;
        cin.ignore(); // Limpiar el buffer de entrada

        switch (opcion) {
            case 1: {
                string nombre;
                int cantidad;
                double precio;
                cout << "Ingrese el nombre del producto: ";
                getline(cin, nombre);
                cout << "Ingrese la cantidad: ";
                cin >> cantidad;
                cout << "Ingrese el precio: ";
                cin >> precio;
                ferreteria.agregarProducto(nombre, cantidad, precio);
                break;
            }
            case 2:
                ferreteria.listarProductos();
                break;
            case 3: {
                string nombre;
                cout << "Ingrese el nombre del producto a buscar: ";
                cin.ignore();
                getline(cin, nombre);
                ferreteria.buscarProductoPorNombre(nombre);
                break;
            }
            case 4: {
                string nombre;
                cout << "Ingrese el nombre del producto a eliminar: ";
                cin.ignore();
                getline(cin, nombre);
                ferreteria.eliminarProducto(nombre);
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
