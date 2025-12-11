#ifndef _apple_laf_JRSUIControl$BufferState_h_
#define _apple_laf_JRSUIControl$BufferState_h_
//$ class apple.laf.JRSUIControl$BufferState
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ALL_CHANGES_IN_BUFFER")
#undef ALL_CHANGES_IN_BUFFER
#pragma push_macro("CHANGE_WONT_FIT_IN_BUFFER")
#undef CHANGE_WONT_FIT_IN_BUFFER
#pragma push_macro("NO_CHANGE")
#undef NO_CHANGE
#pragma push_macro("SOME_CHANGES_IN_BUFFER")
#undef SOME_CHANGES_IN_BUFFER

namespace apple {
	namespace laf {

class JRSUIControl$BufferState : public ::java::lang::Enum {
	$class(JRSUIControl$BufferState, 0, ::java::lang::Enum)
public:
	JRSUIControl$BufferState();
	static $Array<::apple::laf::JRSUIControl$BufferState>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::apple::laf::JRSUIControl$BufferState* valueOf($String* name);
	static $Array<::apple::laf::JRSUIControl$BufferState>* values();
	static ::apple::laf::JRSUIControl$BufferState* NO_CHANGE;
	static ::apple::laf::JRSUIControl$BufferState* ALL_CHANGES_IN_BUFFER;
	static ::apple::laf::JRSUIControl$BufferState* SOME_CHANGES_IN_BUFFER;
	static ::apple::laf::JRSUIControl$BufferState* CHANGE_WONT_FIT_IN_BUFFER;
	static $Array<::apple::laf::JRSUIControl$BufferState>* $VALUES;
};

	} // laf
} // apple

#pragma pop_macro("ALL_CHANGES_IN_BUFFER")
#pragma pop_macro("CHANGE_WONT_FIT_IN_BUFFER")
#pragma pop_macro("NO_CHANGE")
#pragma pop_macro("SOME_CHANGES_IN_BUFFER")

#endif // _apple_laf_JRSUIControl$BufferState_h_