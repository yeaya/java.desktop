#include <sun/font/TextLineComponent.h>

#include <java/awt/Graphics2D.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/font/FontRenderContext.h>
#include <java/awt/font/GlyphJustificationInfo.h>
#include <java/awt/geom/AffineTransform.h>
#include <sun/font/CoreMetrics.h>
#include <jcpp.h>

#undef LEFT_TO_RIGHT
#undef RIGHT_TO_LEFT
#undef UNCHANGED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace font {

$FieldInfo _TextLineComponent_FieldInfo_[] = {
	{"LEFT_TO_RIGHT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TextLineComponent, LEFT_TO_RIGHT)},
	{"RIGHT_TO_LEFT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TextLineComponent, RIGHT_TO_LEFT)},
	{"UNCHANGED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TextLineComponent, UNCHANGED)},
	{}
};

$MethodInfo _TextLineComponent_MethodInfo_[] = {
	{"applyJustificationDeltas", "([FI[Z)Lsun/font/TextLineComponent;", nullptr, $PUBLIC | $ABSTRACT},
	{"caretAtOffsetIsValid", "(I)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"draw", "(Ljava/awt/Graphics2D;FF)V", nullptr, $PUBLIC | $ABSTRACT},
	{"getAdvance", "()F", nullptr, $PUBLIC | $ABSTRACT},
	{"getAdvanceBetween", "(II)F", nullptr, $PUBLIC | $ABSTRACT},
	{"getBaselineTransform", "()Ljava/awt/geom/AffineTransform;", nullptr, $PUBLIC | $ABSTRACT},
	{"getCharAdvance", "(I)F", nullptr, $PUBLIC | $ABSTRACT},
	{"getCharVisualBounds", "(I)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC | $ABSTRACT},
	{"getCharX", "(I)F", nullptr, $PUBLIC | $ABSTRACT},
	{"getCharY", "(I)F", nullptr, $PUBLIC | $ABSTRACT},
	{"getCoreMetrics", "()Lsun/font/CoreMetrics;", nullptr, $PUBLIC | $ABSTRACT},
	{"getItalicBounds", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC | $ABSTRACT},
	{"getJustificationInfos", "([Ljava/awt/font/GlyphJustificationInfo;III)V", nullptr, $PUBLIC | $ABSTRACT},
	{"getLineBreakIndex", "(IF)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getLogicalBounds", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNumCharacters", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getNumJustificationInfos", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getOutline", "(FF)Ljava/awt/Shape;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPixelBounds", "(Ljava/awt/font/FontRenderContext;FF)Ljava/awt/Rectangle;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSubset", "(III)Lsun/font/TextLineComponent;", nullptr, $PUBLIC | $ABSTRACT},
	{"getVisualBounds", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC | $ABSTRACT},
	{"isSimple", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _TextLineComponent_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.font.TextLineComponent",
	nullptr,
	nullptr,
	_TextLineComponent_FieldInfo_,
	_TextLineComponent_MethodInfo_
};

$Object* allocate$TextLineComponent($Class* clazz) {
	return $of($alloc(TextLineComponent));
}

$Class* TextLineComponent::load$($String* name, bool initialize) {
	$loadClass(TextLineComponent, name, initialize, &_TextLineComponent_ClassInfo_, allocate$TextLineComponent);
	return class$;
}

$Class* TextLineComponent::class$ = nullptr;

	} // font
} // sun