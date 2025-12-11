#include <com/apple/laf/AquaButtonBorder$Dynamic.h>

#include <apple/laf/JRSUIConstants$Animating.h>
#include <apple/laf/JRSUIConstants$Property.h>
#include <apple/laf/JRSUIConstants$Size.h>
#include <apple/laf/JRSUIConstants$State.h>
#include <apple/laf/JRSUIConstants$Widget.h>
#include <apple/laf/JRSUIState.h>
#include <com/apple/laf/AquaBorder.h>
#include <com/apple/laf/AquaButtonBorder$Dynamic$1.h>
#include <com/apple/laf/AquaButtonBorder$SizeConstants.h>
#include <com/apple/laf/AquaButtonBorder.h>
#include <com/apple/laf/AquaPainter.h>
#include <com/apple/laf/AquaUtilControlSize$SizeDescriptor.h>
#include <com/apple/laf/AquaUtilControlSize$SizeVariant.h>
#include <com/apple/laf/AquaUtilControlSize.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

#undef ALTERNATE_BEVEL_INSETS
#undef ALTERNATE_PUSH_INSETS
#undef ALTERNATE_SQUARE_INSETS
#undef BUTTON_BEVEL
#undef BUTTON_BEVEL_ROUND
#undef BUTTON_PUSH
#undef MINI
#undef NO
#undef PULSED
#undef REGULAR
#undef YES

using $JRSUIConstants$Animating = ::apple::laf::JRSUIConstants$Animating;
using $JRSUIConstants$Property = ::apple::laf::JRSUIConstants$Property;
using $JRSUIConstants$Size = ::apple::laf::JRSUIConstants$Size;
using $JRSUIConstants$State = ::apple::laf::JRSUIConstants$State;
using $JRSUIConstants$Widget = ::apple::laf::JRSUIConstants$Widget;
using $JRSUIState = ::apple::laf::JRSUIState;
using $AquaButtonBorder = ::com::apple::laf::AquaButtonBorder;
using $AquaButtonBorder$Dynamic$1 = ::com::apple::laf::AquaButtonBorder$Dynamic$1;
using $AquaButtonBorder$SizeConstants = ::com::apple::laf::AquaButtonBorder$SizeConstants;
using $AquaUtilControlSize = ::com::apple::laf::AquaUtilControlSize;
using $AquaUtilControlSize$SizeDescriptor = ::com::apple::laf::AquaUtilControlSize$SizeDescriptor;
using $AquaUtilControlSize$SizeVariant = ::com::apple::laf::AquaUtilControlSize$SizeVariant;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $JComponent = ::javax::swing::JComponent;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaButtonBorder$Dynamic_FieldInfo_[] = {
	{"ALTERNATE_PUSH_INSETS", "Ljava/awt/Insets;", nullptr, $FINAL, $field(AquaButtonBorder$Dynamic, ALTERNATE_PUSH_INSETS)},
	{"ALTERNATE_BEVEL_INSETS", "Ljava/awt/Insets;", nullptr, $FINAL, $field(AquaButtonBorder$Dynamic, ALTERNATE_BEVEL_INSETS)},
	{"ALTERNATE_SQUARE_INSETS", "Ljava/awt/Insets;", nullptr, $FINAL, $field(AquaButtonBorder$Dynamic, ALTERNATE_SQUARE_INSETS)},
	{}
};

$MethodInfo _AquaButtonBorder$Dynamic_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaButtonBorder$Dynamic::*)()>(&AquaButtonBorder$Dynamic::init$))},
	{"<init>", "(Lcom/apple/laf/AquaButtonBorder$Dynamic;)V", nullptr, $PUBLIC, $method(static_cast<void(AquaButtonBorder$Dynamic::*)(AquaButtonBorder$Dynamic*)>(&AquaButtonBorder$Dynamic::init$))},
	{"doButtonPaint", "(Ljavax/swing/AbstractButton;Ljavax/swing/ButtonModel;Ljava/awt/Graphics;IIII)V", nullptr, $PROTECTED},
	{"getButtonState", "(Ljavax/swing/AbstractButton;Ljavax/swing/ButtonModel;)Lapple/laf/JRSUIConstants$State;", nullptr, $PROTECTED},
	{"getContentInsets", "(Ljavax/swing/AbstractButton;II)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"getStyleForSize", "(Ljavax/swing/AbstractButton;Lapple/laf/JRSUIConstants$Size;II)Lapple/laf/JRSUIConstants$Widget;", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _AquaButtonBorder$Dynamic_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaButtonBorder$Dynamic", "com.apple.laf.AquaButtonBorder", "Dynamic", $PUBLIC | $STATIC},
	{"com.apple.laf.AquaButtonBorder$Dynamic$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaButtonBorder$Dynamic_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaButtonBorder$Dynamic",
	"com.apple.laf.AquaButtonBorder",
	nullptr,
	_AquaButtonBorder$Dynamic_FieldInfo_,
	_AquaButtonBorder$Dynamic_MethodInfo_,
	nullptr,
	nullptr,
	_AquaButtonBorder$Dynamic_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaButtonBorder"
};

$Object* allocate$AquaButtonBorder$Dynamic($Class* clazz) {
	return $of($alloc(AquaButtonBorder$Dynamic));
}

