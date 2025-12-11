#include <com/apple/laf/AquaInternalFrameUI$2.h>

#include <apple/laf/JRSUIConstants$Widget.h>
#include <com/apple/laf/AquaInternalFrameUI$AquaInternalFrameButtonIcon.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <jcpp.h>

#undef TITLE_BAR_COLLAPSE_BOX

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

$MethodInfo _AquaInternalFrameUI$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AquaInternalFrameUI$2::*)()>(&AquaInternalFrameUI$2::init$))},
	{"getInstance", "()Ljavax/swing/Icon;", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _AquaInternalFrameUI$2_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaInternalFrameUI",
	nullptr,
	nullptr
};

$InnerClassInfo _AquaInternalFrameUI$2_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaInternalFrameUI$2", nullptr, nullptr, 0},
	{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AquaInternalFrameUI$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaInternalFrameUI$2",
	"com.apple.laf.AquaUtils$RecyclableSingleton",
	nullptr,
	nullptr,
	_AquaInternalFrameUI$2_MethodInfo_,
	"Lcom/apple/laf/AquaUtils$RecyclableSingleton<Ljavax/swing/Icon;>;",
	&_AquaInternalFrameUI$2_EnclosingMethodInfo_,
	_AquaInternalFrameUI$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaInternalFrameUI"
};

$Object* allocate$AquaInternalFrameUI$2($Class* clazz) {
	return $of($alloc(AquaInternalFrameUI$2));
}

void AquaInternalFrameUI$2::init$() {
	$AquaUtils$RecyclableSingleton::init$();
}

$Object* AquaInternalFrameUI$2::getInstance() {
	$init($JRSUIConstants$Widget);
	return $of($new($AquaInternalFrameUI$AquaInternalFrameButtonIcon, $JRSUIConstants$Widget::TITLE_BAR_COLLAPSE_BOX));
}

AquaInternalFrameUI$2::AquaInternalFrameUI$2() {
}

$Class* AquaInternalFrameUI$2::load$($String* name, bool initialize) {
	$loadClass(AquaInternalFrameUI$2, name, initialize, &_AquaInternalFrameUI$2_ClassInfo_, allocate$AquaInternalFrameUI$2);
	return class$;
}

$Class* AquaInternalFrameUI$2::class$ = nullptr;

		} // laf
	} // apple
} // com