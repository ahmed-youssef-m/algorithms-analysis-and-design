void insertionSortAlgo(int ISA_arr[], int s) {
	int key, j;
	for (int i = 1; i < s; i++)
	{
		key = ISA_arr[i];
		j = i - 1;
		while (j >= 0 && key < ISA_arr[j])
		{
			ISA_arr[j + 1] = ISA_arr[j];
			j--;
			comp++;
		}
		ISA_arr[j + 1] = key;
		ite++;
	}

	printSortedArr(ISA_arr, s);
}