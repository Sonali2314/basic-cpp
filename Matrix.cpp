#include <iostream>
#include <stdexcept>

class Matrix {
private:
    int rows;
    int cols;
    int **data;

public:
    // Constructor
    Matrix(int rows = 0, int cols = 0) : rows(rows), cols(cols) {
        if (rows <= 0 || cols <= 0)
            throw std::invalid_argument("Matrix dimensions must be positive");
        
        // Allocate memory
        data = new int*[rows];
        for (int i = 0; i < rows; ++i)
            data[i] = new int[cols];
    }

    // Copy constructor
    Matrix(const Matrix& other) : rows(other.rows), cols(other.cols) {
        data = new int*[rows];
        for (int i = 0; i < rows; ++i) {
            data[i] = new int[cols];
            for (int j = 0; j < cols; ++j)
                data[i][j] = other.data[i][j];
        }
    }

    // Destructor
    ~Matrix() {
        for (int i = 0; i < rows; ++i)
            delete[] data[i];
        delete[] data;
    }

    // Overloaded input operator
    friend std::istream& operator>>(std::istream& in, Matrix& matrix) {
        for (int i = 0; i < matrix.rows; ++i)
            for (int j = 0; j < matrix.cols; ++j)
                in >> matrix.data[i][j];
        return in;
    }

    // Overloaded output operator
    friend std::ostream& operator<<(std::ostream& out, const Matrix& matrix) {
        for (int i = 0; i < matrix.rows; ++i) {
            for (int j = 0; j < matrix.cols; ++j)
                out << matrix.data[i][j] << " ";
            out << std::endl;
        }
        return out;
    }

    // Overloaded addition operator
    Matrix operator+(const Matrix& other) const {
        if (rows != other.rows || cols != other.cols)
            throw std::invalid_argument("Matrix dimensions must match for addition");
        
        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i)
            for (int j = 0; j < cols; ++j)
                result.data[i][j] = data[i][j] + other.data[i][j];
        return result;
    }

    // Overloaded subtraction operator
    Matrix operator-(const Matrix& other) const {
        if (rows != other.rows || cols != other.cols)
            throw std::invalid_argument("Matrix dimensions must match for subtraction");
        
        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i)
            for (int j = 0; j < cols; ++j)
                result.data[i][j] = data[i][j] - other.data[i][j];
        return result;
    }

    // Overloaded multiplication operator
    Matrix operator*(const Matrix& other) const {
        if (cols != other.rows)
            throw std::invalid_argument("Matrix dimensions must match for multiplication");
        
        Matrix result(rows, other.cols);
        for (int i = 0; i < rows; ++i)
            for (int j = 0; j < other.cols; ++j) {
                result.data[i][j] = 0;
                for (int k = 0; k < cols; ++k)
                    result.data[i][j] += data[i][k] * other.data[k][j];
            }
        return result;
    }
};

int main() {
    try {
        Matrix A(2, 2);
        std::cout << "Enter elements for matrix A:\n";
        std::cin >> A;

        Matrix B(2, 2);
        std::cout << "Enter elements for matrix B:\n";
        std::cin >> B;

        std::cout << "Matrix A:\n" << A;
        std::cout << "Matrix B:\n" << B;

        Matrix C = A + B;
        std::cout << "Matrix A + B:\n" << C;

        Matrix D = A - B;
        std::cout << "Matrix A - B:\n" << D;

        Matrix E = A * B;
        std::cout << "Matrix A * B:\n" << E;
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
