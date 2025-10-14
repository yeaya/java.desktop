#include <sun/java2d/opengl/OGLTextRenderer$Tracer.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/font/GlyphList.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/opengl/OGLTextRenderer.h>
#include <sun/java2d/pipe/BufferedTextPipe.h>
#include <sun/java2d/pipe/RenderQueue.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GlyphList = ::sun::font::GlyphList;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $OGLTextRenderer = ::sun::java2d::opengl::OGLTextRenderer;
using $BufferedTextPipe = ::sun::java2d::pipe::BufferedTextPipe;
using $RenderQueue = ::sun::java2d::pipe::RenderQueue;

namespace sun {
	namespace java2d {
		namespace opengl {

$MethodInfo _OGLTextRenderer$Tracer_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/opengl/OGLTextRenderer;)V", nullptr, 0, $method(static_cast<void(OGLTextRenderer$Tracer::*)($OGLTextRenderer*)>(&OGLTextRenderer$Tracer::init$))},
	{"drawGlyphList", "(Lsun/java2d/SunGraphics2D;Lsun/font/GlyphList;)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _OGLTextRenderer$Tracer_InnerClassesInfo_[] = {
	{"sun.java2d.opengl.OGLTextRenderer$Tracer", "sun.java2d.opengl.OGLTextRenderer", "Tracer", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _OGLTextRenderer$Tracer_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.opengl.OGLTextRenderer$Tracer",
	"sun.java2d.opengl.OGLTextRenderer",
	nullptr,
	nullptr,
	_OGLTextRenderer$Tracer_MethodInfo_,
	nullptr,
	nullptr,
	_OGLTextRenderer$Tracer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.opengl.OGLTextRenderer"
};

$Object* allocate$OGLTextRenderer$Tracer($Class* clazz) {
	return $of($alloc(OGLTextRenderer$Tracer));
}

void OGLTextRenderer$Tracer::init$($OGLTextRenderer* ogltr) {
	$OGLTextRenderer::init$($($OGLTextRenderer::access$000(ogltr)));
}

void OGLTextRenderer$Tracer::drawGlyphList($SunGraphics2D* sg2d, $GlyphList* gl) {
	$GraphicsPrimitive::tracePrimitive("OGLDrawGlyphs"_s);
	$OGLTextRenderer::drawGlyphList(sg2d, gl);
}

OGLTextRenderer$Tracer::OGLTextRenderer$Tracer() {
}

$Class* OGLTextRenderer$Tracer::load$($String* name, bool initialize) {
	$loadClass(OGLTextRenderer$Tracer, name, initialize, &_OGLTextRenderer$Tracer_ClassInfo_, allocate$OGLTextRenderer$Tracer);
	return class$;
}

$Class* OGLTextRenderer$Tracer::class$ = nullptr;

		} // opengl
	} // java2d
} // sun