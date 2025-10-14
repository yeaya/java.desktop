#ifndef _PrintManualTest_FitWidthMultiple$1$4_h_
#define _PrintManualTest_FitWidthMultiple$1$4_h_
//$ class PrintManualTest_FitWidthMultiple$1$4
//$ extends java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>

class PrintManualTest_FitWidthMultiple$1;
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace javax {
	namespace print {
		namespace attribute {
			class PrintRequestAttributeSet;
		}
	}
}
namespace javax {
	namespace swing {
		class JTable;
	}
}

class PrintManualTest_FitWidthMultiple$1$4 : public ::java::awt::event::ActionListener {
	$class(PrintManualTest_FitWidthMultiple$1$4, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	PrintManualTest_FitWidthMultiple$1$4();
	void init$(::PrintManualTest_FitWidthMultiple$1* this$1, ::javax::swing::JTable* val$table, ::javax::print::attribute::PrintRequestAttributeSet* val$prattr);
	virtual void actionPerformed(::java::awt::event::ActionEvent* ae) override;
	::PrintManualTest_FitWidthMultiple$1* this$1 = nullptr;
	::javax::print::attribute::PrintRequestAttributeSet* val$prattr = nullptr;
	::javax::swing::JTable* val$table = nullptr;
};

#endif // _PrintManualTest_FitWidthMultiple$1$4_h_