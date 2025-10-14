#include <java/awt/color/ICC_ProfileGray.h>

#include <java/awt/color/ICC_Profile.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/cmm/Profile.h>
#include <sun/java2d/cmm/ProfileDeferralInfo.h>
#include <jcpp.h>

using $ICC_Profile = ::java::awt::color::ICC_Profile;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Profile = ::sun::java2d::cmm::Profile;
using $ProfileDeferralInfo = ::sun::java2d::cmm::ProfileDeferralInfo;

namespace java {
	namespace awt {
		namespace color {

$FieldInfo _ICC_ProfileGray_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ICC_ProfileGray, serialVersionUID)},
	{}
};

$MethodInfo _ICC_ProfileGray_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/cmm/Profile;)V", nullptr, 0, $method(static_cast<void(ICC_ProfileGray::*)($Profile*)>(&ICC_ProfileGray::init$))},
	{"<init>", "(Lsun/java2d/cmm/ProfileDeferralInfo;)V", nullptr, 0, $method(static_cast<void(ICC_ProfileGray::*)($ProfileDeferralInfo*)>(&ICC_ProfileGray::init$))},
	{"getGamma", "()F", nullptr, $PUBLIC},
	{"getMediaWhitePoint", "()[F", nullptr, $PUBLIC},
	{"getTRC", "()[S", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ICC_ProfileGray_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.color.ICC_ProfileGray",
	"java.awt.color.ICC_Profile",
	nullptr,
	_ICC_ProfileGray_FieldInfo_,
	_ICC_ProfileGray_MethodInfo_
};

$Object* allocate$ICC_ProfileGray($Class* clazz) {
	return $of($alloc(ICC_ProfileGray));
}

void ICC_ProfileGray::init$($Profile* p) {
	$ICC_Profile::init$(p);
}

void ICC_ProfileGray::init$($ProfileDeferralInfo* pdi) {
	$ICC_Profile::init$(pdi);
}

$floats* ICC_ProfileGray::getMediaWhitePoint() {
	return $ICC_Profile::getMediaWhitePoint();
}

float ICC_ProfileGray::getGamma() {
	return getGamma($ICC_Profile::icSigGrayTRCTag);
}

$shorts* ICC_ProfileGray::getTRC() {
	return getTRC($ICC_Profile::icSigGrayTRCTag);
}

ICC_ProfileGray::ICC_ProfileGray() {
}

$Class* ICC_ProfileGray::load$($String* name, bool initialize) {
	$loadClass(ICC_ProfileGray, name, initialize, &_ICC_ProfileGray_ClassInfo_, allocate$ICC_ProfileGray);
	return class$;
}

$Class* ICC_ProfileGray::class$ = nullptr;

		} // color
	} // awt
} // java