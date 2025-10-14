#ifndef _bug4714674$1_h_
#define _bug4714674$1_h_
//$ class bug4714674$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class bug4714674;

class bug4714674$1 : public ::java::lang::Runnable {
	$class(bug4714674$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	bug4714674$1();
	void init$(::bug4714674* this$0, $String* val$baseURL);
	virtual void run() override;
	::bug4714674* this$0 = nullptr;
	$String* val$baseURL = nullptr;
};

#endif // _bug4714674$1_h_