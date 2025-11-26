#include <sun/awt/X11/XPropertyCache.h>

#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <sun/awt/X11/XAtom.h>
#include <sun/awt/X11/XPropertyCache$PropertyCacheEntry.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $XAtom = ::sun::awt::X11::XAtom;
using $XPropertyCache$PropertyCacheEntry = ::sun::awt::X11::XPropertyCache$PropertyCacheEntry;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XPropertyCache_FieldInfo_[] = {
	{"windowToMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Long;Ljava/util/Map<Lsun/awt/X11/XAtom;Lsun/awt/X11/XPropertyCache$PropertyCacheEntry;>;>;", $PRIVATE | $STATIC, $staticField(XPropertyCache, windowToMap)},
	{}
};

$MethodInfo _XPropertyCache_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XPropertyCache::*)()>(&XPropertyCache::init$))},
	{"clearCache", "(J)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(int64_t)>(&XPropertyCache::clearCache))},
	{"clearCache", "(JLsun/awt/X11/XAtom;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(int64_t,$XAtom*)>(&XPropertyCache::clearCache))},
	{"getCacheEntry", "(JLsun/awt/X11/XAtom;)Lsun/awt/X11/XPropertyCache$PropertyCacheEntry;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$XPropertyCache$PropertyCacheEntry*(*)(int64_t,$XAtom*)>(&XPropertyCache::getCacheEntry))},
	{"isCached", "(JLsun/awt/X11/XAtom;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(int64_t,$XAtom*)>(&XPropertyCache::isCached))},
	{"isCachingSupported", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&XPropertyCache::isCachingSupported))},
	{"storeCache", "(Lsun/awt/X11/XPropertyCache$PropertyCacheEntry;JLsun/awt/X11/XAtom;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($XPropertyCache$PropertyCacheEntry*,int64_t,$XAtom*)>(&XPropertyCache::storeCache))},
	{}
};

$InnerClassInfo _XPropertyCache_InnerClassesInfo_[] = {
	{"sun.awt.X11.XPropertyCache$PropertyCacheEntry", "sun.awt.X11.XPropertyCache", "PropertyCacheEntry", $STATIC},
	{}
};

$ClassInfo _XPropertyCache_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XPropertyCache",
	"java.lang.Object",
	nullptr,
	_XPropertyCache_FieldInfo_,
	_XPropertyCache_MethodInfo_,
	nullptr,
	nullptr,
	_XPropertyCache_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.X11.XPropertyCache$PropertyCacheEntry"
};

$Object* allocate$XPropertyCache($Class* clazz) {
	return $of($alloc(XPropertyCache));
}

$Map* XPropertyCache::windowToMap = nullptr;

void XPropertyCache::init$() {
}

bool XPropertyCache::isCached(int64_t window, $XAtom* property) {
	$init(XPropertyCache);
	$useLocalCurrentObjectStackCache();
	$var($Map, entryMap, $cast($Map, $nc(XPropertyCache::windowToMap)->get($($Long::valueOf(window)))));
	if (entryMap != nullptr) {
		return entryMap->containsKey(property);
	} else {
		return false;
	}
}

$XPropertyCache$PropertyCacheEntry* XPropertyCache::getCacheEntry(int64_t window, $XAtom* property) {
	$init(XPropertyCache);
	$useLocalCurrentObjectStackCache();
	$var($Map, entryMap, $cast($Map, $nc(XPropertyCache::windowToMap)->get($($Long::valueOf(window)))));
	if (entryMap != nullptr) {
		return $cast($XPropertyCache$PropertyCacheEntry, entryMap->get(property));
	} else {
		return nullptr;
	}
}

void XPropertyCache::storeCache($XPropertyCache$PropertyCacheEntry* entry, int64_t window, $XAtom* property) {
	$init(XPropertyCache);
	$useLocalCurrentObjectStackCache();
	$var($Map, entryMap, $cast($Map, $nc(XPropertyCache::windowToMap)->get($($Long::valueOf(window)))));
	if (entryMap == nullptr) {
		$assign(entryMap, $new($HashMap));
		$nc(XPropertyCache::windowToMap)->put($($Long::valueOf(window)), entryMap);
	}
	$nc(entryMap)->put(property, entry);
}

void XPropertyCache::clearCache(int64_t window) {
	$init(XPropertyCache);
	$nc(XPropertyCache::windowToMap)->remove($($Long::valueOf(window)));
}

void XPropertyCache::clearCache(int64_t window, $XAtom* property) {
	$init(XPropertyCache);
	$useLocalCurrentObjectStackCache();
	$var($Map, entryMap, $cast($Map, $nc(XPropertyCache::windowToMap)->get($($Long::valueOf(window)))));
	if (entryMap != nullptr) {
		entryMap->remove(property);
	}
}

bool XPropertyCache::isCachingSupported() {
	$init(XPropertyCache);
	return false;
}

void clinit$XPropertyCache($Class* class$) {
	$assignStatic(XPropertyCache::windowToMap, $new($HashMap));
}

XPropertyCache::XPropertyCache() {
}

$Class* XPropertyCache::load$($String* name, bool initialize) {
	$loadClass(XPropertyCache, name, initialize, &_XPropertyCache_ClassInfo_, clinit$XPropertyCache, allocate$XPropertyCache);
	return class$;
}

$Class* XPropertyCache::class$ = nullptr;

		} // X11
	} // awt
} // sun