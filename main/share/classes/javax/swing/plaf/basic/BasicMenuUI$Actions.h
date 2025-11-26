#ifndef _javax_swing_plaf_basic_BasicMenuUI$Actions_h_
#define _javax_swing_plaf_basic_BasicMenuUI$Actions_h_
//$ class javax.swing.plaf.basic.BasicMenuUI$Actions
//$ extends sun.swing.UIAction

#include <sun/swing/UIAction.h>

#pragma push_macro("SELECT")
#undef SELECT

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JMenu;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicMenuUI$Actions : public ::sun::swing::UIAction {
	$class(BasicMenuUI$Actions, 0, ::sun::swing::UIAction)
public:
	BasicMenuUI$Actions();
	void init$($String* key, ::javax::swing::JMenu* menu, bool shouldForce);
	virtual bool accept(Object$* c) override;
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	::javax::swing::JMenu* getMenu(::java::awt::event::ActionEvent* e);
	static $String* SELECT;
	::javax::swing::JMenu* menu = nullptr;
	bool force = false;
};

			} // basic
		} // plaf
	} // swing
} // javax

#pragma pop_macro("SELECT")

#endif // _javax_swing_plaf_basic_BasicMenuUI$Actions_h_