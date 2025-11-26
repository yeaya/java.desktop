#include <javax/swing/plaf/synth/SynthRadioButtonUI.h>

#include <java/awt/Graphics.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ButtonUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicButtonUI.h>
#include <javax/swing/plaf/synth/SynthButtonUI.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/plaf/synth/SynthToggleButtonUI.h>
#include <jcpp.h>

using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $ButtonUI = ::javax::swing::plaf::ButtonUI;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicButtonUI = ::javax::swing::plaf::basic::BasicButtonUI;
using $SynthButtonUI = ::javax::swing::plaf::synth::SynthButtonUI;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthPainter = ::javax::swing::plaf::synth::SynthPainter;
using $SynthToggleButtonUI = ::javax::swing::plaf::synth::SynthToggleButtonUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$MethodInfo _SynthRadioButtonUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SynthRadioButtonUI::*)()>(&SynthRadioButtonUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&SynthRadioButtonUI::createUI))},
	{"getPropertyPrefix", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"getSizingIcon", "(Ljavax/swing/AbstractButton;)Ljavax/swing/Icon;", nullptr, $PROTECTED},
	{"paintBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, 0},
	{"paintBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SynthRadioButtonUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.synth.SynthRadioButtonUI",
	"javax.swing.plaf.synth.SynthToggleButtonUI",
	nullptr,
	nullptr,
	_SynthRadioButtonUI_MethodInfo_
};

$Object* allocate$SynthRadioButtonUI($Class* clazz) {
	return $of($alloc(SynthRadioButtonUI));
}

void SynthRadioButtonUI::init$() {
	$SynthToggleButtonUI::init$();
}

$ComponentUI* SynthRadioButtonUI::createUI($JComponent* b) {
	$init(SynthRadioButtonUI);
	return $new(SynthRadioButtonUI);
}

$String* SynthRadioButtonUI::getPropertyPrefix() {
	return "RadioButton."_s;
}

$Icon* SynthRadioButtonUI::getSizingIcon($AbstractButton* b) {
	return getIcon(b);
}

void SynthRadioButtonUI::paintBackground($SynthContext* context, $Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($SynthContext, var$0, context);
	$var($Graphics, var$1, g);
	int32_t var$2 = $nc(c)->getWidth();
	$nc($($nc(context)->getPainter()))->paintRadioButtonBackground(var$0, var$1, 0, 0, var$2, c->getHeight());
}

void SynthRadioButtonUI::paintBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($($nc(context)->getPainter()))->paintRadioButtonBorder(context, g, x, y, w, h);
}

SynthRadioButtonUI::SynthRadioButtonUI() {
}

$Class* SynthRadioButtonUI::load$($String* name, bool initialize) {
	$loadClass(SynthRadioButtonUI, name, initialize, &_SynthRadioButtonUI_ClassInfo_, allocate$SynthRadioButtonUI);
	return class$;
}

$Class* SynthRadioButtonUI::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax