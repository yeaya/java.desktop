#ifndef _javax_swing_table_JTableHeader$AccessibleJTableHeader_h_
#define _javax_swing_table_JTableHeader$AccessibleJTableHeader_h_
//$ class javax.swing.table.JTableHeader$AccessibleJTableHeader
//$ extends javax.swing.JComponent$AccessibleJComponent

#include <javax/swing/JComponent$AccessibleJComponent.h>

namespace java {
	namespace awt {
		class Point;
	}
}
namespace javax {
	namespace accessibility {
		class Accessible;
		class AccessibleRole;
	}
}
namespace javax {
	namespace swing {
		namespace table {
			class JTableHeader;
		}
	}
}

namespace javax {
	namespace swing {
		namespace table {

class $import JTableHeader$AccessibleJTableHeader : public ::javax::swing::JComponent$AccessibleJComponent {
	$class(JTableHeader$AccessibleJTableHeader, $NO_CLASS_INIT, ::javax::swing::JComponent$AccessibleJComponent)
public:
	JTableHeader$AccessibleJTableHeader();
	void init$(::javax::swing::table::JTableHeader* this$0);
	virtual ::javax::accessibility::Accessible* getAccessibleAt(::java::awt::Point* p) override;
	virtual ::javax::accessibility::Accessible* getAccessibleChild(int32_t i) override;
	virtual int32_t getAccessibleChildrenCount() override;
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	::javax::swing::table::JTableHeader* this$0 = nullptr;
};

		} // table
	} // swing
} // javax

#endif // _javax_swing_table_JTableHeader$AccessibleJTableHeader_h_