#include <sun/java2d/pipe/BufferedContext.h>

#include <java/awt/AlphaComposite.h>
#include <java/awt/Color.h>
#include <java/awt/Composite.h>
#include <java/awt/Paint.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/lang/InternalError.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/WeakReference.h>
#include <sun/java2d/InvalidPipeException.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/loops/XORComposite.h>
#include <sun/java2d/pipe/BufferedPaints.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/pipe/RenderBuffer.h>
#include <sun/java2d/pipe/RenderQueue.h>
#include <sun/java2d/pipe/SpanIterator.h>
#include <sun/java2d/pipe/hw/AccelSurface.h>
#include <jcpp.h>

#undef NO_CONTEXT_FLAGS
#undef SRC_IS_OPAQUE
#undef USE_MASK

using $AlphaComposite = ::java::awt::AlphaComposite;
using $Color = ::java::awt::Color;
using $Composite = ::java::awt::Composite;
using $Paint = ::java::awt::Paint;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $WeakReference = ::java::lang::ref::WeakReference;
using $InvalidPipeException = ::sun::java2d::InvalidPipeException;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $XORComposite = ::sun::java2d::loops::XORComposite;
using $BufferedPaints = ::sun::java2d::pipe::BufferedPaints;
using $Region = ::sun::java2d::pipe::Region;
using $RenderBuffer = ::sun::java2d::pipe::RenderBuffer;
using $RenderQueue = ::sun::java2d::pipe::RenderQueue;
using $SpanIterator = ::sun::java2d::pipe::SpanIterator;
using $AccelSurface = ::sun::java2d::pipe::hw::AccelSurface;
using $BufferedContextProvider = ::sun::java2d::pipe::hw::BufferedContextProvider;

