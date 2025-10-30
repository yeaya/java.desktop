#include <sun/java2d/pipe/BufferedTextPipe.h>

#include <java/awt/AlphaComposite.h>
#include <java/awt/Composite.h>
#include <java/lang/Runnable.h>
#include <sun/font/GlyphList.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/pipe/BufferedTextPipe$1.h>
#include <sun/java2d/pipe/GlyphListPipe.h>
#include <sun/java2d/pipe/RenderBuffer.h>
#include <sun/java2d/pipe/RenderQueue.h>
#include <jcpp.h>

#undef BYTES_PER_GLYPH_IMAGE
#undef BYTES_PER_GLYPH_POSITION
#undef OFFSET_CONTRAST
#undef OFFSET_POSITIONS
#undef OFFSET_RGBORDER
#undef OFFSET_SUBPIXPOS

using $AlphaComposite = ::java::awt::AlphaComposite;
using $Composite = ::java::awt::Composite;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $GlyphList = ::sun::font::GlyphList;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $BufferedTextPipe$1 = ::sun::java2d::pipe::BufferedTextPipe$1;
using $GlyphListPipe = ::sun::java2d::pipe::GlyphListPipe;
using $RenderBuffer = ::sun::java2d::pipe::RenderBuffer;
using $RenderQueue = ::sun::java2d::pipe::RenderQueue;

