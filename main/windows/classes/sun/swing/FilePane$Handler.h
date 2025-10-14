#ifndef _sun_swing_FilePane$Handler_h_
#define _sun_swing_FilePane$Handler_h_
//$ class sun.swing.FilePane$Handler
//$ extends java.awt.event.MouseListener

#include <java/awt/event/MouseListener.h>

namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}
namespace sun {
	namespace swing {
		class FilePane;
	}
}

namespace sun {
	namespace swing {

class FilePane$Handler : public ::java::awt::event::MouseListener {
	$class(FilePane$Handler, $NO_CLASS_INIT, ::java::awt::event::MouseListener)
public:
	FilePane$Handler();
	void init$(::sun::swing::FilePane* this$0);
	::java::awt::event::MouseListener* getDoubleClickListener();
	virtual void mouseClicked(::java::awt::event::MouseEvent* evt) override;
	virtual void mouseEntered(::java::awt::event::MouseEvent* evt) override;
	virtual void mouseExited(::java::awt::event::MouseEvent* evt) override;
	virtual void mousePressed(::java::awt::event::MouseEvent* evt) override;
	virtual void mouseReleased(::java::awt::event::MouseEvent* evt) override;
	::sun::swing::FilePane* this$0 = nullptr;
	::java::awt::event::MouseListener* doubleClickListener = nullptr;
};

	} // swing
} // sun

#endif // _sun_swing_FilePane$Handler_h_