#pragma once

#include "btc_def.h"

std::string base58_encode(const void* src, size_t len);
std::string uint256_to_rstr(const uint256& src);
uint256 rstr_to_uint256(const std::string& s);
std::string to_hex(const void* src, size_t len);
uint256 double_sha256(const void* src, size_t len);