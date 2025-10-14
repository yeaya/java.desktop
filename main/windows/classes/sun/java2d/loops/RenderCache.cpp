#include <sun/java2d/loops/RenderCache.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/RenderCache$Entry.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <jcpp.h>

using $RenderCache$EntryArray = $Array<::sun::java2d::loops::RenderCache$Entry>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $RenderCache$Entry = ::sun::java2d::loops::RenderCache$Entry;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _RenderCache_FieldInfo_[] = {
	{"entries", "[Lsun/java2d/loops/RenderCache$Entry;", nullptr, $PRIVATE, $field(RenderCache, entries)},
	{}
};

$MethodInfo _RenderCache_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(RenderCache::*)(int32_t)>(&RenderCache::init$))},
	{"get", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)Ljava/lang/Object;", nullptr, $PUBLIC | $SYNCHRONIZED, $method(static_cast<$Object*(RenderCache::*)($SurfaceType*,$CompositeType*,$SurfaceType*)>(&RenderCache::get))},
	{"put", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;Ljava/lang/Object;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $method(static_cast<void(RenderCache::*)($SurfaceType*,$CompositeType*,$SurfaceType*,Object$*)>(&RenderCache::put))},
	{}
};

$InnerClassInfo _RenderCache_InnerClassesInfo_[] = {
	{"sun.java2d.loops.RenderCache$Entry", "sun.java2d.loops.RenderCache", "Entry", $FINAL},
	{}
};

$ClassInfo _RenderCache_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.java2d.loops.RenderCache",
	"java.lang.Object",
	nullptr,
	_RenderCache_FieldInfo_,
	_RenderCache_MethodInfo_,
	nullptr,
	nullptr,
	_RenderCache_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.loops.RenderCache$Entry"
};

$Object* allocate$RenderCache($Class* clazz) {
	return $of($alloc(RenderCache));
}

void RenderCache::init$(int32_t size) {
	$set(this, entries, $new($RenderCache$EntryArray, size));
}

$Object* RenderCache::get($SurfaceType* src, $CompositeType* comp, $SurfaceType* dst) {
	$synchronized(this) {
		int32_t max = $nc(this->entries)->length - 1;
		for (int32_t i = max; i >= 0; --i) {
			$var($RenderCache$Entry, e, $nc(this->entries)->get(i));
			if (e == nullptr) {
				break;
			}
			if ($nc(e)->matches(src, comp, dst)) {
				if (i < max - 4) {
					$System::arraycopy(this->entries, i + 1, this->entries, i, max - i);
					$nc(this->entries)->set(max, e);
				}
				return $of(e->getValue());
			}
		}
		return $of(nullptr);
	}
}

void RenderCache::put($SurfaceType* src, $CompositeType* comp, $SurfaceType* dst, Object$* value) {
	$synchronized(this) {
		$var($RenderCache$Entry, e, $new($RenderCache$Entry, this, src, comp, dst, value));
		int32_t num = $nc(this->entries)->length;
		$System::arraycopy(this->entries, 1, this->entries, 0, num - 1);
		$nc(this->entries)->set(num - 1, e);
	}
}

RenderCache::RenderCache() {
}

$Class* RenderCache::load$($String* name, bool initialize) {
	$loadClass(RenderCache, name, initialize, &_RenderCache_ClassInfo_, allocate$RenderCache);
	return class$;
}

$Class* RenderCache::class$ = nullptr;

		} // loops
	} // java2d
} // sun