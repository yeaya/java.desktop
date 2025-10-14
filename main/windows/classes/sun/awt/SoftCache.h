#ifndef _sun_awt_SoftCache_h_
#define _sun_awt_SoftCache_h_
//$ class sun.awt.SoftCache
//$ extends java.util.AbstractMap

#include <java/util/AbstractMap.h>

namespace java {
	namespace lang {
		namespace ref {
			class ReferenceQueue;
		}
	}
}
namespace java {
	namespace util {
		class Map;
		class Set;
	}
}

namespace sun {
	namespace awt {

class $export SoftCache : public ::java::util::AbstractMap {
	$class(SoftCache, $NO_CLASS_INIT, ::java::util::AbstractMap)
public:
	SoftCache();
	void init$(int32_t initialCapacity, float loadFactor);
	void init$(int32_t initialCapacity);
	void init$();
	virtual void clear() override;
	virtual bool containsKey(Object$* key) override;
	virtual ::java::util::Set* entrySet() override;
	virtual $Object* fill(Object$* key);
	virtual $Object* get(Object$* key) override;
	virtual bool isEmpty() override;
	void processQueue();
	virtual $Object* put(Object$* key, Object$* value) override;
	using ::java::util::AbstractMap::remove;
	virtual $Object* remove(Object$* key) override;
	virtual int32_t size() override;
	static bool valEquals(Object$* o1, Object$* o2);
	::java::util::Map* hash = nullptr;
	::java::lang::ref::ReferenceQueue* queue = nullptr;
	::java::util::Set* entrySet$ = nullptr;
};

	} // awt
} // sun

#endif // _sun_awt_SoftCache_h_