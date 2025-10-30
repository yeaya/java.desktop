#include <javax/swing/plaf/synth/SynthTextFieldUI.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/event/FocusListener.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/lang/Number.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicTextFieldUI.h>
#include <javax/swing/plaf/basic/BasicTextUI.h>
#include <javax/swing/plaf/synth/ColorType.h>
#include <javax/swing/plaf/synth/SynthConstants.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <javax/swing/plaf/synth/SynthTextFieldUI$Handler.h>
#include <javax/swing/plaf/synth/SynthUI.h>
#include <javax/swing/text/Caret.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef DISABLED
#undef EMPTY_UIRESOURCE_INSETS
#undef ENABLED
#undef FOCUSED
#undef SELECTED
#undef TEXT_BACKGROUND
#undef TEXT_FOREGROUND

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $FocusListener = ::java::awt::event::FocusListener;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $EventObject = ::java::util::EventObject;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $TextUI = ::javax::swing::plaf::TextUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicTextFieldUI = ::javax::swing::plaf::basic::BasicTextFieldUI;
using $BasicTextUI = ::javax::swing::plaf::basic::BasicTextUI;
using $ColorType = ::javax::swing::plaf::synth::ColorType;
using $SynthConstants = ::javax::swing::plaf::synth::SynthConstants;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;
using $SynthPainter = ::javax::swing::plaf::synth::SynthPainter;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;
using $SynthTextFieldUI$Handler = ::javax::swing::plaf::synth::SynthTextFieldUI$Handler;
using $SynthUI = ::javax::swing::plaf::synth::SynthUI;
using $Caret = ::javax::swing::text::Caret;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthTextFieldUI_FieldInfo_[] = {
	{"handler", "Ljavax/swing/plaf/synth/SynthTextFieldUI$Handler;", nullptr, $PRIVATE, $field(SynthTextFieldUI, handler)},
	{"style", "Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PRIVATE, $field(SynthTextFieldUI, style)},
	{"updateKBAction", "Z", nullptr, $PRIVATE, $field(SynthTextFieldUI, updateKBAction)},
	{}
};

$MethodInfo _SynthTextFieldUI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SynthTextFieldUI::*)()>(&SynthTextFieldUI::init$))},
	{"access$000", "(Ljavax/swing/plaf/synth/SynthTextFieldUI;)Ljavax/swing/text/JTextComponent;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JTextComponent*(*)(SynthTextFieldUI*)>(&SynthTextFieldUI::access$000))},
	{"access$100", "(Ljavax/swing/plaf/synth/SynthTextFieldUI;)Ljavax/swing/text/JTextComponent;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JTextComponent*(*)(SynthTextFieldUI*)>(&SynthTextFieldUI::access$100))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&SynthTextFieldUI::createUI))},
	{"getContext", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PUBLIC},
	{"getContext", "(Ljavax/swing/JComponent;I)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PRIVATE, $method(static_cast<$SynthContext*(SynthTextFieldUI::*)($JComponent*,int32_t)>(&SynthTextFieldUI::getContext))},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"paint", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"paintBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, 0},
	{"paintBackground", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"paintBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"uninstallDefaults", "()V", nullptr, $PROTECTED},
	{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"updateStyle", "(Ljavax/swing/text/JTextComponent;Z)V", nullptr, $PRIVATE, $method(static_cast<void(SynthTextFieldUI::*)($JTextComponent*,bool)>(&SynthTextFieldUI::updateStyle))},
	{"updateStyle", "(Ljavax/swing/text/JTextComponent;Ljavax/swing/plaf/synth/SynthContext;Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($JTextComponent*,$SynthContext*,$String*)>(&SynthTextFieldUI::updateStyle))},
	{}
};

$InnerClassInfo _SynthTextFieldUI_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.SynthTextFieldUI$Handler", "javax.swing.plaf.synth.SynthTextFieldUI", "Handler", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _SynthTextFieldUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.synth.SynthTextFieldUI",
	"javax.swing.plaf.basic.BasicTextFieldUI",
	"javax.swing.plaf.synth.SynthUI",
	_SynthTextFieldUI_FieldInfo_,
	_SynthTextFieldUI_MethodInfo_,
	nullptr,
	nullptr,
	_SynthTextFieldUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.SynthTextFieldUI$Handler"
};

$Object* allocate$SynthTextFieldUI($Class* clazz) {
	return $of($alloc(SynthTextFieldUI));
}

int32_t SynthTextFieldUI::hashCode() {
	 return this->$BasicTextFieldUI::hashCode();
}

bool SynthTextFieldUI::equals(Object$* arg0) {
	 return this->$BasicTextFieldUI::equals(arg0);
}

$Object* SynthTextFieldUI::clone() {
	 return this->$BasicTextFieldUI::clone();
}

$String* SynthTextFieldUI::toString() {
	 return this->$BasicTextFieldUI::toString();
}

void SynthTextFieldUI::finalize() {
	this->$BasicTextFieldUI::finalize();
}

$JTextComponent* SynthTextFieldUI::access$100(SynthTextFieldUI* x0) {
	$init(SynthTextFieldUI);
	return $nc(x0)->getComponent();
}

$JTextComponent* SynthTextFieldUI::access$000(SynthTextFieldUI* x0) {
	$init(SynthTextFieldUI);
	return $nc(x0)->getComponent();
}

void SynthTextFieldUI::init$() {
	$BasicTextFieldUI::init$();
	$set(this, handler, $new($SynthTextFieldUI$Handler, this));
	this->updateKBAction = true;
}

$ComponentUI* SynthTextFieldUI::createUI($JComponent* c) {
	$init(SynthTextFieldUI);
	return $new(SynthTextFieldUI);
}

void SynthTextFieldUI::updateStyle($JTextComponent* comp, bool updateKBAction) {
	$useLocalCurrentObjectStackCache();
	$var($SynthContext, context, getContext(comp, $SynthConstants::ENABLED));
	$var($SynthStyle, oldStyle, this->style);
	$set(this, style, $SynthLookAndFeel::updateStyle(context, this));
	if (this->style != oldStyle) {
		SynthTextFieldUI::updateStyle(comp, context, $(getPropertyPrefix()));
		if (oldStyle != nullptr && updateKBAction) {
			uninstallKeyboardActions();
			installKeyboardActions();
		}
	}
}

void SynthTextFieldUI::updateStyle($JTextComponent* comp, $SynthContext* context, $String* prefix) {
	$init(SynthTextFieldUI);
	$useLocalCurrentObjectStackCache();
	$var($SynthStyle, style, $nc(context)->getStyle());
	$var($Color, color, $nc(comp)->getCaretColor());
	if (color == nullptr || $instanceOf($UIResource, color)) {
		comp->setCaretColor($cast($Color, $($nc(style)->get(context, $$str({prefix, ".caretForeground"_s})))));
	}
	$var($Color, fg, comp->getForeground());
	if (fg == nullptr || $instanceOf($UIResource, fg)) {
		$init($ColorType);
		$assign(fg, $nc(style)->getColorForState(context, $ColorType::TEXT_FOREGROUND));
		if (fg != nullptr) {
			comp->setForeground(fg);
		}
	}
	$var($Object, ar, $nc(style)->get(context, $$str({prefix, ".caretAspectRatio"_s})));
	if ($instanceOf($Number, ar)) {
		comp->putClientProperty("caretAspectRatio"_s, ar);
	}
	context->setComponentState($SynthConstants::SELECTED | $SynthConstants::FOCUSED);
	$var($Color, s, comp->getSelectionColor());
	if (s == nullptr || $instanceOf($UIResource, s)) {
		$init($ColorType);
		comp->setSelectionColor($(style->getColor(context, $ColorType::TEXT_BACKGROUND)));
	}
	$var($Color, sfg, comp->getSelectedTextColor());
	if (sfg == nullptr || $instanceOf($UIResource, sfg)) {
		$init($ColorType);
		comp->setSelectedTextColor($(style->getColor(context, $ColorType::TEXT_FOREGROUND)));
	}
	context->setComponentState($SynthConstants::DISABLED);
	$var($Color, dfg, comp->getDisabledTextColor());
	if (dfg == nullptr || $instanceOf($UIResource, dfg)) {
		$init($ColorType);
		comp->setDisabledTextColor($(style->getColor(context, $ColorType::TEXT_FOREGROUND)));
	}
	$var($Insets, margin, comp->getMargin());
	if (margin == nullptr || $instanceOf($UIResource, margin)) {
		$assign(margin, $cast($Insets, style->get(context, $$str({prefix, ".margin"_s}))));
		if (margin == nullptr) {
			$init($SynthLookAndFeel);
			$assign(margin, $SynthLookAndFeel::EMPTY_UIRESOURCE_INSETS);
		}
		comp->setMargin(margin);
	}
	$var($Caret, caret, comp->getCaret());
	if ($instanceOf($UIResource, caret)) {
		$var($Object, o, style->get(context, $$str({prefix, ".caretBlinkRate"_s})));
		if (o != nullptr && $instanceOf($Integer, o)) {
			$var($Integer, rate, $cast($Integer, o));
			$nc(caret)->setBlinkRate(rate->intValue());
		}
	}
}

$SynthContext* SynthTextFieldUI::getContext($JComponent* c) {
	return getContext(c, $SynthLookAndFeel::getComponentState(c));
}

$SynthContext* SynthTextFieldUI::getContext($JComponent* c, int32_t state) {
	return $SynthContext::getContext(c, this->style, state);
}

void SynthTextFieldUI::update($Graphics* g, $JComponent* c) {
	$var($SynthContext, context, getContext(c));
	$SynthLookAndFeel::update(context, g);
	paintBackground(context, g, c);
	paint(context, g);
}

void SynthTextFieldUI::paint($SynthContext* context, $Graphics* g) {
	$BasicTextFieldUI::paint(g, $(getComponent()));
}

void SynthTextFieldUI::paintBackground($SynthContext* context, $Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($SynthContext, var$0, context);
	$var($Graphics, var$1, g);
	int32_t var$2 = $nc(c)->getWidth();
	$nc($($nc(context)->getPainter()))->paintTextFieldBackground(var$0, var$1, 0, 0, var$2, c->getHeight());
}

void SynthTextFieldUI::paintBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($($nc(context)->getPainter()))->paintTextFieldBorder(context, g, x, y, w, h);
}

void SynthTextFieldUI::paintBackground($Graphics* g) {
}

void SynthTextFieldUI::propertyChange($PropertyChangeEvent* evt) {
	$useLocalCurrentObjectStackCache();
	if ($nc($($nc(evt)->getPropertyName()))->equals("keymap"_s)) {
		if (evt->getNewValue() != nullptr) {
			this->updateKBAction = false;
		} else {
			this->updateKBAction = true;
		}
	}
	if ($SynthLookAndFeel::shouldUpdateStyle(evt)) {
		updateStyle($cast($JTextComponent, $($nc(evt)->getSource())), this->updateKBAction);
	}
	$BasicTextFieldUI::propertyChange(evt);
}

void SynthTextFieldUI::installDefaults() {
	$useLocalCurrentObjectStackCache();
	$BasicTextFieldUI::installDefaults();
	updateStyle($(getComponent()), true);
	$nc($(getComponent()))->addFocusListener(this->handler);
}

void SynthTextFieldUI::uninstallDefaults() {
	$useLocalCurrentObjectStackCache();
	$var($SynthContext, context, getContext($(getComponent()), $SynthConstants::ENABLED));
	$nc($(getComponent()))->putClientProperty("caretAspectRatio"_s, nullptr);
	$nc($(getComponent()))->removeFocusListener(this->handler);
	$nc(this->style)->uninstallDefaults(context);
	$set(this, style, nullptr);
	$BasicTextFieldUI::uninstallDefaults();
}

SynthTextFieldUI::SynthTextFieldUI() {
}

$Class* SynthTextFieldUI::load$($String* name, bool initialize) {
	$loadClass(SynthTextFieldUI, name, initialize, &_SynthTextFieldUI_ClassInfo_, allocate$SynthTextFieldUI);
	return class$;
}

$Class* SynthTextFieldUI::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax