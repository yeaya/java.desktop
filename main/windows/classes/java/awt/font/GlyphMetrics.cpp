#include <java/awt/font/GlyphMetrics.h>

#include <java/awt/geom/Rectangle2D$Float.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef COMBINING
#undef COMPONENT
#undef LIGATURE
#undef STANDARD
#undef WHITESPACE

using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Rectangle2D$Float = ::java::awt::geom::Rectangle2D$Float;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace font {

$FieldInfo _GlyphMetrics_FieldInfo_[] = {
	{"horizontal", "Z", nullptr, $PRIVATE, $field(GlyphMetrics, horizontal)},
	{"advanceX", "F", nullptr, $PRIVATE, $field(GlyphMetrics, advanceX)},
	{"advanceY", "F", nullptr, $PRIVATE, $field(GlyphMetrics, advanceY)},
	{"bounds", "Ljava/awt/geom/Rectangle2D$Float;", nullptr, $PRIVATE, $field(GlyphMetrics, bounds)},
	{"glyphType", "B", nullptr, $PRIVATE, $field(GlyphMetrics, glyphType)},
	{"STANDARD", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GlyphMetrics, STANDARD)},
	{"LIGATURE", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GlyphMetrics, LIGATURE)},
	{"COMBINING", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GlyphMetrics, COMBINING)},
	{"COMPONENT", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GlyphMetrics, COMPONENT)},
	{"WHITESPACE", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GlyphMetrics, WHITESPACE)},
	{}
};

$MethodInfo _GlyphMetrics_MethodInfo_[] = {
	{"<init>", "(FLjava/awt/geom/Rectangle2D;B)V", nullptr, $PUBLIC, $method(static_cast<void(GlyphMetrics::*)(float,$Rectangle2D*,int8_t)>(&GlyphMetrics::init$))},
	{"<init>", "(ZFFLjava/awt/geom/Rectangle2D;B)V", nullptr, $PUBLIC, $method(static_cast<void(GlyphMetrics::*)(bool,float,float,$Rectangle2D*,int8_t)>(&GlyphMetrics::init$))},
	{"getAdvance", "()F", nullptr, $PUBLIC, $method(static_cast<float(GlyphMetrics::*)()>(&GlyphMetrics::getAdvance))},
	{"getAdvanceX", "()F", nullptr, $PUBLIC, $method(static_cast<float(GlyphMetrics::*)()>(&GlyphMetrics::getAdvanceX))},
	{"getAdvanceY", "()F", nullptr, $PUBLIC, $method(static_cast<float(GlyphMetrics::*)()>(&GlyphMetrics::getAdvanceY))},
	{"getBounds2D", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC, $method(static_cast<$Rectangle2D*(GlyphMetrics::*)()>(&GlyphMetrics::getBounds2D))},
	{"getLSB", "()F", nullptr, $PUBLIC, $method(static_cast<float(GlyphMetrics::*)()>(&GlyphMetrics::getLSB))},
	{"getRSB", "()F", nullptr, $PUBLIC, $method(static_cast<float(GlyphMetrics::*)()>(&GlyphMetrics::getRSB))},
	{"getType", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(GlyphMetrics::*)()>(&GlyphMetrics::getType))},
	{"isCombining", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(GlyphMetrics::*)()>(&GlyphMetrics::isCombining))},
	{"isComponent", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(GlyphMetrics::*)()>(&GlyphMetrics::isComponent))},
	{"isLigature", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(GlyphMetrics::*)()>(&GlyphMetrics::isLigature))},
	{"isStandard", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(GlyphMetrics::*)()>(&GlyphMetrics::isStandard))},
	{"isWhitespace", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(GlyphMetrics::*)()>(&GlyphMetrics::isWhitespace))},
	{}
};

$ClassInfo _GlyphMetrics_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.awt.font.GlyphMetrics",
	"java.lang.Object",
	nullptr,
	_GlyphMetrics_FieldInfo_,
	_GlyphMetrics_MethodInfo_
};

$Object* allocate$GlyphMetrics($Class* clazz) {
	return $of($alloc(GlyphMetrics));
}

void GlyphMetrics::init$(float advance, $Rectangle2D* bounds, int8_t glyphType) {
	this->horizontal = true;
	this->advanceX = advance;
	this->advanceY = (float)0;
	$set(this, bounds, $new($Rectangle2D$Float));
	$nc(this->bounds)->setRect(bounds);
	this->glyphType = glyphType;
}

void GlyphMetrics::init$(bool horizontal, float advanceX, float advanceY, $Rectangle2D* bounds, int8_t glyphType) {
	this->horizontal = horizontal;
	this->advanceX = advanceX;
	this->advanceY = advanceY;
	$set(this, bounds, $new($Rectangle2D$Float));
	$nc(this->bounds)->setRect(bounds);
	this->glyphType = glyphType;
}

float GlyphMetrics::getAdvance() {
	return this->horizontal ? this->advanceX : this->advanceY;
}

float GlyphMetrics::getAdvanceX() {
	return this->advanceX;
}

float GlyphMetrics::getAdvanceY() {
	return this->advanceY;
}

$Rectangle2D* GlyphMetrics::getBounds2D() {
	return $new($Rectangle2D$Float, $nc(this->bounds)->x, $nc(this->bounds)->y, $nc(this->bounds)->width, $nc(this->bounds)->height);
}

float GlyphMetrics::getLSB() {
	return this->horizontal ? $nc(this->bounds)->x : $nc(this->bounds)->y;
}

float GlyphMetrics::getRSB() {
	return this->horizontal ? this->advanceX - $nc(this->bounds)->x - $nc(this->bounds)->width : this->advanceY - $nc(this->bounds)->y - $nc(this->bounds)->height;
}

int32_t GlyphMetrics::getType() {
	return this->glyphType;
}

bool GlyphMetrics::isStandard() {
	return ((int32_t)(this->glyphType & (uint32_t)3)) == GlyphMetrics::STANDARD;
}

bool GlyphMetrics::isLigature() {
	return ((int32_t)(this->glyphType & (uint32_t)3)) == GlyphMetrics::LIGATURE;
}

bool GlyphMetrics::isCombining() {
	return ((int32_t)(this->glyphType & (uint32_t)3)) == GlyphMetrics::COMBINING;
}

bool GlyphMetrics::isComponent() {
	return ((int32_t)(this->glyphType & (uint32_t)3)) == GlyphMetrics::COMPONENT;
}

bool GlyphMetrics::isWhitespace() {
	return ((int32_t)(this->glyphType & (uint32_t)4)) == GlyphMetrics::WHITESPACE;
}

GlyphMetrics::GlyphMetrics() {
}

$Class* GlyphMetrics::load$($String* name, bool initialize) {
	$loadClass(GlyphMetrics, name, initialize, &_GlyphMetrics_ClassInfo_, allocate$GlyphMetrics);
	return class$;
}

$Class* GlyphMetrics::class$ = nullptr;

		} // font
	} // awt
} // java