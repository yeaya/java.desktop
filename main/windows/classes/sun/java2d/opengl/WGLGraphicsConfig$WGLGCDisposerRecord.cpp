#include <sun/java2d/opengl/WGLGraphicsConfig$WGLGCDisposerRecord.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/opengl/OGLRenderQueue.h>
#include <sun/java2d/opengl/WGLGraphicsConfig.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DisposerRecord = ::sun::java2d::DisposerRecord;
using $OGLRenderQueue = ::sun::java2d::opengl::OGLRenderQueue;
using $WGLGraphicsConfig = ::sun::java2d::opengl::WGLGraphicsConfig;

namespace sun {
	namespace java2d {
		namespace opengl {

$FieldInfo _WGLGraphicsConfig$WGLGCDisposerRecord_FieldInfo_[] = {
	{"pCfgInfo", "J", nullptr, $PRIVATE, $field(WGLGraphicsConfig$WGLGCDisposerRecord, pCfgInfo)},
	{}
};

$MethodInfo _WGLGraphicsConfig$WGLGCDisposerRecord_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(WGLGraphicsConfig$WGLGCDisposerRecord::*)(int64_t)>(&WGLGraphicsConfig$WGLGCDisposerRecord::init$))},
	{"dispose", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WGLGraphicsConfig$WGLGCDisposerRecord_InnerClassesInfo_[] = {
	{"sun.java2d.opengl.WGLGraphicsConfig$WGLGCDisposerRecord", "sun.java2d.opengl.WGLGraphicsConfig", "WGLGCDisposerRecord", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _WGLGraphicsConfig$WGLGCDisposerRecord_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.opengl.WGLGraphicsConfig$WGLGCDisposerRecord",
	"java.lang.Object",
	"sun.java2d.DisposerRecord",
	_WGLGraphicsConfig$WGLGCDisposerRecord_FieldInfo_,
	_WGLGraphicsConfig$WGLGCDisposerRecord_MethodInfo_,
	nullptr,
	nullptr,
	_WGLGraphicsConfig$WGLGCDisposerRecord_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.opengl.WGLGraphicsConfig"
};

$Object* allocate$WGLGraphicsConfig$WGLGCDisposerRecord($Class* clazz) {
	return $of($alloc(WGLGraphicsConfig$WGLGCDisposerRecord));
}

void WGLGraphicsConfig$WGLGCDisposerRecord::init$(int64_t pCfgInfo) {
	this->pCfgInfo = pCfgInfo;
}

void WGLGraphicsConfig$WGLGCDisposerRecord::dispose() {
	if (this->pCfgInfo != 0) {
		$OGLRenderQueue::disposeGraphicsConfig(this->pCfgInfo);
		this->pCfgInfo = 0;
	}
}

WGLGraphicsConfig$WGLGCDisposerRecord::WGLGraphicsConfig$WGLGCDisposerRecord() {
}

$Class* WGLGraphicsConfig$WGLGCDisposerRecord::load$($String* name, bool initialize) {
	$loadClass(WGLGraphicsConfig$WGLGCDisposerRecord, name, initialize, &_WGLGraphicsConfig$WGLGCDisposerRecord_ClassInfo_, allocate$WGLGraphicsConfig$WGLGCDisposerRecord);
	return class$;
}

$Class* WGLGraphicsConfig$WGLGCDisposerRecord::class$ = nullptr;

		} // opengl
	} // java2d
} // sun