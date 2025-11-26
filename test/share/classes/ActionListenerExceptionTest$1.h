#ifndef _ActionListenerExceptionTest$1_h_
#define _ActionListenerExceptionTest$1_h_
//$ class ActionListenerExceptionTest$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class ActionListenerExceptionTest;

class ActionListenerExceptionTest$1 : public ::java::lang::Runnable {
	$class(ActionListenerExceptionTest$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	ActionListenerExceptionTest$1();
	void init$(::ActionListenerExceptionTest* this$0);
	virtual void run() override;
	::ActionListenerExceptionTest* this$0 = nullptr;
};

#endif // _ActionListenerExceptionTest$1_h_