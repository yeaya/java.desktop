#ifndef _javax_swing_ToolTipManager$AccessibilityKeyListener_h_
#define _javax_swing_ToolTipManager$AccessibilityKeyListener_h_
//$ class javax.swing.ToolTipManager$AccessibilityKeyListener
//$ extends java.awt.event.KeyAdapter
//$ implements javax.swing.event.MenuKeyListener

#include <java/awt/event/KeyAdapter.h>
#include <javax/swing/event/MenuKeyListener.h>

namespace java {
	namespace awt {
		namespace event {
			class KeyEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class ToolTipManager;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class MenuKeyEvent;
		}
	}
}

namespace javax {
	namespace swing {

class ToolTipManager$AccessibilityKeyListener : public ::java::awt::event::KeyAdapter, public ::javax::swing::event::MenuKeyListener {
	$class(ToolTipManager$AccessibilityKeyListener, $NO_CLASS_INIT, ::java::awt::event::KeyAdapter, ::javax::swing::event::MenuKeyListener)
public:
	ToolTipManager$AccessibilityKeyListener();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::ToolTipManager* this$0);
	virtual void keyPressed(::java::awt::event::KeyEvent* e) override;
	virtual void menuKeyPressed(::javax::swing::event::MenuKeyEvent* e) override;
	virtual void menuKeyReleased(::javax::swing::event::MenuKeyEvent* e) override;
	virtual void menuKeyTyped(::javax::swing::event::MenuKeyEvent* e) override;
	virtual $String* toString() override;
	::javax::swing::ToolTipManager* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_ToolTipManager$AccessibilityKeyListener_h_