#include <sun/font/StrikeCache$2.h>

#include <sun/font/FontStrikeDisposer.h>
#include <sun/font/StrikeCache.h>
#include <sun/java2d/Disposer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FontStrikeDisposer = ::sun::font::FontStrikeDisposer;
using $StrikeCache = ::sun::font::StrikeCache;
using $Disposer = ::sun::java2d::Disposer;

namespace sun {
	namespace font {

$FieldInfo _StrikeCache$2_FieldInfo_[] = {
	{"val$disposer", "Lsun/font/FontStrikeDisposer;", nullptr, $FINAL | $SYNTHETIC, $field(StrikeCache$2, val$disposer)},
	{}
};

$MethodInfo _StrikeCache$2_MethodInfo_[] = {
	{"<init>", "(Lsun/font/FontStrikeDisposer;)V", "()V", 0, $method(static_cast<void(StrikeCache$2::*)($FontStrikeDisposer*)>(&StrikeCache$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _StrikeCache$2_EnclosingMethodInfo_ = {
	"sun.font.StrikeCache",
	"disposeStrike",
	"(Lsun/font/FontStrikeDisposer;)V"
};

$InnerClassInfo _StrikeCache$2_InnerClassesInfo_[] = {
	{"sun.font.StrikeCache$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _StrikeCache$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.StrikeCache$2",
	"java.lang.Object",
	"java.lang.Runnable",
	_StrikeCache$2_FieldInfo_,
	_StrikeCache$2_MethodInfo_,
	nullptr,
	&_StrikeCache$2_EnclosingMethodInfo_,
	_StrikeCache$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.StrikeCache"
};

$Object* allocate$StrikeCache$2($Class* clazz) {
	return $of($alloc(StrikeCache$2));
}

void StrikeCache$2::init$($FontStrikeDisposer* val$disposer) {
	$set(this, val$disposer, val$disposer);
}

void StrikeCache$2::run() {
	$StrikeCache::doDispose(this->val$disposer);
	$Disposer::pollRemove();
}

StrikeCache$2::StrikeCache$2() {
}

$Class* StrikeCache$2::load$($String* name, bool initialize) {
	$loadClass(StrikeCache$2, name, initialize, &_StrikeCache$2_ClassInfo_, allocate$StrikeCache$2);
	return class$;
}

$Class* StrikeCache$2::class$ = nullptr;

	} // font
} // sun