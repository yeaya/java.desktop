#ifndef _javax_swing_WindowConstants_h_
#define _javax_swing_WindowConstants_h_
//$ interface javax.swing.WindowConstants
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("DISPOSE_ON_CLOSE")
#undef DISPOSE_ON_CLOSE
#pragma push_macro("DO_NOTHING_ON_CLOSE")
#undef DO_NOTHING_ON_CLOSE
#pragma push_macro("EXIT_ON_CLOSE")
#undef EXIT_ON_CLOSE
#pragma push_macro("HIDE_ON_CLOSE")
#undef HIDE_ON_CLOSE

namespace javax {
	namespace swing {

class $import WindowConstants : public ::java::lang::Object {
	$interface(WindowConstants, $NO_CLASS_INIT, ::java::lang::Object)
public:
	static const int32_t DO_NOTHING_ON_CLOSE = 0;
	static const int32_t HIDE_ON_CLOSE = 1;
	static const int32_t DISPOSE_ON_CLOSE = 2;
	static const int32_t EXIT_ON_CLOSE = 3;
};

	} // swing
} // javax

#pragma pop_macro("DISPOSE_ON_CLOSE")
#pragma pop_macro("DO_NOTHING_ON_CLOSE")
#pragma pop_macro("EXIT_ON_CLOSE")
#pragma pop_macro("HIDE_ON_CLOSE")

#endif // _javax_swing_WindowConstants_h_