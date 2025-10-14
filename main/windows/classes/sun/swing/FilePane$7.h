#ifndef _sun_swing_FilePane$7_h_
#define _sun_swing_FilePane$7_h_
//$ class sun.swing.FilePane$7
//$ extends java.awt.event.ComponentAdapter

#include <java/awt/event/ComponentAdapter.h>

namespace java {
	namespace awt {
		namespace event {
			class ComponentEvent;
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

class FilePane$7 : public ::java::awt::event::ComponentAdapter {
	$class(FilePane$7, $NO_CLASS_INIT, ::java::awt::event::ComponentAdapter)
public:
	FilePane$7();
	void init$(::sun::swing::FilePane* this$0);
	virtual void componentResized(::java::awt::event::ComponentEvent* e) override;
	::sun::swing::FilePane* this$0 = nullptr;
};

	} // swing
} // sun

#endif // _sun_swing_FilePane$7_h_