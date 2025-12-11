#include <com/apple/laf/AquaInternalFrameUI$InternalFrameShadow.h>

#include <com/apple/laf/AquaInternalFrameUI$InternalFrameShadow$1.h>
#include <com/apple/laf/AquaInternalFrameUI.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <javax/swing/border/Border.h>
#include <jcpp.h>

using $AquaInternalFrameUI$InternalFrameShadow$1 = ::com::apple::laf::AquaInternalFrameUI$InternalFrameShadow$1;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Border = ::javax::swing::border::Border;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaInternalFrameUI$InternalFrameShadow_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AquaInternalFrameUI$InternalFrameShadow::*)()>(&AquaInternalFrameUI$InternalFrameShadow::init$))},
	{"getBackgroundShadowBorder", "()Ljavax/swing/border/Border;", nullptr, $ABSTRACT},
	{"getForegroundShadowBorder", "()Ljavax/swing/border/Border;", nullptr, $ABSTRACT},
	{"getInstance", "()Ljavax/swing/border/Border;", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _AquaInternalFrameUI$InternalFrameShadow_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaInternalFrameUI$InternalFrameShadow", "com.apple.laf.AquaInternalFrameUI", "InternalFrameShadow", $STATIC | $ABSTRACT},
	{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
	{"com.apple.laf.AquaInternalFrameUI$InternalFrameShadow$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaInternalFrameUI$InternalFrameShadow_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.apple.laf.AquaInternalFrameUI$InternalFrameShadow",
	"com.apple.laf.AquaUtils$RecyclableSingleton",
	nullptr,
	nullptr,
	_AquaInternalFrameUI$InternalFrameShadow_MethodInfo_,
	"Lcom/apple/laf/AquaUtils$RecyclableSingleton<Ljavax/swing/border/Border;>;",
	nullptr,
	_AquaInternalFrameUI$InternalFrameShadow_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaInternalFrameUI"
};

$Object* allocate$AquaInternalFrameUI$InternalFrameShadow($Class* clazz) {
	return $of($alloc(AquaInternalFrameUI$InternalFrameShadow));
}

void AquaInternalFrameUI$InternalFrameShadow::init$() {
	$AquaUtils$RecyclableSingleton::init$();
}

$Object* AquaInternalFrameUI$InternalFrameShadow::getInstance() {
	$useLocalCurrentObjectStackCache();
	$var($Border, fgShadow, getForegroundShadowBorder());
	$var($Border, bgShadow, getBackgroundShadowBorder());
	return $of($new($AquaInternalFrameUI$InternalFrameShadow$1, this, fgShadow, bgShadow));
}

AquaInternalFrameUI$InternalFrameShadow::AquaInternalFrameUI$InternalFrameShadow() {
}

$Class* AquaInternalFrameUI$InternalFrameShadow::load$($String* name, bool initialize) {
	$loadClass(AquaInternalFrameUI$InternalFrameShadow, name, initialize, &_AquaInternalFrameUI$InternalFrameShadow_ClassInfo_, allocate$AquaInternalFrameUI$InternalFrameShadow);
	return class$;
}

$Class* AquaInternalFrameUI$InternalFrameShadow::class$ = nullptr;

		} // laf
	} // apple
} // com