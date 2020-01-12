#if !defined ALGORYTHM_EXTREMES_HPP
	#define ALGORYTHM_EXTREMES_HPP
	#include <algorythm/helpers/select.hpp>

namespace algorythm::statistic
{

template<class T> constexpr T& min = select<T, T::operator<()>;
template<class T> constexpr T& max = select<T, T::operator>()>;

} // namespace algorythm::statistic

#endif // ALGORYTHM_EXTREMES_HPP
