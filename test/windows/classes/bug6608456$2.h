#ifndef _bug6608456$2_h_
#define _bug6608456$2_h_
//$ class bug6608456$2
//$ extends java.util.concurrent.Callable

#include <java/util/concurrent/Callable.h>

namespace javax {
	namespace swing {
		class JComponent;
	}
}

class bug6608456$2 : public ::java::util::concurrent::Callable {
	$class(bug6608456$2, $NO_CLASS_INIT, ::java::util::concurrent::Callable)
public:
	bug6608456$2();
	void init$(::javax::swing::JComponent* val$component);
	virtual $Object* call() override;
	::javax::swing::JComponent* val$component = nullptr;
};

#endif // _bug6608456$2_h_