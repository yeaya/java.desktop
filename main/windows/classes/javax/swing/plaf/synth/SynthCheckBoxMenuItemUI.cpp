#include <javax/swing/plaf/synth/SynthCheckBoxMenuItemUI.h>

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

$MethodInfo _SynthCheckBoxMenuItemUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SynthCheckBoxMenuItemUI::*)()>(&SynthCheckBoxMenuItemUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&SynthCheckBoxMenuItemUI::createUI))},
	{"getPropertyPrefix", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"paintBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, 0},
	{"paintBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SynthCheckBoxMenuItemUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.synth.SynthCheckBoxMenuItemUI",
	"javax.swing.plaf.synth.SynthMenuItemUI",
	nullptr,
	nullptr,
	_SynthCheckBoxMenuItemUI_MethodInfo_
};

$Object* allocate$SynthCheckBoxMenuItemUI($Class* clazz) {
	return $of($alloc(SynthCheckBoxMenuItemUI));
}

void SynthCheckBoxMenuItemUI::init$() {
	$SynthMenuItemUI::init$();
}

$ComponentUI* SynthCheckBoxMenuItemUI::createUI($JComponent* c) {
	$init(SynthCheckBoxMenuItemUI);
	return $new(SynthCheckBoxMenuItemUI);
}

$String* SynthCheckBoxMenuItemUI::getPropertyPrefix() {
	return "CheckBoxMenuItem"_s;
}

void SynthCheckBoxMenuItemUI::paintBackground($SynthContext* context, $Graphics* g, $JComponent* c) {
	$var($SynthContext, var$0, context);
	$var($Graphics, var$1, g);
	int32_t var$2 = $nc(c)->getWidth();
	$nc($($nc(context)->getPainter()))->paintCheckBoxMenuItemBackground(var$0, var$1, 0, 0, var$2, c->getHeight());
}

void SynthCheckBoxMenuItemUI::paintBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($($nc(context)->getPainter()))->paintCheckBoxMenuItemBorder(context, g, x, y, w, h);
}

SynthCheckBoxMenuItemUI::SynthCheckBoxMenuItemUI() {
}

$Class* SynthCheckBoxMenuItemUI::load$($String* name, bool initialize) {
	$loadClass(SynthCheckBoxMenuItemUI, name, initialize, &_SynthCheckBoxMenuItemUI_ClassInfo_, allocate$SynthCheckBoxMenuItemUI);
	return class$;
}

$Class* SynthCheckBoxMenuItemUI::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax