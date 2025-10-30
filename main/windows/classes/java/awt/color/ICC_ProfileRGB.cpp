#include <java/awt/color/ICC_ProfileRGB.h>

#include <java/awt/color/ICC_Profile.h>
#include <sun/java2d/cmm/Profile.h>
#include <sun/java2d/cmm/ProfileDeferralInfo.h>
#include <jcpp.h>

#undef BLUECOMPONENT
#undef GREENCOMPONENT
#undef REDCOMPONENT

using $floatArray2 = $Array<float, 2>;
using $ICC_Profile = ::java::awt::color::ICC_Profile;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Profile = ::sun::java2d::cmm::Profile;
using $ProfileDeferralInfo = ::sun::java2d::cmm::ProfileDeferralInfo;

namespace java {
	namespace awt {
		namespace color {

$FieldInfo _ICC_ProfileRGB_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ICC_ProfileRGB, serialVersionUID)},
	{"REDCOMPONENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_ProfileRGB, REDCOMPONENT)},
	{"GREENCOMPONENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_ProfileRGB, GREENCOMPONENT)},
	{"BLUECOMPONENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_ProfileRGB, BLUECOMPONENT)},
	{}
};

$MethodInfo _ICC_ProfileRGB_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/cmm/Profile;)V", nullptr, 0, $method(static_cast<void(ICC_ProfileRGB::*)($Profile*)>(&ICC_ProfileRGB::init$))},
	{"<init>", "(Lsun/java2d/cmm/ProfileDeferralInfo;)V", nullptr, 0, $method(static_cast<void(ICC_ProfileRGB::*)($ProfileDeferralInfo*)>(&ICC_ProfileRGB::init$))},
	{"getGamma", "(I)F", nullptr, $PUBLIC},
	{"getMatrix", "()[[F", nullptr, $PUBLIC},
	{"getMediaWhitePoint", "()[F", nullptr, $PUBLIC},
	{"getTRC", "(I)[S", nullptr, $PUBLIC},
	{"toTag", "(I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&ICC_ProfileRGB::toTag))},
	{}
};

$ClassInfo _ICC_ProfileRGB_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.color.ICC_ProfileRGB",
	"java.awt.color.ICC_Profile",
	nullptr,
	_ICC_ProfileRGB_FieldInfo_,
	_ICC_ProfileRGB_MethodInfo_
};

$Object* allocate$ICC_ProfileRGB($Class* clazz) {
	return $of($alloc(ICC_ProfileRGB));
}

void ICC_ProfileRGB::init$($Profile* p) {
	$ICC_Profile::init$(p);
}

void ICC_ProfileRGB::init$($ProfileDeferralInfo* pdi) {
	$ICC_Profile::init$(pdi);
}

$floats* ICC_ProfileRGB::getMediaWhitePoint() {
	return $ICC_Profile::getMediaWhitePoint();
}

$floatArray2* ICC_ProfileRGB::getMatrix() {
	$useLocalCurrentObjectStackCache();
	$var($floats, red, getXYZTag($ICC_Profile::icSigRedColorantTag));
	$var($floats, green, getXYZTag($ICC_Profile::icSigGreenColorantTag));
	$var($floats, blue, getXYZTag($ICC_Profile::icSigBlueColorantTag));
	return $new($floatArray2, {
		$$new($floats, {
			$nc(red)->get(0),
			$nc(green)->get(0),
			$nc(blue)->get(0)
		}),
		$$new($floats, {
			red->get(1),
			green->get(1),
			blue->get(1)
		}),
		$$new($floats, {
			red->get(2),
			green->get(2),
			blue->get(2)
		})
	});
}

float ICC_ProfileRGB::getGamma(int32_t component) {
	return $ICC_Profile::getGamma(toTag(component));
}

$shorts* ICC_ProfileRGB::getTRC(int32_t component) {
	return $ICC_Profile::getTRC(toTag(component));
}

int32_t ICC_ProfileRGB::toTag(int32_t component) {
	$init(ICC_ProfileRGB);

	int32_t var$0 = 0;
	switch (component) {
	case ICC_ProfileRGB::REDCOMPONENT:
		{
			var$0 = $ICC_Profile::icSigRedTRCTag;
			break;
		}
	case ICC_ProfileRGB::GREENCOMPONENT:
		{
			var$0 = $ICC_Profile::icSigGreenTRCTag;
			break;
		}
	case ICC_ProfileRGB::BLUECOMPONENT:
		{
			var$0 = $ICC_Profile::icSigBlueTRCTag;
			break;
		}
	default:
		{
			$throwNew($IllegalArgumentException, "Must be Red, Green, or Blue"_s);
		}
	}
	return var$0;
}

ICC_ProfileRGB::ICC_ProfileRGB() {
}

$Class* ICC_ProfileRGB::load$($String* name, bool initialize) {
	$loadClass(ICC_ProfileRGB, name, initialize, &_ICC_ProfileRGB_ClassInfo_, allocate$ICC_ProfileRGB);
	return class$;
}

$Class* ICC_ProfileRGB::class$ = nullptr;

		} // color
	} // awt
} // java