#ifndef _bug8003830_h_
#define _bug8003830_h_
//$ class bug8003830
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

class $export bug8003830 : public ::java::lang::Runnable {
	$class(bug8003830, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	bug8003830();
	void init$();
	static void main($StringArray* args);
	virtual void run() override;
	virtual void testNPEAtActionsPage();
};

#endif // _bug8003830_h_