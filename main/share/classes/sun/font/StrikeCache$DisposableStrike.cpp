#include <sun/font/StrikeCache$DisposableStrike.h>

#include <sun/font/FontStrikeDisposer.h>
#include <sun/font/StrikeCache.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FontStrikeDisposer = ::sun::font::FontStrikeDisposer;
using $StrikeCache = ::sun::font::StrikeCache;

namespace sun {
	namespace font {

$MethodInfo _StrikeCache$DisposableStrike_MethodInfo_[] = {
	{"getDisposer", "()Lsun/font/FontStrikeDisposer;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _StrikeCache$DisposableStrike_InnerClassesInfo_[] = {
	{"sun.font.StrikeCache$DisposableStrike", "sun.font.StrikeCache", "DisposableStrike", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _StrikeCache$DisposableStrike_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"sun.font.StrikeCache$DisposableStrike",
	nullptr,
	nullptr,
	nullptr,
	_StrikeCache$DisposableStrike_MethodInfo_,
	nullptr,
	nullptr,
	_StrikeCache$DisposableStrike_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.StrikeCache"
};

$Object* allocate$StrikeCache$DisposableStrike($Class* clazz) {
	return $of($alloc(StrikeCache$DisposableStrike));
}

$Class* StrikeCache$DisposableStrike::load$($String* name, bool initialize) {
	$loadClass(StrikeCache$DisposableStrike, name, initialize, &_StrikeCache$DisposableStrike_ClassInfo_, allocate$StrikeCache$DisposableStrike);
	return class$;
}

$Class* StrikeCache$DisposableStrike::class$ = nullptr;

	} // font
} // sun