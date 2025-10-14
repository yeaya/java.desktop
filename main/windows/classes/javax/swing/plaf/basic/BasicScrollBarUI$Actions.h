#ifndef _javax_swing_plaf_basic_BasicScrollBarUI$Actions_h_
#define _javax_swing_plaf_basic_BasicScrollBarUI$Actions_h_
//$ class javax.swing.plaf.basic.BasicScrollBarUI$Actions
//$ extends sun.swing.UIAction

#include <sun/swing/UIAction.h>

#pragma push_macro("MAX_SCROLL")
#undef MAX_SCROLL
#pragma push_macro("MIN_SCROLL")
#undef MIN_SCROLL
#pragma push_macro("NEGATIVE_BLOCK_INCREMENT")
#undef NEGATIVE_BLOCK_INCREMENT
#pragma push_macro("NEGATIVE_UNIT_INCREMENT")
#undef NEGATIVE_UNIT_INCREMENT
#pragma push_macro("POSITIVE_BLOCK_INCREMENT")
#undef POSITIVE_BLOCK_INCREMENT
#pragma push_macro("POSITIVE_UNIT_INCREMENT")
#undef POSITIVE_UNIT_INCREMENT

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JScrollBar;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicScrollBarUI$Actions : public ::sun::swing::UIAction {
	$class(BasicScrollBarUI$Actions, 0, ::sun::swing::UIAction)
public:
	BasicScrollBarUI$Actions();
	void init$($String* name);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	void scroll(::javax::swing::JScrollBar* scrollBar, int32_t dir, bool block);
	static $String* POSITIVE_UNIT_INCREMENT;
	static $String* POSITIVE_BLOCK_INCREMENT;
	static $String* NEGATIVE_UNIT_INCREMENT;
	static $String* NEGATIVE_BLOCK_INCREMENT;
	static $String* MIN_SCROLL;
	static $String* MAX_SCROLL;
};

			} // basic
		} // plaf
	} // swing
} // javax

#pragma pop_macro("MAX_SCROLL")
#pragma pop_macro("MIN_SCROLL")
#pragma pop_macro("NEGATIVE_BLOCK_INCREMENT")
#pragma pop_macro("NEGATIVE_UNIT_INCREMENT")
#pragma pop_macro("POSITIVE_BLOCK_INCREMENT")
#pragma pop_macro("POSITIVE_UNIT_INCREMENT")

#endif // _javax_swing_plaf_basic_BasicScrollBarUI$Actions_h_