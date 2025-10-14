#ifndef _PrintManualTest_FitWidthMultiple$1_h_
#define _PrintManualTest_FitWidthMultiple$1_h_
//$ class PrintManualTest_FitWidthMultiple$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class PrintManualTest_FitWidthMultiple;
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace java {
	namespace text {
		class MessageFormat;
	}
}

class PrintManualTest_FitWidthMultiple$1 : public ::java::lang::Runnable {
	$class(PrintManualTest_FitWidthMultiple$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	PrintManualTest_FitWidthMultiple$1();
	void init$(::PrintManualTest_FitWidthMultiple* this$0, ::java::text::MessageFormat* val$header, ::java::text::MessageFormat* val$footer);
	void lambda$run$0(::java::awt::event::ActionEvent* e);
	void lambda$run$1(::java::awt::event::ActionEvent* e);
	virtual void run() override;
	::PrintManualTest_FitWidthMultiple* this$0 = nullptr;
	::java::text::MessageFormat* val$footer = nullptr;
	::java::text::MessageFormat* val$header = nullptr;
};

#endif // _PrintManualTest_FitWidthMultiple$1_h_