#ifndef _sun_awt_WeakIdentityHashMap_h_
#define _sun_awt_WeakIdentityHashMap_h_
//$ class sun.awt.WeakIdentityHashMap
//$ extends java.util.Map

#include <java/util/Map.h>

namespace java {
	namespace lang {
		namespace ref {
			class ReferenceQueue;
		}
	}
}
namespace java {
	namespace util {
		class Collection;
		class Set;
	}
}

namespace sun {
	namespace awt {

class WeakIdentityHashMap : public ::java::util::Map {
	$class(WeakIdentityHashMap, $NO_CLASS_INIT, ::java::util::Map)
public:
	WeakIdentityHashMap();
	void init$();
	void init$(int32_t initialSize);
	virtual void clear() override;
	virtual bool containsKey(Object$* key) override;
	virtual bool containsValue(Object$* value) override;
	virtual ::java::util::Set* entrySet() override;
	virtual $Object* get(Object$* key) override;
	::java::util::Map* getMap();
	virtual bool isEmpty() override;
	virtual ::java::util::Set* keySet() override;
	virtual $Object* put(Object$* key, Object$* value) override;
	virtual void putAll(::java::util::Map* m) override;
	using ::java::util::Map::remove;
	virtual $Object* remove(Object$* key) override;
	virtual int32_t size() override;
	virtual ::java::util::Collection* values() override;
	::java::util::Map* map = nullptr;
	::java::lang::ref::ReferenceQueue* queue = nullptr;
};

	} // awt
} // sun

#endif // _sun_awt_WeakIdentityHashMap_h_