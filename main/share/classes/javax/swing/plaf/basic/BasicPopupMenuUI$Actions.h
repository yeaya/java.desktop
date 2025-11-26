#ifndef _javax_swing_plaf_basic_BasicPopupMenuUI$Actions_h_
#define _javax_swing_plaf_basic_BasicPopupMenuUI$Actions_h_
//$ class javax.swing.plaf.basic.BasicPopupMenuUI$Actions
//$ extends sun.swing.UIAction

#include <sun/swing/UIAction.h>

#pragma push_macro("BACKWARD")
#undef BACKWARD
#pragma push_macro("CANCEL")
#undef CANCEL
#pragma push_macro("CHILD")
#undef CHILD
#pragma push_macro("FORWARD")
#undef FORWARD
#pragma push_macro("PARENT")
#undef PARENT
#pragma push_macro("RETURN")
#undef RETURN
#pragma push_macro("SELECT_CHILD")
#undef SELECT_CHILD
#pragma push_macro("SELECT_NEXT")
#undef SELECT_NEXT
#pragma push_macro("SELECT_PARENT")
#undef SELECT_PARENT
#pragma push_macro("SELECT_PREVIOUS")
#undef SELECT_PREVIOUS

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicPopupMenuUI$Actions : public ::sun::swing::UIAction {
	$class(BasicPopupMenuUI$Actions, 0, ::sun::swing::UIAction)
public:
	BasicPopupMenuUI$Actions();
	void init$($String* key);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	void cancel();
	void doReturn();
	void selectItem(bool direction);
	void selectParentChild(bool direction);
	void shortenSelectedPath();
	static $String* CANCEL;
	static $String* SELECT_NEXT;
	static $String* SELECT_PREVIOUS;
	static $String* SELECT_PARENT;
	static $String* SELECT_CHILD;
	static $String* RETURN;
	static const bool FORWARD = true;
	static const bool BACKWARD = false;
	static const bool PARENT = false;
	static const bool CHILD = true;
};

			} // basic
		} // plaf
	} // swing
} // javax

#pragma pop_macro("BACKWARD")
#pragma pop_macro("CANCEL")
#pragma pop_macro("CHILD")
#pragma pop_macro("FORWARD")
#pragma pop_macro("PARENT")
#pragma pop_macro("RETURN")
#pragma pop_macro("SELECT_CHILD")
#pragma pop_macro("SELECT_NEXT")
#pragma pop_macro("SELECT_PARENT")
#pragma pop_macro("SELECT_PREVIOUS")

#endif // _javax_swing_plaf_basic_BasicPopupMenuUI$Actions_h_