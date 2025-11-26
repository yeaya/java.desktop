#ifndef _ActionListenerExceptionTest$3_h_
#define _ActionListenerExceptionTest$3_h_
//$ class ActionListenerExceptionTest$3
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class ActionListenerExceptionTest;

class ActionListenerExceptionTest$3 : public ::java::lang::Runnable {
	$class(ActionListenerExceptionTest$3, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	ActionListenerExceptionTest$3();
	void init$(::ActionListenerExceptionTest* this$0);
	virtual void run() override;
	::ActionListenerExceptionTest* this$0 = nullptr;
};

#endif // _ActionListenerExceptionTest$3_h_