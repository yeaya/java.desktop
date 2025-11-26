#ifndef _javax_swing_Action_h_
#define _javax_swing_Action_h_
//$ interface javax.swing.Action
//$ extends java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>

#pragma push_macro("ACCELERATOR_KEY")
#undef ACCELERATOR_KEY
#pragma push_macro("ACTION_COMMAND_KEY")
#undef ACTION_COMMAND_KEY
#pragma push_macro("DEFAULT")
#undef DEFAULT
#pragma push_macro("DISPLAYED_MNEMONIC_INDEX_KEY")
#undef DISPLAYED_MNEMONIC_INDEX_KEY
#pragma push_macro("LARGE_ICON_KEY")
#undef LARGE_ICON_KEY
#pragma push_macro("LONG_DESCRIPTION")
#undef LONG_DESCRIPTION
#pragma push_macro("MNEMONIC_KEY")
#undef MNEMONIC_KEY
#pragma push_macro("NAME")
#undef NAME
#pragma push_macro("SELECTED_KEY")
#undef SELECTED_KEY
#pragma push_macro("SHORT_DESCRIPTION")
#undef SHORT_DESCRIPTION
#pragma push_macro("SMALL_ICON")
#undef SMALL_ICON

namespace java {
	namespace beans {
		class PropertyChangeListener;
	}
}

namespace javax {
	namespace swing {

class $export Action : public ::java::awt::event::ActionListener {
	$interface(Action, 0, ::java::awt::event::ActionListener)
public:
	virtual bool accept(Object$* sender);
	virtual void addPropertyChangeListener(::java::beans::PropertyChangeListener* listener) {}
	virtual $Object* getValue($String* key) {return nullptr;}
	virtual bool isEnabled() {return false;}
	virtual void putValue($String* key, Object$* value) {}
	virtual void removePropertyChangeListener(::java::beans::PropertyChangeListener* listener) {}
	virtual void setEnabled(bool b) {}
	static $String* DEFAULT;
	static $String* NAME;
	static $String* SHORT_DESCRIPTION;
	static $String* LONG_DESCRIPTION;
	static $String* SMALL_ICON;
	static $String* ACTION_COMMAND_KEY;
	static $String* ACCELERATOR_KEY;
	static $String* MNEMONIC_KEY;
	static $String* SELECTED_KEY;
	static $String* DISPLAYED_MNEMONIC_INDEX_KEY;
	static $String* LARGE_ICON_KEY;
};

	} // swing
} // javax

#pragma pop_macro("ACCELERATOR_KEY")
#pragma pop_macro("ACTION_COMMAND_KEY")
#pragma pop_macro("DEFAULT")
#pragma pop_macro("DISPLAYED_MNEMONIC_INDEX_KEY")
#pragma pop_macro("LARGE_ICON_KEY")
#pragma pop_macro("LONG_DESCRIPTION")
#pragma pop_macro("MNEMONIC_KEY")
#pragma pop_macro("NAME")
#pragma pop_macro("SELECTED_KEY")
#pragma pop_macro("SHORT_DESCRIPTION")
#pragma pop_macro("SMALL_ICON")

#endif // _javax_swing_Action_h_