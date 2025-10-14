#ifndef _bug7082443$TestComboBox$1_h_
#define _bug7082443$TestComboBox$1_h_
//$ class bug7082443$TestComboBox$1
//$ extends javax.swing.ListCellRenderer

#include <javax/swing/ListCellRenderer.h>

class bug7082443$TestComboBox;
namespace java {
	namespace awt {
		class Component;
	}
}
namespace javax {
	namespace swing {
		class JList;
	}
}

class bug7082443$TestComboBox$1 : public ::javax::swing::ListCellRenderer {
	$class(bug7082443$TestComboBox$1, $NO_CLASS_INIT, ::javax::swing::ListCellRenderer)
public:
	bug7082443$TestComboBox$1();
	void init$(::bug7082443$TestComboBox* this$0);
	virtual ::java::awt::Component* getListCellRendererComponent(::javax::swing::JList* list, Object$* value, int32_t index, bool isSelected, bool cellHasFocus) override;
	::bug7082443$TestComboBox* this$0 = nullptr;
};

#endif // _bug7082443$TestComboBox$1_h_