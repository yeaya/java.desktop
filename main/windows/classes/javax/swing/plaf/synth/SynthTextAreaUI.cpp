#include <javax/swing/plaf/synth/SynthTextAreaUI.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/event/FocusListener.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/plaf/basic/BasicTextAreaUI.h>
#include <javax/swing/plaf/basic/BasicTextUI.h>
#include <javax/swing/plaf/synth/SynthConstants.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <javax/swing/plaf/synth/SynthTextAreaUI$Handler.h>
#include <javax/swing/plaf/synth/SynthTextFieldUI.h>
#include <javax/swing/plaf/synth/SynthUI.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef ENABLED

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $FocusListener = ::java::awt::event::FocusListener;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $TextUI = ::javax::swing::plaf::TextUI;
using $BasicTextAreaUI = ::javax::swing::plaf::basic::BasicTextAreaUI;
using $BasicTextUI = ::javax::swing::plaf::basic::BasicTextUI;
using $SynthConstants = ::javax::swing::plaf::synth::SynthConstants;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;
using $SynthPainter = ::javax::swing::plaf::synth::SynthPainter;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;
using $SynthTextAreaUI$Handler = ::javax::swing::plaf::synth::SynthTextAreaUI$Handler;
using $SynthTextFieldUI = ::javax::swing::plaf::synth::SynthTextFieldUI;
using $SynthUI = ::javax::swing::plaf::synth::SynthUI;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthTextAreaUI_FieldInfo_[] = {
	{"handler", "Ljavax/swing/plaf/synth/SynthTextAreaUI$Handler;", nullptr, $PRIVATE, $field(SynthTextAreaUI, handler)},
	{"style", "Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PRIVATE, $field(SynthTextAreaUI, style)},
	{"updateKBAction", "Z", nullptr, $PRIVATE, $field(SynthTextAreaUI, updateKBAction)},
	{}
};

$MethodInfo _SynthTextAreaUI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SynthTextAreaUI::*)()>(&SynthTextAreaUI::init$))},
	{"access$000", "(Ljavax/swing/plaf/synth/SynthTextAreaUI;)Ljavax/swing/text/JTextComponent;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JTextComponent*(*)(SynthTextAreaUI*)>(&SynthTextAreaUI::access$000))},
	{"access$100", "(Ljavax/swing/plaf/synth/SynthTextAreaUI;)Ljavax/swing/text/JTextComponent;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JTextComponent*(*)(SynthTextAreaUI*)>(&SynthTextAreaUI::access$100))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&SynthTextAreaUI::createUI))},
	{"getContext", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PUBLIC},
	{"getContext", "(Ljavax/swing/JComponent;I)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PRIVATE, $method(static_cast<$SynthContext*(SynthTextAreaUI::*)($JComponent*,int32_t)>(&SynthTextAreaUI::getContext))},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"paint", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"paintBackground", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"paintBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"uninstallDefaults", "()V", nullptr, $PROTECTED},
	{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"updateStyle", "(Ljavax/swing/text/JTextComponent;Z)V", nullptr, $PRIVATE, $method(static_cast<void(SynthTextAreaUI::*)($JTextComponent*,bool)>(&SynthTextAreaUI::updateStyle))},
	{}
};

$InnerClassInfo _SynthTextAreaUI_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.SynthTextAreaUI$Handler", "javax.swing.plaf.synth.SynthTextAreaUI", "Handler", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _SynthTextAreaUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.synth.SynthTextAreaUI",
	"javax.swing.plaf.basic.BasicTextAreaUI",
	"javax.swing.plaf.synth.SynthUI",
	_SynthTextAreaUI_FieldInfo_,
	_SynthTextAreaUI_MethodInfo_,
	nullptr,
	nullptr,
	_SynthTextAreaUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.SynthTextAreaUI$Handler"
};

$Object* allocate$SynthTextAreaUI($Class* clazz) {
	return $of($alloc(SynthTextAreaUI));
}

int32_t SynthTextAreaUI::hashCode() {
	 return this->$BasicTextAreaUI::hashCode();
}

