#ifndef _bug5074573$4_h_
#define _bug5074573$4_h_
//$ class bug5074573$4
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

class bug5074573$4 : public ::java::lang::Runnable {
	$class(bug5074573$4, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	bug5074573$4();
	void init$($StringArray* val$result);
	virtual void run() override;
	$StringArray* val$result = nullptr;
};

#endif // _bug5074573$4_h_