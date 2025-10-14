#ifndef _javax_swing_plaf_basic_BasicOptionPaneUI$ButtonFactory_h_
#define _javax_swing_plaf_basic_BasicOptionPaneUI$ButtonFactory_h_
//$ class javax.swing.plaf.basic.BasicOptionPaneUI$ButtonFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {
		class Icon;
		class JButton;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicOptionPaneUI$ButtonFactory : public ::java::lang::Object {
	$class(BasicOptionPaneUI$ButtonFactory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	BasicOptionPaneUI$ButtonFactory();
	void init$($String* text, int32_t mnemonic, ::javax::swing::Icon* icon, int32_t minimumWidth);
	virtual ::javax::swing::JButton* createButton();
	$String* text = nullptr;
	int32_t mnemonic = 0;
	::javax::swing::Icon* icon = nullptr;
	int32_t minimumWidth = 0;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicOptionPaneUI$ButtonFactory_h_