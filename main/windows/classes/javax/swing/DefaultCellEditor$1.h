#ifndef _javax_swing_DefaultCellEditor$1_h_
#define _javax_swing_DefaultCellEditor$1_h_
//$ class javax.swing.DefaultCellEditor$1
//$ extends javax.swing.DefaultCellEditor$EditorDelegate

#include <javax/swing/DefaultCellEditor$EditorDelegate.h>

namespace javax {
	namespace swing {
		class DefaultCellEditor;
		class JTextField;
	}
}

namespace javax {
	namespace swing {

class DefaultCellEditor$1 : public ::javax::swing::DefaultCellEditor$EditorDelegate {
	$class(DefaultCellEditor$1, $NO_CLASS_INIT, ::javax::swing::DefaultCellEditor$EditorDelegate)
public:
	DefaultCellEditor$1();
	void init$(::javax::swing::DefaultCellEditor* this$0, ::javax::swing::JTextField* val$textField);
	virtual $Object* getCellEditorValue() override;
	virtual void setValue(Object$* value) override;
	::javax::swing::DefaultCellEditor* this$0 = nullptr;
	::javax::swing::JTextField* val$textField = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_DefaultCellEditor$1_h_