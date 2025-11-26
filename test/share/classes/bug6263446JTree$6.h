#ifndef _bug6263446JTree$6_h_
#define _bug6263446JTree$6_h_
//$ class bug6263446JTree$6
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class bug6263446JTree$6 : public ::java::lang::Runnable {
	$class(bug6263446JTree$6, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	bug6263446JTree$6();
	void init$($String* val$sel);
	virtual void run() override;
	$String* val$sel = nullptr;
};

#endif // _bug6263446JTree$6_h_