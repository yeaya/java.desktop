#ifndef _ActionListenerExceptionTest$2_h_
#define _ActionListenerExceptionTest$2_h_
//$ class ActionListenerExceptionTest$2
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class ActionListenerExceptionTest;

class ActionListenerExceptionTest$2 : public ::java::lang::Runnable {
	$class(ActionListenerExceptionTest$2, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	ActionListenerExceptionTest$2();
	void init$(::ActionListenerExceptionTest* this$0);
	virtual void run() override;
	::ActionListenerExceptionTest* this$0 = nullptr;
};

#endif // _ActionListenerExceptionTest$2_h_