#include <sun/font/FontStrike.h>

#include <java/awt/Rectangle.h>
#include <java/awt/geom/GeneralPath.h>
#include <java/awt/geom/Point2D$Float.h>
#include <java/awt/geom/Rectangle2D$Float.h>
#include <sun/font/FontStrikeDesc.h>
#include <sun/font/FontStrikeDisposer.h>
#include <sun/font/StrikeMetrics.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace font {

$FieldInfo _FontStrike_FieldInfo_[] = {
	{"disposer", "Lsun/font/FontStrikeDisposer;", nullptr, $PROTECTED, $field(FontStrike, disposer)},
	{"desc", "Lsun/font/FontStrikeDesc;", nullptr, $PROTECTED, $field(FontStrike, desc)},
	{"strikeMetrics", "Lsun/font/StrikeMetrics;", nullptr, $PROTECTED, $field(FontStrike, strikeMetrics)},
	{"algoStyle", "Z", nullptr, $PROTECTED, $field(FontStrike, algoStyle)},
	{"boldness", "F", nullptr, $PROTECTED, $field(FontStrike, boldness)},
	{"italic", "F", nullptr, $PROTECTED, $field(FontStrike, italic)},
	{}
};

$MethodInfo _FontStrike_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FontStrike::*)()>(&FontStrike::init$))},
	{"getCharMetrics", "(C)Ljava/awt/geom/Point2D$Float;", nullptr, $ABSTRACT},
	{"getCodePointAdvance", "(I)F", nullptr, $ABSTRACT},
	{"getFontMetrics", "()Lsun/font/StrikeMetrics;", nullptr, $ABSTRACT},
	{"getGlyphAdvance", "(I)F", nullptr, $ABSTRACT},
	{"getGlyphImageBounds", "(ILjava/awt/geom/Point2D$Float;Ljava/awt/Rectangle;)V", nullptr, $ABSTRACT},
	{"getGlyphImagePtr", "(I)J", nullptr, $ABSTRACT},
	{"getGlyphImagePtrs", "([I[JI)V", nullptr, $ABSTRACT},
	{"getGlyphMetrics", "(I)Ljava/awt/geom/Point2D$Float;", nullptr, $ABSTRACT},
	{"getGlyphOutline", "(IFF)Ljava/awt/geom/GeneralPath;", nullptr, $ABSTRACT},
	{"getGlyphOutlineBounds", "(I)Ljava/awt/geom/Rectangle2D$Float;", nullptr, $ABSTRACT},
	{"getGlyphVectorOutline", "([IFF)Ljava/awt/geom/GeneralPath;", nullptr, $ABSTRACT},
	{"getNumGlyphs", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _FontStrike_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.font.FontStrike",
	"java.lang.Object",
	nullptr,
	_FontStrike_FieldInfo_,
	_FontStrike_MethodInfo_
};

$Object* allocate$FontStrike($Class* clazz) {
	return $of($alloc(FontStrike));
}

void FontStrike::init$() {
	this->algoStyle = false;
	this->boldness = 1.0f;
	this->italic = 0.0f;
}

FontStrike::FontStrike() {
}

$Class* FontStrike::load$($String* name, bool initialize) {
	$loadClass(FontStrike, name, initialize, &_FontStrike_ClassInfo_, allocate$FontStrike);
	return class$;
}

$Class* FontStrike::class$ = nullptr;

	} // font
} // sun