#include <vector>
#include <cstdio>

int main()
{
	std::vector<int> xs = {1, 2, 3};
	printf("%zu\n", xs.size());
	printf("%d\n", fileno(stderr));
	return 0;
}
