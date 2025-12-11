#include <com/apple/laf/AquaButtonBorder.h>

#include <apple/laf/JRSUIConstants$Focused.h>
#include <apple/laf/JRSUIConstants$Property.h>
#include <apple/laf/JRSUIConstants$State.h>
#include <apple/laf/JRSUIState.h>
#include <com/apple/laf/AquaBorder.h>
#include <com/apple/laf/AquaButtonBorder$1.h>
#include <com/apple/laf/AquaButtonBorder$Dynamic.h>
#include <com/apple/laf/AquaButtonBorder$Toggle.h>
#include <com/apple/laf/AquaButtonBorder$Toolbar.h>
#include <com/apple/laf/AquaFocusHandler.h>
#include <com/apple/laf/AquaPainter.h>
#include <com/apple/laf/AquaUtilControlSize$SizeDescriptor.h>
#include <com/apple/laf/AquaUtilControlSize$SizeVariant.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <com/apple/laf/AquaUtils$RecyclableSingletonFromDefaultConstructor.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/InsetsUIResource.h>
#include <jcpp.h>

#undef ACTIVE
#undef DISABLED
#undef INACTIVE
#undef NO
#undef PRESSED
#undef PULSED
#undef YES

using $JRSUIConstants$Focused = ::apple::laf::JRSUIConstants$Focused;
using $JRSUIConstants$Property = ::apple::laf::JRSUIConstants$Property;
using $JRSUIConstants$State = ::apple::laf::JRSUIConstants$State;
using $JRSUIState = ::apple::laf::JRSUIState;
using $AquaBorder = ::com::apple::laf::AquaBorder;
using $AquaButtonBorder$1 = ::com::apple::laf::AquaButtonBorder$1;
using $AquaButtonBorder$Dynamic = ::com::apple::laf::AquaButtonBorder$Dynamic;
using $AquaButtonBorder$Toggle = ::com::apple::laf::AquaButtonBorder$Toggle;
using $AquaButtonBorder$Toolbar = ::com::apple::laf::AquaButtonBorder$Toolbar;
using $AquaFocusHandler = ::com::apple::laf::AquaFocusHandler;
using $AquaPainter = ::com::apple::laf::AquaPainter;
using $AquaUtilControlSize$SizeDescriptor = ::com::apple::laf::AquaUtilControlSize$SizeDescriptor;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $AquaUtils$RecyclableSingletonFromDefaultConstructor = ::com::apple::laf::AquaUtils$RecyclableSingletonFromDefaultConstructor;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $Border = ::javax::swing::border::Border;
using $InsetsUIResource = ::javax::swing::plaf::InsetsUIResource;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaButtonBorder_FieldInfo_[] = {
	{"fDynamic", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/AquaButtonBorder$Dynamic;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaButtonBorder, fDynamic)},
	{"fToggle", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/AquaButtonBorder$Toggle;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaButtonBorder, fToggle)},
	{"fToolBar", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/AquaButtonBorder$Toolbar;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaButtonBorder, fToolBar)},
	{"fBevel", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/AquaButtonBorder$Named;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaButtonBorder, fBevel)},
	{}
};

