#include <com/apple/laf/AquaButtonLabeledUI$LabeledButtonBorder.h>

#include <apple/laf/JRSUIConstants$AlignmentHorizontal.h>
#include <apple/laf/JRSUIConstants$AlignmentVertical.h>
#include <apple/laf/JRSUIConstants$Property.h>
#include <apple/laf/JRSUIConstants$Size.h>
#include <apple/laf/JRSUIConstants$State.h>
#include <apple/laf/JRSUIState$ValueState.h>
#include <apple/laf/JRSUIState.h>
#include <apple/laf/JRSUIStateFactory.h>
#include <com/apple/laf/AquaBorder.h>
#include <com/apple/laf/AquaButtonBorder.h>
#include <com/apple/laf/AquaButtonLabeledUI.h>
#include <com/apple/laf/AquaPainter.h>
#include <com/apple/laf/AquaUtilControlSize$SizeDescriptor.h>
#include <com/apple/laf/AquaUtilControlSize.h>
#include <java/awt/Graphics.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

#undef ACTIVE
#undef CENTER
#undef DISABLED
#undef INACTIVE
#undef PRESSED

using $JRSUIConstants$AlignmentHorizontal = ::apple::laf::JRSUIConstants$AlignmentHorizontal;
using $JRSUIConstants$AlignmentVertical = ::apple::laf::JRSUIConstants$AlignmentVertical;
using $JRSUIConstants$Property = ::apple::laf::JRSUIConstants$Property;
using $JRSUIConstants$State = ::apple::laf::JRSUIConstants$State;
using $JRSUIState = ::apple::laf::JRSUIState;
using $JRSUIState$ValueState = ::apple::laf::JRSUIState$ValueState;
using $JRSUIStateFactory = ::apple::laf::JRSUIStateFactory;
using $AquaButtonBorder = ::com::apple::laf::AquaButtonBorder;
using $AquaPainter = ::com::apple::laf::AquaPainter;
using $AquaUtilControlSize = ::com::apple::laf::AquaUtilControlSize;
using $AquaUtilControlSize$SizeDescriptor = ::com::apple::laf::AquaUtilControlSize$SizeDescriptor;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $JComponent = ::javax::swing::JComponent;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaButtonLabeledUI$LabeledButtonBorder_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaUtilControlSize$SizeDescriptor;)V", nullptr, $PUBLIC, $method(static_cast<void(AquaButtonLabeledUI$LabeledButtonBorder::*)($AquaUtilControlSize$SizeDescriptor*)>(&AquaButtonLabeledUI$LabeledButtonBorder::init$))},
	{"<init>", "(Lcom/apple/laf/AquaButtonLabeledUI$LabeledButtonBorder;)V", nullptr, $PUBLIC, $method(static_cast<void(AquaButtonLabeledUI$LabeledButtonBorder::*)(AquaButtonLabeledUI$LabeledButtonBorder*)>(&AquaButtonLabeledUI$LabeledButtonBorder::init$))},
	{"createPainter", "()Lcom/apple/laf/AquaPainter;", "()Lcom/apple/laf/AquaPainter<+Lapple/laf/JRSUIState;>;", $PROTECTED},
	{"doButtonPaint", "(Ljavax/swing/AbstractButton;Ljavax/swing/ButtonModel;Ljava/awt/Graphics;IIII)V", nullptr, $PROTECTED},
	{"getButtonState", "(Ljavax/swing/AbstractButton;Ljavax/swing/ButtonModel;)Lapple/laf/JRSUIConstants$State;", nullptr, $PROTECTED},
	{"isIndeterminate", "(Ljavax/swing/AbstractButton;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($AbstractButton*)>(&AquaButtonLabeledUI$LabeledButtonBorder::isIndeterminate))},
	{}
};

