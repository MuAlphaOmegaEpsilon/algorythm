#if !defined ALGORYTHM_PREDICATE_HPP
	#define ALGORYTHM_PREDICATE_HPP

namespace algorythm::predicate
{

template<class T> using unary = bool (*const)(const T&);
template<class T> using binary = bool (*const)(const T&, const T&);
template<class T, class ST> using score = ST (*const)(const T&);

} // namespace algorythm::predicate

#endif // ALGORYTHM_PREDICATE_HPP
