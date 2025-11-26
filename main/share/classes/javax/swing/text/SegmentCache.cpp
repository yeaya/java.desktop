#include <javax/swing/text/SegmentCache.h>

#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <javax/swing/text/Segment.h>
#include <javax/swing/text/SegmentCache$CachedSegment.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;
using $Segment = ::javax::swing::text::Segment;
using $SegmentCache$CachedSegment = ::javax::swing::text::SegmentCache$CachedSegment;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _SegmentCache_FieldInfo_[] = {
	{"sharedCache", "Ljavax/swing/text/SegmentCache;", nullptr, $PRIVATE | $STATIC, $staticField(SegmentCache, sharedCache)},
	{"segments", "Ljava/util/List;", "Ljava/util/List<Ljavax/swing/text/Segment;>;", $PRIVATE, $field(SegmentCache, segments)},
	{}
};

$MethodInfo _SegmentCache_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SegmentCache::*)()>(&SegmentCache::init$))},
	{"getSegment", "()Ljavax/swing/text/Segment;", nullptr, $PUBLIC},
	{"getSharedInstance", "()Ljavax/swing/text/SegmentCache;", nullptr, $PUBLIC | $STATIC, $method(static_cast<SegmentCache*(*)()>(&SegmentCache::getSharedInstance))},
	{"getSharedSegment", "()Ljavax/swing/text/Segment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Segment*(*)()>(&SegmentCache::getSharedSegment))},
	{"releaseSegment", "(Ljavax/swing/text/Segment;)V", nullptr, $PUBLIC},
	{"releaseSharedSegment", "(Ljavax/swing/text/Segment;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Segment*)>(&SegmentCache::releaseSharedSegment))},
	{}
};

$InnerClassInfo _SegmentCache_InnerClassesInfo_[] = {
	{"javax.swing.text.SegmentCache$CachedSegment", "javax.swing.text.SegmentCache", "CachedSegment", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SegmentCache_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.SegmentCache",
	"java.lang.Object",
	nullptr,
	_SegmentCache_FieldInfo_,
	_SegmentCache_MethodInfo_,
	nullptr,
	nullptr,
	_SegmentCache_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.text.SegmentCache$CachedSegment"
};

$Object* allocate$SegmentCache($Class* clazz) {
	return $of($alloc(SegmentCache));
}

SegmentCache* SegmentCache::sharedCache = nullptr;

SegmentCache* SegmentCache::getSharedInstance() {
	$init(SegmentCache);
	return SegmentCache::sharedCache;
}

$Segment* SegmentCache::getSharedSegment() {
	$init(SegmentCache);
	return $nc($(getSharedInstance()))->getSegment();
}

void SegmentCache::releaseSharedSegment($Segment* segment) {
	$init(SegmentCache);
	$nc($(getSharedInstance()))->releaseSegment(segment);
}

void SegmentCache::init$() {
	$set(this, segments, $new($ArrayList, 11));
}

$Segment* SegmentCache::getSegment() {
	$synchronized(this) {
		int32_t size = $nc(this->segments)->size();
		if (size > 0) {
			return $cast($Segment, $nc(this->segments)->remove(size - 1));
		}
	}
	return $new($SegmentCache$CachedSegment);
}

void SegmentCache::releaseSegment($Segment* segment) {
	if ($instanceOf($SegmentCache$CachedSegment, segment)) {
		$synchronized(this) {
			if ($nc(segment)->copy) {
				$Arrays::fill(segment->array, u'\0');
			}
			$set($nc(segment), array, nullptr);
			segment->copy = false;
			segment->count = 0;
			$nc(this->segments)->add(segment);
		}
	}
}

void clinit$SegmentCache($Class* class$) {
	$assignStatic(SegmentCache::sharedCache, $new(SegmentCache));
}

SegmentCache::SegmentCache() {
}

$Class* SegmentCache::load$($String* name, bool initialize) {
	$loadClass(SegmentCache, name, initialize, &_SegmentCache_ClassInfo_, clinit$SegmentCache, allocate$SegmentCache);
	return class$;
}

$Class* SegmentCache::class$ = nullptr;

		} // text
	} // swing
} // javax