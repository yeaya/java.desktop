#include <com/apple/laf/AquaNativeResources$2.h>

#include <com/apple/laf/AquaNativeResources$CColorPaintUIResource.h>
#include <com/apple/laf/AquaNativeResources.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <jcpp.h>

using $AquaNativeResources = ::com::apple::laf::AquaNativeResources;
using $AquaNativeResources$CColorPaintUIResource = ::com::apple::laf::AquaNativeResources$CColorPaintUIResource;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaNativeResources$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AquaNativeResources$2::*)()>(&AquaNativeResources$2::init$))},
	{"getInstance", "()Ljava/awt/Color;", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _AquaNativeResources$2_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaNativeResources",
	nullptr,
	nullptr
};

$InnerClassInfo _AquaNativeResources$2_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaNativeResources$2", nullptr, nullptr, 0},
	{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AquaNativeResources$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaNativeResources$2",
	"com.apple.laf.AquaUtils$RecyclableSingleton",
	nullptr,
	nullptr,
	_AquaNativeResources$2_MethodInfo_,
	"Lcom/apple/laf/AquaUtils$RecyclableSingleton<Ljava/awt/Color;>;",
	&_AquaNativeResources$2_EnclosingMethodInfo_,
	_AquaNativeResources$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaNativeResources"
};

$Object* allocate$AquaNativeResources$2($Class* clazz) {
	return $of($alloc(AquaNativeResources$2));
}

void AquaNativeResources$2::init$() {
	$AquaUtils$RecyclableSingleton::init$();
}

$Object* AquaNativeResources$2::getInstance() {
	int64_t backgroundID = $AquaNativeResources::getWindowBackgroundColor();
	return $of($new($AquaNativeResources$CColorPaintUIResource, backgroundID, 238, 238, 238, 255));
}

AquaNativeResources$2::AquaNativeResources$2() {
}

$Class* AquaNativeResources$2::load$($String* name, bool initialize) {
	$loadClass(AquaNativeResources$2, name, initialize, &_AquaNativeResources$2_ClassInfo_, allocate$AquaNativeResources$2);
	return class$;
}

$Class* AquaNativeResources$2::class$ = nullptr;

		} // laf
	} // apple
} // com