#ifndef _javax_swing_RepaintManager$2_h_
#define _javax_swing_RepaintManager$2_h_
//$ class javax.swing.RepaintManager$2
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace javax {
	namespace swing {
		class RepaintManager;
	}
}

namespace javax {
	namespace swing {

class RepaintManager$2 : public ::java::lang::Runnable {
	$class(RepaintManager$2, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	RepaintManager$2();
	void init$(::javax::swing::RepaintManager* this$0, ::java::awt::Component* val$c, ::java::lang::Runnable* val$r);
	virtual void run() override;
	::javax::swing::RepaintManager* this$0 = nullptr;
	::java::lang::Runnable* val$r = nullptr;
	::java::awt::Component* val$c = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_RepaintManager$2_h_