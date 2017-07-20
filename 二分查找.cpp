template <typename T>
int binarySearch(const vector<T> &v, int low, int high, const T &value)
{
    if (high >= low) {
        int mid = low + (high - low) / 2;
        if (value > v[mid])
            return binarySearch(v, mid+1, high, value);
        else if (value < v[mid])
            return binarySearch(v, low, mid-1, value);
        else {
            int loc = 0;
            for (int i = mid; i < v.size(); i ++)
                if (v[i] == value) loc = i;
            return loc;
        }
    }
    return -1;
}
