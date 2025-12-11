#include <sun/java2d/opengl/CGLGraphicsConfig$CGLGCDisposerRecord.h>

#include <sun/java2d/opengl/CGLGraphicsConfig.h>
#include <sun/java2d/opengl/OGLRenderQueue.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OGLRenderQueue = ::sun::java2d::opengl::OGLRenderQueue;

namespace sun {
	namespace java2d {
		namespace opengl {

$FieldInfo _CGLGraphicsConfig$CGLGCDisposerRecord_FieldInfo_[] = {
	{"pCfgInfo", "J", nullptr, $PRIVATE, $field(CGLGraphicsConfig$CGLGCDisposerRecord, pCfgInfo)},
	{}
};

$MethodInfo _CGLGraphicsConfig$CGLGCDisposerRecord_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(CGLGraphicsConfig$CGLGCDisposerRecord::*)(int64_t)>(&CGLGraphicsConfig$CGLGCDisposerRecord::init$))},
	{"dispose", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _CGLGraphicsConfig$CGLGCDisposerRecord_InnerClassesInfo_[] = {
	{"sun.java2d.opengl.CGLGraphicsConfig$CGLGCDisposerRecord", "sun.java2d.opengl.CGLGraphicsConfig", "CGLGCDisposerRecord", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _CGLGraphicsConfig$CGLGCDisposerRecord_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.opengl.CGLGraphicsConfig$CGLGCDisposerRecord",
	"java.lang.Object",
	"sun.java2d.DisposerRecord",
	_CGLGraphicsConfig$CGLGCDisposerRecord_FieldInfo_,
	_CGLGraphicsConfig$CGLGCDisposerRecord_MethodInfo_,
	nullptr,
	nullptr,
	_CGLGraphicsConfig$CGLGCDisposerRecord_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.opengl.CGLGraphicsConfig"
};

$Object* allocate$CGLGraphicsConfig$CGLGCDisposerRecord($Class* clazz) {
	return $of($alloc(CGLGraphicsConfig$CGLGCDisposerRecord));
}

void CGLGraphicsConfig$CGLGCDisposerRecord::init$(int64_t pCfgInfo) {
	this->pCfgInfo = pCfgInfo;
}

void CGLGraphicsConfig$CGLGCDisposerRecord::dispose() {
	if (this->pCfgInfo != 0) {
		$OGLRenderQueue::disposeGraphicsConfig(this->pCfgInfo);
		this->pCfgInfo = 0;
	}
}

CGLGraphicsConfig$CGLGCDisposerRecord::CGLGraphicsConfig$CGLGCDisposerRecord() {
}

$Class* CGLGraphicsConfig$CGLGCDisposerRecord::load$($String* name, bool initialize) {
	$loadClass(CGLGraphicsConfig$CGLGCDisposerRecord, name, initialize, &_CGLGraphicsConfig$CGLGCDisposerRecord_ClassInfo_, allocate$CGLGraphicsConfig$CGLGCDisposerRecord);
	return class$;
}

$Class* CGLGraphicsConfig$CGLGCDisposerRecord::class$ = nullptr;

		} // opengl
	} // java2d
} // sun