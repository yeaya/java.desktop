#include <sun/java2d/cmm/lcms/LCMS.h>

#include <java/awt/color/CMMException.h>
#include <java/awt/color/ICC_Profile.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <sun/java2d/cmm/ColorTransform.h>
#include <sun/java2d/cmm/PCMM.h>
#include <sun/java2d/cmm/Profile.h>
#include <sun/java2d/cmm/lcms/LCMS$1.h>
#include <sun/java2d/cmm/lcms/LCMSImageLayout.h>
#include <sun/java2d/cmm/lcms/LCMSProfile.h>
#include <sun/java2d/cmm/lcms/LCMSTransform.h>
#include <jcpp.h>

#undef IL
#undef LCMS

using $ColorTransformArray = $Array<::sun::java2d::cmm::ColorTransform>;
using $LCMSProfileArray = $Array<::sun::java2d::cmm::lcms::LCMSProfile>;
using $CMMException = ::java::awt::color::CMMException;
using $ICC_Profile = ::java::awt::color::ICC_Profile;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ColorTransform = ::sun::java2d::cmm::ColorTransform;
using $PCMM = ::sun::java2d::cmm::PCMM;
using $Profile = ::sun::java2d::cmm::Profile;
using $LCMS$1 = ::sun::java2d::cmm::lcms::LCMS$1;
using $LCMSImageLayout = ::sun::java2d::cmm::lcms::LCMSImageLayout;
using $LCMSProfile = ::sun::java2d::cmm::lcms::LCMSProfile;
using $LCMSTransform = ::sun::java2d::cmm::lcms::LCMSTransform;

