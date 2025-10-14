#ifndef _bug4492274$3_h_
#define _bug4492274$3_h_
//$ class bug4492274$3
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

class bug4492274$3 : public ::java::lang::Runnable {
	$class(bug4492274$3, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	bug4492274$3();
	void init$($StringArray* val$result);
	virtual void run() override;
	$StringArray* val$result = nullptr;
};

#endif // _bug4492274$3_h_