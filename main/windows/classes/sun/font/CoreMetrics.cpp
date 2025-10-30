#include <sun/font/CoreMetrics.h>

#include <java/awt/font/GraphicAttribute.h>
#include <java/awt/font/LineMetrics.h>
#include <java/lang/ClassCastException.h>
#include <sun/font/FontLineMetrics.h>
#include <jcpp.h>

#undef BOTTOM_ALIGNMENT
#undef TOP_ALIGNMENT

using $GraphicAttribute = ::java::awt::font::GraphicAttribute;
using $LineMetrics = ::java::awt::font::LineMetrics;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;
using $FontLineMetrics = ::sun::font::FontLineMetrics;

namespace sun {
	namespace font {

$FieldInfo _CoreMetrics_FieldInfo_[] = {
	{"ascent", "F", nullptr, $PUBLIC | $FINAL, $field(CoreMetrics, ascent)},
	{"descent", "F", nullptr, $PUBLIC | $FINAL, $field(CoreMetrics, descent)},
	{"leading", "F", nullptr, $PUBLIC | $FINAL, $field(CoreMetrics, leading)},
	{"height", "F", nullptr, $PUBLIC | $FINAL, $field(CoreMetrics, height)},
	{"baselineIndex", "I", nullptr, $PUBLIC | $FINAL, $field(CoreMetrics, baselineIndex)},
	{"baselineOffsets", "[F", nullptr, $PUBLIC | $FINAL, $field(CoreMetrics, baselineOffsets)},
	{"strikethroughOffset", "F", nullptr, $PUBLIC | $FINAL, $field(CoreMetrics, strikethroughOffset)},
	{"strikethroughThickness", "F", nullptr, $PUBLIC | $FINAL, $field(CoreMetrics, strikethroughThickness)},
	{"underlineOffset", "F", nullptr, $PUBLIC | $FINAL, $field(CoreMetrics, underlineOffset)},
	{"underlineThickness", "F", nullptr, $PUBLIC | $FINAL, $field(CoreMetrics, underlineThickness)},
	{"ssOffset", "F", nullptr, $PUBLIC | $FINAL, $field(CoreMetrics, ssOffset)},
	{"italicAngle", "F", nullptr, $PUBLIC | $FINAL, $field(CoreMetrics, italicAngle)},
	{}
};

$MethodInfo _CoreMetrics_MethodInfo_[] = {
	{"<init>", "(FFFFI[FFFFFFF)V", nullptr, $PUBLIC, $method(static_cast<void(CoreMetrics::*)(float,float,float,float,int32_t,$floats*,float,float,float,float,float,float)>(&CoreMetrics::init$))},
	{"effectiveBaselineOffset", "([F)F", nullptr, $PUBLIC, $method(static_cast<float(CoreMetrics::*)($floats*)>(&CoreMetrics::effectiveBaselineOffset))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"equals", "(Lsun/font/CoreMetrics;)Z", nullptr, $PUBLIC, $method(static_cast<bool(CoreMetrics::*)(CoreMetrics*)>(&CoreMetrics::equals))},
	{"get", "(Ljava/awt/font/LineMetrics;)Lsun/font/CoreMetrics;", nullptr, $PUBLIC | $STATIC, $method(static_cast<CoreMetrics*(*)($LineMetrics*)>(&CoreMetrics::get))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CoreMetrics_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.font.CoreMetrics",
	"java.lang.Object",
	nullptr,
	_CoreMetrics_FieldInfo_,
	_CoreMetrics_MethodInfo_
};

$Object* allocate$CoreMetrics($Class* clazz) {
	return $of($alloc(CoreMetrics));
}

void CoreMetrics::init$(float ascent, float descent, float leading, float height, int32_t baselineIndex, $floats* baselineOffsets, float strikethroughOffset, float strikethroughThickness, float underlineOffset, float underlineThickness, float ssOffset, float italicAngle) {
	this->ascent = ascent;
	this->descent = descent;
	this->leading = leading;
	this->height = height;
	this->baselineIndex = baselineIndex;
	$set(this, baselineOffsets, baselineOffsets);
	this->strikethroughOffset = strikethroughOffset;
	this->strikethroughThickness = strikethroughThickness;
	this->underlineOffset = underlineOffset;
	this->underlineThickness = underlineThickness;
	this->ssOffset = ssOffset;
	this->italicAngle = italicAngle;
}

CoreMetrics* CoreMetrics::get($LineMetrics* lm) {
	return $nc(($cast($FontLineMetrics, lm)))->cm;
}

int32_t CoreMetrics::hashCode() {
	return $Float::floatToIntBits(this->ascent + this->ssOffset);
}

bool CoreMetrics::equals(Object$* rhs) {
	try {
		return equals($cast(CoreMetrics, rhs));
	} catch ($ClassCastException& e) {
		return false;
	}
	$shouldNotReachHere();
}

bool CoreMetrics::equals(CoreMetrics* rhs) {
	if (rhs != nullptr) {
		if (this == rhs) {
			return true;
		}
		return this->ascent == rhs->ascent && this->descent == rhs->descent && this->leading == rhs->leading && this->baselineIndex == rhs->baselineIndex && $nc(this->baselineOffsets)->get(0) == $nc(rhs->baselineOffsets)->get(0) && $nc(this->baselineOffsets)->get(1) == $nc(rhs->baselineOffsets)->get(1) && $nc(this->baselineOffsets)->get(2) == $nc(rhs->baselineOffsets)->get(2) && this->strikethroughOffset == rhs->strikethroughOffset && this->strikethroughThickness == rhs->strikethroughThickness && this->underlineOffset == rhs->underlineOffset && this->underlineThickness == rhs->underlineThickness && this->ssOffset == rhs->ssOffset && this->italicAngle == rhs->italicAngle;
	}
	return false;
}

float CoreMetrics::effectiveBaselineOffset($floats* fullOffsets) {
	switch (this->baselineIndex) {
	case $GraphicAttribute::TOP_ALIGNMENT:
		{
			return $nc(fullOffsets)->get(4) + this->ascent;
		}
	case $GraphicAttribute::BOTTOM_ALIGNMENT:
		{
			return $nc(fullOffsets)->get(3) - this->descent;
		}
	default:
		{
			return $nc(fullOffsets)->get(this->baselineIndex);
		}
	}
}

CoreMetrics::CoreMetrics() {
}

$Class* CoreMetrics::load$($String* name, bool initialize) {
	$loadClass(CoreMetrics, name, initialize, &_CoreMetrics_ClassInfo_, allocate$CoreMetrics);
	return class$;
}

$Class* CoreMetrics::class$ = nullptr;

	} // font
} // sun