namespace sun {
	namespace java2d {
		namespace pipe {

$FieldInfo _BufferedTextPipe_FieldInfo_[] = {
	{"BYTES_PER_GLYPH_IMAGE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BufferedTextPipe, BYTES_PER_GLYPH_IMAGE)},
	{"BYTES_PER_GLYPH_POSITION", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BufferedTextPipe, BYTES_PER_GLYPH_POSITION)},
	{"OFFSET_CONTRAST", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BufferedTextPipe, OFFSET_CONTRAST)},
	{"OFFSET_RGBORDER", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BufferedTextPipe, OFFSET_RGBORDER)},
	{"OFFSET_SUBPIXPOS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BufferedTextPipe, OFFSET_SUBPIXPOS)},
	{"OFFSET_POSITIONS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BufferedTextPipe, OFFSET_POSITIONS)},
	{"rq", "Lsun/java2d/pipe/RenderQueue;", nullptr, $PROTECTED | $FINAL, $field(BufferedTextPipe, rq)},
	{}
};

$MethodInfo _BufferedTextPipe_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/pipe/RenderQueue;)V", nullptr, $PROTECTED, $method(static_cast<void(BufferedTextPipe::*)($RenderQueue*)>(&BufferedTextPipe::init$))},
	{"createPackedParams", "(Lsun/java2d/SunGraphics2D;Lsun/font/GlyphList;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($SunGraphics2D*,$GlyphList*)>(&BufferedTextPipe::createPackedParams))},
	{"drawGlyphList", "(Lsun/java2d/SunGraphics2D;Lsun/font/GlyphList;)V", nullptr, $PROTECTED},
	{"drawGlyphList", "(IZZZIFF[J[F)V", nullptr, $PROTECTED | $ABSTRACT},
	{"enqueueGlyphList", "(Lsun/java2d/SunGraphics2D;Lsun/font/GlyphList;)V", nullptr, $PRIVATE, $method(static_cast<void(BufferedTextPipe::*)($SunGraphics2D*,$GlyphList*)>(&BufferedTextPipe::enqueueGlyphList))},
	{"validateContext", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Composite;)V", nullptr, $PROTECTED | $ABSTRACT},
	{}
};

$InnerClassInfo _BufferedTextPipe_InnerClassesInfo_[] = {
	{"sun.java2d.pipe.BufferedTextPipe$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BufferedTextPipe_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.java2d.pipe.BufferedTextPipe",
	"sun.java2d.pipe.GlyphListPipe",
	nullptr,
	_BufferedTextPipe_FieldInfo_,
	_BufferedTextPipe_MethodInfo_,
	nullptr,
	nullptr,
	_BufferedTextPipe_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.pipe.BufferedTextPipe$1"
};

$Object* allocate$BufferedTextPipe($Class* clazz) {
	return $of($alloc(BufferedTextPipe));
}

int32_t BufferedTextPipe::createPackedParams($SunGraphics2D* sg2d, $GlyphList* gl) {
	$init(BufferedTextPipe);
	int32_t var$1 = ($sl($nc(gl)->usePositions() ? 1 : 0, BufferedTextPipe::OFFSET_POSITIONS));
	int32_t var$0 = var$1 | ($sl($nc(gl)->isSubPixPos() ? 1 : 0, BufferedTextPipe::OFFSET_SUBPIXPOS));
	return ((var$0 | ($sl($nc(gl)->isRGBOrder() ? 1 : 0, BufferedTextPipe::OFFSET_RGBORDER))) | ($sl((int32_t)($nc(sg2d)->lcdTextContrast & (uint32_t)255), BufferedTextPipe::OFFSET_CONTRAST)));
}

void BufferedTextPipe::init$($RenderQueue* rq) {
	$GlyphListPipe::init$();
	$set(this, rq, rq);
}

void BufferedTextPipe::drawGlyphList($SunGraphics2D* sg2d, $GlyphList* gl) {
	$useLocalCurrentObjectStackCache();
	$var($Composite, comp, $nc(sg2d)->composite);
	$init($AlphaComposite);
	if ($equals(comp, $AlphaComposite::Src)) {
		$assign(comp, $AlphaComposite::SrcOver);
	}
	$nc(this->rq)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			validateContext(sg2d, comp);
			enqueueGlyphList(sg2d, gl);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->rq)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void BufferedTextPipe::enqueueGlyphList($SunGraphics2D* sg2d, $GlyphList* gl) {
	$useLocalCurrentObjectStackCache();
	$var($RenderBuffer, buf, $nc(this->rq)->getBuffer());
	int32_t totalGlyphs = $nc(gl)->getNumGlyphs();
	int32_t glyphBytesRequired = totalGlyphs * BufferedTextPipe::BYTES_PER_GLYPH_IMAGE;
	int32_t posBytesRequired = gl->usePositions() ? totalGlyphs * BufferedTextPipe::BYTES_PER_GLYPH_POSITION : 0;
	int32_t totalBytesRequired = 24 + glyphBytesRequired + posBytesRequired;
	$var($longs, images, gl->getImages());
	float glyphListOrigX = gl->getX() + 0.5f;
	float glyphListOrigY = gl->getY() + 0.5f;
	$nc(this->rq)->addReference($(gl->getStrike()));
	if (totalBytesRequired <= $nc(buf)->capacity()) {
		if (totalBytesRequired > buf->remaining()) {
			$nc(this->rq)->flushNow();
		}
		$nc(this->rq)->ensureAlignment(20);
		buf->putInt(40);
		buf->putInt(totalGlyphs);
		buf->putInt(createPackedParams(sg2d, gl));
		buf->putFloat(glyphListOrigX);
		buf->putFloat(glyphListOrigY);
		buf->put(images, 0, totalGlyphs);
		if (gl->usePositions()) {
			$var($floats, positions, gl->getPositions());
			buf->put(positions, 0, 2 * totalGlyphs);
		}
	} else {
		$nc(this->rq)->flushAndInvokeNow($$new($BufferedTextPipe$1, this, totalGlyphs, gl, sg2d, glyphListOrigX, glyphListOrigY, images));
	}
}

BufferedTextPipe::BufferedTextPipe() {
}

$Class* BufferedTextPipe::load$($String* name, bool initialize) {
	$loadClass(BufferedTextPipe, name, initialize, &_BufferedTextPipe_ClassInfo_, allocate$BufferedTextPipe);
	return class$;
}

$Class* BufferedTextPipe::class$ = nullptr;

		} // pipe
	} // java2d
} // sun