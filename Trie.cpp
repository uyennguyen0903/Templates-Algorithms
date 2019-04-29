/////trie
int lst[V];
map<int, int> nxt[V];

int get_nxt(int v, int x)
{
	if(!nxt[v].count(x))
		nxt[v][x] = t++;
	return nxt[v][x];
}

void add(vector<int> diff, int x)
{
	int v = 0;
	for(auto i : diff)
		v = get_nxt(v, i);
	lst[v] = x;
}

int try_find(vector<int> diff)
{
	int v = 0;
	for(auto i : diff)
	{
		if(!nxt[v].count(i))
			return -1;
		v = nxt[v][i];
	}
	return lst[v];
}
////trie