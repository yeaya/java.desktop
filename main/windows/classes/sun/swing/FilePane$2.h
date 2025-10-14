#ifndef _sun_swing_FilePane$2_h_
#define _sun_swing_FilePane$2_h_
//$ class sun.swing.FilePane$2
//$ extends java.awt.event.FocusAdapter

#include <java/awt/event/FocusAdapter.h>

namespace java {
	namespace awt {
		namespace event {
			class FocusEvent;
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

class FilePane$2 : public ::java::awt::event::FocusAdapter {
	$class(FilePane$2, $NO_CLASS_INIT, ::java::awt::event::FocusAdapter)
public:
	FilePane$2();
	void init$(::sun::swing::FilePane* this$0);
	virtual void focusLost(::java::awt::event::FocusEvent* e) override;
	::sun::swing::FilePane* this$0 = nullptr;
};

	} // swing
} // sun

#endif // _sun_swing_FilePane$2_h_