#ifndef _bug4714674$2_h_
#define _bug4714674$2_h_
//$ class bug4714674$2
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class DeafServer;
class bug4714674;

class bug4714674$2 : public ::java::lang::Runnable {
	$class(bug4714674$2, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	bug4714674$2();
	void init$(::bug4714674* this$0, ::DeafServer* val$server);
	virtual void run() override;
	::bug4714674* this$0 = nullptr;
	::DeafServer* val$server = nullptr;
};

#endif // _bug4714674$2_h_