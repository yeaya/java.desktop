#ifndef _sun_swing_text_UndoableEditLockSupport_h_
#define _sun_swing_text_UndoableEditLockSupport_h_
//$ interface sun.swing.text.UndoableEditLockSupport
//$ extends javax.swing.undo.UndoableEdit

#include <javax/swing/undo/UndoableEdit.h>

namespace sun {
	namespace swing {
		namespace text {

class $export UndoableEditLockSupport : public ::javax::swing::undo::UndoableEdit {
	$interface(UndoableEditLockSupport, $NO_CLASS_INIT, ::javax::swing::undo::UndoableEdit)
public:
	virtual void lockEdit() {}
	virtual void unlockEdit() {}
};

		} // text
	} // swing
} // sun

#endif // _sun_swing_text_UndoableEditLockSupport_h_