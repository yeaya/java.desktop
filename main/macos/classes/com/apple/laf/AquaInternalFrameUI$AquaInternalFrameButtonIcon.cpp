#include <com/apple/laf/AquaInternalFrameUI$AquaInternalFrameButtonIcon.h>

#include <apple/laf/JRSUIConstants$Property.h>
#include <apple/laf/JRSUIConstants$State.h>
#include <apple/laf/JRSUIConstants$Widget.h>
#include <apple/laf/JRSUIState.h>
#include <com/apple/laf/AquaIcon$JRSUIIcon.h>
#include <com/apple/laf/AquaInternalFrameUI.h>
#include <com/apple/laf/AquaPainter.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <jcpp.h>

#undef ROLLOVER

using $JRSUIConstants$Property = ::apple::laf::JRSUIConstants$Property;
using $JRSUIConstants$State = ::apple::laf::JRSUIConstants$State;
using $JRSUIConstants$Widget = ::apple::laf::JRSUIConstants$Widget;
using $JRSUIState = ::apple::laf::JRSUIState;
using $AquaIcon$JRSUIIcon = ::com::apple::laf::AquaIcon$JRSUIIcon;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaInternalFrameUI$AquaInternalFrameButtonIcon_MethodInfo_[] = {
	{"<init>", "(Lapple/laf/JRSUIConstants$Widget;)V", nullptr, $PUBLIC, $method(static_cast<void(AquaInternalFrameUI$AquaInternalFrameButtonIcon::*)($JRSUIConstants$Widget*)>(&AquaInternalFrameUI$AquaInternalFrameButtonIcon::init$))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"getStateFor", "(Ljava/awt/Component;)Lapple/laf/JRSUIConstants$State;", nullptr, 0},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaInternalFrameUI$AquaInternalFrameButtonIcon_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaInternalFrameUI$AquaInternalFrameButtonIcon", "com.apple.laf.AquaInternalFrameUI", "AquaInternalFrameButtonIcon", $STATIC},
	{"com.apple.laf.AquaIcon$JRSUIIcon", "com.apple.laf.AquaIcon", "JRSUIIcon", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AquaInternalFrameUI$AquaInternalFrameButtonIcon_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaInternalFrameUI$AquaInternalFrameButtonIcon",
	"com.apple.laf.AquaIcon$JRSUIIcon",
	nullptr,
	nullptr,
	_AquaInternalFrameUI$AquaInternalFrameButtonIcon_MethodInfo_,
	nullptr,
	nullptr,
	_AquaInternalFrameUI$AquaInternalFrameButtonIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaInternalFrameUI"
};

$Object* allocate$AquaInternalFrameUI$AquaInternalFrameButtonIcon($Class* clazz) {
	return $of($alloc(AquaInternalFrameUI$AquaInternalFrameButtonIcon));
}

void AquaInternalFrameUI$AquaInternalFrameButtonIcon::init$($JRSUIConstants$Widget* widget) {
	$AquaIcon$JRSUIIcon::init$();
	$nc($nc(this->painter)->state)->set(widget);
}

void AquaInternalFrameUI$AquaInternalFrameButtonIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$nc($nc(this->painter)->state)->set($(getStateFor(c)));
	$AquaIcon$JRSUIIcon::paintIcon(c, g, x, y);
}

$JRSUIConstants$State* AquaInternalFrameUI$AquaInternalFrameButtonIcon::getStateFor($Component* c) {
	$init($JRSUIConstants$State);
	return $JRSUIConstants$State::ROLLOVER;
}

int32_t AquaInternalFrameUI$AquaInternalFrameButtonIcon::getIconWidth() {
	return 19;
}

int32_t AquaInternalFrameUI$AquaInternalFrameButtonIcon::getIconHeight() {
	return 19;
}

AquaInternalFrameUI$AquaInternalFrameButtonIcon::AquaInternalFrameUI$AquaInternalFrameButtonIcon() {
}

$Class* AquaInternalFrameUI$AquaInternalFrameButtonIcon::load$($String* name, bool initialize) {
	$loadClass(AquaInternalFrameUI$AquaInternalFrameButtonIcon, name, initialize, &_AquaInternalFrameUI$AquaInternalFrameButtonIcon_ClassInfo_, allocate$AquaInternalFrameUI$AquaInternalFrameButtonIcon);
	return class$;
}

$Class* AquaInternalFrameUI$AquaInternalFrameButtonIcon::class$ = nullptr;

		} // laf
	} // apple
} // com