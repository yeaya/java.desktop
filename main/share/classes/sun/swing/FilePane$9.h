#ifndef _sun_swing_FilePane$9_h_
#define _sun_swing_FilePane$9_h_
//$ class sun.swing.FilePane$9
//$ extends javax.swing.AbstractAction

#include <javax/swing/AbstractAction.h>

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class Action;
	}
}
namespace sun {
	namespace swing {
		class FilePane;
	}
}

namespace sun {
	namespace swing {

class FilePane$9 : public ::javax::swing::AbstractAction {
	$class(FilePane$9, $NO_CLASS_INIT, ::javax::swing::AbstractAction)
public:
	FilePane$9();
	void init$(::sun::swing::FilePane* this$0, $String* name);
	virtual void actionPerformed(::java::awt::event::ActionEvent* ev) override;
	::sun::swing::FilePane* this$0 = nullptr;
	::javax::swing::Action* basicNewFolderAction = nullptr;
};

	} // swing
} // sun

#endif // _sun_swing_FilePane$9_h_