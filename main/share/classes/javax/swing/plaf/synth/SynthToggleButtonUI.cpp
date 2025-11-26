#include <javax/swing/plaf/synth/SynthToggleButtonUI.h>

#include <java/awt/Graphics.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ButtonUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicButtonUI.h>
#include <javax/swing/plaf/synth/SynthButtonUI.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <jcpp.h>

using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JComponent = ::javax::swing::JComponent;
using $ButtonUI = ::javax::swing::plaf::ButtonUI;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicButtonUI = ::javax::swing::plaf::basic::BasicButtonUI;
using $SynthButtonUI = ::javax::swing::plaf::synth::SynthButtonUI;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthPainter = ::javax::swing::plaf::synth::SynthPainter;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$MethodInfo _SynthToggleButtonUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SynthToggleButtonUI::*)()>(&SynthToggleButtonUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&SynthToggleButtonUI::createUI))},
	{"getPropertyPrefix", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"paintBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, 0},
	{"paintBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SynthToggleButtonUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.synth.SynthToggleButtonUI",
	"javax.swing.plaf.synth.SynthButtonUI",
	nullptr,
	nullptr,
	_SynthToggleButtonUI_MethodInfo_
};

$Object* allocate$SynthToggleButtonUI($Class* clazz) {
	return $of($alloc(SynthToggleButtonUI));
}

void SynthToggleButtonUI::init$() {
	$SynthButtonUI::init$();
}

$ComponentUI* SynthToggleButtonUI::createUI($JComponent* b) {
	$init(SynthToggleButtonUI);
	return $new(SynthToggleButtonUI);
}

$String* SynthToggleButtonUI::getPropertyPrefix() {
	return "ToggleButton."_s;
}

void SynthToggleButtonUI::paintBackground($SynthContext* context, $Graphics* g, $JComponent* c) {
	if ($nc(($cast($AbstractButton, c)))->isContentAreaFilled()) {
		int32_t x = 0;
		int32_t y = 0;
		int32_t w = $nc(c)->getWidth();
		int32_t h = c->getHeight();
		$var($SynthPainter, painter, $nc(context)->getPainter());
		$nc(painter)->paintToggleButtonBackground(context, g, x, y, w, h);
	}
}

void SynthToggleButtonUI::paintBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($($nc(context)->getPainter()))->paintToggleButtonBorder(context, g, x, y, w, h);
}

SynthToggleButtonUI::SynthToggleButtonUI() {
}

$Class* SynthToggleButtonUI::load$($String* name, bool initialize) {
	$loadClass(SynthToggleButtonUI, name, initialize, &_SynthToggleButtonUI_ClassInfo_, allocate$SynthToggleButtonUI);
	return class$;
}

$Class* SynthToggleButtonUI::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax