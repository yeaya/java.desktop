#ifndef _javax_swing_RepaintManager$4_h_
#define _javax_swing_RepaintManager$4_h_
//$ class javax.swing.RepaintManager$4
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicInteger;
			}
		}
	}
}
namespace javax {
	namespace swing {
		class RepaintManager;
	}
}

namespace javax {
	namespace swing {

class RepaintManager$4 : public ::java::security::PrivilegedAction {
	$class(RepaintManager$4, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	RepaintManager$4();
	void init$(::javax::swing::RepaintManager* this$0, ::java::util::Map* val$tmpDirtyComponents, ::java::awt::Component* val$dirtyComponent, ::java::util::List* val$roots, int32_t val$i, ::java::util::concurrent::atomic::AtomicInteger* val$count);
	virtual $Object* run() override;
	::javax::swing::RepaintManager* this$0 = nullptr;
	::java::util::concurrent::atomic::AtomicInteger* val$count = nullptr;
	int32_t val$i = 0;
	::java::util::List* val$roots = nullptr;
	::java::awt::Component* val$dirtyComponent = nullptr;
	::java::util::Map* val$tmpDirtyComponents = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_RepaintManager$4_h_