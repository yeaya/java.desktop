#ifndef _javax_swing_text_NavigationFilter_h_
#define _javax_swing_text_NavigationFilter_h_
//$ class javax.swing.text.NavigationFilter
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		namespace text {
			class JTextComponent;
			class NavigationFilter$FilterBypass;
			class Position$Bias;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import NavigationFilter : public ::java::lang::Object {
	$class(NavigationFilter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NavigationFilter();
	void init$();
	virtual int32_t getNextVisualPositionFrom(::javax::swing::text::JTextComponent* text, int32_t pos, ::javax::swing::text::Position$Bias* bias, int32_t direction, $Array<::javax::swing::text::Position$Bias>* biasRet);
	virtual void moveDot(::javax::swing::text::NavigationFilter$FilterBypass* fb, int32_t dot, ::javax::swing::text::Position$Bias* bias);
	virtual void setDot(::javax::swing::text::NavigationFilter$FilterBypass* fb, int32_t dot, ::javax::swing::text::Position$Bias* bias);
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_NavigationFilter_h_