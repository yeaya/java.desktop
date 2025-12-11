#include <apple/laf/JRSUIConstants$Hit.h>

#include <apple/laf/JRSUIConstants.h>
#include <jcpp.h>

#undef HIT
#undef NONE
#undef UNKNOWN

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace apple {
	namespace laf {

$FieldInfo _JRSUIConstants$Hit_FieldInfo_[] = {
	{"_unknown", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Hit, _unknown)},
	{"UNKNOWN", "Lapple/laf/JRSUIConstants$Hit;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Hit, UNKNOWN)},
	{"_none", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Hit, _none)},
	{"NONE", "Lapple/laf/JRSUIConstants$Hit;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Hit, NONE)},
	{"_hit", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Hit, _hit)},
	{"HIT", "Lapple/laf/JRSUIConstants$Hit;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Hit, HIT)},
	{"hit", "I", nullptr, $FINAL, $field(JRSUIConstants$Hit, hit)},
	{}
};

$MethodInfo _JRSUIConstants$Hit_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(JRSUIConstants$Hit::*)(int32_t)>(&JRSUIConstants$Hit::init$))},
	{"getConstantName", "(Lapple/laf/JRSUIConstants$Hit;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(JRSUIConstants$Hit::*)(JRSUIConstants$Hit*)>(&JRSUIConstants$Hit::getConstantName))},
	{"isHit", "()Z", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JRSUIConstants$Hit_InnerClassesInfo_[] = {
	{"apple.laf.JRSUIConstants$Hit", "apple.laf.JRSUIConstants", "Hit", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _JRSUIConstants$Hit_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"apple.laf.JRSUIConstants$Hit",
	"java.lang.Object",
	nullptr,
	_JRSUIConstants$Hit_FieldInfo_,
	_JRSUIConstants$Hit_MethodInfo_,
	nullptr,
	nullptr,
	_JRSUIConstants$Hit_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"apple.laf.JRSUIConstants"
};

$Object* allocate$JRSUIConstants$Hit($Class* clazz) {
	return $of($alloc(JRSUIConstants$Hit));
}

JRSUIConstants$Hit* JRSUIConstants$Hit::UNKNOWN = nullptr;
JRSUIConstants$Hit* JRSUIConstants$Hit::NONE = nullptr;
JRSUIConstants$Hit* JRSUIConstants$Hit::HIT = nullptr;

void JRSUIConstants$Hit::init$(int32_t hit) {
	this->hit = hit;
}

bool JRSUIConstants$Hit::isHit() {
	return this->hit > 0;
}

$String* JRSUIConstants$Hit::getConstantName(JRSUIConstants$Hit* hit) {
	if (hit == JRSUIConstants$Hit::UNKNOWN) {
		return "UNKNOWN"_s;
	} else if (hit == JRSUIConstants$Hit::NONE) {
		return "NONE"_s;
	} else if (hit == JRSUIConstants$Hit::HIT) {
		return "HIT"_s;
	}
	return $of(this)->getClass()->getSimpleName();
}

$String* JRSUIConstants$Hit::toString() {
	return getConstantName(this);
}

void clinit$JRSUIConstants$Hit($Class* class$) {
	$assignStatic(JRSUIConstants$Hit::UNKNOWN, $new(JRSUIConstants$Hit, JRSUIConstants$Hit::_unknown));
	$assignStatic(JRSUIConstants$Hit::NONE, $new(JRSUIConstants$Hit, JRSUIConstants$Hit::_none));
	$assignStatic(JRSUIConstants$Hit::HIT, $new(JRSUIConstants$Hit, JRSUIConstants$Hit::_hit));
}

JRSUIConstants$Hit::JRSUIConstants$Hit() {
}

$Class* JRSUIConstants$Hit::load$($String* name, bool initialize) {
	$loadClass(JRSUIConstants$Hit, name, initialize, &_JRSUIConstants$Hit_ClassInfo_, clinit$JRSUIConstants$Hit, allocate$JRSUIConstants$Hit);
	return class$;
}

$Class* JRSUIConstants$Hit::class$ = nullptr;

	} // laf
} // apple