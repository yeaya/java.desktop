#ifndef _javax_swing_text_TabableView_h_
#define _javax_swing_text_TabableView_h_
//$ interface javax.swing.text.TabableView
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {
		namespace text {
			class TabExpander;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $export TabableView : public ::java::lang::Object {
	$interface(TabableView, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual float getPartialSpan(int32_t p0, int32_t p1) {return 0.0;}
	virtual float getTabbedSpan(float x, ::javax::swing::text::TabExpander* e) {return 0.0;}
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_TabableView_h_