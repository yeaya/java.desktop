#ifndef _javax_swing_plaf_synth_SynthConstants_h_
#define _javax_swing_plaf_synth_SynthConstants_h_
//$ interface javax.swing.plaf.synth.SynthConstants
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("DEFAULT")
#undef DEFAULT
#pragma push_macro("DISABLED")
#undef DISABLED
#pragma push_macro("ENABLED")
#undef ENABLED
#pragma push_macro("FOCUSED")
#undef FOCUSED
#pragma push_macro("MOUSE_OVER")
#undef MOUSE_OVER
#pragma push_macro("PRESSED")
#undef PRESSED
#pragma push_macro("SELECTED")
#undef SELECTED

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class $import SynthConstants : public ::java::lang::Object {
	$interface(SynthConstants, $NO_CLASS_INIT, ::java::lang::Object)
public:
	static const int32_t ENABLED = 1; // 1 << 0
	static const int32_t MOUSE_OVER = 2; // 1 << 1
	static const int32_t PRESSED = 4; // 1 << 2
	static const int32_t DISABLED = 8; // 1 << 3
	static const int32_t FOCUSED = 256; // 1 << 8
	static const int32_t SELECTED = 512; // 1 << 9
	static const int32_t DEFAULT = 1024; // 1 << 10
};

			} // synth
		} // plaf
	} // swing
} // javax

#pragma pop_macro("DEFAULT")
#pragma pop_macro("DISABLED")
#pragma pop_macro("ENABLED")
#pragma pop_macro("FOCUSED")
#pragma pop_macro("MOUSE_OVER")
#pragma pop_macro("PRESSED")
#pragma pop_macro("SELECTED")

#endif // _javax_swing_plaf_synth_SynthConstants_h_