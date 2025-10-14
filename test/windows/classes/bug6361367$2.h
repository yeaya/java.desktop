#ifndef _bug6361367$2_h_
#define _bug6361367$2_h_
//$ class bug6361367$2
//$ extends java.util.concurrent.Callable

#include <java/util/concurrent/Callable.h>

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicReference;
			}
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class JTextComponent;
		}
	}
}

class bug6361367$2 : public ::java::util::concurrent::Callable {
	$class(bug6361367$2, $NO_CLASS_INIT, ::java::util::concurrent::Callable)
public:
	bug6361367$2();
	void init$(::java::util::concurrent::atomic::AtomicReference* val$ref, ::javax::swing::text::JTextComponent* val$textComponent);
	virtual $Object* call() override;
	::javax::swing::text::JTextComponent* val$textComponent = nullptr;
	::java::util::concurrent::atomic::AtomicReference* val$ref = nullptr;
};

#endif // _bug6361367$2_h_