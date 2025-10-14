#include <sun/java2d/opengl/OGLContext$OGLContextCaps.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/opengl/OGLContext.h>
#include <sun/java2d/pipe/hw/ContextCapabilities.h>
#include <jcpp.h>

#undef CAPS_DOUBLEBUFFERED
#undef CAPS_EXT_BIOP_SHADER
#undef CAPS_EXT_FBOBJECT
#undef CAPS_EXT_GRAD_SHADER
#undef CAPS_EXT_LCD_SHADER
#undef CAPS_EXT_TEXBARRIER
#undef CAPS_EXT_TEXRECT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OGLContext = ::sun::java2d::opengl::OGLContext;
using $ContextCapabilities = ::sun::java2d::pipe::hw::ContextCapabilities;

namespace sun {
	namespace java2d {
		namespace opengl {

$FieldInfo _OGLContext$OGLContextCaps_FieldInfo_[] = {
	{"CAPS_EXT_FBOBJECT", "I", nullptr, $STATIC | $FINAL, $constField(OGLContext$OGLContextCaps, CAPS_EXT_FBOBJECT)},
	{"CAPS_DOUBLEBUFFERED", "I", nullptr, $STATIC | $FINAL, $constField(OGLContext$OGLContextCaps, CAPS_DOUBLEBUFFERED)},
	{"CAPS_EXT_LCD_SHADER", "I", nullptr, $STATIC | $FINAL, $constField(OGLContext$OGLContextCaps, CAPS_EXT_LCD_SHADER)},
	{"CAPS_EXT_BIOP_SHADER", "I", nullptr, $STATIC | $FINAL, $constField(OGLContext$OGLContextCaps, CAPS_EXT_BIOP_SHADER)},
	{"CAPS_EXT_GRAD_SHADER", "I", nullptr, $STATIC | $FINAL, $constField(OGLContext$OGLContextCaps, CAPS_EXT_GRAD_SHADER)},
	{"CAPS_EXT_TEXRECT", "I", nullptr, $STATIC | $FINAL, $constField(OGLContext$OGLContextCaps, CAPS_EXT_TEXRECT)},
	{"CAPS_EXT_TEXBARRIER", "I", nullptr, $STATIC | $FINAL, $constField(OGLContext$OGLContextCaps, CAPS_EXT_TEXBARRIER)},
	{}
};

$MethodInfo _OGLContext$OGLContextCaps_MethodInfo_[] = {
	{"<init>", "(ILjava/lang/String;)V", nullptr, 0, $method(static_cast<void(OGLContext$OGLContextCaps::*)(int32_t,$String*)>(&OGLContext$OGLContextCaps::init$))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _OGLContext$OGLContextCaps_InnerClassesInfo_[] = {
	{"sun.java2d.opengl.OGLContext$OGLContextCaps", "sun.java2d.opengl.OGLContext", "OGLContextCaps", $STATIC},
	{}
};

$ClassInfo _OGLContext$OGLContextCaps_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.opengl.OGLContext$OGLContextCaps",
	"sun.java2d.pipe.hw.ContextCapabilities",
	nullptr,
	_OGLContext$OGLContextCaps_FieldInfo_,
	_OGLContext$OGLContextCaps_MethodInfo_,
	nullptr,
	nullptr,
	_OGLContext$OGLContextCaps_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.opengl.OGLContext"
};

$Object* allocate$OGLContext$OGLContextCaps($Class* clazz) {
	return $of($alloc(OGLContext$OGLContextCaps));
}

void OGLContext$OGLContextCaps::init$(int32_t caps, $String* adapterId) {
	$ContextCapabilities::init$(caps, adapterId);
}

$String* OGLContext$OGLContextCaps::toString() {
	$var($StringBuilder, sb, $new($StringBuilder, $($ContextCapabilities::toString())));
	if (((int32_t)(this->caps & (uint32_t)OGLContext$OGLContextCaps::CAPS_EXT_FBOBJECT)) != 0) {
		sb->append("CAPS_EXT_FBOBJECT|"_s);
	}
	if (((int32_t)(this->caps & (uint32_t)OGLContext$OGLContextCaps::CAPS_DOUBLEBUFFERED)) != 0) {
		sb->append("CAPS_DOUBLEBUFFERED|"_s);
	}
	if (((int32_t)(this->caps & (uint32_t)OGLContext$OGLContextCaps::CAPS_EXT_LCD_SHADER)) != 0) {
		sb->append("CAPS_EXT_LCD_SHADER|"_s);
	}
	if (((int32_t)(this->caps & (uint32_t)OGLContext$OGLContextCaps::CAPS_EXT_BIOP_SHADER)) != 0) {
		sb->append("CAPS_BIOP_SHADER|"_s);
	}
	if (((int32_t)(this->caps & (uint32_t)OGLContext$OGLContextCaps::CAPS_EXT_GRAD_SHADER)) != 0) {
		sb->append("CAPS_EXT_GRAD_SHADER|"_s);
	}
	if (((int32_t)(this->caps & (uint32_t)OGLContext$OGLContextCaps::CAPS_EXT_TEXRECT)) != 0) {
		sb->append("CAPS_EXT_TEXRECT|"_s);
	}
	if (((int32_t)(this->caps & (uint32_t)OGLContext$OGLContextCaps::CAPS_EXT_TEXBARRIER)) != 0) {
		sb->append("CAPS_EXT_TEXBARRIER|"_s);
	}
	return sb->toString();
}

OGLContext$OGLContextCaps::OGLContext$OGLContextCaps() {
}

$Class* OGLContext$OGLContextCaps::load$($String* name, bool initialize) {
	$loadClass(OGLContext$OGLContextCaps, name, initialize, &_OGLContext$OGLContextCaps_ClassInfo_, allocate$OGLContext$OGLContextCaps);
	return class$;
}

$Class* OGLContext$OGLContextCaps::class$ = nullptr;

		} // opengl
	} // java2d
} // sun