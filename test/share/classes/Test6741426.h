#ifndef _Test6741426_h_
#define _Test6741426_h_
//$ class Test6741426
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

#pragma push_macro("HEIGHT")
#undef HEIGHT
#pragma push_macro("WIDTH")
#undef WIDTH

class $export Test6741426 : public ::java::lang::Runnable {
	$class(Test6741426, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	Test6741426();
	void init$();
	static void main($StringArray* args);
	virtual void run() override;
	static const int32_t WIDTH = 160;
	static const int32_t HEIGHT = 80;
};

#pragma pop_macro("HEIGHT")
#pragma pop_macro("WIDTH")

#endif // _Test6741426_h_