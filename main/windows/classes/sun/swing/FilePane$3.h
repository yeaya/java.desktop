#ifndef _sun_swing_FilePane$3_h_
#define _sun_swing_FilePane$3_h_
//$ class sun.swing.FilePane$3
//$ extends java.awt.event.FocusListener

#include <java/awt/event/FocusListener.h>

namespace java {
	namespace awt {
		namespace event {
			class FocusEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JList;
		class JTable;
	}
}

namespace sun {
	namespace swing {

class FilePane$3 : public ::java::awt::event::FocusListener {
	$class(FilePane$3, $NO_CLASS_INIT, ::java::awt::event::FocusListener)
public:
	FilePane$3();
	void init$();
	virtual void focusGained(::java::awt::event::FocusEvent* fe) override;
	virtual void focusLost(::java::awt::event::FocusEvent* fe) override;
	void repaintListSelection(::javax::swing::JList* list);
	void repaintSelection(Object$* source);
	void repaintTableSelection(::javax::swing::JTable* table);
};

	} // swing
} // sun

#endif // _sun_swing_FilePane$3_h_