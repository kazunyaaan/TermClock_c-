#ifndef A_TERM_H
#define A_TERM_H

namespace aterm
{

inline std::ostream& csi(std::ostream& os) { return os << "\x1b["; }

// http://en.wikipedia.org/wiki/ANSI_escape_code#CSI_codes
inline std::ostream& cuu(std::ostream& os) { return os << "A"; }
inline std::ostream& cud(std::ostream& os) { return os << "B"; }
inline std::ostream& cuf(std::ostream& os) { return os << "C"; }
inline std::ostream& cub(std::ostream& os) { return os << "D"; }

inline std::ostream& cnl(std::ostream& os) { return os << "E"; }
inline std::ostream& cpl(std::ostream& os) { return os << "F"; }

inline std::ostream& cha(std::ostream& os) { return os << "G"; }

inline std::ostream& cup(std::ostream& os) { return os << "H"; }

inline std::ostream& ed (std::ostream& os) { return os << "J"; }
inline std::ostream& el (std::ostream& os) { return os << "K"; }


inline std::ostream& sgr(std::ostream& os) { return os << "m"; }


inline std::ostream& dec(std::ostream& os) { return os << "?"; }
inline std::ostream& sm (std::ostream& os) { return os << "h"; }
inline std::ostream& rm (std::ostream& os) { return os << "l"; }


// extend
inline std::ostream& saveterm   (std::ostream& os) { return os << csi << dec << "1049" << sm; }
inline std::ostream& restoreterm(std::ostream& os) { return os << csi << dec << "1049" << rm; }
inline std::ostream& clearterm  (std::ostream& os) { return os << csi << cup << csi << ed; }
inline std::ostream& showcur    (std::ostream& os) { return os << csi << dec << "25" << sm; }
inline std::ostream& hiddencur  (std::ostream& os) { return os << csi << dec << "25" << rm; }

} // aterm

#endif // A_TERM_H
