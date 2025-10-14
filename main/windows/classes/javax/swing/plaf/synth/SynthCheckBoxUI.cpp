#include <javax/swing/plaf/synth/SynthCheckBoxUI.h>

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
#include <javax/swing/plaf/basic/BasicButtonUI.h>
#include <javax/swing/plaf/synth/SynthButtonUI.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/plaf/synth/SynthRadioButtonUI.h>
#include <javax/swing/plaf/synth/SynthToggleButtonUI.h>
#include <jcpp.h>

using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ButtonUI = ::javax::swing::plaf::ButtonUI;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicButtonUI = ::javax::swing::plaf::basic::BasicButtonUI;
using $SynthButtonUI = ::javax::swing::plaf::synth::SynthButtonUI;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthPainter = ::javax::swing::plaf::synth::SynthPainter;
using $SynthRadioButtonUI = ::javax::swing::plaf::synth::SynthRadioButtonUI;
using $SynthToggleButtonUI = ::javax::swing::plaf::synth::SynthToggleButtonUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$MethodInfo _SynthCheckBoxUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SynthCheckBoxUI::*)()>(&SynthCheckBoxUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&SynthCheckBoxUI::createUI))},
	{"getPropertyPrefix", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"paintBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, 0},
	{"paintBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SynthCheckBoxUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.synth.SynthCheckBoxUI",
	"javax.swing.plaf.synth.SynthRadioButtonUI",
	nullptr,
	nullptr,
	_SynthCheckBoxUI_MethodInfo_
};

$Object* allocate$SynthCheckBoxUI($Class* clazz) {
	return $of($alloc(SynthCheckBoxUI));
}

void SynthCheckBoxUI::init$() {
	$SynthRadioButtonUI::init$();
}

$ComponentUI* SynthCheckBoxUI::createUI($JComponent* b) {
	$init(SynthCheckBoxUI);
	return $new(SynthCheckBoxUI);
}

$String* SynthCheckBoxUI::getPropertyPrefix() {
	return "CheckBox."_s;
}

void SynthCheckBoxUI::paintBackground($SynthContext* context, $Graphics* g, $JComponent* c) {
	$var($SynthContext, var$0, context);
	$var($Graphics, var$1, g);
	int32_t var$2 = $nc(c)->getWidth();
	$nc($($nc(context)->getPainter()))->paintCheckBoxBackground(var$0, var$1, 0, 0, var$2, c->getHeight());
}

void SynthCheckBoxUI::paintBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($($nc(context)->getPainter()))->paintCheckBoxBorder(context, g, x, y, w, h);
}

SynthCheckBoxUI::SynthCheckBoxUI() {
}

$Class* SynthCheckBoxUI::load$($String* name, bool initialize) {
	$loadClass(SynthCheckBoxUI, name, initialize, &_SynthCheckBoxUI_ClassInfo_, allocate$SynthCheckBoxUI);
	return class$;
}

$Class* SynthCheckBoxUI::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax