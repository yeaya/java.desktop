#include <com/apple/laf/AquaListUI$ComponentPainter.h>

#include <apple/laf/JRSUIConstants$Property.h>
#include <apple/laf/JRSUIConstants$State.h>
#include <apple/laf/JRSUIState.h>
#include <com/apple/laf/AquaBorder$Default.h>
#include <com/apple/laf/AquaBorder.h>
#include <com/apple/laf/AquaFocusHandler.h>
#include <com/apple/laf/AquaListUI.h>
#include <com/apple/laf/AquaPainter.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

#undef ACTIVE
#undef INACTIVE

using $JRSUIConstants$Property = ::apple::laf::JRSUIConstants$Property;
using $JRSUIConstants$State = ::apple::laf::JRSUIConstants$State;
using $JRSUIState = ::apple::laf::JRSUIState;
using $AquaBorder$Default = ::com::apple::laf::AquaBorder$Default;
using $AquaFocusHandler = ::com::apple::laf::AquaFocusHandler;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaListUI$ComponentPainter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AquaListUI$ComponentPainter::*)()>(&AquaListUI$ComponentPainter::init$))},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaListUI$ComponentPainter_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaListUI$ComponentPainter", "com.apple.laf.AquaListUI", "ComponentPainter", $STATIC},
	{"com.apple.laf.AquaBorder$Default", "com.apple.laf.AquaBorder", "Default", $STATIC},
	{}
};

$ClassInfo _AquaListUI$ComponentPainter_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaListUI$ComponentPainter",
	"com.apple.laf.AquaBorder$Default",
	nullptr,
	nullptr,
	_AquaListUI$ComponentPainter_MethodInfo_,
	nullptr,
	nullptr,
	_AquaListUI$ComponentPainter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaListUI"
};

$Object* allocate$AquaListUI$ComponentPainter($Class* clazz) {
	return $of($alloc(AquaListUI$ComponentPainter));
}

void AquaListUI$ComponentPainter::init$() {
	$AquaBorder$Default::init$();
}

void AquaListUI$ComponentPainter::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$var($JComponent, jc, $instanceOf($JComponent, c) ? $cast($JComponent, c) : ($JComponent*)nullptr);
	if (jc != nullptr && !$AquaFocusHandler::isActive(jc)) {
		$init($JRSUIConstants$State);
		$nc($nc(this->painter)->state)->set($JRSUIConstants$State::INACTIVE);
	} else {
		$init($JRSUIConstants$State);
		$nc($nc(this->painter)->state)->set($JRSUIConstants$State::ACTIVE);
	}
	$AquaBorder$Default::paintBorder(c, g, x, y, w, h);
}

AquaListUI$ComponentPainter::AquaListUI$ComponentPainter() {
}

$Class* AquaListUI$ComponentPainter::load$($String* name, bool initialize) {
	$loadClass(AquaListUI$ComponentPainter, name, initialize, &_AquaListUI$ComponentPainter_ClassInfo_, allocate$AquaListUI$ComponentPainter);
	return class$;
}

$Class* AquaListUI$ComponentPainter::class$ = nullptr;

		} // laf
	} // apple
} // com