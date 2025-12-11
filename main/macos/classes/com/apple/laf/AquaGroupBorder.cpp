#include <com/apple/laf/AquaGroupBorder.h>

#include <apple/laf/JRSUIConstants$Property.h>
#include <apple/laf/JRSUIConstants$Widget.h>
#include <apple/laf/JRSUIState.h>
#include <com/apple/laf/AquaBorder.h>
#include <com/apple/laf/AquaGroupBorder$TabbedPane.h>
#include <com/apple/laf/AquaGroupBorder$Titled.h>
#include <com/apple/laf/AquaGroupBorder$Titleless.h>
#include <com/apple/laf/AquaPainter.h>
#include <com/apple/laf/AquaUtilControlSize$SizeDescriptor.h>
#include <com/apple/laf/AquaUtilControlSize$SizeVariant.h>
#include <com/apple/laf/AquaUtils$RecyclableSingletonFromDefaultConstructor.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <javax/swing/border/Border.h>
#include <jcpp.h>

#undef FRAME_GROUP_BOX

using $JRSUIConstants$Property = ::apple::laf::JRSUIConstants$Property;
using $JRSUIConstants$Widget = ::apple::laf::JRSUIConstants$Widget;
using $JRSUIState = ::apple::laf::JRSUIState;
using $AquaBorder = ::com::apple::laf::AquaBorder;
using $AquaGroupBorder$TabbedPane = ::com::apple::laf::AquaGroupBorder$TabbedPane;
using $AquaGroupBorder$Titled = ::com::apple::laf::AquaGroupBorder$Titled;
using $AquaGroupBorder$Titleless = ::com::apple::laf::AquaGroupBorder$Titleless;
using $AquaPainter = ::com::apple::laf::AquaPainter;
using $AquaUtilControlSize$SizeDescriptor = ::com::apple::laf::AquaUtilControlSize$SizeDescriptor;
using $AquaUtilControlSize$SizeVariant = ::com::apple::laf::AquaUtilControlSize$SizeVariant;
using $AquaUtils$RecyclableSingletonFromDefaultConstructor = ::com::apple::laf::AquaUtils$RecyclableSingletonFromDefaultConstructor;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Border = ::javax::swing::border::Border;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaGroupBorder_FieldInfo_[] = {
	{"tabbedPaneGroupBorder", "Lcom/apple/laf/AquaUtils$RecyclableSingletonFromDefaultConstructor;", "Lcom/apple/laf/AquaUtils$RecyclableSingletonFromDefaultConstructor<+Ljavax/swing/border/Border;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaGroupBorder, tabbedPaneGroupBorder)},
	{"titleBorderGroupBorder", "Lcom/apple/laf/AquaUtils$RecyclableSingletonFromDefaultConstructor;", "Lcom/apple/laf/AquaUtils$RecyclableSingletonFromDefaultConstructor<+Ljavax/swing/border/Border;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaGroupBorder, titleBorderGroupBorder)},
	{"titlelessGroupBorder", "Lcom/apple/laf/AquaUtils$RecyclableSingletonFromDefaultConstructor;", "Lcom/apple/laf/AquaUtils$RecyclableSingletonFromDefaultConstructor<+Ljavax/swing/border/Border;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaGroupBorder, titlelessGroupBorder)},
	{}
};

$MethodInfo _AquaGroupBorder_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaUtilControlSize$SizeVariant;)V", nullptr, $PROTECTED, $method(static_cast<void(AquaGroupBorder::*)($AquaUtilControlSize$SizeVariant*)>(&AquaGroupBorder::init$))},
	{"getBorderForTitledBorder", "()Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Border*(*)()>(&AquaGroupBorder::getBorderForTitledBorder))},
	{"getTabbedPaneGroupBorder", "()Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Border*(*)()>(&AquaGroupBorder::getTabbedPaneGroupBorder))},
	{"getTitlelessBorder", "()Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Border*(*)()>(&AquaGroupBorder::getTitlelessBorder))},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaGroupBorder_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaGroupBorder$Titleless", "com.apple.laf.AquaGroupBorder", "Titleless", $PROTECTED | $STATIC},
	{"com.apple.laf.AquaGroupBorder$Titled", "com.apple.laf.AquaGroupBorder", "Titled", $PROTECTED | $STATIC},
	{"com.apple.laf.AquaGroupBorder$TabbedPane", "com.apple.laf.AquaGroupBorder", "TabbedPane", $PROTECTED | $STATIC},
	{}
};

$ClassInfo _AquaGroupBorder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.apple.laf.AquaGroupBorder",
	"com.apple.laf.AquaBorder",
	nullptr,
	_AquaGroupBorder_FieldInfo_,
	_AquaGroupBorder_MethodInfo_,
	nullptr,
	nullptr,
	_AquaGroupBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.apple.laf.AquaGroupBorder$Titleless,com.apple.laf.AquaGroupBorder$Titled,com.apple.laf.AquaGroupBorder$TabbedPane"
};

$Object* allocate$AquaGroupBorder($Class* clazz) {
	return $of($alloc(AquaGroupBorder));
}

$AquaUtils$RecyclableSingletonFromDefaultConstructor* AquaGroupBorder::tabbedPaneGroupBorder = nullptr;
$AquaUtils$RecyclableSingletonFromDefaultConstructor* AquaGroupBorder::titleBorderGroupBorder = nullptr;
$AquaUtils$RecyclableSingletonFromDefaultConstructor* AquaGroupBorder::titlelessGroupBorder = nullptr;

$Border* AquaGroupBorder::getTabbedPaneGroupBorder() {
	$init(AquaGroupBorder);
	return $cast($Border, $nc(AquaGroupBorder::tabbedPaneGroupBorder)->get());
}

$Border* AquaGroupBorder::getBorderForTitledBorder() {
	$init(AquaGroupBorder);
	return $cast($Border, $nc(AquaGroupBorder::titleBorderGroupBorder)->get());
}

$Border* AquaGroupBorder::getTitlelessBorder() {
	$init(AquaGroupBorder);
	return $cast($Border, $nc(AquaGroupBorder::titlelessGroupBorder)->get());
}

void AquaGroupBorder::init$($AquaUtilControlSize$SizeVariant* sizeVariant) {
	$AquaBorder::init$($$new($AquaUtilControlSize$SizeDescriptor, sizeVariant));
	$init($JRSUIConstants$Widget);
	$nc($nc(this->painter)->state)->set($JRSUIConstants$Widget::FRAME_GROUP_BOX);
}

void AquaGroupBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	$var($Insets, internalInsets, $nc(this->sizeVariant)->insets);
	x += $nc(internalInsets)->left;
	y += internalInsets->top;
	width -= (internalInsets->left + internalInsets->right);
	height -= (internalInsets->top + internalInsets->bottom);
	$nc(this->painter)->paint(g, c, x, y, width, height);
}

void clinit$AquaGroupBorder($Class* class$) {
	$load($AquaGroupBorder$TabbedPane);
	$assignStatic(AquaGroupBorder::tabbedPaneGroupBorder, $new($AquaUtils$RecyclableSingletonFromDefaultConstructor, $AquaGroupBorder$TabbedPane::class$));
	$load($AquaGroupBorder$Titled);
	$assignStatic(AquaGroupBorder::titleBorderGroupBorder, $new($AquaUtils$RecyclableSingletonFromDefaultConstructor, $AquaGroupBorder$Titled::class$));
	$load($AquaGroupBorder$Titleless);
	$assignStatic(AquaGroupBorder::titlelessGroupBorder, $new($AquaUtils$RecyclableSingletonFromDefaultConstructor, $AquaGroupBorder$Titleless::class$));
}

AquaGroupBorder::AquaGroupBorder() {
}

$Class* AquaGroupBorder::load$($String* name, bool initialize) {
	$loadClass(AquaGroupBorder, name, initialize, &_AquaGroupBorder_ClassInfo_, clinit$AquaGroupBorder, allocate$AquaGroupBorder);
	return class$;
}

$Class* AquaGroupBorder::class$ = nullptr;

		} // laf
	} // apple
} // com