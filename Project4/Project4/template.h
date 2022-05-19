#pragma once

template <typename T>
void search(T c) {
	srand(time(0));
	int flag = 0, s;
	T sum;
	std::cout << "¬ведите размер: " << std::endl;
	std::cin >> s;
	
	T* arr = new T[s];
	for (int i = 0; i < s; i++) {

		T el = (T)(rand() % 500) * 0.1;
		arr[i] = el;

		std::cout << i << ": " << arr[i] << std::endl;
	}
	sum = arr[0];
	for (int i = 1; i < s; i++) {
		sum += arr[i];
	}

	std::cout << "—реднее:" << (double)sum / (double)s << std::endl;

}