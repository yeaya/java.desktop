#ifndef _PrintManualTest_FitWidthMultiple$1$2_h_
#define _PrintManualTest_FitWidthMultiple$1$2_h_
//$ class PrintManualTest_FitWidthMultiple$1$2
//$ extends javax.swing.AbstractAction

#include <javax/swing/AbstractAction.h>

class PrintManualTest_FitWidthMultiple$1;
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JButton;
	}
}

class PrintManualTest_FitWidthMultiple$1$2 : public ::javax::swing::AbstractAction {
	$class(PrintManualTest_FitWidthMultiple$1$2, $NO_CLASS_INIT, ::javax::swing::AbstractAction)
public:
	PrintManualTest_FitWidthMultiple$1$2();
	void init$(::PrintManualTest_FitWidthMultiple$1* this$1, ::javax::swing::JButton* val$printButton);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	::PrintManualTest_FitWidthMultiple$1* this$1 = nullptr;
	::javax::swing::JButton* val$printButton = nullptr;
};

#endif // _PrintManualTest_FitWidthMultiple$1$2_h_