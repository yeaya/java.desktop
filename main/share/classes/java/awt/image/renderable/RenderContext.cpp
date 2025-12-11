#include <java/awt/image/renderable/RenderContext.h>

#include <java/awt/RenderingHints.h>
#include <java/awt/Shape.h>
#include <java/awt/geom/AffineTransform.h>
#include <jcpp.h>

using $RenderingHints = ::java::awt::RenderingHints;
using $Shape = ::java::awt::Shape;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace image {
			namespace renderable {

$CompoundAttribute _RenderContext_MethodAnnotations_concetenateTransform6[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _RenderContext_MethodAnnotations_preConcetenateTransform11[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _RenderContext_FieldInfo_[] = {
	{"hints", "Ljava/awt/RenderingHints;", nullptr, 0, $field(RenderContext, hints)},
	{"usr2dev", "Ljava/awt/geom/AffineTransform;", nullptr, 0, $field(RenderContext, usr2dev)},
	{"aoi", "Ljava/awt/Shape;", nullptr, 0, $field(RenderContext, aoi)},
	{}
};

$MethodInfo _RenderContext_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/geom/AffineTransform;Ljava/awt/Shape;Ljava/awt/RenderingHints;)V", nullptr, $PUBLIC, $method(static_cast<void(RenderContext::*)($AffineTransform*,$Shape*,$RenderingHints*)>(&RenderContext::init$))},
	{"<init>", "(Ljava/awt/geom/AffineTransform;)V", nullptr, $PUBLIC, $method(static_cast<void(RenderContext::*)($AffineTransform*)>(&RenderContext::init$))},
	{"<init>", "(Ljava/awt/geom/AffineTransform;Ljava/awt/RenderingHints;)V", nullptr, $PUBLIC, $method(static_cast<void(RenderContext::*)($AffineTransform*,$RenderingHints*)>(&RenderContext::init$))},
	{"<init>", "(Ljava/awt/geom/AffineTransform;Ljava/awt/Shape;)V", nullptr, $PUBLIC, $method(static_cast<void(RenderContext::*)($AffineTransform*,$Shape*)>(&RenderContext::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"concatenateTransform", "(Ljava/awt/geom/AffineTransform;)V", nullptr, $PUBLIC},
	{"concetenateTransform", "(Ljava/awt/geom/AffineTransform;)V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _RenderContext_MethodAnnotations_concetenateTransform6},
	{"getAreaOfInterest", "()Ljava/awt/Shape;", nullptr, $PUBLIC},
	{"getRenderingHints", "()Ljava/awt/RenderingHints;", nullptr, $PUBLIC},
	{"getTransform", "()Ljava/awt/geom/AffineTransform;", nullptr, $PUBLIC},
	{"preConcatenateTransform", "(Ljava/awt/geom/AffineTransform;)V", nullptr, $PUBLIC},
	{"preConcetenateTransform", "(Ljava/awt/geom/AffineTransform;)V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _RenderContext_MethodAnnotations_preConcetenateTransform11},
	{"setAreaOfInterest", "(Ljava/awt/Shape;)V", nullptr, $PUBLIC},
	{"setRenderingHints", "(Ljava/awt/RenderingHints;)V", nullptr, $PUBLIC},
	{"setTransform", "(Ljava/awt/geom/AffineTransform;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _RenderContext_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.image.renderable.RenderContext",
	"java.lang.Object",
	"java.lang.Cloneable",
	_RenderContext_FieldInfo_,
	_RenderContext_MethodInfo_
};

$Object* allocate$RenderContext($Class* clazz) {
	return $of($alloc(RenderContext));
}

void RenderContext::init$($AffineTransform* usr2dev, $Shape* aoi, $RenderingHints* hints) {
	$set(this, hints, hints);
	$set(this, aoi, aoi);
	$set(this, usr2dev, $cast($AffineTransform, $nc(usr2dev)->clone()));
}

void RenderContext::init$($AffineTransform* usr2dev) {
	RenderContext::init$(usr2dev, nullptr, nullptr);
}

void RenderContext::init$($AffineTransform* usr2dev, $RenderingHints* hints) {
	RenderContext::init$(usr2dev, nullptr, hints);
}

void RenderContext::init$($AffineTransform* usr2dev, $Shape* aoi) {
	RenderContext::init$(usr2dev, aoi, nullptr);
}

$RenderingHints* RenderContext::getRenderingHints() {
	return this->hints;
}

void RenderContext::setRenderingHints($RenderingHints* hints) {
	$set(this, hints, hints);
}

void RenderContext::setTransform($AffineTransform* newTransform) {
	$set(this, usr2dev, $cast($AffineTransform, $nc(newTransform)->clone()));
}

void RenderContext::preConcatenateTransform($AffineTransform* modTransform) {
	this->preConcetenateTransform(modTransform);
}

void RenderContext::preConcetenateTransform($AffineTransform* modTransform) {
	$nc(this->usr2dev)->preConcatenate(modTransform);
}

void RenderContext::concatenateTransform($AffineTransform* modTransform) {
	this->concetenateTransform(modTransform);
}

void RenderContext::concetenateTransform($AffineTransform* modTransform) {
	$nc(this->usr2dev)->concatenate(modTransform);
}

$AffineTransform* RenderContext::getTransform() {
	return $cast($AffineTransform, $nc(this->usr2dev)->clone());
}

void RenderContext::setAreaOfInterest($Shape* newAoi) {
	$set(this, aoi, newAoi);
}

$Shape* RenderContext::getAreaOfInterest() {
	return this->aoi;
}

$Object* RenderContext::clone() {
	$var(RenderContext, newRenderContext, $new(RenderContext, this->usr2dev, this->aoi, this->hints));
	return $of(newRenderContext);
}

RenderContext::RenderContext() {
}

$Class* RenderContext::load$($String* name, bool initialize) {
	$loadClass(RenderContext, name, initialize, &_RenderContext_ClassInfo_, allocate$RenderContext);
	return class$;
}

$Class* RenderContext::class$ = nullptr;

			} // renderable
		} // image
	} // awt
} // java