void AquaButtonBorder$Dynamic::init$() {
	$useLocalCurrentObjectStackCache();
	$AquaButtonBorder::init$(static_cast<$AquaUtilControlSize$SizeDescriptor*>($$new($AquaButtonBorder$Dynamic$1, $($$new($AquaUtilControlSize$SizeVariant, 75, 29)->alterMargins(3, 20, 5, 20)))));
	$set(this, ALTERNATE_PUSH_INSETS, $new($Insets, 3, 12, 5, 12));
	$set(this, ALTERNATE_BEVEL_INSETS, $new($Insets, 0, 5, 0, 5));
	$set(this, ALTERNATE_SQUARE_INSETS, $new($Insets, 0, 2, 0, 2));
}

void AquaButtonBorder$Dynamic::init$(AquaButtonBorder$Dynamic* other) {
	$AquaButtonBorder::init$(static_cast<$AquaButtonBorder*>(other));
	$set(this, ALTERNATE_PUSH_INSETS, $new($Insets, 3, 12, 5, 12));
	$set(this, ALTERNATE_BEVEL_INSETS, $new($Insets, 0, 5, 0, 5));
	$set(this, ALTERNATE_SQUARE_INSETS, $new($Insets, 0, 2, 0, 2));
}

$JRSUIConstants$State* AquaButtonBorder$Dynamic::getButtonState($AbstractButton* b, $ButtonModel* model) {
	$var($JRSUIConstants$State, state, $AquaButtonBorder::getButtonState(b, model));
	$init($JRSUIConstants$State);
	$init($JRSUIConstants$Animating);
	$nc($nc(this->painter)->state)->set(state == $JRSUIConstants$State::PULSED ? static_cast<$JRSUIConstants$Property*>($JRSUIConstants$Animating::YES) : static_cast<$JRSUIConstants$Property*>($JRSUIConstants$Animating::NO));
	return state;
}

$Insets* AquaButtonBorder$Dynamic::getContentInsets($AbstractButton* b, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$var($JRSUIConstants$Size, size, $AquaUtilControlSize::getUserSizeFrom(b));
	$var($JRSUIConstants$Widget, style, getStyleForSize(b, size, width, height));
	$init($JRSUIConstants$Widget);
	if (style == $JRSUIConstants$Widget::BUTTON_PUSH) {
		return this->ALTERNATE_PUSH_INSETS;
	}
	if (style == $JRSUIConstants$Widget::BUTTON_BEVEL_ROUND) {
		return this->ALTERNATE_BEVEL_INSETS;
	}
	if (style == $JRSUIConstants$Widget::BUTTON_BEVEL) {
		return this->ALTERNATE_SQUARE_INSETS;
	}
	return nullptr;
}

void AquaButtonBorder$Dynamic::doButtonPaint($AbstractButton* b, $ButtonModel* model, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$var($JRSUIConstants$Size, size, $AquaUtilControlSize::getUserSizeFrom(b));
	$nc($nc(this->painter)->state)->set(size);
	$var($JRSUIConstants$Widget, style, getStyleForSize(b, size, width, height));
	$nc($nc(this->painter)->state)->set(style);
	$init($JRSUIConstants$Widget);
	if (style == $JRSUIConstants$Widget::BUTTON_PUSH && y % 2 == 0) {
		$init($JRSUIConstants$Size);
		if (size == $JRSUIConstants$Size::REGULAR) {
			y += 1;
			height -= 1;
		}
		if (size == $JRSUIConstants$Size::MINI) {
			height -= 1;
			x += 4;
			width -= 8;
		}
	}
	$AquaButtonBorder::doButtonPaint(b, model, g, x, y, width, height);
}

$JRSUIConstants$Widget* AquaButtonBorder$Dynamic::getStyleForSize($AbstractButton* b, $JRSUIConstants$Size* size, int32_t width, int32_t height) {
	$init($JRSUIConstants$Size);
	if (size != nullptr && size != $JRSUIConstants$Size::REGULAR) {
		$init($JRSUIConstants$Widget);
		return $JRSUIConstants$Widget::BUTTON_PUSH;
	}
	if (height < $AquaButtonBorder$SizeConstants::fSquareButtonHeightThreshold || width < $AquaButtonBorder$SizeConstants::fSquareButtonWidthThreshold) {
		$init($JRSUIConstants$Widget);
		return $JRSUIConstants$Widget::BUTTON_BEVEL;
	}
	if (height <= $AquaButtonBorder$SizeConstants::fNormalButtonHeight + 3 && width < $AquaButtonBorder$SizeConstants::fNormalMinButtonWidth) {
		$init($JRSUIConstants$Widget);
		return $JRSUIConstants$Widget::BUTTON_BEVEL;
	}
	bool var$0 = (height > $AquaButtonBorder$SizeConstants::fNormalButtonHeight + 3) || ($nc(b)->getIcon() != nullptr);
	if (var$0 || hasSmallerInsets(b)) {
		$init($JRSUIConstants$Widget);
		return $JRSUIConstants$Widget::BUTTON_BEVEL_ROUND;
	}
	$init($JRSUIConstants$Widget);
	return $JRSUIConstants$Widget::BUTTON_PUSH;
}

AquaButtonBorder$Dynamic::AquaButtonBorder$Dynamic() {
}

$Class* AquaButtonBorder$Dynamic::load$($String* name, bool initialize) {
	$loadClass(AquaButtonBorder$Dynamic, name, initialize, &_AquaButtonBorder$Dynamic_ClassInfo_, allocate$AquaButtonBorder$Dynamic);
	return class$;
}

$Class* AquaButtonBorder$Dynamic::class$ = nullptr;

		} // laf
	} // apple
} // com