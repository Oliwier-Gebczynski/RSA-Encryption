#include <iostream>
#include <map>
#include <set>
#include <fstream>
#include <list>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <limits>
#include <queue>
#include <cctype>
#pragma once

std::string readFile(const std::string& file);

//hill cipher
std::string hillEncrypt(const std::string &file, const std::string &input_key);

std::vector<std::vector<int>> keyMatrix (const std::string &key);

std::vector<int> messageVector (const std::string &text);