$InnerClassInfo _AquaButtonLabeledUI$LabeledButtonBorder_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaButtonLabeledUI$LabeledButtonBorder", "com.apple.laf.AquaButtonLabeledUI", "LabeledButtonBorder", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AquaButtonLabeledUI$LabeledButtonBorder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.apple.laf.AquaButtonLabeledUI$LabeledButtonBorder",
	"com.apple.laf.AquaButtonBorder",
	nullptr,
	nullptr,
	_AquaButtonLabeledUI$LabeledButtonBorder_MethodInfo_,
	nullptr,
	nullptr,
	_AquaButtonLabeledUI$LabeledButtonBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaButtonLabeledUI"
};

$Object* allocate$AquaButtonLabeledUI$LabeledButtonBorder($Class* clazz) {
	return $of($alloc(AquaButtonLabeledUI$LabeledButtonBorder));
}

void AquaButtonLabeledUI$LabeledButtonBorder::init$($AquaUtilControlSize$SizeDescriptor* sizeDescriptor) {
	$AquaButtonBorder::init$(sizeDescriptor);
}

void AquaButtonLabeledUI$LabeledButtonBorder::init$(AquaButtonLabeledUI$LabeledButtonBorder* other) {
	$AquaButtonBorder::init$(static_cast<$AquaButtonBorder*>(other));
}

$AquaPainter* AquaButtonLabeledUI$LabeledButtonBorder::createPainter() {
	$useLocalCurrentObjectStackCache();
	$var($AquaPainter, painter, $AquaPainter::create($($JRSUIStateFactory::getLabeledButton())));
	$init($JRSUIConstants$AlignmentVertical);
	$nc(($cast($JRSUIState$ValueState, $nc(painter)->state)))->set($JRSUIConstants$AlignmentVertical::CENTER);
	$init($JRSUIConstants$AlignmentHorizontal);
	$nc(($cast($JRSUIState$ValueState, painter->state)))->set($JRSUIConstants$AlignmentHorizontal::CENTER);
	return painter;
}

void AquaButtonLabeledUI$LabeledButtonBorder::doButtonPaint($AbstractButton* b, $ButtonModel* model, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	$nc($nc(this->painter)->state)->set($($AquaUtilControlSize::getUserSizeFrom(b)));
	$nc(($cast($JRSUIState$ValueState, $nc(this->painter)->state)))->setValue((double)($nc(model)->isSelected() ? isIndeterminate(b) ? 2 : 1 : 0));
	$AquaButtonBorder::doButtonPaint(b, model, g, x, y, width, height);
}

$JRSUIConstants$State* AquaButtonLabeledUI$LabeledButtonBorder::getButtonState($AbstractButton* b, $ButtonModel* model) {
	$var($JRSUIConstants$State, state, $AquaButtonBorder::getButtonState(b, model));
	$init($JRSUIConstants$State);
	if (state == $JRSUIConstants$State::INACTIVE) {
		return $JRSUIConstants$State::INACTIVE;
	}
	if (state == $JRSUIConstants$State::DISABLED) {
		return $JRSUIConstants$State::DISABLED;
	}
	bool var$0 = $nc(model)->isArmed();
	if (var$0 && model->isPressed()) {
		return $JRSUIConstants$State::PRESSED;
	}
	if ($nc(model)->isSelected()) {
		return $JRSUIConstants$State::ACTIVE;
	}
	return state;
}

bool AquaButtonLabeledUI$LabeledButtonBorder::isIndeterminate($AbstractButton* b) {
	$init(AquaButtonLabeledUI$LabeledButtonBorder);
	return "indeterminate"_s->equals($($nc(b)->getClientProperty("JButton.selectedState"_s)));
}

AquaButtonLabeledUI$LabeledButtonBorder::AquaButtonLabeledUI$LabeledButtonBorder() {
}

$Class* AquaButtonLabeledUI$LabeledButtonBorder::load$($String* name, bool initialize) {
	$loadClass(AquaButtonLabeledUI$LabeledButtonBorder, name, initialize, &_AquaButtonLabeledUI$LabeledButtonBorder_ClassInfo_, allocate$AquaButtonLabeledUI$LabeledButtonBorder);
	return class$;
}

$Class* AquaButtonLabeledUI$LabeledButtonBorder::class$ = nullptr;

		} // laf
	} // apple
} // com