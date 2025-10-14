#ifndef _javax_swing_text_NavigationFilter$FilterBypass_h_
#define _javax_swing_text_NavigationFilter$FilterBypass_h_
//$ class javax.swing.text.NavigationFilter$FilterBypass
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {
		namespace text {
			class Caret;
			class Position$Bias;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import NavigationFilter$FilterBypass : public ::java::lang::Object {
	$class(NavigationFilter$FilterBypass, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NavigationFilter$FilterBypass();
	void init$();
	virtual ::javax::swing::text::Caret* getCaret() {return nullptr;}
	virtual void moveDot(int32_t dot, ::javax::swing::text::Position$Bias* bias) {}
	virtual void setDot(int32_t dot, ::javax::swing::text::Position$Bias* bias) {}
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_NavigationFilter$FilterBypass_h_