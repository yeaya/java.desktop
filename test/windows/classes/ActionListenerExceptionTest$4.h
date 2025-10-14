#ifndef _ActionListenerExceptionTest$4_h_
#define _ActionListenerExceptionTest$4_h_
//$ class ActionListenerExceptionTest$4
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class ActionListenerExceptionTest;

class ActionListenerExceptionTest$4 : public ::java::lang::Runnable {
	$class(ActionListenerExceptionTest$4, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	ActionListenerExceptionTest$4();
	void init$(::ActionListenerExceptionTest* this$0);
	virtual void run() override;
	::ActionListenerExceptionTest* this$0 = nullptr;
};

#endif // _ActionListenerExceptionTest$4_h_