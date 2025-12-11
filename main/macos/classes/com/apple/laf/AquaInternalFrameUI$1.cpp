#include <com/apple/laf/AquaInternalFrameUI$1.h>

#include <apple/laf/JRSUIConstants$Widget.h>
#include <com/apple/laf/AquaInternalFrameUI$AquaInternalFrameButtonIcon.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <jcpp.h>

#undef TITLE_BAR_CLOSE_BOX

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

$MethodInfo _AquaInternalFrameUI$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AquaInternalFrameUI$1::*)()>(&AquaInternalFrameUI$1::init$))},
	{"getInstance", "()Ljavax/swing/Icon;", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _AquaInternalFrameUI$1_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaInternalFrameUI",
	nullptr,
	nullptr
};

$InnerClassInfo _AquaInternalFrameUI$1_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaInternalFrameUI$1", nullptr, nullptr, 0},
	{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AquaInternalFrameUI$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaInternalFrameUI$1",
	"com.apple.laf.AquaUtils$RecyclableSingleton",
	nullptr,
	nullptr,
	_AquaInternalFrameUI$1_MethodInfo_,
	"Lcom/apple/laf/AquaUtils$RecyclableSingleton<Ljavax/swing/Icon;>;",
	&_AquaInternalFrameUI$1_EnclosingMethodInfo_,
	_AquaInternalFrameUI$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaInternalFrameUI"
};

$Object* allocate$AquaInternalFrameUI$1($Class* clazz) {
	return $of($alloc(AquaInternalFrameUI$1));
}

void AquaInternalFrameUI$1::init$() {
	$AquaUtils$RecyclableSingleton::init$();
}

$Object* AquaInternalFrameUI$1::getInstance() {
	$init($JRSUIConstants$Widget);
	return $of($new($AquaInternalFrameUI$AquaInternalFrameButtonIcon, $JRSUIConstants$Widget::TITLE_BAR_CLOSE_BOX));
}

AquaInternalFrameUI$1::AquaInternalFrameUI$1() {
}

$Class* AquaInternalFrameUI$1::load$($String* name, bool initialize) {
	$loadClass(AquaInternalFrameUI$1, name, initialize, &_AquaInternalFrameUI$1_ClassInfo_, allocate$AquaInternalFrameUI$1);
	return class$;
}

$Class* AquaInternalFrameUI$1::class$ = nullptr;

		} // laf
	} // apple
} // com