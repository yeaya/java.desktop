#include <com/apple/laf/AquaScrollRegionBorder.h>

#include <apple/laf/JRSUIConstants$Focused.h>
#include <apple/laf/JRSUIConstants$Property.h>
#include <apple/laf/JRSUIConstants$State.h>
#include <apple/laf/JRSUIConstants$Widget.h>
#include <apple/laf/JRSUIState.h>
#include <com/apple/laf/AquaBorder.h>
#include <com/apple/laf/AquaFocusHandler.h>
#include <com/apple/laf/AquaPainter.h>
#include <com/apple/laf/AquaUtilControlSize$SizeDescriptor.h>
#include <com/apple/laf/AquaUtilControlSize$SizeVariant.h>
#include <com/apple/laf/AquaUtils$RecyclableSingletonFromDefaultConstructor.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

#undef ACTIVE
#undef DISABLED
#undef FRAME_LIST_BOX
#undef INACTIVE
#undef NO
#undef YES

using $JRSUIConstants$Focused = ::apple::laf::JRSUIConstants$Focused;
using $JRSUIConstants$Property = ::apple::laf::JRSUIConstants$Property;
using $JRSUIConstants$State = ::apple::laf::JRSUIConstants$State;
using $JRSUIConstants$Widget = ::apple::laf::JRSUIConstants$Widget;
using $JRSUIState = ::apple::laf::JRSUIState;
using $AquaBorder = ::com::apple::laf::AquaBorder;
using $AquaFocusHandler = ::com::apple::laf::AquaFocusHandler;
using $AquaPainter = ::com::apple::laf::AquaPainter;
using $AquaUtilControlSize$SizeDescriptor = ::com::apple::laf::AquaUtilControlSize$SizeDescriptor;
using $AquaUtilControlSize$SizeVariant = ::com::apple::laf::AquaUtilControlSize$SizeVariant;
using $AquaUtils$RecyclableSingletonFromDefaultConstructor = ::com::apple::laf::AquaUtils$RecyclableSingletonFromDefaultConstructor;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaScrollRegionBorder_FieldInfo_[] = {
	{"instance", "Lcom/apple/laf/AquaUtils$RecyclableSingletonFromDefaultConstructor;", "Lcom/apple/laf/AquaUtils$RecyclableSingletonFromDefaultConstructor<Lcom/apple/laf/AquaScrollRegionBorder;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaScrollRegionBorder, instance)},
	{}
};

$MethodInfo _AquaScrollRegionBorder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaScrollRegionBorder::*)()>(&AquaScrollRegionBorder::init$))},
	{"createPainter", "()Lcom/apple/laf/AquaPainter;", "()Lcom/apple/laf/AquaPainter<+Lapple/laf/JRSUIState;>;", $PROTECTED},
	{"getScrollRegionBorder", "()Lcom/apple/laf/AquaScrollRegionBorder;", nullptr, $PUBLIC | $STATIC, $method(static_cast<AquaScrollRegionBorder*(*)()>(&AquaScrollRegionBorder::getScrollRegionBorder))},
	{"getState", "(Ljavax/swing/JComponent;)Lapple/laf/JRSUIConstants$State;", nullptr, $PROTECTED},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AquaScrollRegionBorder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaScrollRegionBorder",
	"com.apple.laf.AquaBorder",
	nullptr,
	_AquaScrollRegionBorder_FieldInfo_,
	_AquaScrollRegionBorder_MethodInfo_
};

$Object* allocate$AquaScrollRegionBorder($Class* clazz) {
	return $of($alloc(AquaScrollRegionBorder));
}

$AquaUtils$RecyclableSingletonFromDefaultConstructor* AquaScrollRegionBorder::instance = nullptr;

AquaScrollRegionBorder* AquaScrollRegionBorder::getScrollRegionBorder() {
	$init(AquaScrollRegionBorder);
	return $cast(AquaScrollRegionBorder, $nc(AquaScrollRegionBorder::instance)->get());
}

void AquaScrollRegionBorder::init$() {
	$useLocalCurrentObjectStackCache();
	$AquaBorder::init$($$new($AquaUtilControlSize$SizeDescriptor, $($$new($AquaUtilControlSize$SizeVariant)->alterMargins(2, 2, 2, 2))));
}

$AquaPainter* AquaScrollRegionBorder::createPainter() {
	$var($JRSUIState, state, $JRSUIState::getInstance());
	$init($JRSUIConstants$Widget);
	$nc(state)->set($JRSUIConstants$Widget::FRAME_LIST_BOX);
	return $AquaPainter::create(state, 7, 7, 3, 3, 3, 3);
}

void AquaScrollRegionBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	$var($JRSUIConstants$State, state, getState($cast($JComponent, c)));
	$nc($nc(this->painter)->state)->set(state);
	$init($JRSUIConstants$State);
	$init($JRSUIConstants$Focused);
	$nc($nc(this->painter)->state)->set(isFocused(c) && state == $JRSUIConstants$State::ACTIVE ? static_cast<$JRSUIConstants$Property*>($JRSUIConstants$Focused::YES) : static_cast<$JRSUIConstants$Property*>($JRSUIConstants$Focused::NO));
	$nc(this->painter)->paint(g, c, x, y, width, height);
}

$JRSUIConstants$State* AquaScrollRegionBorder::getState($JComponent* c) {
	if (!$AquaFocusHandler::isActive(c)) {
		$init($JRSUIConstants$State);
		return $JRSUIConstants$State::INACTIVE;
	}
	if (!$nc(c)->isEnabled()) {
		$init($JRSUIConstants$State);
		return $JRSUIConstants$State::DISABLED;
	}
	$init($JRSUIConstants$State);
	return $JRSUIConstants$State::ACTIVE;
}

void clinit$AquaScrollRegionBorder($Class* class$) {
	$assignStatic(AquaScrollRegionBorder::instance, $new($AquaUtils$RecyclableSingletonFromDefaultConstructor, AquaScrollRegionBorder::class$));
}

AquaScrollRegionBorder::AquaScrollRegionBorder() {
}

$Class* AquaScrollRegionBorder::load$($String* name, bool initialize) {
	$loadClass(AquaScrollRegionBorder, name, initialize, &_AquaScrollRegionBorder_ClassInfo_, clinit$AquaScrollRegionBorder, allocate$AquaScrollRegionBorder);
	return class$;
}

$Class* AquaScrollRegionBorder::class$ = nullptr;

		} // laf
	} // apple
} // com