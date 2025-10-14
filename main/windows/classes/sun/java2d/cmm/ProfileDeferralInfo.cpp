#include <sun/java2d/cmm/ProfileDeferralInfo.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {
		namespace cmm {

$FieldInfo _ProfileDeferralInfo_FieldInfo_[] = {
	{"colorSpaceType", "I", nullptr, $PUBLIC | $FINAL, $field(ProfileDeferralInfo, colorSpaceType)},
	{"numComponents", "I", nullptr, $PUBLIC | $FINAL, $field(ProfileDeferralInfo, numComponents)},
	{"profileClass", "I", nullptr, $PUBLIC | $FINAL, $field(ProfileDeferralInfo, profileClass)},
	{"filename", "Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $field(ProfileDeferralInfo, filename)},
	{}
};

$MethodInfo _ProfileDeferralInfo_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;III)V", nullptr, $PUBLIC, $method(static_cast<void(ProfileDeferralInfo::*)($String*,int32_t,int32_t,int32_t)>(&ProfileDeferralInfo::init$))},
	{}
};

$ClassInfo _ProfileDeferralInfo_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.java2d.cmm.ProfileDeferralInfo",
	"java.lang.Object",
	nullptr,
	_ProfileDeferralInfo_FieldInfo_,
	_ProfileDeferralInfo_MethodInfo_
};

$Object* allocate$ProfileDeferralInfo($Class* clazz) {
	return $of($alloc(ProfileDeferralInfo));
}

void ProfileDeferralInfo::init$($String* fn, int32_t type, int32_t ncomp, int32_t pclass) {
	$set(this, filename, fn);
	this->colorSpaceType = type;
	this->numComponents = ncomp;
	this->profileClass = pclass;
}

ProfileDeferralInfo::ProfileDeferralInfo() {
}

$Class* ProfileDeferralInfo::load$($String* name, bool initialize) {
	$loadClass(ProfileDeferralInfo, name, initialize, &_ProfileDeferralInfo_ClassInfo_, allocate$ProfileDeferralInfo);
	return class$;
}

$Class* ProfileDeferralInfo::class$ = nullptr;

		} // cmm
	} // java2d
} // sun