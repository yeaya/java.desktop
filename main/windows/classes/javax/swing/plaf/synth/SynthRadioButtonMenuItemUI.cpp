#include <javax/swing/plaf/synth/SynthRadioButtonMenuItemUI.h>

#include <java/awt/Graphics.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ButtonUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/MenuItemUI.h>
#include <javax/swing/plaf/basic/BasicMenuItemUI.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthMenuItemUI.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <jcpp.h>

using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ButtonUI = ::javax::swing::plaf::ButtonUI;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $MenuItemUI = ::javax::swing::plaf::MenuItemUI;
using $BasicMenuItemUI = ::javax::swing::plaf::basic::BasicMenuItemUI;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthMenuItemUI = ::javax::swing::plaf::synth::SynthMenuItemUI;
using $SynthPainter = ::javax::swing::plaf::synth::SynthPainter;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$MethodInfo _SynthRadioButtonMenuItemUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SynthRadioButtonMenuItemUI::*)()>(&SynthRadioButtonMenuItemUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&SynthRadioButtonMenuItemUI::createUI))},
	{"getPropertyPrefix", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"paintBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, 0},
	{"paintBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SynthRadioButtonMenuItemUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.synth.SynthRadioButtonMenuItemUI",
	"javax.swing.plaf.synth.SynthMenuItemUI",
	nullptr,
	nullptr,
	_SynthRadioButtonMenuItemUI_MethodInfo_
};

$Object* allocate$SynthRadioButtonMenuItemUI($Class* clazz) {
	return $of($alloc(SynthRadioButtonMenuItemUI));
}

void SynthRadioButtonMenuItemUI::init$() {
	$SynthMenuItemUI::init$();
}

$ComponentUI* SynthRadioButtonMenuItemUI::createUI($JComponent* b) {
	$init(SynthRadioButtonMenuItemUI);
	return $new(SynthRadioButtonMenuItemUI);
}

$String* SynthRadioButtonMenuItemUI::getPropertyPrefix() {
	return "RadioButtonMenuItem"_s;
}

void SynthRadioButtonMenuItemUI::paintBackground($SynthContext* context, $Graphics* g, $JComponent* c) {
	$var($SynthContext, var$0, context);
	$var($Graphics, var$1, g);
	int32_t var$2 = $nc(c)->getWidth();
	$nc($($nc(context)->getPainter()))->paintRadioButtonMenuItemBackground(var$0, var$1, 0, 0, var$2, c->getHeight());
}

void SynthRadioButtonMenuItemUI::paintBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($($nc(context)->getPainter()))->paintRadioButtonMenuItemBorder(context, g, x, y, w, h);
}

SynthRadioButtonMenuItemUI::SynthRadioButtonMenuItemUI() {
}

$Class* SynthRadioButtonMenuItemUI::load$($String* name, bool initialize) {
	$loadClass(SynthRadioButtonMenuItemUI, name, initialize, &_SynthRadioButtonMenuItemUI_ClassInfo_, allocate$SynthRadioButtonMenuItemUI);
	return class$;
}

$Class* SynthRadioButtonMenuItemUI::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax