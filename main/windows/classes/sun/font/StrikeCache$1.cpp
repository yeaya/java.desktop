#include <sun/font/StrikeCache$1.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/font/FontStrike.h>
#include <sun/font/StrikeCache.h>
#include <jcpp.h>

#undef MINSTRIKES

using $FontStrikeArray = $Array<::sun::font::FontStrike>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $FontStrike = ::sun::font::FontStrike;
using $StrikeCache = ::sun::font::StrikeCache;

namespace sun {
	namespace font {

$MethodInfo _StrikeCache$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(StrikeCache$1::*)()>(&StrikeCache$1::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _StrikeCache$1_EnclosingMethodInfo_ = {
	"sun.font.StrikeCache",
	nullptr,
	nullptr
};

$InnerClassInfo _StrikeCache$1_InnerClassesInfo_[] = {
	{"sun.font.StrikeCache$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _StrikeCache$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.StrikeCache$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_StrikeCache$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_StrikeCache$1_EnclosingMethodInfo_,
	_StrikeCache$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.StrikeCache"
};

$Object* allocate$StrikeCache$1($Class* clazz) {
	return $of($alloc(StrikeCache$1));
}

void StrikeCache$1::init$() {
}

$Object* StrikeCache$1::run() {
	$var($String, refType, $System::getProperty("sun.java2d.font.reftype"_s, "soft"_s));
	$init($StrikeCache);
	$StrikeCache::cacheRefTypeWeak = $nc(refType)->equals("weak"_s);
	$var($String, minStrikesStr, $System::getProperty("sun.java2d.font.minstrikes"_s));
	if (minStrikesStr != nullptr) {
		try {
			$StrikeCache::MINSTRIKES = $Integer::parseInt(minStrikesStr);
			if ($StrikeCache::MINSTRIKES <= 0) {
				$StrikeCache::MINSTRIKES = 1;
			}
		} catch ($NumberFormatException&) {
			$catch();
		}
	}
	$assignStatic($StrikeCache::recentStrikes, $new($FontStrikeArray, $StrikeCache::MINSTRIKES));
	return $of(nullptr);
}

StrikeCache$1::StrikeCache$1() {
}

$Class* StrikeCache$1::load$($String* name, bool initialize) {
	$loadClass(StrikeCache$1, name, initialize, &_StrikeCache$1_ClassInfo_, allocate$StrikeCache$1);
	return class$;
}

$Class* StrikeCache$1::class$ = nullptr;

	} // font
} // sun