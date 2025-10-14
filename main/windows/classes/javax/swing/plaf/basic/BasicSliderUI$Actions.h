#ifndef _javax_swing_plaf_basic_BasicSliderUI$Actions_h_
#define _javax_swing_plaf_basic_BasicSliderUI$Actions_h_
//$ class javax.swing.plaf.basic.BasicSliderUI$Actions
//$ extends sun.swing.UIAction

#include <sun/swing/UIAction.h>

#pragma push_macro("MAX_SCROLL_INCREMENT")
#undef MAX_SCROLL_INCREMENT
#pragma push_macro("MIN_SCROLL_INCREMENT")
#undef MIN_SCROLL_INCREMENT
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
		class JSlider;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicSliderUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicSliderUI$Actions : public ::sun::swing::UIAction {
	$class(BasicSliderUI$Actions, 0, ::sun::swing::UIAction)
public:
	BasicSliderUI$Actions();
	void init$();
	void init$($String* name);
	virtual void actionPerformed(::java::awt::event::ActionEvent* evt) override;
	void scroll(::javax::swing::JSlider* slider, ::javax::swing::plaf::basic::BasicSliderUI* ui, int32_t direction, bool isBlock);
	static $String* POSITIVE_UNIT_INCREMENT;
	static $String* POSITIVE_BLOCK_INCREMENT;
	static $String* NEGATIVE_UNIT_INCREMENT;
	static $String* NEGATIVE_BLOCK_INCREMENT;
	static $String* MIN_SCROLL_INCREMENT;
	static $String* MAX_SCROLL_INCREMENT;
};

			} // basic
		} // plaf
	} // swing
} // javax

#pragma pop_macro("MAX_SCROLL_INCREMENT")
#pragma pop_macro("MIN_SCROLL_INCREMENT")
#pragma pop_macro("NEGATIVE_BLOCK_INCREMENT")
#pragma pop_macro("NEGATIVE_UNIT_INCREMENT")
#pragma pop_macro("POSITIVE_BLOCK_INCREMENT")
#pragma pop_macro("POSITIVE_UNIT_INCREMENT")

#endif // _javax_swing_plaf_basic_BasicSliderUI$Actions_h_