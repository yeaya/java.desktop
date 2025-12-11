#include <sun/java2d/opengl/OGLSurfaceData$1.h>

#include <sun/java2d/opengl/OGLSurfaceData.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OGLSurfaceData = ::sun::java2d::opengl::OGLSurfaceData;

namespace sun {
	namespace java2d {
		namespace opengl {

$FieldInfo _OGLSurfaceData$1_FieldInfo_[] = {
	{"this$0", "Lsun/java2d/opengl/OGLSurfaceData;", nullptr, $FINAL | $SYNTHETIC, $field(OGLSurfaceData$1, this$0)},
	{"val$height", "I", nullptr, $FINAL | $SYNTHETIC, $field(OGLSurfaceData$1, val$height)},
	{"val$width", "I", nullptr, $FINAL | $SYNTHETIC, $field(OGLSurfaceData$1, val$width)},
	{}
};

$MethodInfo _OGLSurfaceData$1_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/opengl/OGLSurfaceData;II)V", "()V", 0, $method(static_cast<void(OGLSurfaceData$1::*)($OGLSurfaceData*,int32_t,int32_t)>(&OGLSurfaceData$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _OGLSurfaceData$1_EnclosingMethodInfo_ = {
	"sun.java2d.opengl.OGLSurfaceData",
	"initSurface",
	"(II)V"
};

$InnerClassInfo _OGLSurfaceData$1_InnerClassesInfo_[] = {
	{"sun.java2d.opengl.OGLSurfaceData$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _OGLSurfaceData$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.opengl.OGLSurfaceData$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_OGLSurfaceData$1_FieldInfo_,
	_OGLSurfaceData$1_MethodInfo_,
	nullptr,
	&_OGLSurfaceData$1_EnclosingMethodInfo_,
	_OGLSurfaceData$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.opengl.OGLSurfaceData"
};

$Object* allocate$OGLSurfaceData$1($Class* clazz) {
	return $of($alloc(OGLSurfaceData$1));
}

void OGLSurfaceData$1::init$($OGLSurfaceData* this$0, int32_t val$width, int32_t val$height) {
	$set(this, this$0, this$0);
	this->val$width = val$width;
	this->val$height = val$height;
}

void OGLSurfaceData$1::run() {
	this->this$0->initSurfaceNow(this->val$width, this->val$height);
}

OGLSurfaceData$1::OGLSurfaceData$1() {
}

$Class* OGLSurfaceData$1::load$($String* name, bool initialize) {
	$loadClass(OGLSurfaceData$1, name, initialize, &_OGLSurfaceData$1_ClassInfo_, allocate$OGLSurfaceData$1);
	return class$;
}

$Class* OGLSurfaceData$1::class$ = nullptr;

		} // opengl
	} // java2d
} // sun