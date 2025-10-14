#include <sun/font/ExtendedTextLabel.h>

#include <java/awt/geom/Rectangle2D.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/font/TextLabel.h>
#include <jcpp.h>

using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TextLabel = ::sun::font::TextLabel;
using $TextLineComponent = ::sun::font::TextLineComponent;

namespace sun {
	namespace font {

$MethodInfo _ExtendedTextLabel_MethodInfo_[] = {
	{"applyJustificationDeltas", "([FI[Z)Lsun/font/TextLineComponent;", nullptr, $PUBLIC | $ABSTRACT},
	{"caretAtOffsetIsValid", "(I)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*draw", "(Ljava/awt/Graphics2D;FF)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"getAdvanceBetween", "(II)F", nullptr, $PUBLIC | $ABSTRACT},
	{"getCharAdvance", "(I)F", nullptr, $PUBLIC | $ABSTRACT},
	{"getCharX", "(I)F", nullptr, $PUBLIC | $ABSTRACT},
	{"getCharY", "(I)F", nullptr, $PUBLIC | $ABSTRACT},
	{"getCoreMetrics", "()Lsun/font/CoreMetrics;", nullptr, $PUBLIC | $ABSTRACT},
	{"*getItalicBounds", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC},
	{"getJustificationInfos", "([Ljava/awt/font/GlyphJustificationInfo;III)V", nullptr, $PUBLIC | $ABSTRACT},
	{"getLineBreakIndex", "(IF)I", nullptr, $PUBLIC | $ABSTRACT},
	{"*getLogicalBounds", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC},
	{"getNumCharacters", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getNumJustificationInfos", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"*getOutline", "(FF)Ljava/awt/Shape;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSubset", "(III)Lsun/font/TextLineComponent;", nullptr, $PUBLIC | $ABSTRACT},
	{"*getVisualBounds", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExtendedTextLabel::*)()>(&ExtendedTextLabel::init$))},
	{"getCharVisualBounds", "(IFF)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC | $ABSTRACT},
	{"getCharVisualBounds", "(I)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC},
	{"logicalToVisual", "(I)I", nullptr, $PUBLIC | $ABSTRACT},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"visualToLogical", "(I)I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ExtendedTextLabel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.font.ExtendedTextLabel",
	"sun.font.TextLabel",
	"sun.font.TextLineComponent",
	nullptr,
	_ExtendedTextLabel_MethodInfo_
};

$Object* allocate$ExtendedTextLabel($Class* clazz) {
	return $of($alloc(ExtendedTextLabel));
}

$Rectangle2D* ExtendedTextLabel::getVisualBounds() {
	 return this->$TextLabel::getVisualBounds();
}

$Rectangle2D* ExtendedTextLabel::getLogicalBounds() {
	 return this->$TextLabel::getLogicalBounds();
}

$Rectangle2D* ExtendedTextLabel::getItalicBounds() {
	 return this->$TextLabel::getItalicBounds();
}

int32_t ExtendedTextLabel::hashCode() {
	 return this->$TextLabel::hashCode();
}

bool ExtendedTextLabel::equals(Object$* arg0) {
	 return this->$TextLabel::equals(arg0);
}

$Object* ExtendedTextLabel::clone() {
	 return this->$TextLabel::clone();
}

$String* ExtendedTextLabel::toString() {
	 return this->$TextLabel::toString();
}

void ExtendedTextLabel::finalize() {
	this->$TextLabel::finalize();
}

void ExtendedTextLabel::init$() {
	$TextLabel::init$();
}

$Rectangle2D* ExtendedTextLabel::getCharVisualBounds(int32_t logicalIndex) {
	return getCharVisualBounds(logicalIndex, (float)0, (float)0);
}

ExtendedTextLabel::ExtendedTextLabel() {
}

$Class* ExtendedTextLabel::load$($String* name, bool initialize) {
	$loadClass(ExtendedTextLabel, name, initialize, &_ExtendedTextLabel_ClassInfo_, allocate$ExtendedTextLabel);
	return class$;
}

$Class* ExtendedTextLabel::class$ = nullptr;

	} // font
} // sun