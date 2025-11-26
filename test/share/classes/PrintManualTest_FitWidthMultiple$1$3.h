#ifndef _PrintManualTest_FitWidthMultiple$1$3_h_
#define _PrintManualTest_FitWidthMultiple$1$3_h_
//$ class PrintManualTest_FitWidthMultiple$1$3
//$ extends java.awt.event.WindowAdapter

#include <java/awt/event/WindowAdapter.h>

class PrintManualTest_FitWidthMultiple$1;
namespace java {
	namespace awt {
		namespace event {
			class WindowEvent;
		}
	}
}

class PrintManualTest_FitWidthMultiple$1$3 : public ::java::awt::event::WindowAdapter {
	$class(PrintManualTest_FitWidthMultiple$1$3, $NO_CLASS_INIT, ::java::awt::event::WindowAdapter)
public:
	PrintManualTest_FitWidthMultiple$1$3();
	void init$(::PrintManualTest_FitWidthMultiple$1* this$1);
	virtual void windowClosing(::java::awt::event::WindowEvent* e) override;
	::PrintManualTest_FitWidthMultiple$1* this$1 = nullptr;
};

#endif // _PrintManualTest_FitWidthMultiple$1$3_h_