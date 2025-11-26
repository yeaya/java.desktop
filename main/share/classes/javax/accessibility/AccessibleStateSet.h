#ifndef _javax_accessibility_AccessibleStateSet_h_
#define _javax_accessibility_AccessibleStateSet_h_
//$ class javax.accessibility.AccessibleStateSet
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Vector;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleState;
	}
}

namespace javax {
	namespace accessibility {

class $export AccessibleStateSet : public ::java::lang::Object {
	$class(AccessibleStateSet, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AccessibleStateSet();
	void init$();
	void init$($Array<::javax::accessibility::AccessibleState>* states);
	virtual bool add(::javax::accessibility::AccessibleState* state);
	virtual void addAll($Array<::javax::accessibility::AccessibleState>* states);
	virtual void clear();
	virtual bool contains(::javax::accessibility::AccessibleState* state);
	virtual bool remove(::javax::accessibility::AccessibleState* state);
	virtual $Array<::javax::accessibility::AccessibleState>* toArray();
	virtual $String* toString() override;
	::java::util::Vector* states = nullptr;
};

	} // accessibility
} // javax

#endif // _javax_accessibility_AccessibleStateSet_h_