#ifndef _javax_swing_JTable$GenericEditor_h_
#define _javax_swing_JTable$GenericEditor_h_
//$ class javax.swing.JTable$GenericEditor
//$ extends javax.swing.DefaultCellEditor

#include <java/lang/Array.h>
#include <javax/swing/DefaultCellEditor.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Constructor;
		}
	}
}
namespace javax {
	namespace swing {
		class JTable;
	}
}

namespace javax {
	namespace swing {

class $export JTable$GenericEditor : public ::javax::swing::DefaultCellEditor {
	$class(JTable$GenericEditor, $NO_CLASS_INIT, ::javax::swing::DefaultCellEditor)
public:
	JTable$GenericEditor();
	void init$();
	virtual $Object* getCellEditorValue() override;
	virtual ::java::awt::Component* getTableCellEditorComponent(::javax::swing::JTable* table, Object$* value, bool isSelected, int32_t row, int32_t column) override;
	virtual bool stopCellEditing() override;
	$ClassArray* argTypes = nullptr;
	::java::lang::reflect::Constructor* constructor = nullptr;
	$Object* value = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JTable$GenericEditor_h_