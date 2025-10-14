#ifndef _sun_swing_FilePane$ViewTypeAction_h_
#define _sun_swing_FilePane$ViewTypeAction_h_
//$ class sun.swing.FilePane$ViewTypeAction
//$ extends javax.swing.AbstractAction

#include <javax/swing/AbstractAction.h>

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

class $import FilePane$ViewTypeAction : public ::javax::swing::AbstractAction {
	$class(FilePane$ViewTypeAction, $NO_CLASS_INIT, ::javax::swing::AbstractAction)
public:
	FilePane$ViewTypeAction();
	void init$(::sun::swing::FilePane* this$0, int32_t viewType);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	::sun::swing::FilePane* this$0 = nullptr;
	int32_t viewType = 0;
};

	} // swing
} // sun

#endif // _sun_swing_FilePane$ViewTypeAction_h_