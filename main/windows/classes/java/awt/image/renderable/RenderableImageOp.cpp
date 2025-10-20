#include <java/awt/image/renderable/RenderableImageOp.h>

#include <java/awt/RenderingHints.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/image/RenderedImage.h>
#include <java/awt/image/renderable/ContextualRenderedImageFactory.h>
#include <java/awt/image/renderable/ParameterBlock.h>
#include <java/awt/image/renderable/RenderContext.h>
#include <java/awt/image/renderable/RenderableImage.h>
#include <java/lang/Array.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Vector.h>
#include <jcpp.h>

#undef CRIF

using $RenderingHints = ::java::awt::RenderingHints;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $RenderedImage = ::java::awt::image::RenderedImage;
using $ContextualRenderedImageFactory = ::java::awt::image::renderable::ContextualRenderedImageFactory;
using $ParameterBlock = ::java::awt::image::renderable::ParameterBlock;
using $RenderContext = ::java::awt::image::renderable::RenderContext;
using $RenderableImage = ::java::awt::image::renderable::RenderableImage;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;

namespace java {
	namespace awt {
		namespace image {
			namespace renderable {

$FieldInfo _RenderableImageOp_FieldInfo_[] = {
	{"paramBlock", "Ljava/awt/image/renderable/ParameterBlock;", nullptr, 0, $field(RenderableImageOp, paramBlock)},
	{"myCRIF", "Ljava/awt/image/renderable/ContextualRenderedImageFactory;", nullptr, 0, $field(RenderableImageOp, myCRIF)},
	{"boundingBox", "Ljava/awt/geom/Rectangle2D;", nullptr, 0, $field(RenderableImageOp, boundingBox)},
	{}
};

$MethodInfo _RenderableImageOp_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/image/renderable/ContextualRenderedImageFactory;Ljava/awt/image/renderable/ParameterBlock;)V", nullptr, $PUBLIC, $method(static_cast<void(RenderableImageOp::*)($ContextualRenderedImageFactory*,$ParameterBlock*)>(&RenderableImageOp::init$))},
	{"createDefaultRendering", "()Ljava/awt/image/RenderedImage;", nullptr, $PUBLIC},
	{"createRendering", "(Ljava/awt/image/renderable/RenderContext;)Ljava/awt/image/RenderedImage;", nullptr, $PUBLIC},
	{"createScaledRendering", "(IILjava/awt/RenderingHints;)Ljava/awt/image/RenderedImage;", nullptr, $PUBLIC},
	{"getHeight", "()F", nullptr, $PUBLIC},
	{"getMinX", "()F", nullptr, $PUBLIC},
	{"getMinY", "()F", nullptr, $PUBLIC},
	{"getParameterBlock", "()Ljava/awt/image/renderable/ParameterBlock;", nullptr, $PUBLIC},
	{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getPropertyNames", "()[Ljava/lang/String;", nullptr, $PUBLIC},
	{"getRenderableSources", "()Ljava/util/Vector;", "()Ljava/util/Vector<Ljava/awt/image/renderable/RenderableImage;>;", $PRIVATE, $method(static_cast<$Vector*(RenderableImageOp::*)()>(&RenderableImageOp::getRenderableSources))},
	{"getSources", "()Ljava/util/Vector;", "()Ljava/util/Vector<Ljava/awt/image/renderable/RenderableImage;>;", $PUBLIC},
	{"getWidth", "()F", nullptr, $PUBLIC},
	{"isDynamic", "()Z", nullptr, $PUBLIC},
	{"setParameterBlock", "(Ljava/awt/image/renderable/ParameterBlock;)Ljava/awt/image/renderable/ParameterBlock;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _RenderableImageOp_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.image.renderable.RenderableImageOp",
	"java.lang.Object",
	"java.awt.image.renderable.RenderableImage",
	_RenderableImageOp_FieldInfo_,
	_RenderableImageOp_MethodInfo_
};

$Object* allocate$RenderableImageOp($Class* clazz) {
	return $of($alloc(RenderableImageOp));
}

void RenderableImageOp::init$($ContextualRenderedImageFactory* CRIF, $ParameterBlock* paramBlock) {
	$set(this, myCRIF, CRIF);
	$set(this, paramBlock, $cast($ParameterBlock, $nc(paramBlock)->clone()));
}

$Vector* RenderableImageOp::getSources() {
	return getRenderableSources();
}

$Vector* RenderableImageOp::getRenderableSources() {
	$useLocalCurrentObjectStackCache();
	$var($Vector, sources, nullptr);
	if ($nc(this->paramBlock)->getNumSources() > 0) {
		$assign(sources, $new($Vector));
		int32_t i = 0;
		while (i < $nc(this->paramBlock)->getNumSources()) {
			$var($Object, o, $nc(this->paramBlock)->getSource(i));
			if ($instanceOf($RenderableImage, o)) {
				sources->add($cast($RenderableImage, o));
				++i;
			} else {
				break;
			}
		}
	}
	return sources;
}

$Object* RenderableImageOp::getProperty($String* name) {
	return $of($nc(this->myCRIF)->getProperty(this->paramBlock, name));
}

$StringArray* RenderableImageOp::getPropertyNames() {
	return $nc(this->myCRIF)->getPropertyNames();
}

bool RenderableImageOp::isDynamic() {
	return $nc(this->myCRIF)->isDynamic();
}

float RenderableImageOp::getWidth() {
	if (this->boundingBox == nullptr) {
		$set(this, boundingBox, $nc(this->myCRIF)->getBounds2D(this->paramBlock));
	}
	return (float)$nc(this->boundingBox)->getWidth();
}

float RenderableImageOp::getHeight() {
	if (this->boundingBox == nullptr) {
		$set(this, boundingBox, $nc(this->myCRIF)->getBounds2D(this->paramBlock));
	}
	return (float)$nc(this->boundingBox)->getHeight();
}

float RenderableImageOp::getMinX() {
	if (this->boundingBox == nullptr) {
		$set(this, boundingBox, $nc(this->myCRIF)->getBounds2D(this->paramBlock));
	}
	return (float)$nc(this->boundingBox)->getMinX();
}

float RenderableImageOp::getMinY() {
	if (this->boundingBox == nullptr) {
		$set(this, boundingBox, $nc(this->myCRIF)->getBounds2D(this->paramBlock));
	}
	return (float)$nc(this->boundingBox)->getMinY();
}

$ParameterBlock* RenderableImageOp::setParameterBlock($ParameterBlock* paramBlock) {
	$var($ParameterBlock, oldParamBlock, this->paramBlock);
	$set(this, paramBlock, $cast($ParameterBlock, $nc(paramBlock)->clone()));
	return oldParamBlock;
}

$ParameterBlock* RenderableImageOp::getParameterBlock() {
	return this->paramBlock;
}

$RenderedImage* RenderableImageOp::createScaledRendering(int32_t w, int32_t h, $RenderingHints* hints) {
	$useLocalCurrentObjectStackCache();
	double sx = (double)w / getWidth();
	double sy = (double)h / getHeight();
	if ($Math::abs(sx / sy - 1.0) < 0.01) {
		sx = sy;
	}
	$var($AffineTransform, usr2dev, $AffineTransform::getScaleInstance(sx, sy));
	$var($RenderContext, newRC, $new($RenderContext, usr2dev, hints));
	return createRendering(newRC);
}

$RenderedImage* RenderableImageOp::createDefaultRendering() {
	$useLocalCurrentObjectStackCache();
	$var($AffineTransform, usr2dev, $new($AffineTransform));
	$var($RenderContext, newRC, $new($RenderContext, usr2dev));
	return createRendering(newRC);
}

$RenderedImage* RenderableImageOp::createRendering($RenderContext* renderContext) {
	$useLocalCurrentObjectStackCache();
	$var($RenderedImage, image, nullptr);
	$var($RenderContext, rcOut, nullptr);
	$var($ParameterBlock, renderedParamBlock, $cast($ParameterBlock, $nc(this->paramBlock)->clone()));
	$var($Vector, sources, getRenderableSources());
	try {
		if (sources != nullptr) {
			$var($Vector, renderedSources, $new($Vector));
			for (int32_t i = 0; i < sources->size(); ++i) {
				$assign(rcOut, $nc(this->myCRIF)->mapRenderContext(i, renderContext, this->paramBlock, this));
				$var($RenderedImage, rdrdImage, $nc(($cast($RenderableImage, $(sources->elementAt(i)))))->createRendering(rcOut));
				if (rdrdImage == nullptr) {
					return nullptr;
				}
				renderedSources->addElement(rdrdImage);
			}
			if (renderedSources->size() > 0) {
				$nc(renderedParamBlock)->setSources(renderedSources);
			}
		}
		return $nc(this->myCRIF)->create(renderContext, renderedParamBlock);
	} catch ($ArrayIndexOutOfBoundsException&) {
		$var($ArrayIndexOutOfBoundsException, e, $catch());
		return nullptr;
	}
	$shouldNotReachHere();
}

RenderableImageOp::RenderableImageOp() {
}

$Class* RenderableImageOp::load$($String* name, bool initialize) {
	$loadClass(RenderableImageOp, name, initialize, &_RenderableImageOp_ClassInfo_, allocate$RenderableImageOp);
	return class$;
}

$Class* RenderableImageOp::class$ = nullptr;

			} // renderable
		} // image
	} // awt
} // java