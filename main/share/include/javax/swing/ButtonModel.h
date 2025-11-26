#ifndef _javax_swing_ButtonModel_h_
#define _javax_swing_ButtonModel_h_
//$ interface javax.swing.ButtonModel
//$ extends java.awt.ItemSelectable

#include <java/awt/ItemSelectable.h>

namespace java {
	namespace awt {
		namespace event {
			class ActionListener;
		}
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
			class ChangeListener;
		}
	}
}

namespace javax {
	namespace swing {

class $import ButtonModel : public ::java::awt::ItemSelectable {
	$interface(ButtonModel, $NO_CLASS_INIT, ::java::awt::ItemSelectable)
public:
	virtual void addActionListener(::java::awt::event::ActionListener* l) {}
	virtual void addChangeListener(::javax::swing::event::ChangeListener* l) {}
	virtual void addItemListener(::java::awt::event::ItemListener* l) override {}
	virtual $String* getActionCommand() {return nullptr;}
	virtual ::javax::swing::ButtonGroup* getGroup();
	virtual int32_t getMnemonic() {return 0;}
	virtual bool isArmed() {return false;}
	virtual bool isEnabled() {return false;}
	virtual bool isPressed() {return false;}
	virtual bool isRollover() {return false;}
	virtual bool isSelected() {return false;}
	virtual void removeActionListener(::java::awt::event::ActionListener* l) {}
	virtual void removeChangeListener(::javax::swing::event::ChangeListener* l) {}
	virtual void removeItemListener(::java::awt::event::ItemListener* l) override {}
	virtual void setActionCommand($String* s) {}
	virtual void setArmed(bool b) {}
	virtual void setEnabled(bool b) {}
	virtual void setGroup(::javax::swing::ButtonGroup* group) {}
	virtual void setMnemonic(int32_t key) {}
	virtual void setPressed(bool b) {}
	virtual void setRollover(bool b) {}
	virtual void setSelected(bool b) {}
};

	} // swing
} // javax

#endif // _javax_swing_ButtonModel_h_