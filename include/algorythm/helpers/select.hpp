#if !defined ALGORYTHM_SELECT_HPP
	#define ALGORYTHM_SELECT_HPP
	#include <algorythm/helpers/predicate.hpp>

namespace algorythm
{

using namespace predicate;

// Function pointer argument version
template<class T>
constexpr T& select(T& a, T& b, binary<T> selectFirst) noexcept
{
	return selectFirst(a, b) ? a : b;
}

template<class T>
constexpr T& select(T& a, T& b, binary<T> selectFirst, unary<T> filter) noexcept
{
	return selectFirst(a, b) ? a : b;
}

// Template argument version
template<class T, binary<T> SELECT_FIRST>
constexpr T& select(T& a, T& b) noexcept
{
	return SELECT_FIRST(a, b) ? a : b;
}

} // namespace algorythm

#endif // ALGORYTHM_SELECT_HPP
