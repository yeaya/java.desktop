#include <java/awt/font/GlyphJustificationInfo.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef PRIORITY_INTERCHAR
#undef PRIORITY_KASHIDA
#undef PRIORITY_NONE
#undef PRIORITY_WHITESPACE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace font {

$FieldInfo _GlyphJustificationInfo_FieldInfo_[] = {
	{"PRIORITY_KASHIDA", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GlyphJustificationInfo, PRIORITY_KASHIDA)},
	{"PRIORITY_WHITESPACE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GlyphJustificationInfo, PRIORITY_WHITESPACE)},
	{"PRIORITY_INTERCHAR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GlyphJustificationInfo, PRIORITY_INTERCHAR)},
	{"PRIORITY_NONE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GlyphJustificationInfo, PRIORITY_NONE)},
	{"weight", "F", nullptr, $PUBLIC | $FINAL, $field(GlyphJustificationInfo, weight)},
	{"growPriority", "I", nullptr, $PUBLIC | $FINAL, $field(GlyphJustificationInfo, growPriority)},
	{"growAbsorb", "Z", nullptr, $PUBLIC | $FINAL, $field(GlyphJustificationInfo, growAbsorb)},
	{"growLeftLimit", "F", nullptr, $PUBLIC | $FINAL, $field(GlyphJustificationInfo, growLeftLimit)},
	{"growRightLimit", "F", nullptr, $PUBLIC | $FINAL, $field(GlyphJustificationInfo, growRightLimit)},
	{"shrinkPriority", "I", nullptr, $PUBLIC | $FINAL, $field(GlyphJustificationInfo, shrinkPriority)},
	{"shrinkAbsorb", "Z", nullptr, $PUBLIC | $FINAL, $field(GlyphJustificationInfo, shrinkAbsorb)},
	{"shrinkLeftLimit", "F", nullptr, $PUBLIC | $FINAL, $field(GlyphJustificationInfo, shrinkLeftLimit)},
	{"shrinkRightLimit", "F", nullptr, $PUBLIC | $FINAL, $field(GlyphJustificationInfo, shrinkRightLimit)},
	{}
};

$MethodInfo _GlyphJustificationInfo_MethodInfo_[] = {
	{"<init>", "(FZIFFZIFF)V", nullptr, $PUBLIC, $method(static_cast<void(GlyphJustificationInfo::*)(float,bool,int32_t,float,float,bool,int32_t,float,float)>(&GlyphJustificationInfo::init$))},
	{"priorityIsValid", "(I)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(int32_t)>(&GlyphJustificationInfo::priorityIsValid))},
	{}
};

$ClassInfo _GlyphJustificationInfo_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.awt.font.GlyphJustificationInfo",
	"java.lang.Object",
	nullptr,
	_GlyphJustificationInfo_FieldInfo_,
	_GlyphJustificationInfo_MethodInfo_
};

$Object* allocate$GlyphJustificationInfo($Class* clazz) {
	return $of($alloc(GlyphJustificationInfo));
}

void GlyphJustificationInfo::init$(float weight, bool growAbsorb, int32_t growPriority, float growLeftLimit, float growRightLimit, bool shrinkAbsorb, int32_t shrinkPriority, float shrinkLeftLimit, float shrinkRightLimit) {
	if (weight < 0) {
		$throwNew($IllegalArgumentException, "weight is negative"_s);
	}
	if (!priorityIsValid(growPriority)) {
		$throwNew($IllegalArgumentException, "Invalid grow priority"_s);
	}
	if (growLeftLimit < 0) {
		$throwNew($IllegalArgumentException, "growLeftLimit is negative"_s);
	}
	if (growRightLimit < 0) {
		$throwNew($IllegalArgumentException, "growRightLimit is negative"_s);
	}
	if (!priorityIsValid(shrinkPriority)) {
		$throwNew($IllegalArgumentException, "Invalid shrink priority"_s);
	}
	if (shrinkLeftLimit < 0) {
		$throwNew($IllegalArgumentException, "shrinkLeftLimit is negative"_s);
	}
	if (shrinkRightLimit < 0) {
		$throwNew($IllegalArgumentException, "shrinkRightLimit is negative"_s);
	}
	this->weight = weight;
	this->growAbsorb = growAbsorb;
	this->growPriority = growPriority;
	this->growLeftLimit = growLeftLimit;
	this->growRightLimit = growRightLimit;
	this->shrinkAbsorb = shrinkAbsorb;
	this->shrinkPriority = shrinkPriority;
	this->shrinkLeftLimit = shrinkLeftLimit;
	this->shrinkRightLimit = shrinkRightLimit;
}

bool GlyphJustificationInfo::priorityIsValid(int32_t priority) {
	return priority >= GlyphJustificationInfo::PRIORITY_KASHIDA && priority <= GlyphJustificationInfo::PRIORITY_NONE;
}

GlyphJustificationInfo::GlyphJustificationInfo() {
}

$Class* GlyphJustificationInfo::load$($String* name, bool initialize) {
	$loadClass(GlyphJustificationInfo, name, initialize, &_GlyphJustificationInfo_ClassInfo_, allocate$GlyphJustificationInfo);
	return class$;
}

$Class* GlyphJustificationInfo::class$ = nullptr;

		} // font
	} // awt
} // java