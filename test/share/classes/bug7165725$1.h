#ifndef _bug7165725$1_h_
#define _bug7165725$1_h_
//$ class bug7165725$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class bug7165725;

class bug7165725$1 : public ::java::lang::Runnable {
	$class(bug7165725$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	bug7165725$1();
	void init$(::bug7165725* this$0, $String* val$urlStr);
	virtual void run() override;
	::bug7165725* this$0 = nullptr;
	$String* val$urlStr = nullptr;
};

#endif // _bug7165725$1_h_