#include <sun/java2d/opengl/WGLGraphicsConfig$1.h>

#include <sun/java2d/opengl/OGLContext.h>
#include <sun/java2d/opengl/WGLGraphicsConfig.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OGLContext = ::sun::java2d::opengl::OGLContext;

namespace sun {
	namespace java2d {
		namespace opengl {

$FieldInfo _WGLGraphicsConfig$1_FieldInfo_[] = {
	{"val$ids", "[Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(WGLGraphicsConfig$1, val$ids)},
	{}
};

$MethodInfo _WGLGraphicsConfig$1_MethodInfo_[] = {
	{"<init>", "([Ljava/lang/String;)V", "()V", 0, $method(static_cast<void(WGLGraphicsConfig$1::*)($StringArray*)>(&WGLGraphicsConfig$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WGLGraphicsConfig$1_EnclosingMethodInfo_ = {
	"sun.java2d.opengl.WGLGraphicsConfig",
	"getConfig",
	"(Lsun/awt/Win32GraphicsDevice;I)Lsun/java2d/opengl/WGLGraphicsConfig;"
};

$InnerClassInfo _WGLGraphicsConfig$1_InnerClassesInfo_[] = {
	{"sun.java2d.opengl.WGLGraphicsConfig$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WGLGraphicsConfig$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.opengl.WGLGraphicsConfig$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_WGLGraphicsConfig$1_FieldInfo_,
	_WGLGraphicsConfig$1_MethodInfo_,
	nullptr,
	&_WGLGraphicsConfig$1_EnclosingMethodInfo_,
	_WGLGraphicsConfig$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.opengl.WGLGraphicsConfig"
};

$Object* allocate$WGLGraphicsConfig$1($Class* clazz) {
	return $of($alloc(WGLGraphicsConfig$1));
}

void WGLGraphicsConfig$1::init$($StringArray* val$ids) {
	$set(this, val$ids, val$ids);
}

void WGLGraphicsConfig$1::run() {
	$nc(this->val$ids)->set(0, $($OGLContext::getOGLIdString()));
}

WGLGraphicsConfig$1::WGLGraphicsConfig$1() {
}

$Class* WGLGraphicsConfig$1::load$($String* name, bool initialize) {
	$loadClass(WGLGraphicsConfig$1, name, initialize, &_WGLGraphicsConfig$1_ClassInfo_, allocate$WGLGraphicsConfig$1);
	return class$;
}

$Class* WGLGraphicsConfig$1::class$ = nullptr;

		} // opengl
	} // java2d
} // sun