#include <com/apple/laf/AquaInternalFrameUI$6$1.h>

#include <apple/laf/JRSUIConstants$Property.h>
#include <apple/laf/JRSUIConstants$Widget.h>
#include <apple/laf/JRSUIConstants$WindowType.h>
#include <apple/laf/JRSUIState.h>
#include <com/apple/laf/AquaIcon$ScalingJRSUIIcon.h>
#include <com/apple/laf/AquaInternalFrameUI$6.h>
#include <com/apple/laf/AquaPainter.h>
#include <jcpp.h>

#undef GROW_BOX_TEXTURED
#undef UTILITY

using $JRSUIConstants$Property = ::apple::laf::JRSUIConstants$Property;
using $JRSUIConstants$Widget = ::apple::laf::JRSUIConstants$Widget;
using $JRSUIConstants$WindowType = ::apple::laf::JRSUIConstants$WindowType;
using $JRSUIState = ::apple::laf::JRSUIState;
using $AquaIcon$ScalingJRSUIIcon = ::com::apple::laf::AquaIcon$ScalingJRSUIIcon;
using $AquaInternalFrameUI$6 = ::com::apple::laf::AquaInternalFrameUI$6;
using $AquaPainter = ::com::apple::laf::AquaPainter;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaInternalFrameUI$6$1_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaInternalFrameUI$6;", nullptr, $FINAL | $SYNTHETIC, $field(AquaInternalFrameUI$6$1, this$0)},
	{}
};

$MethodInfo _AquaInternalFrameUI$6$1_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaInternalFrameUI$6;II)V", nullptr, 0, $method(static_cast<void(AquaInternalFrameUI$6$1::*)($AquaInternalFrameUI$6*,int32_t,int32_t)>(&AquaInternalFrameUI$6$1::init$))},
	{"initIconPainter", "(Lcom/apple/laf/AquaPainter;)V", "(Lcom/apple/laf/AquaPainter<Lapple/laf/JRSUIState;>;)V", $PUBLIC},
	{}
};

$EnclosingMethodInfo _AquaInternalFrameUI$6$1_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaInternalFrameUI$6",
	"getInstance",
	"()Ljavax/swing/Icon;"
};

$InnerClassInfo _AquaInternalFrameUI$6$1_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaInternalFrameUI$6", nullptr, nullptr, 0},
	{"com.apple.laf.AquaInternalFrameUI$6$1", nullptr, nullptr, 0},
	{"com.apple.laf.AquaIcon$ScalingJRSUIIcon", "com.apple.laf.AquaIcon", "ScalingJRSUIIcon", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AquaInternalFrameUI$6$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaInternalFrameUI$6$1",
	"com.apple.laf.AquaIcon$ScalingJRSUIIcon",
	nullptr,
	_AquaInternalFrameUI$6$1_FieldInfo_,
	_AquaInternalFrameUI$6$1_MethodInfo_,
	nullptr,
	&_AquaInternalFrameUI$6$1_EnclosingMethodInfo_,
	_AquaInternalFrameUI$6$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaInternalFrameUI"
};

$Object* allocate$AquaInternalFrameUI$6$1($Class* clazz) {
	return $of($alloc(AquaInternalFrameUI$6$1));
}

void AquaInternalFrameUI$6$1::init$($AquaInternalFrameUI$6* this$0, int32_t width, int32_t height) {
	$set(this, this$0, this$0);
	$AquaIcon$ScalingJRSUIIcon::init$(width, height);
}

void AquaInternalFrameUI$6$1::initIconPainter($AquaPainter* iconState) {
	$init($JRSUIConstants$Widget);
	$nc($nc(iconState)->state)->set($JRSUIConstants$Widget::GROW_BOX_TEXTURED);
	$init($JRSUIConstants$WindowType);
	$nc(iconState->state)->set($JRSUIConstants$WindowType::UTILITY);
}

AquaInternalFrameUI$6$1::AquaInternalFrameUI$6$1() {
}

$Class* AquaInternalFrameUI$6$1::load$($String* name, bool initialize) {
	$loadClass(AquaInternalFrameUI$6$1, name, initialize, &_AquaInternalFrameUI$6$1_ClassInfo_, allocate$AquaInternalFrameUI$6$1);
	return class$;
}

$Class* AquaInternalFrameUI$6$1::class$ = nullptr;

		} // laf
	} // apple
} // com