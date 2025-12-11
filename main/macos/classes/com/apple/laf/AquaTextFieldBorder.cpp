#include <com/apple/laf/AquaTextFieldBorder.h>

#include <apple/laf/JRSUIConstants$Focused.h>
#include <apple/laf/JRSUIConstants$FrameOnly.h>
#include <apple/laf/JRSUIConstants$Property.h>
#include <apple/laf/JRSUIConstants$Size.h>
#include <apple/laf/JRSUIConstants$State.h>
#include <apple/laf/JRSUIConstants$Widget.h>
#include <apple/laf/JRSUIState.h>
#include <com/apple/laf/AquaBorder.h>
#include <com/apple/laf/AquaFocusHandler.h>
#include <com/apple/laf/AquaPainter.h>
#include <com/apple/laf/AquaUtilControlSize$SizeDescriptor.h>
#include <com/apple/laf/AquaUtilControlSize$SizeVariant.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <com/apple/laf/AquaUtils$RecyclableSingletonFromDefaultConstructor.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/InsetsUIResource.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef ACTIVE
#undef DISABLED
#undef FRAME_TEXT_FIELD
#undef INACTIVE
#undef LARGE
#undef NO
#undef YES

using $JRSUIConstants$Focused = ::apple::laf::JRSUIConstants$Focused;
using $JRSUIConstants$FrameOnly = ::apple::laf::JRSUIConstants$FrameOnly;
using $JRSUIConstants$Property = ::apple::laf::JRSUIConstants$Property;
using $JRSUIConstants$Size = ::apple::laf::JRSUIConstants$Size;
using $JRSUIConstants$State = ::apple::laf::JRSUIConstants$State;
using $JRSUIConstants$Widget = ::apple::laf::JRSUIConstants$Widget;
using $JRSUIState = ::apple::laf::JRSUIState;
using $AquaBorder = ::com::apple::laf::AquaBorder;
using $AquaFocusHandler = ::com::apple::laf::AquaFocusHandler;
using $AquaPainter = ::com::apple::laf::AquaPainter;
using $AquaUtilControlSize$SizeDescriptor = ::com::apple::laf::AquaUtilControlSize$SizeDescriptor;
using $AquaUtilControlSize$SizeVariant = ::com::apple::laf::AquaUtilControlSize$SizeVariant;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $AquaUtils$RecyclableSingletonFromDefaultConstructor = ::com::apple::laf::AquaUtils$RecyclableSingletonFromDefaultConstructor;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $InsetsUIResource = ::javax::swing::plaf::InsetsUIResource;
using $TextUI = ::javax::swing::plaf::TextUI;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaTextFieldBorder_FieldInfo_[] = {
	{"instance", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/AquaTextFieldBorder;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaTextFieldBorder, instance)},
	{}
};

$MethodInfo _AquaTextFieldBorder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaTextFieldBorder::*)()>(&AquaTextFieldBorder::init$))},
	{"<init>", "(Lcom/apple/laf/AquaUtilControlSize$SizeDescriptor;)V", nullptr, $PUBLIC, $method(static_cast<void(AquaTextFieldBorder::*)($AquaUtilControlSize$SizeDescriptor*)>(&AquaTextFieldBorder::init$))},
	{"<init>", "(Lcom/apple/laf/AquaTextFieldBorder;)V", nullptr, $PUBLIC, $method(static_cast<void(AquaTextFieldBorder::*)(AquaTextFieldBorder*)>(&AquaTextFieldBorder::init$))},
	{"getBorderInsets", "(Ljava/awt/Component;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"getShrinkageFor", "(Ljavax/swing/text/JTextComponent;I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($JTextComponent*,int32_t)>(&AquaTextFieldBorder::getShrinkageFor))},
	{"getStateFor", "(Ljavax/swing/text/JTextComponent;)Lapple/laf/JRSUIConstants$State;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$JRSUIConstants$State*(*)($JTextComponent*)>(&AquaTextFieldBorder::getStateFor))},
	{"getSubInsets", "(I)Ljava/awt/Insets;", nullptr, $PROTECTED},
	{"getTextFieldBorder", "()Lcom/apple/laf/AquaTextFieldBorder;", nullptr, $PUBLIC | $STATIC, $method(static_cast<AquaTextFieldBorder*(*)()>(&AquaTextFieldBorder::getTextFieldBorder))},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"setSize", "(Lapple/laf/JRSUIConstants$Size;)V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _AquaTextFieldBorder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaTextFieldBorder",
	"com.apple.laf.AquaBorder",
	nullptr,
	_AquaTextFieldBorder_FieldInfo_,
	_AquaTextFieldBorder_MethodInfo_
};

$Object* allocate$AquaTextFieldBorder($Class* clazz) {
	return $of($alloc(AquaTextFieldBorder));
}

$AquaUtils$RecyclableSingleton* AquaTextFieldBorder::instance = nullptr;

AquaTextFieldBorder* AquaTextFieldBorder::getTextFieldBorder() {
	$init(AquaTextFieldBorder);
	return $cast(AquaTextFieldBorder, $nc(AquaTextFieldBorder::instance)->get());
}

void AquaTextFieldBorder::init$() {
	$useLocalCurrentObjectStackCache();
	AquaTextFieldBorder::init$($$new($AquaUtilControlSize$SizeDescriptor, $($nc($($$new($AquaUtilControlSize$SizeVariant)->alterMargins(6, 7, 6, 7)))->alterInsets(3, 3, 3, 3))));
	$init($JRSUIConstants$Widget);
	$nc($nc(this->painter)->state)->set($JRSUIConstants$Widget::FRAME_TEXT_FIELD);
	$init($JRSUIConstants$FrameOnly);
	$nc($nc(this->painter)->state)->set($JRSUIConstants$FrameOnly::YES);
	$init($JRSUIConstants$Size);
	$nc($nc(this->painter)->state)->set($JRSUIConstants$Size::LARGE);
}

