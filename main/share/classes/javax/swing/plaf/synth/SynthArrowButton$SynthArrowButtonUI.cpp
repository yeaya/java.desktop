#include <javax/swing/plaf/synth/SynthArrowButton$SynthArrowButtonUI.h>

#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/synth/SynthArrowButton.h>
#include <javax/swing/plaf/synth/SynthButtonUI.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <jcpp.h>

#undef MAX_VALUE

using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $SynthArrowButton = ::javax::swing::plaf::synth::SynthArrowButton;
using $SynthButtonUI = ::javax::swing::plaf::synth::SynthButtonUI;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthPainter = ::javax::swing::plaf::synth::SynthPainter;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$MethodInfo _SynthArrowButton$SynthArrowButtonUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SynthArrowButton$SynthArrowButtonUI::*)()>(&SynthArrowButton$SynthArrowButtonUI::init$))},
	{"getMaximumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"installDefaults", "(Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED},
	{"paint", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"paintBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, 0},
	{"paintBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SynthArrowButton$SynthArrowButtonUI_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.SynthArrowButton$SynthArrowButtonUI", "javax.swing.plaf.synth.SynthArrowButton", "SynthArrowButtonUI", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SynthArrowButton$SynthArrowButtonUI_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.synth.SynthArrowButton$SynthArrowButtonUI",
	"javax.swing.plaf.synth.SynthButtonUI",
	nullptr,
	nullptr,
	_SynthArrowButton$SynthArrowButtonUI_MethodInfo_,
	nullptr,
	nullptr,
	_SynthArrowButton$SynthArrowButtonUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.SynthArrowButton"
};

$Object* allocate$SynthArrowButton$SynthArrowButtonUI($Class* clazz) {
	return $of($alloc(SynthArrowButton$SynthArrowButtonUI));
}

void SynthArrowButton$SynthArrowButtonUI::init$() {
	$SynthButtonUI::init$();
}

void SynthArrowButton$SynthArrowButtonUI::installDefaults($AbstractButton* b) {
	$SynthButtonUI::installDefaults(b);
	updateStyle(b);
}

void SynthArrowButton$SynthArrowButtonUI::paint($SynthContext* context, $Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$var($SynthArrowButton, button, $cast($SynthArrowButton, $nc(context)->getComponent()));
	$var($SynthContext, var$0, context);
	$var($Graphics, var$1, g);
	int32_t var$2 = $nc(button)->getWidth();
	int32_t var$3 = button->getHeight();
	$nc($(context->getPainter()))->paintArrowButtonForeground(var$0, var$1, 0, 0, var$2, var$3, button->getDirection());
}

void SynthArrowButton$SynthArrowButtonUI::paintBackground($SynthContext* context, $Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($SynthContext, var$0, context);
	$var($Graphics, var$1, g);
	int32_t var$2 = $nc(c)->getWidth();
	$nc($($nc(context)->getPainter()))->paintArrowButtonBackground(var$0, var$1, 0, 0, var$2, c->getHeight());
}

void SynthArrowButton$SynthArrowButtonUI::paintBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($($nc(context)->getPainter()))->paintArrowButtonBorder(context, g, x, y, w, h);
}

$Dimension* SynthArrowButton$SynthArrowButtonUI::getMinimumSize() {
	return $new($Dimension, 5, 5);
}

$Dimension* SynthArrowButton$SynthArrowButtonUI::getMaximumSize() {
	return $new($Dimension, $Integer::MAX_VALUE, $Integer::MAX_VALUE);
}

$Dimension* SynthArrowButton$SynthArrowButtonUI::getPreferredSize($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($SynthContext, context, getContext(c));
	$var($Dimension, dim, nullptr);
	if ($nc($($nc(context)->getComponent()))->getName() == "ScrollBar.button"_s) {
		$assign(dim, $cast($Dimension, $nc($(context->getStyle()))->get(context, "ScrollBar.buttonSize"_s)));
	}
	if (dim == nullptr) {
		int32_t size = $nc($($nc(context)->getStyle()))->getInt(context, "ArrowButton.size"_s, 16);
		$assign(dim, $new($Dimension, size, size));
	}
	$var($Container, parent, $nc($($nc(context)->getComponent()))->getParent());
	if ($instanceOf($JComponent, parent) && !($instanceOf($JComboBox, parent))) {
		$var($Object, scaleKey, $nc(($cast($JComponent, parent)))->getClientProperty("JComponent.sizeVariant"_s));
		if (scaleKey != nullptr) {
			if ("large"_s->equals(scaleKey)) {
				$assign(dim, $new($Dimension, $cast(int32_t, ($nc(dim)->width * 1.15)), $cast(int32_t, (dim->height * 1.15))));
			} else if ("small"_s->equals(scaleKey)) {
				$assign(dim, $new($Dimension, $cast(int32_t, ($nc(dim)->width * 0.857)), $cast(int32_t, (dim->height * 0.857))));
			} else if ("mini"_s->equals(scaleKey)) {
				$assign(dim, $new($Dimension, $cast(int32_t, ($nc(dim)->width * 0.714)), $cast(int32_t, (dim->height * 0.714))));
			}
		}
	}
	return dim;
}

SynthArrowButton$SynthArrowButtonUI::SynthArrowButton$SynthArrowButtonUI() {
}

$Class* SynthArrowButton$SynthArrowButtonUI::load$($String* name, bool initialize) {
	$loadClass(SynthArrowButton$SynthArrowButtonUI, name, initialize, &_SynthArrowButton$SynthArrowButtonUI_ClassInfo_, allocate$SynthArrowButton$SynthArrowButtonUI);
	return class$;
}

$Class* SynthArrowButton$SynthArrowButtonUI::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax