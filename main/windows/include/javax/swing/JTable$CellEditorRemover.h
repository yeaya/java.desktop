#ifndef _javax_swing_JTable$CellEditorRemover_h_
#define _javax_swing_JTable$CellEditorRemover_h_
//$ class javax.swing.JTable$CellEditorRemover
//$ extends java.beans.PropertyChangeListener

#include <java/beans/PropertyChangeListener.h>

namespace java {
	namespace awt {
		class KeyboardFocusManager;
	}
}
namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace javax {
	namespace swing {
		class JTable;
	}
}

namespace javax {
	namespace swing {

class $import JTable$CellEditorRemover : public ::java::beans::PropertyChangeListener {
	$class(JTable$CellEditorRemover, $NO_CLASS_INIT, ::java::beans::PropertyChangeListener)
public:
	JTable$CellEditorRemover();
	void init$(::javax::swing::JTable* this$0, ::java::awt::KeyboardFocusManager* fm);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* ev) override;
	::javax::swing::JTable* this$0 = nullptr;
	::java::awt::KeyboardFocusManager* focusManager = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JTable$CellEditorRemover_h_