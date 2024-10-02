void merge(int arr[], int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;
	int* L = new int[n1], * R = new int[n2];

	for (i = 0; i < n1; i++)
		L[i] = arr[l + i];
	for (j = 0; j < n2; j++)
		R[j] = arr[m + 1 + j];

	i = j = 0;
	k = l;

	while (i < n1 && j < n2)
	{
		comp++;
		if (L[i] <= R[j])
		{
			arr[k] = L[i];
			i++;
			ite++;
		}
		else
		{
			arr[k] = R[j];
			j++;
			ite++;
		}
		k++;
	}

	while (i < n1)
	{
		arr[k] = L[i];
		i++;
		k++;
		ite++;
	}

	while (j < n2)
	{
		arr[k] = R[j];
		j++;
		k++;
		ite++;
	}
}