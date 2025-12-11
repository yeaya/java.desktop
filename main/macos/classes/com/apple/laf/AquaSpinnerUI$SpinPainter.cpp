#include <com/apple/laf/AquaSpinnerUI$SpinPainter.h>

#include <apple/laf/JRSUIConstants$BooleanValue.h>
#include <apple/laf/JRSUIConstants$Property.h>
#include <apple/laf/JRSUIConstants$Size.h>
#include <apple/laf/JRSUIConstants$State.h>
#include <apple/laf/JRSUIState.h>
#include <apple/laf/JRSUIStateFactory.h>
#include <com/apple/laf/AquaPainter.h>
#include <com/apple/laf/AquaSpinnerUI.h>
#include <com/apple/laf/AquaUtilControlSize.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JSpinner.h>
#include <jcpp.h>

#undef ACTIVE
#undef DISABLED
#undef MINI
#undef NO
#undef PRESSED
#undef YES

using $JRSUIConstants$BooleanValue = ::apple::laf::JRSUIConstants$BooleanValue;
using $JRSUIConstants$Property = ::apple::laf::JRSUIConstants$Property;
using $JRSUIConstants$Size = ::apple::laf::JRSUIConstants$Size;
using $JRSUIConstants$State = ::apple::laf::JRSUIConstants$State;
using $JRSUIState = ::apple::laf::JRSUIState;
using $JRSUIStateFactory = ::apple::laf::JRSUIStateFactory;
using $AquaPainter = ::com::apple::laf::AquaPainter;
using $AquaSpinnerUI = ::com::apple::laf::AquaSpinnerUI;
using $AquaUtilControlSize = ::com::apple::laf::AquaUtilControlSize;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $JComponent = ::javax::swing::JComponent;
using $JSpinner = ::javax::swing::JSpinner;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaSpinnerUI$SpinPainter_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaSpinnerUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaSpinnerUI$SpinPainter, this$0)},
	{"painter", "Lcom/apple/laf/AquaPainter;", "Lcom/apple/laf/AquaPainter<Lapple/laf/JRSUIState;>;", $FINAL, $field(AquaSpinnerUI$SpinPainter, painter)},
	{"fTopModel", "Ljavax/swing/ButtonModel;", nullptr, 0, $field(AquaSpinnerUI$SpinPainter, fTopModel)},
	{"fBottomModel", "Ljavax/swing/ButtonModel;", nullptr, 0, $field(AquaSpinnerUI$SpinPainter, fBottomModel)},
	{"fPressed", "Z", nullptr, 0, $field(AquaSpinnerUI$SpinPainter, fPressed)},
	{"fTopPressed", "Z", nullptr, 0, $field(AquaSpinnerUI$SpinPainter, fTopPressed)},
	{"kPreferredSize", "Ljava/awt/Dimension;", nullptr, 0, $field(AquaSpinnerUI$SpinPainter, kPreferredSize)},
	{}
};

$MethodInfo _AquaSpinnerUI$SpinPainter_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaSpinnerUI;Ljavax/swing/AbstractButton;Ljavax/swing/AbstractButton;)V", nullptr, $PUBLIC, $method(static_cast<void(AquaSpinnerUI$SpinPainter::*)($AquaSpinnerUI*,$AbstractButton*,$AbstractButton*)>(&AquaSpinnerUI$SpinPainter::init$))},
	{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaSpinnerUI$SpinPainter_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaSpinnerUI$SpinPainter", "com.apple.laf.AquaSpinnerUI", "SpinPainter", 0},
	{}
};

$ClassInfo _AquaSpinnerUI$SpinPainter_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaSpinnerUI$SpinPainter",
	"javax.swing.JComponent",
	nullptr,
	_AquaSpinnerUI$SpinPainter_FieldInfo_,
	_AquaSpinnerUI$SpinPainter_MethodInfo_,
	nullptr,
	nullptr,
	_AquaSpinnerUI$SpinPainter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaSpinnerUI"
};

$Object* allocate$AquaSpinnerUI$SpinPainter($Class* clazz) {
	return $of($alloc(AquaSpinnerUI$SpinPainter));
}

void AquaSpinnerUI$SpinPainter::init$($AquaSpinnerUI* this$0, $AbstractButton* top, $AbstractButton* bottom) {
	$set(this, this$0, this$0);
	$JComponent::init$();
	$set(this, painter, $AquaPainter::create($($JRSUIStateFactory::getSpinnerArrows())));
	this->fPressed = false;
	this->fTopPressed = false;
	$set(this, kPreferredSize, $new($Dimension, 15, 24));
	if (top != nullptr) {
		$set(this, fTopModel, top->getModel());
	}
	if (bottom != nullptr) {
		$set(this, fBottomModel, bottom->getModel());
	}
	setFocusable(false);
}

void AquaSpinnerUI$SpinPainter::paint($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->this$0->spinner)->isOpaque()) {
		$nc(g)->setColor($($nc(this->this$0->spinner)->getBackground()));
		int32_t var$0 = getWidth();
		g->fillRect(0, 0, var$0, getHeight());
	}
	$AquaUtilControlSize::applySizeForControl(this->this$0->spinner, this->painter);
	if (isEnabled()) {
		if (this->fTopModel != nullptr && $nc(this->fTopModel)->isPressed()) {
			$init($JRSUIConstants$State);
			$nc($nc(this->painter)->state)->set($JRSUIConstants$State::PRESSED);
			$init($JRSUIConstants$BooleanValue);
			$nc($nc(this->painter)->state)->set($JRSUIConstants$BooleanValue::NO);
		} else if (this->fBottomModel != nullptr && $nc(this->fBottomModel)->isPressed()) {
			$init($JRSUIConstants$State);
			$nc($nc(this->painter)->state)->set($JRSUIConstants$State::PRESSED);
			$init($JRSUIConstants$BooleanValue);
			$nc($nc(this->painter)->state)->set($JRSUIConstants$BooleanValue::YES);
		} else {
			$init($JRSUIConstants$State);
			$nc($nc(this->painter)->state)->set($JRSUIConstants$State::ACTIVE);
		}
	} else {
		$init($JRSUIConstants$State);
		$nc($nc(this->painter)->state)->set($JRSUIConstants$State::DISABLED);
	}
	$var($Rectangle, bounds, getBounds());
	$nc(this->painter)->paint(g, this->this$0->spinner, 0, 0, $nc(bounds)->width, bounds->height);
}

$Dimension* AquaSpinnerUI$SpinPainter::getPreferredSize() {
	$var($JRSUIConstants$Size, size, $AquaUtilControlSize::getUserSizeFrom(this));
	$init($JRSUIConstants$Size);
	if (size == $JRSUIConstants$Size::MINI) {
		return $new($Dimension, $nc(this->kPreferredSize)->width, $nc(this->kPreferredSize)->height - 8);
	}
	return this->kPreferredSize;
}

AquaSpinnerUI$SpinPainter::AquaSpinnerUI$SpinPainter() {
}

$Class* AquaSpinnerUI$SpinPainter::load$($String* name, bool initialize) {
	$loadClass(AquaSpinnerUI$SpinPainter, name, initialize, &_AquaSpinnerUI$SpinPainter_ClassInfo_, allocate$AquaSpinnerUI$SpinPainter);
	return class$;
}

$Class* AquaSpinnerUI$SpinPainter::class$ = nullptr;

		} // laf
	} // apple
} // com