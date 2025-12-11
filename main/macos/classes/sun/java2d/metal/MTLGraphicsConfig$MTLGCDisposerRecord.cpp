#include <sun/java2d/metal/MTLGraphicsConfig$MTLGCDisposerRecord.h>

#include <sun/java2d/metal/MTLGraphicsConfig.h>
#include <sun/java2d/metal/MTLRenderQueue.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MTLRenderQueue = ::sun::java2d::metal::MTLRenderQueue;

namespace sun {
	namespace java2d {
		namespace metal {

$FieldInfo _MTLGraphicsConfig$MTLGCDisposerRecord_FieldInfo_[] = {
	{"pCfgInfo", "J", nullptr, $PRIVATE, $field(MTLGraphicsConfig$MTLGCDisposerRecord, pCfgInfo)},
	{}
};

$MethodInfo _MTLGraphicsConfig$MTLGCDisposerRecord_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(MTLGraphicsConfig$MTLGCDisposerRecord::*)(int64_t)>(&MTLGraphicsConfig$MTLGCDisposerRecord::init$))},
	{"dispose", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MTLGraphicsConfig$MTLGCDisposerRecord_InnerClassesInfo_[] = {
	{"sun.java2d.metal.MTLGraphicsConfig$MTLGCDisposerRecord", "sun.java2d.metal.MTLGraphicsConfig", "MTLGCDisposerRecord", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MTLGraphicsConfig$MTLGCDisposerRecord_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.metal.MTLGraphicsConfig$MTLGCDisposerRecord",
	"java.lang.Object",
	"sun.java2d.DisposerRecord",
	_MTLGraphicsConfig$MTLGCDisposerRecord_FieldInfo_,
	_MTLGraphicsConfig$MTLGCDisposerRecord_MethodInfo_,
	nullptr,
	nullptr,
	_MTLGraphicsConfig$MTLGCDisposerRecord_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.metal.MTLGraphicsConfig"
};

$Object* allocate$MTLGraphicsConfig$MTLGCDisposerRecord($Class* clazz) {
	return $of($alloc(MTLGraphicsConfig$MTLGCDisposerRecord));
}

void MTLGraphicsConfig$MTLGCDisposerRecord::init$(int64_t pCfgInfo) {
	this->pCfgInfo = pCfgInfo;
}

void MTLGraphicsConfig$MTLGCDisposerRecord::dispose() {
	if (this->pCfgInfo != 0) {
		$MTLRenderQueue::disposeGraphicsConfig(this->pCfgInfo);
		this->pCfgInfo = 0;
	}
}

MTLGraphicsConfig$MTLGCDisposerRecord::MTLGraphicsConfig$MTLGCDisposerRecord() {
}

$Class* MTLGraphicsConfig$MTLGCDisposerRecord::load$($String* name, bool initialize) {
	$loadClass(MTLGraphicsConfig$MTLGCDisposerRecord, name, initialize, &_MTLGraphicsConfig$MTLGCDisposerRecord_ClassInfo_, allocate$MTLGraphicsConfig$MTLGCDisposerRecord);
	return class$;
}

$Class* MTLGraphicsConfig$MTLGCDisposerRecord::class$ = nullptr;

		} // metal
	} // java2d
} // sun