bool SynthTextAreaUI::equals(Object$* arg0) {
	 return this->$BasicTextAreaUI::equals(arg0);
}

$Object* SynthTextAreaUI::clone() {
	 return this->$BasicTextAreaUI::clone();
}

$String* SynthTextAreaUI::toString() {
	 return this->$BasicTextAreaUI::toString();
}

void SynthTextAreaUI::finalize() {
	this->$BasicTextAreaUI::finalize();
}

$JTextComponent* SynthTextAreaUI::access$100(SynthTextAreaUI* x0) {
	$init(SynthTextAreaUI);
	return $nc(x0)->getComponent();
}

$JTextComponent* SynthTextAreaUI::access$000(SynthTextAreaUI* x0) {
	$init(SynthTextAreaUI);
	return $nc(x0)->getComponent();
}

void SynthTextAreaUI::init$() {
	$BasicTextAreaUI::init$();
	$set(this, handler, $new($SynthTextAreaUI$Handler, this));
	this->updateKBAction = true;
}

$ComponentUI* SynthTextAreaUI::createUI($JComponent* ta) {
	$init(SynthTextAreaUI);
	return $new(SynthTextAreaUI);
}

void SynthTextAreaUI::installDefaults() {
	$BasicTextAreaUI::installDefaults();
	updateStyle($(getComponent()), true);
	$nc($(getComponent()))->addFocusListener(this->handler);
}

void SynthTextAreaUI::uninstallDefaults() {
	$var($SynthContext, context, getContext($(getComponent()), $SynthConstants::ENABLED));
	$nc($(getComponent()))->putClientProperty("caretAspectRatio"_s, nullptr);
	$nc($(getComponent()))->removeFocusListener(this->handler);
	$nc(this->style)->uninstallDefaults(context);
	$set(this, style, nullptr);
	$BasicTextAreaUI::uninstallDefaults();
}

void SynthTextAreaUI::updateStyle($JTextComponent* comp, bool updateKBAction) {
	$var($SynthContext, context, getContext(comp, $SynthConstants::ENABLED));
	$var($SynthStyle, oldStyle, this->style);
	$set(this, style, $SynthLookAndFeel::updateStyle(context, this));
	if (this->style != oldStyle) {
		$SynthTextFieldUI::updateStyle(comp, context, $(getPropertyPrefix()));
		if (oldStyle != nullptr && updateKBAction) {
			uninstallKeyboardActions();
			installKeyboardActions();
		}
	}
}

$SynthContext* SynthTextAreaUI::getContext($JComponent* c) {
	return getContext(c, $SynthLookAndFeel::getComponentState(c));
}

$SynthContext* SynthTextAreaUI::getContext($JComponent* c, int32_t state) {
	return $SynthContext::getContext(c, this->style, state);
}

void SynthTextAreaUI::update($Graphics* g, $JComponent* c) {
	$var($SynthContext, context, getContext(c));
	$SynthLookAndFeel::update(context, g);
	$var($SynthContext, var$0, context);
	$var($Graphics, var$1, g);
	int32_t var$2 = $nc(c)->getWidth();
	$nc($($nc(context)->getPainter()))->paintTextAreaBackground(var$0, var$1, 0, 0, var$2, c->getHeight());
	paint(context, g);
}

void SynthTextAreaUI::paint($SynthContext* context, $Graphics* g) {
	$BasicTextAreaUI::paint(g, $(getComponent()));
}

void SynthTextAreaUI::paintBackground($Graphics* g) {
}

void SynthTextAreaUI::paintBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($($nc(context)->getPainter()))->paintTextAreaBorder(context, g, x, y, w, h);
}

void SynthTextAreaUI::propertyChange($PropertyChangeEvent* evt) {
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
	$BasicTextAreaUI::propertyChange(evt);
}

SynthTextAreaUI::SynthTextAreaUI() {
}

$Class* SynthTextAreaUI::load$($String* name, bool initialize) {
	$loadClass(SynthTextAreaUI, name, initialize, &_SynthTextAreaUI_ClassInfo_, allocate$SynthTextAreaUI);
	return class$;
}

$Class* SynthTextAreaUI::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax