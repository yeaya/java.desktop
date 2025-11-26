#include <sun/java2d/pipe/SpanClipRenderer$SCRcontext.h>

#include <sun/java2d/pipe/RegionIterator.h>
#include <sun/java2d/pipe/SpanClipRenderer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RegionIterator = ::sun::java2d::pipe::RegionIterator;
using $SpanClipRenderer = ::sun::java2d::pipe::SpanClipRenderer;

namespace sun {
	namespace java2d {
		namespace pipe {

$FieldInfo _SpanClipRenderer$SCRcontext_FieldInfo_[] = {
	{"this$0", "Lsun/java2d/pipe/SpanClipRenderer;", nullptr, $FINAL | $SYNTHETIC, $field(SpanClipRenderer$SCRcontext, this$0)},
	{"iterator", "Lsun/java2d/pipe/RegionIterator;", nullptr, 0, $field(SpanClipRenderer$SCRcontext, iterator)},
	{"outcontext", "Ljava/lang/Object;", nullptr, 0, $field(SpanClipRenderer$SCRcontext, outcontext)},
	{"band", "[I", nullptr, 0, $field(SpanClipRenderer$SCRcontext, band)},
	{"tile", "[B", nullptr, 0, $field(SpanClipRenderer$SCRcontext, tile)},
	{}
};

$MethodInfo _SpanClipRenderer$SCRcontext_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/pipe/SpanClipRenderer;Lsun/java2d/pipe/RegionIterator;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(SpanClipRenderer$SCRcontext::*)($SpanClipRenderer*,$RegionIterator*,Object$*)>(&SpanClipRenderer$SCRcontext::init$))},
	{}
};

$InnerClassInfo _SpanClipRenderer$SCRcontext_InnerClassesInfo_[] = {
	{"sun.java2d.pipe.SpanClipRenderer$SCRcontext", "sun.java2d.pipe.SpanClipRenderer", "SCRcontext", 0},
	{}
};

$ClassInfo _SpanClipRenderer$SCRcontext_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.pipe.SpanClipRenderer$SCRcontext",
	"java.lang.Object",
	nullptr,
	_SpanClipRenderer$SCRcontext_FieldInfo_,
	_SpanClipRenderer$SCRcontext_MethodInfo_,
	nullptr,
	nullptr,
	_SpanClipRenderer$SCRcontext_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.pipe.SpanClipRenderer"
};

$Object* allocate$SpanClipRenderer$SCRcontext($Class* clazz) {
	return $of($alloc(SpanClipRenderer$SCRcontext));
}

void SpanClipRenderer$SCRcontext::init$($SpanClipRenderer* this$0, $RegionIterator* ri, Object$* outctx) {
	$set(this, this$0, this$0);
	$set(this, iterator, ri);
	$set(this, outcontext, outctx);
	$set(this, band, $new($ints, 4));
}

SpanClipRenderer$SCRcontext::SpanClipRenderer$SCRcontext() {
}

$Class* SpanClipRenderer$SCRcontext::load$($String* name, bool initialize) {
	$loadClass(SpanClipRenderer$SCRcontext, name, initialize, &_SpanClipRenderer$SCRcontext_ClassInfo_, allocate$SpanClipRenderer$SCRcontext);
	return class$;
}

$Class* SpanClipRenderer$SCRcontext::class$ = nullptr;

		} // pipe
	} // java2d
} // sun