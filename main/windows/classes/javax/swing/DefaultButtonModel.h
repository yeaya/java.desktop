#ifndef _javax_swing_DefaultButtonModel_h_
#define _javax_swing_DefaultButtonModel_h_
//$ class javax.swing.DefaultButtonModel
//$ extends javax.swing.ButtonModel
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <javax/swing/ButtonModel.h>

#pragma push_macro("ARMED")
#undef ARMED
#pragma push_macro("ENABLED")
#undef ENABLED
#pragma push_macro("PRESSED")
#undef PRESSED
#pragma push_macro("ROLLOVER")
#undef ROLLOVER
#pragma push_macro("SELECTED")
#undef SELECTED

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
			class ActionListener;
			class ItemEvent;
			class ItemListener;
		}
	}
}
namespace java {
	namespace util {
		class EventListener;
	}
}
namespace javax {
	namespace swing {
		class ButtonGroup;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ChangeEvent;
			class ChangeListener;
			class EventListenerList;
		}
	}
}

namespace javax {
	namespace swing {

class $export DefaultButtonModel : public ::javax::swing::ButtonModel, public ::java::io::Serializable {
	$class(DefaultButtonModel, $NO_CLASS_INIT, ::javax::swing::ButtonModel, ::java::io::Serializable)
public:
	DefaultButtonModel();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void addActionListener(::java::awt::event::ActionListener* l) override;
	virtual void addChangeListener(::javax::swing::event::ChangeListener* l) override;
	virtual void addItemListener(::java::awt::event::ItemListener* l) override;
	virtual void fireActionPerformed(::java::awt::event::ActionEvent* e);
	virtual void fireItemStateChanged(::java::awt::event::ItemEvent* e);
	virtual void fireStateChanged();
	virtual $String* getActionCommand() override;
	virtual $Array<::java::awt::event::ActionListener>* getActionListeners();
	virtual $Array<::javax::swing::event::ChangeListener>* getChangeListeners();
	virtual ::javax::swing::ButtonGroup* getGroup() override;
	virtual $Array<::java::awt::event::ItemListener>* getItemListeners();
	virtual $Array<::java::util::EventListener>* getListeners($Class* listenerType);
	virtual int32_t getMnemonic() override;
	virtual $ObjectArray* getSelectedObjects() override;
	virtual bool isArmed() override;
	virtual bool isEnabled() override;
	virtual bool isMenuItem();
	virtual bool isPressed() override;
	virtual bool isRollover() override;
	virtual bool isSelected() override;
	virtual void removeActionListener(::java::awt::event::ActionListener* l) override;
	virtual void removeChangeListener(::javax::swing::event::ChangeListener* l) override;
	virtual void removeItemListener(::java::awt::event::ItemListener* l) override;
	virtual void setActionCommand($String* actionCommand) override;
	virtual void setArmed(bool b) override;
	virtual void setEnabled(bool b) override;
	virtual void setGroup(::javax::swing::ButtonGroup* group) override;
	virtual void setMenuItem(bool menuItem);
	virtual void setMnemonic(int32_t key) override;
	virtual void setPressed(bool b) override;
	virtual void setRollover(bool b) override;
	virtual void setSelected(bool b) override;
	virtual $String* toString() override;
	int32_t stateMask = 0;
	$String* actionCommand = nullptr;
	::javax::swing::ButtonGroup* group = nullptr;
	int32_t mnemonic = 0;
	::javax::swing::event::ChangeEvent* changeEvent = nullptr;
	::javax::swing::event::EventListenerList* listenerList = nullptr;
	bool menuItem = false;
	static const int32_t ARMED = 1; // 1 << 0
	static const int32_t SELECTED = 2; // 1 << 1
	static const int32_t PRESSED = 4; // 1 << 2
	static const int32_t ENABLED = 8; // 1 << 3
	static const int32_t ROLLOVER = 16; // 1 << 4
};

	} // swing
} // javax

#pragma pop_macro("ARMED")
#pragma pop_macro("ENABLED")
#pragma pop_macro("PRESSED")
#pragma pop_macro("ROLLOVER")
#pragma pop_macro("SELECTED")

#endif // _javax_swing_DefaultButtonModel_h_