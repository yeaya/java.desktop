#include <sun/java2d/loops/RenderCache$Entry.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/RenderCache.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $RenderCache = ::sun::java2d::loops::RenderCache;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _RenderCache$Entry_FieldInfo_[] = {
	{"this$0", "Lsun/java2d/loops/RenderCache;", nullptr, $FINAL | $SYNTHETIC, $field(RenderCache$Entry, this$0)},
	{"src", "Lsun/java2d/loops/SurfaceType;", nullptr, $PRIVATE, $field(RenderCache$Entry, src)},
	{"comp", "Lsun/java2d/loops/CompositeType;", nullptr, $PRIVATE, $field(RenderCache$Entry, comp)},
	{"dst", "Lsun/java2d/loops/SurfaceType;", nullptr, $PRIVATE, $field(RenderCache$Entry, dst)},
	{"value", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(RenderCache$Entry, value)},
	{}
};

$MethodInfo _RenderCache$Entry_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/RenderCache;Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(RenderCache$Entry::*)($RenderCache*,$SurfaceType*,$CompositeType*,$SurfaceType*,Object$*)>(&RenderCache$Entry::init$))},
	{"getValue", "()Ljava/lang/Object;", nullptr, $PUBLIC, $method(static_cast<$Object*(RenderCache$Entry::*)()>(&RenderCache$Entry::getValue))},
	{"matches", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)Z", nullptr, $PUBLIC, $method(static_cast<bool(RenderCache$Entry::*)($SurfaceType*,$CompositeType*,$SurfaceType*)>(&RenderCache$Entry::matches))},
	{}
};

$InnerClassInfo _RenderCache$Entry_InnerClassesInfo_[] = {
	{"sun.java2d.loops.RenderCache$Entry", "sun.java2d.loops.RenderCache", "Entry", $FINAL},
	{}
};

$ClassInfo _RenderCache$Entry_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.java2d.loops.RenderCache$Entry",
	"java.lang.Object",
	nullptr,
	_RenderCache$Entry_FieldInfo_,
	_RenderCache$Entry_MethodInfo_,
	nullptr,
	nullptr,
	_RenderCache$Entry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.loops.RenderCache"
};

$Object* allocate$RenderCache$Entry($Class* clazz) {
	return $of($alloc(RenderCache$Entry));
}

void RenderCache$Entry::init$($RenderCache* this$0, $SurfaceType* src, $CompositeType* comp, $SurfaceType* dst, Object$* value) {
	$set(this, this$0, this$0);
	$set(this, src, src);
	$set(this, comp, comp);
	$set(this, dst, dst);
	$set(this, value, value);
}

bool RenderCache$Entry::matches($SurfaceType* src, $CompositeType* comp, $SurfaceType* dst) {
	return ((this->src == src) && (this->comp == comp) && (this->dst == dst));
}

$Object* RenderCache$Entry::getValue() {
	return $of(this->value);
}

RenderCache$Entry::RenderCache$Entry() {
}

$Class* RenderCache$Entry::load$($String* name, bool initialize) {
	$loadClass(RenderCache$Entry, name, initialize, &_RenderCache$Entry_ClassInfo_, allocate$RenderCache$Entry);
	return class$;
}

$Class* RenderCache$Entry::class$ = nullptr;

		} // loops
	} // java2d
} // sun