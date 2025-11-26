#ifndef _sun_swing_UIAction_h_
#define _sun_swing_UIAction_h_
//$ class sun.swing.UIAction
//$ extends javax.swing.Action

#include <javax/swing/Action.h>

namespace java {
	namespace beans {
		class PropertyChangeListener;
	}
}

namespace sun {
	namespace swing {

class $import UIAction : public ::javax::swing::Action {
	$class(UIAction, $NO_CLASS_INIT, ::javax::swing::Action)
public:
	UIAction();
	void init$($String* name);
	virtual bool accept(Object$* sender) override;
	virtual void addPropertyChangeListener(::java::beans::PropertyChangeListener* listener) override;
	$String* getName();
	virtual $Object* getValue($String* key) override;
	virtual bool isEnabled() override;
	virtual void putValue($String* key, Object$* value) override;
	virtual void removePropertyChangeListener(::java::beans::PropertyChangeListener* listener) override;
	virtual void setEnabled(bool b) override;
	$String* name = nullptr;
};

	} // swing
} // sun

#endif // _sun_swing_UIAction_h_