namespace sun {
	namespace java2d {
		namespace pipe {

$FieldInfo _BufferedContext_FieldInfo_[] = {
	{"NO_CONTEXT_FLAGS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedContext, NO_CONTEXT_FLAGS)},
	{"SRC_IS_OPAQUE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedContext, SRC_IS_OPAQUE)},
	{"USE_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedContext, USE_MASK)},
	{"rq", "Lsun/java2d/pipe/RenderQueue;", nullptr, $PRIVATE | $FINAL, $field(BufferedContext, rq)},
	{"buf", "Lsun/java2d/pipe/RenderBuffer;", nullptr, $PRIVATE | $FINAL, $field(BufferedContext, buf)},
	{"currentContext", "Lsun/java2d/pipe/BufferedContext;", nullptr, $PROTECTED | $STATIC, $staticField(BufferedContext, currentContext)},
	{"validSrcDataRef", "Ljava/lang/ref/Reference;", "Ljava/lang/ref/Reference<Lsun/java2d/pipe/hw/AccelSurface;>;", $PRIVATE, $field(BufferedContext, validSrcDataRef)},
	{"validDstDataRef", "Ljava/lang/ref/Reference;", "Ljava/lang/ref/Reference<Lsun/java2d/pipe/hw/AccelSurface;>;", $PRIVATE, $field(BufferedContext, validDstDataRef)},
	{"validClipRef", "Ljava/lang/ref/Reference;", "Ljava/lang/ref/Reference<Lsun/java2d/pipe/Region;>;", $PRIVATE, $field(BufferedContext, validClipRef)},
	{"validCompRef", "Ljava/lang/ref/Reference;", "Ljava/lang/ref/Reference<Ljava/awt/Composite;>;", $PRIVATE, $field(BufferedContext, validCompRef)},
	{"validPaintRef", "Ljava/lang/ref/Reference;", "Ljava/lang/ref/Reference<Ljava/awt/Paint;>;", $PRIVATE, $field(BufferedContext, validPaintRef)},
	{"isValidatedPaintJustAColor", "Z", nullptr, $PRIVATE, $field(BufferedContext, isValidatedPaintJustAColor)},
	{"validatedRGB", "I", nullptr, $PRIVATE, $field(BufferedContext, validatedRGB)},
	{"validatedFlags", "I", nullptr, $PRIVATE, $field(BufferedContext, validatedFlags)},
	{"xformInUse", "Z", nullptr, $PRIVATE, $field(BufferedContext, xformInUse)},
	{"transform", "Ljava/awt/geom/AffineTransform;", nullptr, $PRIVATE, $field(BufferedContext, transform)},
	{}
};

$MethodInfo _BufferedContext_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/pipe/RenderQueue;)V", nullptr, $PROTECTED, $method(static_cast<void(BufferedContext::*)($RenderQueue*)>(&BufferedContext::init$))},
	{"getRenderQueue", "()Lsun/java2d/pipe/RenderQueue;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$RenderQueue*(BufferedContext::*)()>(&BufferedContext::getRenderQueue))},
	{"invalidateContext", "()V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(BufferedContext::*)()>(&BufferedContext::invalidateContext))},
	{"resetClip", "()V", nullptr, $PRIVATE, $method(static_cast<void(BufferedContext::*)()>(&BufferedContext::resetClip))},
	{"resetComposite", "()V", nullptr, $PRIVATE, $method(static_cast<void(BufferedContext::*)()>(&BufferedContext::resetComposite))},
	{"resetTransform", "()V", nullptr, $PRIVATE, $method(static_cast<void(BufferedContext::*)()>(&BufferedContext::resetTransform))},
	{"setClip", "(Lsun/java2d/pipe/Region;)V", nullptr, $PRIVATE, $method(static_cast<void(BufferedContext::*)($Region*)>(&BufferedContext::setClip))},
	{"setComposite", "(Ljava/awt/Composite;I)V", nullptr, $PRIVATE, $method(static_cast<void(BufferedContext::*)($Composite*,int32_t)>(&BufferedContext::setComposite))},
	{"setSurfaces", "(Lsun/java2d/pipe/hw/AccelSurface;Lsun/java2d/pipe/hw/AccelSurface;)V", nullptr, $PRIVATE, $method(static_cast<void(BufferedContext::*)($AccelSurface*,$AccelSurface*)>(&BufferedContext::setSurfaces))},
	{"setTransform", "(Ljava/awt/geom/AffineTransform;)V", nullptr, $PRIVATE, $method(static_cast<void(BufferedContext::*)($AffineTransform*)>(&BufferedContext::setTransform))},
	{"validate", "(Lsun/java2d/pipe/hw/AccelSurface;Lsun/java2d/pipe/hw/AccelSurface;Lsun/java2d/pipe/Region;Ljava/awt/Composite;Ljava/awt/geom/AffineTransform;Ljava/awt/Paint;Lsun/java2d/SunGraphics2D;I)V", nullptr, $PRIVATE, $method(static_cast<void(BufferedContext::*)($AccelSurface*,$AccelSurface*,$Region*,$Composite*,$AffineTransform*,$Paint*,$SunGraphics2D*,int32_t)>(&BufferedContext::validate))},
	{"validateContext", "(Lsun/java2d/pipe/hw/AccelSurface;Lsun/java2d/pipe/hw/AccelSurface;Lsun/java2d/pipe/Region;Ljava/awt/Composite;Ljava/awt/geom/AffineTransform;Ljava/awt/Paint;Lsun/java2d/SunGraphics2D;I)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($AccelSurface*,$AccelSurface*,$Region*,$Composite*,$AffineTransform*,$Paint*,$SunGraphics2D*,int32_t)>(&BufferedContext::validateContext))},
	{"validateContext", "(Lsun/java2d/pipe/hw/AccelSurface;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($AccelSurface*)>(&BufferedContext::validateContext))},
	{}
};

$ClassInfo _BufferedContext_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.java2d.pipe.BufferedContext",
	"java.lang.Object",
	nullptr,
	_BufferedContext_FieldInfo_,
	_BufferedContext_MethodInfo_
};

$Object* allocate$BufferedContext($Class* clazz) {
	return $of($alloc(BufferedContext));
}

BufferedContext* BufferedContext::currentContext = nullptr;

void BufferedContext::init$($RenderQueue* rq) {
	$set(this, validSrcDataRef, $new($WeakReference, nullptr));
	$set(this, validDstDataRef, $new($WeakReference, nullptr));
	$set(this, validClipRef, $new($WeakReference, nullptr));
	$set(this, validCompRef, $new($WeakReference, nullptr));
	$set(this, validPaintRef, $new($WeakReference, nullptr));
	$set(this, rq, rq);
	$set(this, buf, $nc(rq)->getBuffer());
}

void BufferedContext::validateContext($AccelSurface* srcData, $AccelSurface* dstData, $Region* clip, $Composite* comp, $AffineTransform* xform, $Paint* paint, $SunGraphics2D* sg2d, int32_t flags) {
	$var(BufferedContext, context, $nc(dstData)->getContext());
	$nc(context)->validate(srcData, dstData, clip, comp, xform, paint, sg2d, flags);
}

void BufferedContext::validateContext($AccelSurface* surface) {
	validateContext(surface, surface, nullptr, nullptr, nullptr, nullptr, nullptr, BufferedContext::NO_CONTEXT_FLAGS);
}

void BufferedContext::validate($AccelSurface* srcData, $AccelSurface* dstData, $Region* clip, $Composite* comp, $AffineTransform* xform, $Paint* paint, $SunGraphics2D* sg2d, int32_t flags) {
	$useLocalCurrentObjectStackCache();
	bool updateClip = false;
	bool updatePaint = false;
	bool var$1 = !$nc(dstData)->isValid();
	bool var$0 = var$1 || $nc(dstData)->isSurfaceLost();
	if (var$0 || $nc(srcData)->isSurfaceLost()) {
		invalidateContext();
		$throwNew($InvalidPipeException, "bounds changed or surface lost"_s);
	}
	if ($instanceOf($Color, paint)) {
		int32_t newRGB = $nc(($cast($Color, paint)))->getRGB();
		if (this->isValidatedPaintJustAColor) {
			if (newRGB != this->validatedRGB) {
				this->validatedRGB = newRGB;
				updatePaint = true;
			}
		} else {
			this->validatedRGB = newRGB;
			updatePaint = true;
			this->isValidatedPaintJustAColor = true;
		}
	} else if (!$equals($nc(this->validPaintRef)->get(), paint)) {
		updatePaint = true;
		this->isValidatedPaintJustAColor = false;
	}
	$var($AccelSurface, validatedSrcData, $cast($AccelSurface, $nc(this->validSrcDataRef)->get()));
	$var($AccelSurface, validatedDstData, $cast($AccelSurface, $nc(this->validDstDataRef)->get()));
	if ((BufferedContext::currentContext != this) || (srcData != validatedSrcData) || (dstData != validatedDstData)) {
		if (dstData != validatedDstData) {
			updateClip = true;
		}
		if (paint == nullptr) {
			updatePaint = true;
		}
		setSurfaces(srcData, dstData);
		$assignStatic(BufferedContext::currentContext, this);
		$set(this, validSrcDataRef, $new($WeakReference, srcData));
		$set(this, validDstDataRef, $new($WeakReference, dstData));
	}
	$var($Region, validatedClip, $cast($Region, $nc(this->validClipRef)->get()));
	if ((clip != validatedClip) || updateClip) {
		if (clip != nullptr) {
			bool var$3 = updateClip || validatedClip == nullptr;
			if (!var$3) {
				bool var$4 = $nc(validatedClip)->isRectangular();
				var$3 = !(var$4 && clip->isRectangular());
			}
			bool var$2 = var$3;
			if (!var$2) {
				int32_t var$8 = clip->getLoX();
				bool var$7 = var$8 != $nc(validatedClip)->getLoX();
				if (!var$7) {
					int32_t var$9 = clip->getLoY();
					var$7 = var$9 != $nc(validatedClip)->getLoY();
				}
				bool var$6 = var$7;
				if (!var$6) {
					int32_t var$10 = clip->getHiX();
					var$6 = var$10 != $nc(validatedClip)->getHiX();
				}
				bool var$5 = var$6;
				if (!var$5) {
					int32_t var$11 = clip->getHiY();
					var$5 = var$11 != $nc(validatedClip)->getHiY();
				}
				var$2 = (var$5);
			}
			if (var$2) {
				setClip(clip);
			}
		} else {
			resetClip();
		}
		$set(this, validClipRef, $new($WeakReference, clip));
	}
	if ((!$equals(comp, $nc(this->validCompRef)->get())) || (flags != this->validatedFlags)) {
		if (comp != nullptr) {
			setComposite(comp, flags);
		} else {
			resetComposite();
		}
		updatePaint = true;
		$set(this, validCompRef, $new($WeakReference, comp));
		this->validatedFlags = flags;
	}
	bool txChanged = false;
	if (xform == nullptr) {
		if (this->xformInUse) {
			resetTransform();
			this->xformInUse = false;
			txChanged = true;
		} else if (sg2d != nullptr && !$nc(sg2d->transform$)->equals(this->transform)) {
			txChanged = true;
		}
		if (sg2d != nullptr && txChanged) {
			$set(this, transform, $new($AffineTransform, sg2d->transform$));
		}
	} else {
		setTransform(xform);
		this->xformInUse = true;
		txChanged = true;
	}
	if (!this->isValidatedPaintJustAColor && txChanged) {
		updatePaint = true;
	}
	if (updatePaint) {
		if (paint != nullptr) {
			$BufferedPaints::setPaint(this->rq, sg2d, paint, flags);
		} else {
			$BufferedPaints::resetPaint(this->rq);
		}
		$set(this, validPaintRef, $new($WeakReference, paint));
	}
	$nc(dstData)->markDirty();
}

void BufferedContext::setSurfaces($AccelSurface* srcData, $AccelSurface* dstData) {
	$nc(this->rq)->ensureCapacityAndAlignment(20, 4);
	$nc(this->buf)->putInt(70);
	$nc(this->buf)->putLong($nc(srcData)->getNativeOps());
	$nc(this->buf)->putLong($nc(dstData)->getNativeOps());
}

void BufferedContext::resetClip() {
	$nc(this->rq)->ensureCapacity(4);
	$nc(this->buf)->putInt(55);
}

void BufferedContext::setClip($Region* clip) {
	$useLocalCurrentObjectStackCache();
	if ($nc(clip)->isRectangular()) {
		$nc(this->rq)->ensureCapacity(20);
		$nc(this->buf)->putInt(51);
		$nc($($nc(this->buf)->putInt(clip->getLoX())))->putInt(clip->getLoY());
		$nc($($nc(this->buf)->putInt(clip->getHiX())))->putInt(clip->getHiY());
	} else {
		$nc(this->rq)->ensureCapacity(28);
		$nc(this->buf)->putInt(52);
		$nc(this->buf)->putInt(53);
		int32_t countIndex = $nc(this->buf)->position();
		$nc(this->buf)->putInt(0);
		int32_t spanCount = 0;
		int32_t remainingSpans = $nc(this->buf)->remaining() / 16;
		$var($ints, span, $new($ints, 4));
		$var($SpanIterator, si, clip->getSpanIterator());
		while ($nc(si)->nextSpan(span)) {
			if (remainingSpans == 0) {
				$nc(this->buf)->putInt(countIndex, spanCount);
				$nc(this->rq)->flushNow();
				$nc(this->buf)->putInt(53);
				countIndex = $nc(this->buf)->position();
				$nc(this->buf)->putInt(0);
				spanCount = 0;
				remainingSpans = $nc(this->buf)->remaining() / 16;
			}
			$nc(this->buf)->putInt(span->get(0));
			$nc(this->buf)->putInt(span->get(1));
			$nc(this->buf)->putInt(span->get(2));
			$nc(this->buf)->putInt(span->get(3));
			++spanCount;
			--remainingSpans;
		}
		$nc(this->buf)->putInt(countIndex, spanCount);
		$nc(this->rq)->ensureCapacity(4);
		$nc(this->buf)->putInt(54);
	}
}

void BufferedContext::resetComposite() {
	$nc(this->rq)->ensureCapacity(4);
	$nc(this->buf)->putInt(58);
}

void BufferedContext::setComposite($Composite* comp, int32_t flags) {
	if ($instanceOf($AlphaComposite, comp)) {
		$var($AlphaComposite, ac, $cast($AlphaComposite, comp));
		$nc(this->rq)->ensureCapacity(16);
		$nc(this->buf)->putInt(56);
		$nc(this->buf)->putInt($nc(ac)->getRule());
		$nc(this->buf)->putFloat($nc(ac)->getAlpha());
		$nc(this->buf)->putInt(flags);
	} else if ($instanceOf($XORComposite, comp)) {
		int32_t xorPixel = $nc(($cast($XORComposite, comp)))->getXorPixel();
		$nc(this->rq)->ensureCapacity(8);
		$nc(this->buf)->putInt(57);
		$nc(this->buf)->putInt(xorPixel);
	} else {
		$throwNew($InternalError, "not yet implemented"_s);
	}
}

void BufferedContext::resetTransform() {
	$nc(this->rq)->ensureCapacity(4);
	$nc(this->buf)->putInt(60);
}

void BufferedContext::setTransform($AffineTransform* xform) {
	$nc(this->rq)->ensureCapacityAndAlignment(52, 4);
	$nc(this->buf)->putInt(59);
	$nc(this->buf)->putDouble($nc(xform)->getScaleX());
	$nc(this->buf)->putDouble($nc(xform)->getShearY());
	$nc(this->buf)->putDouble($nc(xform)->getShearX());
	$nc(this->buf)->putDouble($nc(xform)->getScaleY());
	$nc(this->buf)->putDouble($nc(xform)->getTranslateX());
	$nc(this->buf)->putDouble($nc(xform)->getTranslateY());
}

void BufferedContext::invalidateContext() {
	resetTransform();
	resetComposite();
	resetClip();
	$BufferedPaints::resetPaint(this->rq);
	$nc(this->validSrcDataRef)->clear();
	$nc(this->validDstDataRef)->clear();
	$nc(this->validCompRef)->clear();
	$nc(this->validClipRef)->clear();
	$nc(this->validPaintRef)->clear();
	this->isValidatedPaintJustAColor = false;
	this->xformInUse = false;
}

$RenderQueue* BufferedContext::getRenderQueue() {
	return this->rq;
}

BufferedContext::BufferedContext() {
}

$Class* BufferedContext::load$($String* name, bool initialize) {
	$loadClass(BufferedContext, name, initialize, &_BufferedContext_ClassInfo_, allocate$BufferedContext);
	return class$;
}

$Class* BufferedContext::class$ = nullptr;

		} // pipe
	} // java2d
} // sun