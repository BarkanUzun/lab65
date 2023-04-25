#include <list>
#include <string>
#include <algorithm>

using namespace std;

list<int> intersection(const list<int>& list1, const list<int>& list2) {
    list<int> result;

    for (const auto& elem : list1) {
        if (find(list2.begin(), list2.end(), elem) != list2.end()) {
            result.push_back(elem);
        }
    }

    return result;
}
bool is_palindrome(const string& s) {
    return equal(s.begin(), s.end(), s.rbegin());
}

list<string> filter_palindromes(const list<string>& input) {
    list<string> result;

    for (const auto& str : input) {
        if (is_palindrome(str)) {
            result.push_back(str);
        }
    }

    return result;
}

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

list<int> filter_primes(const list<int>& input) {
    list<int> result;

    for (const auto& elem : input) {
        if (is_prime(elem)) {
            result.push_back(elem);
        }
    }

    return result;
}

bool is_anagram(const string& word1, const string& word2) {
    string sorted1 = word1;
    string sorted2 = word2;
    sort(sorted1.begin(), sorted1.end());
    sort(sorted2.begin(), sorted2.end());

    return sorted1 == sorted2;
}

list<string> anagrams(const string& word, const list<string>& word_list) {
    list<string> result;

    for (const auto& candidate : word_list) {
        if (is_anagram(word, candidate)) {
            result.push_back(candidate);
        }
    }
    return result;
}

int main() {
    return 0;
}
