#ifndef _sun_awt_SoftCache$Entry_h_
#define _sun_awt_SoftCache$Entry_h_
//$ class sun.awt.SoftCache$Entry
//$ extends java.util.Map$Entry

#include <java/util/Map$Entry.h>

namespace sun {
	namespace awt {
		class SoftCache;
	}
}

namespace sun {
	namespace awt {

class SoftCache$Entry : public ::java::util::Map$Entry {
	$class(SoftCache$Entry, $NO_CLASS_INIT, ::java::util::Map$Entry)
public:
	SoftCache$Entry();
	void init$(::sun::awt::SoftCache* this$0, ::java::util::Map$Entry* ent, Object$* value);
	virtual bool equals(Object$* o) override;
	virtual $Object* getKey() override;
	virtual $Object* getValue() override;
	virtual int32_t hashCode() override;
	virtual $Object* setValue(Object$* value) override;
	::sun::awt::SoftCache* this$0 = nullptr;
	::java::util::Map$Entry* ent = nullptr;
	$Object* value = nullptr;
};

	} // awt
} // sun

#endif // _sun_awt_SoftCache$Entry_h_