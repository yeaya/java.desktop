#ifndef _sun_swing_FilePane$EditActionListener_h_
#define _sun_swing_FilePane$EditActionListener_h_
//$ class sun.swing.FilePane$EditActionListener
//$ extends java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
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

class $import FilePane$EditActionListener : public ::java::awt::event::ActionListener {
	$class(FilePane$EditActionListener, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	FilePane$EditActionListener();
	void init$(::sun::swing::FilePane* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	::sun::swing::FilePane* this$0 = nullptr;
};

	} // swing
} // sun

#endif // _sun_swing_FilePane$EditActionListener_h_