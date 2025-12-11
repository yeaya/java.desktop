#include <sun/java2d/cmm/lcms/LCMSProfile.h>

#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractMap.h>
#include <java/util/Map.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/concurrent/locks/StampedLock.h>
#include <java/util/function/Function.h>
#include <sun/java2d/cmm/Profile.h>
#include <sun/java2d/cmm/lcms/LCMS.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AbstractMap = ::java::util::AbstractMap;
using $Map = ::java::util::Map;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $StampedLock = ::java::util::concurrent::locks::StampedLock;
using $Function = ::java::util::function::Function;
using $Profile = ::sun::java2d::cmm::Profile;
using $LCMS = ::sun::java2d::cmm::lcms::LCMS;

namespace sun {
	namespace java2d {
		namespace cmm {
			namespace lcms {

class LCMSProfile$$Lambda$lambda$getTag$0 : public $Function {
	$class(LCMSProfile$$Lambda$lambda$getTag$0, $NO_CLASS_INIT, $Function)
public:
	void init$(LCMSProfile* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* key) override {
		 return $of($nc(inst$)->lambda$getTag$0($cast($Integer, key)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LCMSProfile$$Lambda$lambda$getTag$0>());
	}
	LCMSProfile* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo LCMSProfile$$Lambda$lambda$getTag$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(LCMSProfile$$Lambda$lambda$getTag$0, inst$)},
	{}
};
$MethodInfo LCMSProfile$$Lambda$lambda$getTag$0::methodInfos[3] = {
	{"<init>", "(Lsun/java2d/cmm/lcms/LCMSProfile;)V", nullptr, $PUBLIC, $method(static_cast<void(LCMSProfile$$Lambda$lambda$getTag$0::*)(LCMSProfile*)>(&LCMSProfile$$Lambda$lambda$getTag$0::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo LCMSProfile$$Lambda$lambda$getTag$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.java2d.cmm.lcms.LCMSProfile$$Lambda$lambda$getTag$0",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* LCMSProfile$$Lambda$lambda$getTag$0::load$($String* name, bool initialize) {
	$loadClass(LCMSProfile$$Lambda$lambda$getTag$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LCMSProfile$$Lambda$lambda$getTag$0::class$ = nullptr;

$FieldInfo _LCMSProfile_FieldInfo_[] = {
	{"disposerReferent", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(LCMSProfile, disposerReferent)},
	{"tags", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Integer;[B>;", $PRIVATE | $FINAL, $field(LCMSProfile, tags)},
	{"lock", "Ljava/util/concurrent/locks/StampedLock;", nullptr, $PRIVATE | $FINAL, $field(LCMSProfile, lock)},
	{}
};

$MethodInfo _LCMSProfile_MethodInfo_[] = {
	{"<init>", "(JLjava/lang/Object;)V", nullptr, 0, $method(static_cast<void(LCMSProfile::*)(int64_t,Object$*)>(&LCMSProfile::init$))},
	{"getLcmsPtr", "()J", nullptr, 0, $method(static_cast<int64_t(LCMSProfile::*)()>(&LCMSProfile::getLcmsPtr))},
	{"getProfileData", "()[B", nullptr, 0, $method(static_cast<$bytes*(LCMSProfile::*)()>(&LCMSProfile::getProfileData))},
	{"getTag", "(I)[B", nullptr, 0, $method(static_cast<$bytes*(LCMSProfile::*)(int32_t)>(&LCMSProfile::getTag))},
	{"lambda$getTag$0", "(Ljava/lang/Integer;)[B", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$bytes*(LCMSProfile::*)($Integer*)>(&LCMSProfile::lambda$getTag$0))},
	{"setTag", "(I[B)V", nullptr, 0, $method(static_cast<void(LCMSProfile::*)(int32_t,$bytes*)>(&LCMSProfile::setTag))},
	{}
};

$ClassInfo _LCMSProfile_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.java2d.cmm.lcms.LCMSProfile",
	"sun.java2d.cmm.Profile",
	nullptr,
	_LCMSProfile_FieldInfo_,
	_LCMSProfile_MethodInfo_
};

$Object* allocate$LCMSProfile($Class* clazz) {
	return $of($alloc(LCMSProfile));
}

void LCMSProfile::init$(int64_t ptr, Object$* ref) {
	$Profile::init$(ptr);
	$set(this, tags, static_cast<$Map*>(static_cast<$AbstractMap*>($new($ConcurrentHashMap))));
	$set(this, lock, $new($StampedLock));
	$set(this, disposerReferent, ref);
}

int64_t LCMSProfile::getLcmsPtr() {
	return getNativePtr();
}

$bytes* LCMSProfile::getProfileData() {
	$useLocalCurrentObjectStackCache();
	int64_t stamp = $nc(this->lock)->readLock();
	{
		$var($Throwable, var$0, nullptr);
		$var($bytes, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, $LCMS::getProfileDataNative(getNativePtr()));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc(this->lock)->unlockRead(stamp);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$bytes* LCMSProfile::getTag(int32_t sig) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, t, $cast($bytes, $nc(this->tags)->get($($Integer::valueOf(sig)))));
	if (t != nullptr) {
		return t;
	}
	int64_t stamp = $nc(this->lock)->readLock();
	{
		$var($Throwable, var$0, nullptr);
		$var($bytes, var$2, nullptr);
		bool return$1 = false;
		try {
			$var($Object, var$3, $of($Integer::valueOf(sig)));
			$assign(var$2, $cast($bytes, $nc(this->tags)->computeIfAbsent(var$3, static_cast<$Function*>($$new(LCMSProfile$$Lambda$lambda$getTag$0, this)))));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$4) {
			$assign(var$0, var$4);
		} $finally: {
			$nc(this->lock)->unlockRead(stamp);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void LCMSProfile::setTag(int32_t tagSignature, $bytes* data) {
	int64_t stamp = $nc(this->lock)->writeLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(this->tags)->clear();
			$LCMS::setTagDataNative(getNativePtr(), tagSignature, data);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->lock)->unlockWrite(stamp);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$bytes* LCMSProfile::lambda$getTag$0($Integer* key) {
	int64_t var$0 = getNativePtr();
	return $LCMS::getTagNative(var$0, $nc(key)->intValue());
}

LCMSProfile::LCMSProfile() {
}

$Class* LCMSProfile::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(LCMSProfile$$Lambda$lambda$getTag$0::classInfo$.name)) {
			return LCMSProfile$$Lambda$lambda$getTag$0::load$(name, initialize);
		}
	}
	$loadClass(LCMSProfile, name, initialize, &_LCMSProfile_ClassInfo_, allocate$LCMSProfile);
	return class$;
}

$Class* LCMSProfile::class$ = nullptr;

			} // lcms
		} // cmm
	} // java2d
} // sun