#include <sun/java2d/opengl/WGLGraphicsConfig$WGLGetConfigInfo.h>

#include <sun/java2d/opengl/WGLGraphicsConfig.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WGLGraphicsConfig = ::sun::java2d::opengl::WGLGraphicsConfig;

namespace sun {
	namespace java2d {
		namespace opengl {

$FieldInfo _WGLGraphicsConfig$WGLGetConfigInfo_FieldInfo_[] = {
	{"screen", "I", nullptr, $PRIVATE, $field(WGLGraphicsConfig$WGLGetConfigInfo, screen)},
	{"pixfmt", "I", nullptr, $PRIVATE, $field(WGLGraphicsConfig$WGLGetConfigInfo, pixfmt)},
	{"cfginfo", "J", nullptr, $PRIVATE, $field(WGLGraphicsConfig$WGLGetConfigInfo, cfginfo)},
	{}
};

$MethodInfo _WGLGraphicsConfig$WGLGetConfigInfo_MethodInfo_[] = {
	{"<init>", "(II)V", nullptr, $PRIVATE, $method(static_cast<void(WGLGraphicsConfig$WGLGetConfigInfo::*)(int32_t,int32_t)>(&WGLGraphicsConfig$WGLGetConfigInfo::init$))},
	{"getConfigInfo", "()J", nullptr, $PUBLIC},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WGLGraphicsConfig$WGLGetConfigInfo_InnerClassesInfo_[] = {
	{"sun.java2d.opengl.WGLGraphicsConfig$WGLGetConfigInfo", "sun.java2d.opengl.WGLGraphicsConfig", "WGLGetConfigInfo", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _WGLGraphicsConfig$WGLGetConfigInfo_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.opengl.WGLGraphicsConfig$WGLGetConfigInfo",
	"java.lang.Object",
	"java.lang.Runnable",
	_WGLGraphicsConfig$WGLGetConfigInfo_FieldInfo_,
	_WGLGraphicsConfig$WGLGetConfigInfo_MethodInfo_,
	nullptr,
	nullptr,
	_WGLGraphicsConfig$WGLGetConfigInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.opengl.WGLGraphicsConfig"
};

$Object* allocate$WGLGraphicsConfig$WGLGetConfigInfo($Class* clazz) {
	return $of($alloc(WGLGraphicsConfig$WGLGetConfigInfo));
}

void WGLGraphicsConfig$WGLGetConfigInfo::init$(int32_t screen, int32_t pixfmt) {
	this->screen = screen;
	this->pixfmt = pixfmt;
}

void WGLGraphicsConfig$WGLGetConfigInfo::run() {
	this->cfginfo = $WGLGraphicsConfig::getWGLConfigInfo(this->screen, this->pixfmt);
}

int64_t WGLGraphicsConfig$WGLGetConfigInfo::getConfigInfo() {
	return this->cfginfo;
}

WGLGraphicsConfig$WGLGetConfigInfo::WGLGraphicsConfig$WGLGetConfigInfo() {
}

$Class* WGLGraphicsConfig$WGLGetConfigInfo::load$($String* name, bool initialize) {
	$loadClass(WGLGraphicsConfig$WGLGetConfigInfo, name, initialize, &_WGLGraphicsConfig$WGLGetConfigInfo_ClassInfo_, allocate$WGLGraphicsConfig$WGLGetConfigInfo);
	return class$;
}

$Class* WGLGraphicsConfig$WGLGetConfigInfo::class$ = nullptr;

		} // opengl
	} // java2d
} // sun