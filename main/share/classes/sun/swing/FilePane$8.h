#ifndef _sun_swing_FilePane$8_h_
#define _sun_swing_FilePane$8_h_
//$ class sun.swing.FilePane$8
//$ extends java.awt.event.MouseAdapter

#include <java/awt/event/MouseAdapter.h>

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

class FilePane$8 : public ::java::awt::event::MouseAdapter {
	$class(FilePane$8, $NO_CLASS_INIT, ::java::awt::event::MouseAdapter)
public:
	FilePane$8();
	void init$(::sun::swing::FilePane* this$0);
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	::sun::swing::FilePane* this$0 = nullptr;
};

	} // swing
} // sun

#endif // _sun_swing_FilePane$8_h_