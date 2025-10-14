#ifndef _bug6889007$1_h_
#define _bug6889007$1_h_
//$ class bug6889007$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace javax {
	namespace swing {
		class JFrame;
	}
}

class bug6889007$1 : public ::java::lang::Runnable {
	$class(bug6889007$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	bug6889007$1();
	void init$(::javax::swing::JFrame* val$frame);
	virtual void run() override;
	::javax::swing::JFrame* val$frame = nullptr;
};

#endif // _bug6889007$1_h_