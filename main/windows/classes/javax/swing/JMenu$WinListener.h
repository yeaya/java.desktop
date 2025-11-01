#ifndef _javax_swing_JMenu$WinListener_h_
#define _javax_swing_JMenu$WinListener_h_
//$ class javax.swing.JMenu$WinListener
//$ extends java.awt.event.WindowAdapter
//$ implements java.io.Serializable

#include <java/awt/event/WindowAdapter.h>
#include <java/io/Serializable.h>

namespace java {
	namespace awt {
		namespace event {
			class WindowEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JMenu;
		class JPopupMenu;
	}
}

namespace javax {
	namespace swing {

class $export JMenu$WinListener : public ::java::awt::event::WindowAdapter, public ::java::io::Serializable {
	$class(JMenu$WinListener, $NO_CLASS_INIT, ::java::awt::event::WindowAdapter, ::java::io::Serializable)
public:
	JMenu$WinListener();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JMenu* this$0, ::javax::swing::JPopupMenu* p);
	virtual $String* toString() override;
	virtual void windowClosing(::java::awt::event::WindowEvent* e) override;
	::javax::swing::JMenu* this$0 = nullptr;
	::javax::swing::JPopupMenu* popupMenu = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JMenu$WinListener_h_