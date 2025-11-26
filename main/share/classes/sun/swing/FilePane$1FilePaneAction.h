#ifndef _sun_swing_FilePane$1FilePaneAction_h_
#define _sun_swing_FilePane$1FilePaneAction_h_
//$ class sun.swing.FilePane$1FilePaneAction
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

class FilePane$1FilePaneAction : public ::javax::swing::AbstractAction {
	$class(FilePane$1FilePaneAction, $NO_CLASS_INIT, ::javax::swing::AbstractAction)
public:
	FilePane$1FilePaneAction();
	void init$(::sun::swing::FilePane* this$0, $String* name);
	void init$(::sun::swing::FilePane* this$0, $String* name, $String* cmd);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	virtual bool isEnabled() override;
	::sun::swing::FilePane* this$0 = nullptr;
};

	} // swing
} // sun

#endif // _sun_swing_FilePane$1FilePaneAction_h_