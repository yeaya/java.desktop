#include <java/awt/font/GlyphVector.h>

#include <java/awt/Font.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/font/FontRenderContext.h>
#include <java/awt/font/GlyphJustificationInfo.h>
#include <java/awt/font/GlyphMetrics.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Point2D.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef FLAG_COMPLEX_GLYPHS
#undef FLAG_HAS_POSITION_ADJUSTMENTS
#undef FLAG_HAS_TRANSFORMS
#undef FLAG_MASK
#undef FLAG_RUN_RTL

using $Font = ::java::awt::Font;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $FontRenderContext = ::java::awt::font::FontRenderContext;
using $GlyphJustificationInfo = ::java::awt::font::GlyphJustificationInfo;
using $GlyphMetrics = ::java::awt::font::GlyphMetrics;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Point2D = ::java::awt::geom::Point2D;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace font {

$FieldInfo _GlyphVector_FieldInfo_[] = {
	{"FLAG_HAS_TRANSFORMS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GlyphVector, FLAG_HAS_TRANSFORMS)},
	{"FLAG_HAS_POSITION_ADJUSTMENTS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GlyphVector, FLAG_HAS_POSITION_ADJUSTMENTS)},
	{"FLAG_RUN_RTL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GlyphVector, FLAG_RUN_RTL)},
	{"FLAG_COMPLEX_GLYPHS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GlyphVector, FLAG_COMPLEX_GLYPHS)},
	{"FLAG_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GlyphVector, FLAG_MASK)},
	{}
};

$MethodInfo _GlyphVector_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(GlyphVector::*)()>(&GlyphVector::init$))},
	{"equals", "(Ljava/awt/font/GlyphVector;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getFont", "()Ljava/awt/Font;", nullptr, $PUBLIC | $ABSTRACT},
	{"getFontRenderContext", "()Ljava/awt/font/FontRenderContext;", nullptr, $PUBLIC | $ABSTRACT},
	{"getGlyphCharIndex", "(I)I", nullptr, $PUBLIC},
	{"getGlyphCharIndices", "(II[I)[I", nullptr, $PUBLIC},
	{"getGlyphCode", "(I)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getGlyphCodes", "(II[I)[I", nullptr, $PUBLIC | $ABSTRACT},
	{"getGlyphJustificationInfo", "(I)Ljava/awt/font/GlyphJustificationInfo;", nullptr, $PUBLIC | $ABSTRACT},
	{"getGlyphLogicalBounds", "(I)Ljava/awt/Shape;", nullptr, $PUBLIC | $ABSTRACT},
	{"getGlyphMetrics", "(I)Ljava/awt/font/GlyphMetrics;", nullptr, $PUBLIC | $ABSTRACT},
	{"getGlyphOutline", "(I)Ljava/awt/Shape;", nullptr, $PUBLIC | $ABSTRACT},
	{"getGlyphOutline", "(IFF)Ljava/awt/Shape;", nullptr, $PUBLIC},
	{"getGlyphPixelBounds", "(ILjava/awt/font/FontRenderContext;FF)Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getGlyphPosition", "(I)Ljava/awt/geom/Point2D;", nullptr, $PUBLIC | $ABSTRACT},
	{"getGlyphPositions", "(II[F)[F", nullptr, $PUBLIC | $ABSTRACT},
	{"getGlyphTransform", "(I)Ljava/awt/geom/AffineTransform;", nullptr, $PUBLIC | $ABSTRACT},
	{"getGlyphVisualBounds", "(I)Ljava/awt/Shape;", nullptr, $PUBLIC | $ABSTRACT},
	{"getLayoutFlags", "()I", nullptr, $PUBLIC},
	{"getLogicalBounds", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNumGlyphs", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getOutline", "()Ljava/awt/Shape;", nullptr, $PUBLIC | $ABSTRACT},
	{"getOutline", "(FF)Ljava/awt/Shape;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPixelBounds", "(Ljava/awt/font/FontRenderContext;FF)Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getVisualBounds", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC | $ABSTRACT},
	{"performDefaultLayout", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"setGlyphPosition", "(ILjava/awt/geom/Point2D;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setGlyphTransform", "(ILjava/awt/geom/AffineTransform;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _GlyphVector_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.awt.font.GlyphVector",
	"java.lang.Object",
	"java.lang.Cloneable",
	_GlyphVector_FieldInfo_,
	_GlyphVector_MethodInfo_
};

$Object* allocate$GlyphVector($Class* clazz) {
	return $of($alloc(GlyphVector));
}

void GlyphVector::init$() {
}

int32_t GlyphVector::getGlyphCharIndex(int32_t glyphIndex) {
	return glyphIndex;
}

$ints* GlyphVector::getGlyphCharIndices(int32_t beginGlyphIndex, int32_t numEntries, $ints* codeReturn$renamed) {
	$var($ints, codeReturn, codeReturn$renamed);
	if (codeReturn == nullptr) {
		$assign(codeReturn, $new($ints, numEntries));
	}
	{
		int32_t i = 0;
		int32_t j = beginGlyphIndex;
		for (; i < numEntries; ++i, ++j) {
			$nc(codeReturn)->set(i, getGlyphCharIndex(j));
		}
	}
	return codeReturn;
}

$Rectangle* GlyphVector::getPixelBounds($FontRenderContext* renderFRC, float x, float y) {
	$var($Rectangle2D, rect, getVisualBounds());
	int32_t l = $cast(int32_t, $Math::floor($nc(rect)->getX() + x));
	int32_t t = $cast(int32_t, $Math::floor($nc(rect)->getY() + y));
	int32_t r = $cast(int32_t, $Math::ceil($nc(rect)->getMaxX() + x));
	int32_t b = $cast(int32_t, $Math::ceil($nc(rect)->getMaxY() + y));
	return $new($Rectangle, l, t, r - l, b - t);
}

$Shape* GlyphVector::getGlyphOutline(int32_t glyphIndex, float x, float y) {
	$var($Shape, s, getGlyphOutline(glyphIndex));
	$var($AffineTransform, at, $AffineTransform::getTranslateInstance(x, y));
	return $nc(at)->createTransformedShape(s);
}

int32_t GlyphVector::getLayoutFlags() {
	return 0;
}

$Rectangle* GlyphVector::getGlyphPixelBounds(int32_t index, $FontRenderContext* renderFRC, float x, float y) {
	$var($Rectangle2D, rect, $nc($(getGlyphVisualBounds(index)))->getBounds2D());
	int32_t l = $cast(int32_t, $Math::floor($nc(rect)->getX() + x));
	int32_t t = $cast(int32_t, $Math::floor($nc(rect)->getY() + y));
	int32_t r = $cast(int32_t, $Math::ceil($nc(rect)->getMaxX() + x));
	int32_t b = $cast(int32_t, $Math::ceil($nc(rect)->getMaxY() + y));
	return $new($Rectangle, l, t, r - l, b - t);
}

GlyphVector::GlyphVector() {
}

$Class* GlyphVector::load$($String* name, bool initialize) {
	$loadClass(GlyphVector, name, initialize, &_GlyphVector_ClassInfo_, allocate$GlyphVector);
	return class$;
}

$Class* GlyphVector::class$ = nullptr;

		} // font
	} // awt
} // java