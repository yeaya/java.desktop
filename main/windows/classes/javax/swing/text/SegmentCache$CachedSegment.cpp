#include <javax/swing/text/SegmentCache$CachedSegment.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/Segment.h>
#include <javax/swing/text/SegmentCache.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Segment = ::javax::swing::text::Segment;
using $SegmentCache = ::javax::swing::text::SegmentCache;

namespace javax {
	namespace swing {
		namespace text {

$MethodInfo _SegmentCache$CachedSegment_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SegmentCache$CachedSegment::*)()>(&SegmentCache$CachedSegment::init$))},
	{}
};

$InnerClassInfo _SegmentCache$CachedSegment_InnerClassesInfo_[] = {
	{"javax.swing.text.SegmentCache$CachedSegment", "javax.swing.text.SegmentCache", "CachedSegment", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SegmentCache$CachedSegment_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.SegmentCache$CachedSegment",
	"javax.swing.text.Segment",
	nullptr,
	nullptr,
	_SegmentCache$CachedSegment_MethodInfo_,
	nullptr,
	nullptr,
	_SegmentCache$CachedSegment_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.SegmentCache"
};

$Object* allocate$SegmentCache$CachedSegment($Class* clazz) {
	return $of($alloc(SegmentCache$CachedSegment));
}

void SegmentCache$CachedSegment::init$() {
	$Segment::init$();
}

SegmentCache$CachedSegment::SegmentCache$CachedSegment() {
}

$Class* SegmentCache$CachedSegment::load$($String* name, bool initialize) {
	$loadClass(SegmentCache$CachedSegment, name, initialize, &_SegmentCache$CachedSegment_ClassInfo_, allocate$SegmentCache$CachedSegment);
	return class$;
}

$Class* SegmentCache$CachedSegment::class$ = nullptr;

		} // text
	} // swing
} // javax