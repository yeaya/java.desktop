#ifndef _javax_swing_CompareTabOrderComparator_h_
#define _javax_swing_CompareTabOrderComparator_h_
//$ class javax.swing.CompareTabOrderComparator
//$ extends java.util.Comparator

#include <java/util/Comparator.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace javax {
	namespace swing {
		class DefaultFocusManager;
	}
}

namespace javax {
	namespace swing {

class CompareTabOrderComparator : public ::java::util::Comparator {
	$class(CompareTabOrderComparator, $NO_CLASS_INIT, ::java::util::Comparator)
public:
	CompareTabOrderComparator();
	void init$(::javax::swing::DefaultFocusManager* defaultFocusManager);
	int32_t compare(::java::awt::Component* o1, ::java::awt::Component* o2);
	virtual int32_t compare(Object$* o1, Object$* o2) override;
	::javax::swing::DefaultFocusManager* defaultFocusManager = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_CompareTabOrderComparator_h_