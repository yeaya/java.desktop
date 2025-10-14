#ifndef _sun_awt_MostRecentKeyValue_h_
#define _sun_awt_MostRecentKeyValue_h_
//$ class sun.awt.MostRecentKeyValue
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace awt {

class MostRecentKeyValue : public ::java::lang::Object {
	$class(MostRecentKeyValue, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MostRecentKeyValue();
	void init$(Object$* k, Object$* v);
	void setPair(Object$* k, Object$* v);
	$Object* key = nullptr;
	$Object* value = nullptr;
};

	} // awt
} // sun

#endif // _sun_awt_MostRecentKeyValue_h_