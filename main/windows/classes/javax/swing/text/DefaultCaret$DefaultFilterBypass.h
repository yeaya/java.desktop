#ifndef _javax_swing_text_DefaultCaret$DefaultFilterBypass_h_
#define _javax_swing_text_DefaultCaret$DefaultFilterBypass_h_
//$ class javax.swing.text.DefaultCaret$DefaultFilterBypass
//$ extends javax.swing.text.NavigationFilter$FilterBypass

#include <javax/swing/text/NavigationFilter$FilterBypass.h>

namespace javax {
	namespace swing {
		namespace text {
			class Caret;
			class DefaultCaret;
			class Position$Bias;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class DefaultCaret$DefaultFilterBypass : public ::javax::swing::text::NavigationFilter$FilterBypass {
	$class(DefaultCaret$DefaultFilterBypass, $NO_CLASS_INIT, ::javax::swing::text::NavigationFilter$FilterBypass)
public:
	DefaultCaret$DefaultFilterBypass();
	void init$(::javax::swing::text::DefaultCaret* this$0);
	virtual ::javax::swing::text::Caret* getCaret() override;
	virtual void moveDot(int32_t dot, ::javax::swing::text::Position$Bias* bias) override;
	virtual void setDot(int32_t dot, ::javax::swing::text::Position$Bias* bias) override;
	::javax::swing::text::DefaultCaret* this$0 = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_DefaultCaret$DefaultFilterBypass_h_