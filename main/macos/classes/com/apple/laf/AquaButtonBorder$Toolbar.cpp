#include <com/apple/laf/AquaButtonBorder$Toolbar.h>

#include <apple/laf/JRSUIConstants$Property.h>
#include <apple/laf/JRSUIConstants$Widget.h>
#include <apple/laf/JRSUIState.h>
#include <com/apple/laf/AquaBorder.h>
#include <com/apple/laf/AquaButtonBorder.h>
#include <com/apple/laf/AquaPainter.h>
#include <com/apple/laf/AquaUtilControlSize$SizeDescriptor.h>
#include <com/apple/laf/AquaUtilControlSize$SizeVariant.h>
#include <java/awt/Graphics.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <jcpp.h>

#undef TOOLBAR_ITEM_WELL

using $JRSUIConstants$Property = ::apple::laf::JRSUIConstants$Property;
using $JRSUIConstants$Widget = ::apple::laf::JRSUIConstants$Widget;
using $JRSUIState = ::apple::laf::JRSUIState;
using $AquaButtonBorder = ::com::apple::laf::AquaButtonBorder;
using $AquaUtilControlSize$SizeDescriptor = ::com::apple::laf::AquaUtilControlSize$SizeDescriptor;
using $AquaUtilControlSize$SizeVariant = ::com::apple::laf::AquaUtilControlSize$SizeVariant;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaButtonBorder$Toolbar_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaButtonBorder$Toolbar::*)()>(&AquaButtonBorder$Toolbar::init$))},
	{"<init>", "(Lcom/apple/laf/AquaButtonBorder$Toolbar;)V", nullptr, $PUBLIC, $method(static_cast<void(AquaButtonBorder$Toolbar::*)(AquaButtonBorder$Toolbar*)>(&AquaButtonBorder$Toolbar::init$))},
	{"doButtonPaint", "(Ljavax/swing/AbstractButton;Ljavax/swing/ButtonModel;Ljava/awt/Graphics;IIII)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _AquaButtonBorder$Toolbar_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaButtonBorder$Toolbar", "com.apple.laf.AquaButtonBorder", "Toolbar", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _AquaButtonBorder$Toolbar_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaButtonBorder$Toolbar",
	"com.apple.laf.AquaButtonBorder",
	nullptr,
	nullptr,
	_AquaButtonBorder$Toolbar_MethodInfo_,
	nullptr,
	nullptr,
	_AquaButtonBorder$Toolbar_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaButtonBorder"
};

$Object* allocate$AquaButtonBorder$Toolbar($Class* clazz) {
	return $of($alloc(AquaButtonBorder$Toolbar));
}

void AquaButtonBorder$Toolbar::init$() {
	$useLocalCurrentObjectStackCache();
	$AquaButtonBorder::init$($$new($AquaUtilControlSize$SizeDescriptor, $($$new($AquaUtilControlSize$SizeVariant)->alterMargins(5, 5, 5, 5))));
	$init($JRSUIConstants$Widget);
	$nc($nc(this->painter)->state)->set($JRSUIConstants$Widget::TOOLBAR_ITEM_WELL);
}

void AquaButtonBorder$Toolbar::init$(AquaButtonBorder$Toolbar* other) {
	$AquaButtonBorder::init$(static_cast<$AquaButtonBorder*>(other));
}

void AquaButtonBorder$Toolbar::doButtonPaint($AbstractButton* b, $ButtonModel* model, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	if (!$nc(model)->isSelected()) {
		return;
	}
	$AquaButtonBorder::doButtonPaint(b, model, g, x, y, w, h);
}

AquaButtonBorder$Toolbar::AquaButtonBorder$Toolbar() {
}

$Class* AquaButtonBorder$Toolbar::load$($String* name, bool initialize) {
	$loadClass(AquaButtonBorder$Toolbar, name, initialize, &_AquaButtonBorder$Toolbar_ClassInfo_, allocate$AquaButtonBorder$Toolbar);
	return class$;
}

$Class* AquaButtonBorder$Toolbar::class$ = nullptr;

		} // laf
	} // apple
} // com