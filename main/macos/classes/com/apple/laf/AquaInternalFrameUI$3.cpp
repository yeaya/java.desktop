#include <com/apple/laf/AquaInternalFrameUI$3.h>

#include <apple/laf/JRSUIConstants$Widget.h>
#include <com/apple/laf/AquaInternalFrameUI$AquaInternalFrameButtonIcon.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <jcpp.h>

#undef TITLE_BAR_ZOOM_BOX

using $JRSUIConstants$Widget = ::apple::laf::JRSUIConstants$Widget;
using $AquaInternalFrameUI$AquaInternalFrameButtonIcon = ::com::apple::laf::AquaInternalFrameUI$AquaInternalFrameButtonIcon;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaInternalFrameUI$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AquaInternalFrameUI$3::*)()>(&AquaInternalFrameUI$3::init$))},
	{"getInstance", "()Ljavax/swing/Icon;", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _AquaInternalFrameUI$3_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaInternalFrameUI",
	nullptr,
	nullptr
};

$InnerClassInfo _AquaInternalFrameUI$3_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaInternalFrameUI$3", nullptr, nullptr, 0},
	{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AquaInternalFrameUI$3_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaInternalFrameUI$3",
	"com.apple.laf.AquaUtils$RecyclableSingleton",
	nullptr,
	nullptr,
	_AquaInternalFrameUI$3_MethodInfo_,
	"Lcom/apple/laf/AquaUtils$RecyclableSingleton<Ljavax/swing/Icon;>;",
	&_AquaInternalFrameUI$3_EnclosingMethodInfo_,
	_AquaInternalFrameUI$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaInternalFrameUI"
};

$Object* allocate$AquaInternalFrameUI$3($Class* clazz) {
	return $of($alloc(AquaInternalFrameUI$3));
}

void AquaInternalFrameUI$3::init$() {
	$AquaUtils$RecyclableSingleton::init$();
}

$Object* AquaInternalFrameUI$3::getInstance() {
	$init($JRSUIConstants$Widget);
	return $of($new($AquaInternalFrameUI$AquaInternalFrameButtonIcon, $JRSUIConstants$Widget::TITLE_BAR_ZOOM_BOX));
}

AquaInternalFrameUI$3::AquaInternalFrameUI$3() {
}

$Class* AquaInternalFrameUI$3::load$($String* name, bool initialize) {
	$loadClass(AquaInternalFrameUI$3, name, initialize, &_AquaInternalFrameUI$3_ClassInfo_, allocate$AquaInternalFrameUI$3);
	return class$;
}

$Class* AquaInternalFrameUI$3::class$ = nullptr;

		} // laf
	} // apple
} // com