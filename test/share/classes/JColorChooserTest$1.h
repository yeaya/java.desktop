#ifndef _JColorChooserTest$1_h_
#define _JColorChooserTest$1_h_
//$ class JColorChooserTest$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class JColorChooserTest;
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}

class JColorChooserTest$1 : public ::java::lang::Runnable {
	$class(JColorChooserTest$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	JColorChooserTest$1();
	void init$(::JColorChooserTest* this$0);
	void lambda$run$0(::java::awt::event::ActionEvent* e);
	virtual void run() override;
	::JColorChooserTest* this$0 = nullptr;
};

#endif // _JColorChooserTest$1_h_