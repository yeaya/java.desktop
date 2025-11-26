#ifndef _javax_swing_text_TabExpander_h_
#define _javax_swing_text_TabExpander_h_
//$ interface javax.swing.text.TabExpander
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {
		namespace text {

class $export TabExpander : public ::java::lang::Object {
	$interface(TabExpander, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual float nextTabStop(float x, int32_t tabOffset) {return 0.0;}
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_TabExpander_h_