$MethodInfo _AquaButtonBorder_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaUtilControlSize$SizeDescriptor;)V", nullptr, $PUBLIC, $method(static_cast<void(AquaButtonBorder::*)($AquaUtilControlSize$SizeDescriptor*)>(&AquaButtonBorder::init$))},
	{"<init>", "(Lcom/apple/laf/AquaButtonBorder;)V", nullptr, $PUBLIC, $method(static_cast<void(AquaButtonBorder::*)(AquaButtonBorder*)>(&AquaButtonBorder::init$))},
	{"alterPreferredSize", "(Ljava/awt/Dimension;)V", nullptr, $PUBLIC},
	{"doButtonPaint", "(Ljavax/swing/AbstractButton;Ljavax/swing/ButtonModel;Ljava/awt/Graphics;IIII)V", nullptr, $PROTECTED},
	{"getBevelButtonBorder", "()Lcom/apple/laf/AquaButtonBorder;", nullptr, $PUBLIC | $STATIC, $method(static_cast<AquaButtonBorder*(*)()>(&AquaButtonBorder::getBevelButtonBorder))},
	{"getBorderInsets", "(Ljava/awt/Component;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"getButtonState", "(Ljavax/swing/AbstractButton;Ljavax/swing/ButtonModel;)Lapple/laf/JRSUIConstants$State;", nullptr, $PROTECTED},
	{"getContentInsets", "(Ljavax/swing/AbstractButton;II)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"getDynamicButtonBorder", "()Lcom/apple/laf/AquaButtonBorder;", nullptr, $PUBLIC | $STATIC, $method(static_cast<AquaButtonBorder*(*)()>(&AquaButtonBorder::getDynamicButtonBorder))},
	{"getToggleButtonBorder", "()Lcom/apple/laf/AquaButtonBorder;", nullptr, $PUBLIC | $STATIC, $method(static_cast<AquaButtonBorder*(*)()>(&AquaButtonBorder::getToggleButtonBorder))},
	{"getToolBarButtonBorder", "()Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Border*(*)()>(&AquaButtonBorder::getToolBarButtonBorder))},
	{"hasSmallerInsets", "(Ljavax/swing/JComponent;)Z", nullptr, $PUBLIC},
	{"isBorderOpaque", "()Z", nullptr, $PUBLIC},
	{"isSelectionPressing", "()Z", nullptr, $PROTECTED},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintButton", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaButtonBorder_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaButtonBorder$Toolbar", "com.apple.laf.AquaButtonBorder", "Toolbar", $PUBLIC | $STATIC},
	{"com.apple.laf.AquaButtonBorder$Named", "com.apple.laf.AquaButtonBorder", "Named", $PUBLIC | $STATIC},
	{"com.apple.laf.AquaButtonBorder$Toggle", "com.apple.laf.AquaButtonBorder", "Toggle", $PUBLIC | $STATIC},
	{"com.apple.laf.AquaButtonBorder$Dynamic", "com.apple.laf.AquaButtonBorder", "Dynamic", $PUBLIC | $STATIC},
	{"com.apple.laf.AquaButtonBorder$SizeConstants", "com.apple.laf.AquaButtonBorder", "SizeConstants", $STATIC},
	{"com.apple.laf.AquaButtonBorder$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaButtonBorder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.apple.laf.AquaButtonBorder",
	"com.apple.laf.AquaBorder",
	nullptr,
	_AquaButtonBorder_FieldInfo_,
	_AquaButtonBorder_MethodInfo_,
	nullptr,
	nullptr,
	_AquaButtonBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.apple.laf.AquaButtonBorder$Toolbar,com.apple.laf.AquaButtonBorder$Named,com.apple.laf.AquaButtonBorder$Toggle,com.apple.laf.AquaButtonBorder$Dynamic,com.apple.laf.AquaButtonBorder$Dynamic$1,com.apple.laf.AquaButtonBorder$SizeConstants,com.apple.laf.AquaButtonBorder$1"
};

$Object* allocate$AquaButtonBorder($Class* clazz) {
	return $of($alloc(AquaButtonBorder));
}

$AquaUtils$RecyclableSingleton* AquaButtonBorder::fDynamic = nullptr;
$AquaUtils$RecyclableSingleton* AquaButtonBorder::fToggle = nullptr;
$AquaUtils$RecyclableSingleton* AquaButtonBorder::fToolBar = nullptr;
$AquaUtils$RecyclableSingleton* AquaButtonBorder::fBevel = nullptr;

AquaButtonBorder* AquaButtonBorder::getDynamicButtonBorder() {
	$init(AquaButtonBorder);
	return $cast(AquaButtonBorder, $nc(AquaButtonBorder::fDynamic)->get());
}

AquaButtonBorder* AquaButtonBorder::getToggleButtonBorder() {
	$init(AquaButtonBorder);
	return $cast(AquaButtonBorder, $nc(AquaButtonBorder::fToggle)->get());
}

$Border* AquaButtonBorder::getToolBarButtonBorder() {
	$init(AquaButtonBorder);
	return $cast($Border, $nc(AquaButtonBorder::fToolBar)->get());
}

AquaButtonBorder* AquaButtonBorder::getBevelButtonBorder() {
	$init(AquaButtonBorder);
	return $cast(AquaButtonBorder, $nc(AquaButtonBorder::fBevel)->get());
}

void AquaButtonBorder::init$($AquaUtilControlSize$SizeDescriptor* sizeDescriptor) {
	$AquaBorder::init$(sizeDescriptor);
}

void AquaButtonBorder::init$(AquaButtonBorder* other) {
	$AquaBorder::init$(static_cast<$AquaBorder*>(other));
}

void AquaButtonBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
}

void AquaButtonBorder::paintButton($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$var($AbstractButton, b, $cast($AbstractButton, c));
	$var($ButtonModel, model, $nc(b)->getModel());
	$var($JRSUIConstants$State, state, getButtonState(b, model));
	$nc($nc(this->painter)->state)->set(state);
	$init($JRSUIConstants$State);
	bool var$0 = (state != $JRSUIConstants$State::DISABLED && state != $JRSUIConstants$State::INACTIVE) && b->isFocusPainted();
	$init($JRSUIConstants$Focused);
	$nc($nc(this->painter)->state)->set(var$0 && isFocused(b) ? static_cast<$JRSUIConstants$Property*>($JRSUIConstants$Focused::YES) : static_cast<$JRSUIConstants$Property*>($JRSUIConstants$Focused::NO));
	$var($Insets, subInsets, $nc(this->sizeVariant)->insets);
	x += $nc(subInsets)->left;
	y += subInsets->top;
	width -= (subInsets->left + subInsets->right);
	height -= (subInsets->top + subInsets->bottom);
	doButtonPaint(b, model, g, x, y, width, height);
}

void AquaButtonBorder::doButtonPaint($AbstractButton* b, $ButtonModel* model, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	$nc(this->painter)->paint(g, b, x, y, width, height);
}

$JRSUIConstants$State* AquaButtonBorder::getButtonState($AbstractButton* b, $ButtonModel* model) {
	if (!$nc(b)->isEnabled()) {
		$init($JRSUIConstants$State);
		return $JRSUIConstants$State::DISABLED;
	}
	if (!$AquaFocusHandler::isActive(b)) {
		$init($JRSUIConstants$State);
		return $JRSUIConstants$State::INACTIVE;
	}
	bool var$0 = $nc(model)->isArmed();
	if (var$0 && model->isPressed()) {
		$init($JRSUIConstants$State);
		return $JRSUIConstants$State::PRESSED;
	}
	bool var$1 = $nc(model)->isSelected();
	if (var$1 && isSelectionPressing()) {
		$init($JRSUIConstants$State);
		return $JRSUIConstants$State::PRESSED;
	}
	if (($instanceOf($JButton, b)) && $nc(($cast($JButton, b)))->isDefaultButton()) {
		$init($JRSUIConstants$State);
		return $JRSUIConstants$State::PULSED;
	}
	$init($JRSUIConstants$State);
	return $JRSUIConstants$State::ACTIVE;
}

bool AquaButtonBorder::isSelectionPressing() {
	return true;
}

bool AquaButtonBorder::hasSmallerInsets($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($Insets, inset, $nc(c)->getInsets());
	$var($Insets, margin, $nc(this->sizeVariant)->margins);
	if ($nc(margin)->equals(inset)) {
		return false;
	}
	return (($nc(inset)->top < $nc(margin)->top) || ($nc(inset)->left < $nc(margin)->left) || ($nc(inset)->right < $nc(margin)->right) || ($nc(inset)->bottom < $nc(margin)->bottom));
}

$Insets* AquaButtonBorder::getBorderInsets($Component* c) {
	if (c == nullptr || !($instanceOf($AbstractButton, c))) {
		return $new($Insets, 0, 0, 0, 0);
	}
	$var($Insets, margin, $nc(($cast($AbstractButton, c)))->getMargin());
	$assign(margin, (margin == nullptr) ? static_cast<$Insets*>($new($InsetsUIResource, 0, 0, 0, 0)) : $cast($Insets, $nc(margin)->clone()));
	margin->top += $nc($nc(this->sizeVariant)->margins)->top;
	margin->bottom += $nc($nc(this->sizeVariant)->margins)->bottom;
	margin->left += $nc($nc(this->sizeVariant)->margins)->left;
	margin->right += $nc($nc(this->sizeVariant)->margins)->right;
	return margin;
}

$Insets* AquaButtonBorder::getContentInsets($AbstractButton* b, int32_t w, int32_t h) {
	return nullptr;
}

void AquaButtonBorder::alterPreferredSize($Dimension* d) {
	if ($nc(this->sizeVariant)->h > 0 && $nc(this->sizeVariant)->h > $nc(d)->height) {
		d->height = $nc(this->sizeVariant)->h;
	}
	if ($nc(this->sizeVariant)->w > 0 && $nc(this->sizeVariant)->w > $nc(d)->width) {
		d->width = $nc(this->sizeVariant)->w;
	}
}

bool AquaButtonBorder::isBorderOpaque() {
	return false;
}

void clinit$AquaButtonBorder($Class* class$) {
	$load($AquaButtonBorder$Dynamic);
	$assignStatic(AquaButtonBorder::fDynamic, $new($AquaUtils$RecyclableSingletonFromDefaultConstructor, $AquaButtonBorder$Dynamic::class$));
	$load($AquaButtonBorder$Toggle);
	$assignStatic(AquaButtonBorder::fToggle, $new($AquaUtils$RecyclableSingletonFromDefaultConstructor, $AquaButtonBorder$Toggle::class$));
	$load($AquaButtonBorder$Toolbar);
	$assignStatic(AquaButtonBorder::fToolBar, $new($AquaUtils$RecyclableSingletonFromDefaultConstructor, $AquaButtonBorder$Toolbar::class$));
	$assignStatic(AquaButtonBorder::fBevel, $new($AquaButtonBorder$1));
}

AquaButtonBorder::AquaButtonBorder() {
}

$Class* AquaButtonBorder::load$($String* name, bool initialize) {
	$loadClass(AquaButtonBorder, name, initialize, &_AquaButtonBorder_ClassInfo_, clinit$AquaButtonBorder, allocate$AquaButtonBorder);
	return class$;
}

$Class* AquaButtonBorder::class$ = nullptr;

		} // laf
	} // apple
} // com