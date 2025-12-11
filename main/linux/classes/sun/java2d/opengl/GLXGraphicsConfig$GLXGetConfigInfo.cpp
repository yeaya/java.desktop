#include <sun/java2d/opengl/GLXGraphicsConfig$GLXGetConfigInfo.h>

#include <sun/java2d/opengl/GLXGraphicsConfig.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GLXGraphicsConfig = ::sun::java2d::opengl::GLXGraphicsConfig;

namespace sun {
	namespace java2d {
		namespace opengl {

$FieldInfo _GLXGraphicsConfig$GLXGetConfigInfo_FieldInfo_[] = {
	{"screen", "I", nullptr, $PRIVATE, $field(GLXGraphicsConfig$GLXGetConfigInfo, screen)},
	{"visual", "I", nullptr, $PRIVATE, $field(GLXGraphicsConfig$GLXGetConfigInfo, visual)},
	{"cfginfo", "J", nullptr, $PRIVATE, $field(GLXGraphicsConfig$GLXGetConfigInfo, cfginfo)},
	{}
};

$MethodInfo _GLXGraphicsConfig$GLXGetConfigInfo_MethodInfo_[] = {
	{"<init>", "(II)V", nullptr, $PRIVATE, $method(static_cast<void(GLXGraphicsConfig$GLXGetConfigInfo::*)(int32_t,int32_t)>(&GLXGraphicsConfig$GLXGetConfigInfo::init$))},
	{"getConfigInfo", "()J", nullptr, $PUBLIC},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GLXGraphicsConfig$GLXGetConfigInfo_InnerClassesInfo_[] = {
	{"sun.java2d.opengl.GLXGraphicsConfig$GLXGetConfigInfo", "sun.java2d.opengl.GLXGraphicsConfig", "GLXGetConfigInfo", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _GLXGraphicsConfig$GLXGetConfigInfo_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.opengl.GLXGraphicsConfig$GLXGetConfigInfo",
	"java.lang.Object",
	"java.lang.Runnable",
	_GLXGraphicsConfig$GLXGetConfigInfo_FieldInfo_,
	_GLXGraphicsConfig$GLXGetConfigInfo_MethodInfo_,
	nullptr,
	nullptr,
	_GLXGraphicsConfig$GLXGetConfigInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.opengl.GLXGraphicsConfig"
};

$Object* allocate$GLXGraphicsConfig$GLXGetConfigInfo($Class* clazz) {
	return $of($alloc(GLXGraphicsConfig$GLXGetConfigInfo));
}

void GLXGraphicsConfig$GLXGetConfigInfo::init$(int32_t screen, int32_t visual) {
	this->screen = screen;
	this->visual = visual;
}

void GLXGraphicsConfig$GLXGetConfigInfo::run() {
	this->cfginfo = $GLXGraphicsConfig::getGLXConfigInfo(this->screen, this->visual);
}

int64_t GLXGraphicsConfig$GLXGetConfigInfo::getConfigInfo() {
	return this->cfginfo;
}

GLXGraphicsConfig$GLXGetConfigInfo::GLXGraphicsConfig$GLXGetConfigInfo() {
}

$Class* GLXGraphicsConfig$GLXGetConfigInfo::load$($String* name, bool initialize) {
	$loadClass(GLXGraphicsConfig$GLXGetConfigInfo, name, initialize, &_GLXGraphicsConfig$GLXGetConfigInfo_ClassInfo_, allocate$GLXGraphicsConfig$GLXGetConfigInfo);
	return class$;
}

$Class* GLXGraphicsConfig$GLXGetConfigInfo::class$ = nullptr;

		} // opengl
	} // java2d
} // sun