namespace sun {
	namespace java2d {
		namespace cmm {
			namespace lcms {

$FieldInfo _LCMS_FieldInfo_[] = {
	{"theLcms", "Lsun/java2d/cmm/lcms/LCMS;", nullptr, $PRIVATE | $STATIC, $staticField(LCMS, theLcms)},
	{}
};

$MethodInfo _LCMS_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(LCMS::*)()>(&LCMS::init$))},
	{"colorConvert", "(Lsun/java2d/cmm/lcms/LCMSTransform;Lsun/java2d/cmm/lcms/LCMSImageLayout;Lsun/java2d/cmm/lcms/LCMSImageLayout;)V", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<void(*)($LCMSTransform*,$LCMSImageLayout*,$LCMSImageLayout*)>(&LCMS::colorConvert))},
	{"createNativeTransform", "([JIIZIZLjava/lang/Object;)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int64_t(*)($longs*,int32_t,int32_t,bool,int32_t,bool,Object$*)>(&LCMS::createNativeTransform))},
	{"createTransform", "([Lsun/java2d/cmm/lcms/LCMSProfile;IIZIZLjava/lang/Object;)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($LCMSProfileArray*,int32_t,int32_t,bool,int32_t,bool,Object$*)>(&LCMS::createTransform))},
	{"createTransform", "(Ljava/awt/color/ICC_Profile;II)Lsun/java2d/cmm/ColorTransform;", nullptr, $PUBLIC},
	{"createTransform", "([Lsun/java2d/cmm/ColorTransform;)Lsun/java2d/cmm/ColorTransform;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getLcmsProfile", "(Lsun/java2d/cmm/Profile;)Lsun/java2d/cmm/lcms/LCMSProfile;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$LCMSProfile*(*)($Profile*)>(&LCMS::getLcmsProfile))},
	{"getModule", "()Lsun/java2d/cmm/PCMM;", nullptr, $STATIC | $SYNCHRONIZED, $method(static_cast<$PCMM*(*)()>(&LCMS::getModule))},
	{"getProfileData", "(Lsun/java2d/cmm/Profile;)[B", nullptr, $PUBLIC},
	{"getProfileDataNative", "(J)[B", nullptr, $STATIC | $NATIVE, $method(static_cast<$bytes*(*)(int64_t)>(&LCMS::getProfileDataNative))},
	{"getProfileID", "(Ljava/awt/color/ICC_Profile;)Lsun/java2d/cmm/lcms/LCMSProfile;", nullptr, $STATIC | $SYNCHRONIZED | $NATIVE, $method(static_cast<$LCMSProfile*(*)($ICC_Profile*)>(&LCMS::getProfileID))},
	{"getTagData", "(Lsun/java2d/cmm/Profile;I)[B", nullptr, $PUBLIC},
	{"getTagNative", "(JI)[B", nullptr, $STATIC | $NATIVE, $method(static_cast<$bytes*(*)(int64_t,int32_t)>(&LCMS::getTagNative))},
	{"initLCMS", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;Ljava/lang/Class<*>;)V", $PUBLIC | $STATIC | $NATIVE, $method(static_cast<void(*)($Class*,$Class*,$Class*)>(&LCMS::initLCMS))},
	{"loadProfile", "([B)Lsun/java2d/cmm/Profile;", nullptr, $PUBLIC},
	{"loadProfileNative", "([BLjava/lang/Object;)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int64_t(*)($bytes*,Object$*)>(&LCMS::loadProfileNative))},
	{"setTagData", "(Lsun/java2d/cmm/Profile;I[B)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setTagDataNative", "(JI[B)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int32_t,$bytes*)>(&LCMS::setTagDataNative))},
	{}
};

#define _METHOD_INDEX_colorConvert 1
#define _METHOD_INDEX_createNativeTransform 2
#define _METHOD_INDEX_getProfileDataNative 9
#define _METHOD_INDEX_getProfileID 10
#define _METHOD_INDEX_getTagNative 12
#define _METHOD_INDEX_initLCMS 13
#define _METHOD_INDEX_loadProfileNative 15
#define _METHOD_INDEX_setTagDataNative 17

$InnerClassInfo _LCMS_InnerClassesInfo_[] = {
	{"sun.java2d.cmm.lcms.LCMS$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _LCMS_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.java2d.cmm.lcms.LCMS",
	"java.lang.Object",
	"sun.java2d.cmm.PCMM",
	_LCMS_FieldInfo_,
	_LCMS_MethodInfo_,
	nullptr,
	nullptr,
	_LCMS_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.cmm.lcms.LCMS$1"
};

$Object* allocate$LCMS($Class* clazz) {
	return $of($alloc(LCMS));
}

LCMS* LCMS::theLcms = nullptr;

$Profile* LCMS::loadProfile($bytes* data) {
	$var($Object, disposerRef, $new($Object));
	int64_t ptr = loadProfileNative(data, disposerRef);
	if (ptr != (int64_t)0) {
		return $new($LCMSProfile, ptr, disposerRef);
	}
	return nullptr;
}

$LCMSProfile* LCMS::getLcmsProfile($Profile* p) {
	$init(LCMS);
	if ($instanceOf($LCMSProfile, p)) {
		return $cast($LCMSProfile, p);
	}
	$throwNew($CMMException, $$str({"Invalid profile: "_s, p}));
}

void LCMS::setTagDataNative(int64_t ptr, int32_t tagSignature, $bytes* data) {
	$init(LCMS);
	$prepareNativeStatic(LCMS, setTagDataNative, void, int64_t ptr, int32_t tagSignature, $bytes* data);
	$invokeNativeStatic(LCMS, setTagDataNative, ptr, tagSignature, data);
	$finishNativeStatic();
}

$bytes* LCMS::getProfileDataNative(int64_t ptr) {
	$init(LCMS);
	$var($bytes, $ret, nullptr);
	$prepareNativeStatic(LCMS, getProfileDataNative, $bytes*, int64_t ptr);
	$assign($ret, $invokeNativeStatic(LCMS, getProfileDataNative, ptr));
	$finishNativeStatic();
	return $ret;
}

$bytes* LCMS::getTagNative(int64_t profileID, int32_t signature) {
	$init(LCMS);
	$var($bytes, $ret, nullptr);
	$prepareNativeStatic(LCMS, getTagNative, $bytes*, int64_t profileID, int32_t signature);
	$assign($ret, $invokeNativeStatic(LCMS, getTagNative, profileID, signature));
	$finishNativeStatic();
	return $ret;
}

int64_t LCMS::loadProfileNative($bytes* data, Object$* ref) {
	$init(LCMS);
	int64_t $ret = 0;
	$prepareNativeStatic(LCMS, loadProfileNative, int64_t, $bytes* data, Object$* ref);
	$ret = $invokeNativeStatic(LCMS, loadProfileNative, data, ref);
	$finishNativeStatic();
	return $ret;
}

$bytes* LCMS::getProfileData($Profile* p) {
	return $nc($(getLcmsProfile(p)))->getProfileData();
}

$bytes* LCMS::getTagData($Profile* p, int32_t tagSignature) {
	return $nc($(getLcmsProfile(p)))->getTag(tagSignature);
}

void LCMS::setTagData($Profile* p, int32_t tagSignature, $bytes* data) {
	$synchronized(this) {
		$nc($(getLcmsProfile(p)))->setTag(tagSignature, data);
	}
}

$LCMSProfile* LCMS::getProfileID($ICC_Profile* profile) {
	$init(LCMS);
	$var($LCMSProfile, $ret, nullptr);
	$prepareNativeStatic(LCMS, getProfileID, $LCMSProfile*, $ICC_Profile* profile);
	$assign($ret, $invokeNativeStatic(LCMS, getProfileID, profile));
	$finishNativeStatic();
	return $ret;
}

int64_t LCMS::createTransform($LCMSProfileArray* profiles, int32_t renderType, int32_t inFormatter, bool isInIntPacked, int32_t outFormatter, bool isOutIntPacked, Object$* disposerRef) {
	$init(LCMS);
	$var($longs, ptrs, $new($longs, $nc(profiles)->length));
	for (int32_t i = 0; i < profiles->length; ++i) {
		if (profiles->get(i) == nullptr) {
			$throwNew($CMMException, "Unknown profile ID"_s);
		}
		ptrs->set(i, $nc(profiles->get(i))->getLcmsPtr());
	}
	return createNativeTransform(ptrs, renderType, inFormatter, isInIntPacked, outFormatter, isOutIntPacked, disposerRef);
}

int64_t LCMS::createNativeTransform($longs* profileIDs, int32_t renderType, int32_t inFormatter, bool isInIntPacked, int32_t outFormatter, bool isOutIntPacked, Object$* disposerRef) {
	$init(LCMS);
	int64_t $ret = 0;
	$prepareNativeStatic(LCMS, createNativeTransform, int64_t, $longs* profileIDs, int32_t renderType, int32_t inFormatter, bool isInIntPacked, int32_t outFormatter, bool isOutIntPacked, Object$* disposerRef);
	$ret = $invokeNativeStatic(LCMS, createNativeTransform, profileIDs, renderType, inFormatter, isInIntPacked, outFormatter, isOutIntPacked, disposerRef);
	$finishNativeStatic();
	return $ret;
}

$ColorTransform* LCMS::createTransform($ICC_Profile* profile, int32_t renderType, int32_t transformType) {
	return $new($LCMSTransform, profile, renderType, renderType);
}

$ColorTransform* LCMS::createTransform($ColorTransformArray* transforms) {
	$synchronized(this) {
		return $new($LCMSTransform, transforms);
	}
}

void LCMS::colorConvert($LCMSTransform* trans, $LCMSImageLayout* src, $LCMSImageLayout* dest) {
	$init(LCMS);
	$prepareNativeStatic(LCMS, colorConvert, void, $LCMSTransform* trans, $LCMSImageLayout* src, $LCMSImageLayout* dest);
	$invokeNativeStatic(LCMS, colorConvert, trans, src, dest);
	$finishNativeStatic();
}

void LCMS::initLCMS($Class* Trans, $Class* IL, $Class* Pf) {
	$init(LCMS);
	$prepareNativeStatic(LCMS, initLCMS, void, $Class* Trans, $Class* IL, $Class* Pf);
	$invokeNativeStatic(LCMS, initLCMS, Trans, IL, Pf);
	$finishNativeStatic();
}

void LCMS::init$() {
}

$PCMM* LCMS::getModule() {
	$load(LCMS);
	$synchronized(class$) {
		$init(LCMS);
		$beforeCallerSensitive();
		if (LCMS::theLcms != nullptr) {
			return LCMS::theLcms;
		}
		$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($LCMS$1)));
		$load($LCMSTransform);
		$load($LCMSImageLayout);
		$load($ICC_Profile);
		initLCMS($LCMSTransform::class$, $LCMSImageLayout::class$, $ICC_Profile::class$);
		$assignStatic(LCMS::theLcms, $new(LCMS));
		return LCMS::theLcms;
	}
}

void clinit$LCMS($Class* class$) {
	$assignStatic(LCMS::theLcms, nullptr);
}

LCMS::LCMS() {
}

$Class* LCMS::load$($String* name, bool initialize) {
	$loadClass(LCMS, name, initialize, &_LCMS_ClassInfo_, clinit$LCMS, allocate$LCMS);
	return class$;
}

$Class* LCMS::class$ = nullptr;

			} // lcms
		} // cmm
	} // java2d
} // sun