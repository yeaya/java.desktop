#ifndef _bug6547087$1_h_
#define _bug6547087$1_h_
//$ class bug6547087$1
//$ extends java.util.concurrent.Callable

#include <java/util/concurrent/Callable.h>

class bug6547087$1 : public ::java::util::concurrent::Callable {
	$class(bug6547087$1, $NO_CLASS_INIT, ::java::util::concurrent::Callable)
public:
	bug6547087$1();
	void init$();
	virtual $Object* call() override;
};

#endif // _bug6547087$1_h_