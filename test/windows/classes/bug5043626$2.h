#ifndef _bug5043626$2_h_
#define _bug5043626$2_h_
//$ class bug5043626$2
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

class bug5043626$2 : public ::java::lang::Runnable {
	$class(bug5043626$2, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	bug5043626$2();
	void init$($StringArray* val$result);
	virtual void run() override;
	$StringArray* val$result = nullptr;
};

#endif // _bug5043626$2_h_