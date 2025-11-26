#ifndef _javax_swing_plaf_basic_BasicComboBoxUI$Handler_h_
#define _javax_swing_plaf_basic_BasicComboBoxUI$Handler_h_
//$ class javax.swing.plaf.basic.BasicComboBoxUI$Handler
//$ extends java.awt.event.ActionListener
//$ implements java.awt.event.FocusListener,java.awt.event.KeyListener,java.awt.LayoutManager,javax.swing.event.ListDataListener,java.beans.PropertyChangeListener

#include <java/awt/LayoutManager.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/FocusListener.h>
#include <java/awt/event/KeyListener.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/event/ListDataListener.h>

namespace java {
	namespace awt {
		class Component;
		class Container;
		class Dimension;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
			class FocusEvent;
			class KeyEvent;
		}
	}
}
namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ListDataEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicComboBoxUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicComboBoxUI$Handler : public ::java::awt::event::ActionListener, public ::java::awt::event::FocusListener, public ::java::awt::event::KeyListener, public ::java::awt::LayoutManager, public ::javax::swing::event::ListDataListener, public ::java::beans::PropertyChangeListener {
	$class(BasicComboBoxUI$Handler, $NO_CLASS_INIT, ::java::awt::event::ActionListener, ::java::awt::event::FocusListener, ::java::awt::event::KeyListener, ::java::awt::LayoutManager, ::javax::swing::event::ListDataListener, ::java::beans::PropertyChangeListener)
public:
	BasicComboBoxUI$Handler();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::plaf::basic::BasicComboBoxUI* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* evt) override;
	virtual void addLayoutComponent($String* name, ::java::awt::Component* comp) override;
	virtual void contentsChanged(::javax::swing::event::ListDataEvent* e) override;
	virtual void focusGained(::java::awt::event::FocusEvent* e) override;
	virtual void focusLost(::java::awt::event::FocusEvent* e) override;
	virtual void intervalAdded(::javax::swing::event::ListDataEvent* e) override;
	virtual void intervalRemoved(::javax::swing::event::ListDataEvent* e) override;
	bool isTypeAheadKey(::java::awt::event::KeyEvent* e);
	virtual void keyPressed(::java::awt::event::KeyEvent* e) override;
	virtual void keyReleased(::java::awt::event::KeyEvent* e) override;
	virtual void keyTyped(::java::awt::event::KeyEvent* e) override;
	virtual void layoutContainer(::java::awt::Container* parent) override;
	virtual ::java::awt::Dimension* minimumLayoutSize(::java::awt::Container* parent) override;
	virtual ::java::awt::Dimension* preferredLayoutSize(::java::awt::Container* parent) override;
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	virtual void removeLayoutComponent(::java::awt::Component* comp) override;
	virtual $String* toString() override;
	::javax::swing::plaf::basic::BasicComboBoxUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicComboBoxUI$Handler_h_