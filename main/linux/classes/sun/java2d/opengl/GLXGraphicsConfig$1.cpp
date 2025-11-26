#include <sun/java2d/opengl/GLXGraphicsConfig$1.h>

#include <sun/java2d/opengl/GLXGraphicsConfig.h>
#include <sun/java2d/opengl/OGLContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $GLXGraphicsConfig = ::sun::java2d::opengl::GLXGraphicsConfig;
using $OGLContext = ::sun::java2d::opengl::OGLContext;

namespace sun {
	namespace java2d {
		namespace opengl {

$FieldInfo _GLXGraphicsConfig$1_FieldInfo_[] = {
	{"val$ids", "[Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(GLXGraphicsConfig$1, val$ids)},
	{}
};

$MethodInfo _GLXGraphicsConfig$1_MethodInfo_[] = {
	{"<init>", "([Ljava/lang/String;)V", "()V", 0, $method(static_cast<void(GLXGraphicsConfig$1::*)($StringArray*)>(&GLXGraphicsConfig$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _GLXGraphicsConfig$1_EnclosingMethodInfo_ = {
	"sun.java2d.opengl.GLXGraphicsConfig",
	"getConfig",
	"(Lsun/awt/X11GraphicsDevice;I)Lsun/java2d/opengl/GLXGraphicsConfig;"
};

$InnerClassInfo _GLXGraphicsConfig$1_InnerClassesInfo_[] = {
	{"sun.java2d.opengl.GLXGraphicsConfig$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _GLXGraphicsConfig$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.opengl.GLXGraphicsConfig$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_GLXGraphicsConfig$1_FieldInfo_,
	_GLXGraphicsConfig$1_MethodInfo_,
	nullptr,
	&_GLXGraphicsConfig$1_EnclosingMethodInfo_,
	_GLXGraphicsConfig$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.opengl.GLXGraphicsConfig"
};

$Object* allocate$GLXGraphicsConfig$1($Class* clazz) {
	return $of($alloc(GLXGraphicsConfig$1));
}

void GLXGraphicsConfig$1::init$($StringArray* val$ids) {
	$set(this, val$ids, val$ids);
}

void GLXGraphicsConfig$1::run() {
	$nc(this->val$ids)->set(0, $($OGLContext::getOGLIdString()));
}

GLXGraphicsConfig$1::GLXGraphicsConfig$1() {
}

$Class* GLXGraphicsConfig$1::load$($String* name, bool initialize) {
	$loadClass(GLXGraphicsConfig$1, name, initialize, &_GLXGraphicsConfig$1_ClassInfo_, allocate$GLXGraphicsConfig$1);
	return class$;
}

$Class* GLXGraphicsConfig$1::class$ = nullptr;

		} // opengl
	} // java2d
} // sun