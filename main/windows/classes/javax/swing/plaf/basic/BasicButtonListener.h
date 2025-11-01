#ifndef _javax_swing_plaf_basic_BasicButtonListener_h_
#define _javax_swing_plaf_basic_BasicButtonListener_h_
//$ class javax.swing.plaf.basic.BasicButtonListener
//$ extends java.awt.event.MouseListener
//$ implements java.awt.event.MouseMotionListener,java.awt.event.FocusListener,javax.swing.event.ChangeListener,java.beans.PropertyChangeListener

#include <java/awt/event/FocusListener.h>
#include <java/awt/event/MouseListener.h>
#include <java/awt/event/MouseMotionListener.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/event/ChangeListener.h>

namespace java {
	namespace awt {
		namespace event {
			class FocusEvent;
			class MouseEvent;
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
		class AbstractButton;
		class InputMap;
		class JComponent;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ChangeEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class LazyActionMap;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicButtonListener : public ::java::awt::event::MouseListener, public ::java::awt::event::MouseMotionListener, public ::java::awt::event::FocusListener, public ::javax::swing::event::ChangeListener, public ::java::beans::PropertyChangeListener {
	$class(BasicButtonListener, $NO_CLASS_INIT, ::java::awt::event::MouseListener, ::java::awt::event::MouseMotionListener, ::java::awt::event::FocusListener, ::javax::swing::event::ChangeListener, ::java::beans::PropertyChangeListener)
public:
	BasicButtonListener();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::AbstractButton* b);
	virtual void checkOpacity(::javax::swing::AbstractButton* b);
	virtual void focusGained(::java::awt::event::FocusEvent* e) override;
	virtual void focusLost(::java::awt::event::FocusEvent* e) override;
	virtual ::javax::swing::InputMap* getInputMap(int32_t condition, ::javax::swing::JComponent* c);
	virtual void installKeyboardActions(::javax::swing::JComponent* c);
	static void loadActionMap(::javax::swing::plaf::basic::LazyActionMap* map);
	virtual void mouseClicked(::java::awt::event::MouseEvent* e) override;
	virtual void mouseDragged(::java::awt::event::MouseEvent* e) override;
	virtual void mouseEntered(::java::awt::event::MouseEvent* e) override;
	virtual void mouseExited(::java::awt::event::MouseEvent* e) override;
	virtual void mouseMoved(::java::awt::event::MouseEvent* e) override;
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	virtual void mouseReleased(::java::awt::event::MouseEvent* e) override;
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	virtual void stateChanged(::javax::swing::event::ChangeEvent* e) override;
	virtual $String* toString() override;
	virtual void uninstallKeyboardActions(::javax::swing::JComponent* c);
	virtual void updateMnemonicBinding(::javax::swing::AbstractButton* b);
	int64_t lastPressedTimestamp = 0;
	bool shouldDiscardRelease = false;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicButtonListener_h_