#ifndef _Pending_h_
#define _Pending_h_
//$ class Pending
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

class $export Pending : public ::java::lang::Runnable {
	$class(Pending, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	Pending();
	void init$();
	static void main($StringArray* args);
	virtual void run() override;
	static $volatile(bool) passed;
};

#endif // _Pending_h_