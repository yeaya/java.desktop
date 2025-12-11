#include <sun/font/FontLineMetrics.h>

#include <java/awt/font/FontRenderContext.h>
#include <java/awt/font/LineMetrics.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/InternalError.h>
#include <sun/font/CoreMetrics.h>
#include <jcpp.h>

using $FontRenderContext = ::java::awt::font::FontRenderContext;
using $LineMetrics = ::java::awt::font::LineMetrics;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $CoreMetrics = ::sun::font::CoreMetrics;

namespace sun {
	namespace font {

$FieldInfo _FontLineMetrics_FieldInfo_[] = {
	{"numchars", "I", nullptr, $PUBLIC, $field(FontLineMetrics, numchars)},
	{"cm", "Lsun/font/CoreMetrics;", nullptr, $PUBLIC | $FINAL, $field(FontLineMetrics, cm)},
	{"frc", "Ljava/awt/font/FontRenderContext;", nullptr, $PUBLIC | $FINAL, $field(FontLineMetrics, frc)},
	{}
};

$MethodInfo _FontLineMetrics_MethodInfo_[] = {
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(ILsun/font/CoreMetrics;Ljava/awt/font/FontRenderContext;)V", nullptr, $PUBLIC, $method(static_cast<void(FontLineMetrics::*)(int32_t,$CoreMetrics*,$FontRenderContext*)>(&FontLineMetrics::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getAscent", "()F", nullptr, $PUBLIC},
	{"getBaselineIndex", "()I", nullptr, $PUBLIC},
	{"getBaselineOffsets", "()[F", nullptr, $PUBLIC},
	{"getDescent", "()F", nullptr, $PUBLIC},
	{"getHeight", "()F", nullptr, $PUBLIC},
	{"getLeading", "()F", nullptr, $PUBLIC},
	{"getNumChars", "()I", nullptr, $PUBLIC},
	{"getStrikethroughOffset", "()F", nullptr, $PUBLIC},
	{"getStrikethroughThickness", "()F", nullptr, $PUBLIC},
	{"getUnderlineOffset", "()F", nullptr, $PUBLIC},
	{"getUnderlineThickness", "()F", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _FontLineMetrics_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.font.FontLineMetrics",
	"java.awt.font.LineMetrics",
	"java.lang.Cloneable",
	_FontLineMetrics_FieldInfo_,
	_FontLineMetrics_MethodInfo_
};

$Object* allocate$FontLineMetrics($Class* clazz) {
	return $of($alloc(FontLineMetrics));
}

$String* FontLineMetrics::toString() {
	 return this->$LineMetrics::toString();
}

void FontLineMetrics::finalize() {
	this->$LineMetrics::finalize();
}

void FontLineMetrics::init$(int32_t numchars, $CoreMetrics* cm, $FontRenderContext* frc) {
	$LineMetrics::init$();
	this->numchars = numchars;
	$set(this, cm, cm);
	$set(this, frc, frc);
}

int32_t FontLineMetrics::getNumChars() {
	return this->numchars;
}

float FontLineMetrics::getAscent() {
	return $nc(this->cm)->ascent;
}

float FontLineMetrics::getDescent() {
	return $nc(this->cm)->descent;
}

float FontLineMetrics::getLeading() {
	return $nc(this->cm)->leading;
}

float FontLineMetrics::getHeight() {
	return $nc(this->cm)->height;
}

int32_t FontLineMetrics::getBaselineIndex() {
	return $nc(this->cm)->baselineIndex;
}

$floats* FontLineMetrics::getBaselineOffsets() {
	return $cast($floats, $nc($nc(this->cm)->baselineOffsets)->clone());
}

float FontLineMetrics::getStrikethroughOffset() {
	return $nc(this->cm)->strikethroughOffset;
}

float FontLineMetrics::getStrikethroughThickness() {
	return $nc(this->cm)->strikethroughThickness;
}

float FontLineMetrics::getUnderlineOffset() {
	return $nc(this->cm)->underlineOffset;
}

float FontLineMetrics::getUnderlineThickness() {
	return $nc(this->cm)->underlineThickness;
}

int32_t FontLineMetrics::hashCode() {
	return $nc(this->cm)->hashCode();
}

bool FontLineMetrics::equals(Object$* rhs) {
	try {
		return $nc(this->cm)->equals($nc(($cast(FontLineMetrics, rhs)))->cm);
	} catch ($ClassCastException& e) {
		return false;
	}
	$shouldNotReachHere();
}

$Object* FontLineMetrics::clone() {
	try {
		return $of($LineMetrics::clone());
	} catch ($CloneNotSupportedException& e) {
		$throwNew($InternalError, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

FontLineMetrics::FontLineMetrics() {
}

$Class* FontLineMetrics::load$($String* name, bool initialize) {
	$loadClass(FontLineMetrics, name, initialize, &_FontLineMetrics_ClassInfo_, allocate$FontLineMetrics);
	return class$;
}

$Class* FontLineMetrics::class$ = nullptr;

	} // font
} // sun