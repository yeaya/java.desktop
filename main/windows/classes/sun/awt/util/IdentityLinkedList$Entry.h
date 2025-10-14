#ifndef _sun_awt_util_IdentityLinkedList$Entry_h_
#define _sun_awt_util_IdentityLinkedList$Entry_h_
//$ class sun.awt.util.IdentityLinkedList$Entry
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace awt {
		namespace util {

class IdentityLinkedList$Entry : public ::java::lang::Object {
	$class(IdentityLinkedList$Entry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	IdentityLinkedList$Entry();
	void init$(Object$* element, ::sun::awt::util::IdentityLinkedList$Entry* next, ::sun::awt::util::IdentityLinkedList$Entry* previous);
	$Object* element = nullptr;
	::sun::awt::util::IdentityLinkedList$Entry* next = nullptr;
	::sun::awt::util::IdentityLinkedList$Entry* previous = nullptr;
};

		} // util
	} // awt
} // sun

#endif // _sun_awt_util_IdentityLinkedList$Entry_h_