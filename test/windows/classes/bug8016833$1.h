#ifndef _bug8016833$1_h_
#define _bug8016833$1_h_
//$ class bug8016833$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class bug8016833;
namespace java {
	namespace awt {
		class Graphics;
	}
}

class bug8016833$1 : public ::java::lang::Runnable {
	$class(bug8016833$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	bug8016833$1();
	void init$(::bug8016833* this$0, bool val$underline, bool val$strikethrough, bool val$background, ::java::awt::Graphics* val$g);
	virtual void run() override;
	::bug8016833* this$0 = nullptr;
	::java::awt::Graphics* val$g = nullptr;
	bool val$background = false;
	bool val$strikethrough = false;
	bool val$underline = false;
};

#endif // _bug8016833$1_h_