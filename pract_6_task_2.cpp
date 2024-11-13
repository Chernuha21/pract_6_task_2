#include <iostream>
#include <stack>

int main() {
    // Створення стека та додавання чисел
    std::stack<int> numberStack;
    numberStack.push(5);
    numberStack.push(12);
    numberStack.push(17);
    numberStack.push(20);
    numberStack.push(14);
    numberStack.push(22);
    numberStack.push(10);

    int evenSum = 0;
    int evenCount = 0;

    // Перевірка чисел у стеці
    while (!numberStack.empty()) {
        int number = numberStack.top(); // Отримуємо верхній елемент
        numberStack.pop(); // Видаляємо його з стека

        // Перевіряємо, чи є число парним і в діапазоні від 10 до 20
        if (number % 2 == 0 && number >= 10 && number <= 20) {
            evenSum += number; // Додаємо до суми парних чисел
            evenCount++; // Збільшуємо лічильник парних чисел
        }
    }

    // Обчислюємо середнє значення парних чисел
    double average = (evenCount > 0) ? static_cast<double>(evenSum) / evenCount : 0.0;

    // Вивід результату
    std::cout << "Average valeu of non add numbers between 10 and 20: " << average << std::endl;

    return 0;
}
