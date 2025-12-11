#include <java/awt/font/ShapeGraphicAttribute.h>

#include <java/awt/Graphics2D.h>
#include <java/awt/Shape.h>
#include <java/awt/font/GraphicAttribute.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Rectangle2D$Float.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/Math.h>
#include <jcpp.h>

#undef FILL
#undef STROKE

using $Graphics2D = ::java::awt::Graphics2D;
using $Shape = ::java::awt::Shape;
using $GraphicAttribute = ::java::awt::font::GraphicAttribute;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Rectangle2D$Float = ::java::awt::geom::Rectangle2D$Float;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace font {

$FieldInfo _ShapeGraphicAttribute_FieldInfo_[] = {
	{"fShape", "Ljava/awt/Shape;", nullptr, $PRIVATE, $field(ShapeGraphicAttribute, fShape)},
	{"fStroke", "Z", nullptr, $PRIVATE, $field(ShapeGraphicAttribute, fStroke)},
	{"STROKE", "Z", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ShapeGraphicAttribute, STROKE)},
	{"FILL", "Z", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ShapeGraphicAttribute, FILL)},
	{"fShapeBounds", "Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $field(ShapeGraphicAttribute, fShapeBounds)},
	{}
};

$MethodInfo _ShapeGraphicAttribute_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Shape;IZ)V", nullptr, $PUBLIC, $method(static_cast<void(ShapeGraphicAttribute::*)($Shape*,int32_t,bool)>(&ShapeGraphicAttribute::init$))},
	{"draw", "(Ljava/awt/Graphics2D;FF)V", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"equals", "(Ljava/awt/font/ShapeGraphicAttribute;)Z", nullptr, $PUBLIC, $method(static_cast<bool(ShapeGraphicAttribute::*)(ShapeGraphicAttribute*)>(&ShapeGraphicAttribute::equals))},
	{"getAdvance", "()F", nullptr, $PUBLIC},
	{"getAscent", "()F", nullptr, $PUBLIC},
	{"getBounds", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC},
	{"getDescent", "()F", nullptr, $PUBLIC},
	{"getOutline", "(Ljava/awt/geom/AffineTransform;)Ljava/awt/Shape;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ShapeGraphicAttribute_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.awt.font.ShapeGraphicAttribute",
	"java.awt.font.GraphicAttribute",
	nullptr,
	_ShapeGraphicAttribute_FieldInfo_,
	_ShapeGraphicAttribute_MethodInfo_
};

$Object* allocate$ShapeGraphicAttribute($Class* clazz) {
	return $of($alloc(ShapeGraphicAttribute));
}

void ShapeGraphicAttribute::init$($Shape* shape, int32_t alignment, bool stroke) {
	$GraphicAttribute::init$(alignment);
	$set(this, fShape, shape);
	this->fStroke = stroke;
	$set(this, fShapeBounds, $nc(this->fShape)->getBounds2D());
}

float ShapeGraphicAttribute::getAscent() {
	return (float)$Math::max((double)0, -$nc(this->fShapeBounds)->getMinY());
}

float ShapeGraphicAttribute::getDescent() {
	return (float)$Math::max((double)0, $nc(this->fShapeBounds)->getMaxY());
}

float ShapeGraphicAttribute::getAdvance() {
	return (float)$Math::max((double)0, $nc(this->fShapeBounds)->getMaxX());
}

void ShapeGraphicAttribute::draw($Graphics2D* graphics, float x, float y) {
	$nc(graphics)->translate($cast(int32_t, x), $cast(int32_t, y));
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (this->fStroke == ShapeGraphicAttribute::STROKE) {
				graphics->draw(this->fShape);
			} else {
				graphics->fill(this->fShape);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			graphics->translate(-$cast(int32_t, x), -$cast(int32_t, y));
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$Rectangle2D* ShapeGraphicAttribute::getBounds() {
	$var($Rectangle2D$Float, bounds, $new($Rectangle2D$Float));
	bounds->setRect(this->fShapeBounds);
	if (this->fStroke == ShapeGraphicAttribute::STROKE) {
		++bounds->width;
		++bounds->height;
	}
	return bounds;
}

$Shape* ShapeGraphicAttribute::getOutline($AffineTransform* tx) {
	return tx == nullptr ? this->fShape : $nc(tx)->createTransformedShape(this->fShape);
}

int32_t ShapeGraphicAttribute::hashCode() {
	return $nc($of(this->fShape))->hashCode();
}

bool ShapeGraphicAttribute::equals(Object$* rhs) {
	try {
		return equals($cast(ShapeGraphicAttribute, rhs));
	} catch ($ClassCastException& e) {
		return false;
	}
	$shouldNotReachHere();
}

bool ShapeGraphicAttribute::equals(ShapeGraphicAttribute* rhs) {
	if (rhs == nullptr) {
		return false;
	}
	if (this == rhs) {
		return true;
	}
	if (this->fStroke != $nc(rhs)->fStroke) {
		return false;
	}
	int32_t var$0 = getAlignment();
	if (var$0 != $nc(rhs)->getAlignment()) {
		return false;
	}
	if (!$nc($of(this->fShape))->equals($nc(rhs)->fShape)) {
		return false;
	}
	return true;
}

ShapeGraphicAttribute::ShapeGraphicAttribute() {
}

$Class* ShapeGraphicAttribute::load$($String* name, bool initialize) {
	$loadClass(ShapeGraphicAttribute, name, initialize, &_ShapeGraphicAttribute_ClassInfo_, allocate$ShapeGraphicAttribute);
	return class$;
}

$Class* ShapeGraphicAttribute::class$ = nullptr;

		} // font
	} // awt
} // java