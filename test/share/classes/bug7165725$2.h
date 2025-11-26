#ifndef _bug7165725$2_h_
#define _bug7165725$2_h_
//$ class bug7165725$2
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class bug7165725;
class bug7165725$GoldenElement;

class bug7165725$2 : public ::java::lang::Runnable {
	$class(bug7165725$2, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	bug7165725$2();
	void init$(::bug7165725* this$0, ::bug7165725$GoldenElement* val$goldenElement);
	virtual void run() override;
	::bug7165725* this$0 = nullptr;
	::bug7165725$GoldenElement* val$goldenElement = nullptr;
};

#endif // _bug7165725$2_h_