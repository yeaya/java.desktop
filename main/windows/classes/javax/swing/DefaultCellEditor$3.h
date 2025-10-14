#ifndef _javax_swing_DefaultCellEditor$3_h_
#define _javax_swing_DefaultCellEditor$3_h_
//$ class javax.swing.DefaultCellEditor$3
//$ extends javax.swing.DefaultCellEditor$EditorDelegate

#include <javax/swing/DefaultCellEditor$EditorDelegate.h>

namespace java {
	namespace util {
		class EventObject;
	}
}
namespace javax {
	namespace swing {
		class DefaultCellEditor;
		class JComboBox;
	}
}

namespace javax {
	namespace swing {

class DefaultCellEditor$3 : public ::javax::swing::DefaultCellEditor$EditorDelegate {
	$class(DefaultCellEditor$3, $NO_CLASS_INIT, ::javax::swing::DefaultCellEditor$EditorDelegate)
public:
	DefaultCellEditor$3();
	void init$(::javax::swing::DefaultCellEditor* this$0, ::javax::swing::JComboBox* val$comboBox);
	virtual $Object* getCellEditorValue() override;
	virtual void setValue(Object$* value) override;
	virtual bool shouldSelectCell(::java::util::EventObject* anEvent) override;
	virtual bool stopCellEditing() override;
	::javax::swing::DefaultCellEditor* this$0 = nullptr;
	::javax::swing::JComboBox* val$comboBox = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_DefaultCellEditor$3_h_