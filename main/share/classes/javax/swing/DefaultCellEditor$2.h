#ifndef _javax_swing_DefaultCellEditor$2_h_
#define _javax_swing_DefaultCellEditor$2_h_
//$ class javax.swing.DefaultCellEditor$2
//$ extends javax.swing.DefaultCellEditor$EditorDelegate

#include <javax/swing/DefaultCellEditor$EditorDelegate.h>

namespace javax {
	namespace swing {
		class DefaultCellEditor;
		class JCheckBox;
	}
}

namespace javax {
	namespace swing {

class DefaultCellEditor$2 : public ::javax::swing::DefaultCellEditor$EditorDelegate {
	$class(DefaultCellEditor$2, $NO_CLASS_INIT, ::javax::swing::DefaultCellEditor$EditorDelegate)
public:
	DefaultCellEditor$2();
	void init$(::javax::swing::DefaultCellEditor* this$0, ::javax::swing::JCheckBox* val$checkBox);
	virtual $Object* getCellEditorValue() override;
	virtual void setValue(Object$* value) override;
	::javax::swing::DefaultCellEditor* this$0 = nullptr;
	::javax::swing::JCheckBox* val$checkBox = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_DefaultCellEditor$2_h_