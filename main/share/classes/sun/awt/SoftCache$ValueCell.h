#ifndef _sun_awt_SoftCache$ValueCell_h_
#define _sun_awt_SoftCache$ValueCell_h_
//$ class sun.awt.SoftCache$ValueCell
//$ extends java.lang.ref.SoftReference

#include <java/lang/ref/SoftReference.h>

#pragma push_macro("INVALID_KEY")
#undef INVALID_KEY

namespace java {
	namespace lang {
		namespace ref {
			class ReferenceQueue;
		}
	}
}

namespace sun {
	namespace awt {

class SoftCache$ValueCell : public ::java::lang::ref::SoftReference {
	$class(SoftCache$ValueCell, 0, ::java::lang::ref::SoftReference)
public:
	SoftCache$ValueCell();
	void init$(Object$* key, Object$* value, ::java::lang::ref::ReferenceQueue* queue);
	static ::sun::awt::SoftCache$ValueCell* create(Object$* key, Object$* value, ::java::lang::ref::ReferenceQueue* queue);
	void drop();
	bool isValid();
	static $Object* strip(Object$* val, bool drop);
	static $Object* INVALID_KEY;
	static int32_t dropped;
	$Object* key = nullptr;
};

	} // awt
} // sun

#pragma pop_macro("INVALID_KEY")

#endif // _sun_awt_SoftCache$ValueCell_h_