void AquaTextFieldBorder::init$($AquaUtilControlSize$SizeDescriptor* sizeDescriptor) {
	$AquaBorder::init$(sizeDescriptor);
}

void AquaTextFieldBorder::init$(AquaTextFieldBorder* other) {
	$AquaBorder::init$(static_cast<$AquaBorder*>(other));
}

void AquaTextFieldBorder::setSize($JRSUIConstants$Size* size) {
	$AquaBorder::setSize(size);
	$init($JRSUIConstants$Size);
	$nc($nc(this->painter)->state)->set($JRSUIConstants$Size::LARGE);
}

void AquaTextFieldBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf($JTextComponent, c))) {
		$init($JRSUIConstants$State);
		$nc($nc(this->painter)->state)->set($JRSUIConstants$State::ACTIVE);
		$init($JRSUIConstants$Focused);
		$nc($nc(this->painter)->state)->set($JRSUIConstants$Focused::NO);
		$nc(this->painter)->paint(g, c, x, y, width, height);
		return;
	}
	$var($JTextComponent, jc, $cast($JTextComponent, c));
	$var($JRSUIConstants$State, state, getStateFor(jc));
	$nc($nc(this->painter)->state)->set(state);
	$init($JRSUIConstants$State);
	$init($JRSUIConstants$Focused);
	$nc($nc(this->painter)->state)->set($JRSUIConstants$State::ACTIVE == state && $nc(jc)->hasFocus() ? static_cast<$JRSUIConstants$Property*>($JRSUIConstants$Focused::YES) : static_cast<$JRSUIConstants$Property*>($JRSUIConstants$Focused::NO));
	if ($nc(jc)->isOpaque()) {
		$nc(this->painter)->paint(g, c, x, y, width, height);
		return;
	}
	int32_t shrinkage = getShrinkageFor(jc, height);
	$var($Insets, subInsets, getSubInsets(shrinkage));
	x += $nc(subInsets)->left;
	y += subInsets->top;
	width -= (subInsets->left + subInsets->right);
	height -= (subInsets->top + subInsets->bottom);
	if (shrinkage > 0) {
		$var($Rectangle, clipBounds, $nc(g)->getClipBounds());
		$nc(clipBounds)->x += shrinkage;
		clipBounds->width -= shrinkage * 2;
		g->setClip(clipBounds);
	}
	$nc(this->painter)->paint(g, c, x, y, width, height);
}

int32_t AquaTextFieldBorder::getShrinkageFor($JTextComponent* jc, int32_t height) {
	$init(AquaTextFieldBorder);
	$useLocalCurrentObjectStackCache();
	if (jc == nullptr) {
		return 0;
	}
	$var($TextUI, ui, $cast($TextUI, $nc(jc)->getUI()));
	if (ui == nullptr) {
		return 0;
	}
	$var($Dimension, size, $nc(ui)->getPreferredSize(jc));
	if (size == nullptr) {
		return 0;
	}
	int32_t shrinkage = $nc(size)->height - height;
	return (shrinkage < 0) ? 0 : (shrinkage > 3) ? 3 : shrinkage;
}

$Insets* AquaTextFieldBorder::getSubInsets(int32_t shrinkage) {
	$var($Insets, insets, $nc(this->sizeVariant)->insets);
	if (shrinkage > 0) {
		return $new($InsetsUIResource, $nc(insets)->top - shrinkage, insets->left, insets->bottom - shrinkage, insets->right);
	}
	return insets;
}

$Insets* AquaTextFieldBorder::getBorderInsets($Component* c) {
	if (!($instanceOf($JTextComponent, c)) || $nc(c)->isOpaque()) {
		return $new($InsetsUIResource, 3, 7, 3, 7);
	}
	return $new($InsetsUIResource, 5, 5, 5, 5);
}

$JRSUIConstants$State* AquaTextFieldBorder::getStateFor($JTextComponent* jc) {
	$init(AquaTextFieldBorder);
	if (!$AquaFocusHandler::isActive(jc)) {
		$init($JRSUIConstants$State);
		return $JRSUIConstants$State::INACTIVE;
	}
	if (!$nc(jc)->isEnabled()) {
		$init($JRSUIConstants$State);
		return $JRSUIConstants$State::DISABLED;
	}
	if (!$nc(jc)->isEditable()) {
		$init($JRSUIConstants$State);
		return $JRSUIConstants$State::DISABLED;
	}
	$init($JRSUIConstants$State);
	return $JRSUIConstants$State::ACTIVE;
}

void clinit$AquaTextFieldBorder($Class* class$) {
	$assignStatic(AquaTextFieldBorder::instance, $new($AquaUtils$RecyclableSingletonFromDefaultConstructor, AquaTextFieldBorder::class$));
}

AquaTextFieldBorder::AquaTextFieldBorder() {
}

$Class* AquaTextFieldBorder::load$($String* name, bool initialize) {
	$loadClass(AquaTextFieldBorder, name, initialize, &_AquaTextFieldBorder_ClassInfo_, clinit$AquaTextFieldBorder, allocate$AquaTextFieldBorder);
	return class$;
}

$Class* AquaTextFieldBorder::class$ = nullptr;

		} // laf
	} // apple
} // com