#ifndef _Test7195179$1$1_h_
#define _Test7195179$1$1_h_
//$ class Test7195179$1$1
//$ extends javax.swing.ListCellRenderer

#include <javax/swing/ListCellRenderer.h>

class Test7195179$1;
namespace java {
	namespace awt {
		class Component;
	}
}
namespace java {
	namespace lang {
		class Integer;
	}
}
namespace javax {
	namespace swing {
		class JList;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicComboBoxRenderer;
			}
		}
	}
}

class Test7195179$1$1 : public ::javax::swing::ListCellRenderer {
	$class(Test7195179$1$1, $NO_CLASS_INIT, ::javax::swing::ListCellRenderer)
public:
	Test7195179$1$1();
	void init$(::Test7195179$1* this$0);
	virtual ::java::awt::Component* getListCellRendererComponent(::javax::swing::JList* list, ::java::lang::Integer* value, int32_t index, bool isSelected, bool cellHasFocus);
	virtual ::java::awt::Component* getListCellRendererComponent(::javax::swing::JList* list, Object$* value, int32_t index, bool isSelected, bool cellHasFocus) override;
	::Test7195179$1* this$0 = nullptr;
	::javax::swing::plaf::basic::BasicComboBoxRenderer* renderer = nullptr;
};

#endif // _Test7195179$1$1_h_