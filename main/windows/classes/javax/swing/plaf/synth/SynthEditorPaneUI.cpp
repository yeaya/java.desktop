#include <javax/swing/plaf/synth/SynthEditorPaneUI.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/plaf/basic/BasicEditorPaneUI.h>
#include <javax/swing/plaf/basic/BasicTextUI.h>
#include <javax/swing/plaf/synth/SynthConstants.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <javax/swing/plaf/synth/SynthTextFieldUI.h>
#include <javax/swing/plaf/synth/SynthUI.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef ENABLED
#undef FALSE
#undef HONOR_DISPLAY_PROPERTIES
#undef TRUE

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $JComponent = ::javax::swing::JComponent;
using $JEditorPane = ::javax::swing::JEditorPane;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $TextUI = ::javax::swing::plaf::TextUI;
using $BasicEditorPaneUI = ::javax::swing::plaf::basic::BasicEditorPaneUI;
using $BasicTextUI = ::javax::swing::plaf::basic::BasicTextUI;
using $SynthConstants = ::javax::swing::plaf::synth::SynthConstants;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;
using $SynthPainter = ::javax::swing::plaf::synth::SynthPainter;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;
using $SynthTextFieldUI = ::javax::swing::plaf::synth::SynthTextFieldUI;
using $SynthUI = ::javax::swing::plaf::synth::SynthUI;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthEditorPaneUI_FieldInfo_[] = {
	{"style", "Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PRIVATE, $field(SynthEditorPaneUI, style)},
	{"localTrue", "Ljava/lang/Boolean;", nullptr, $PRIVATE, $field(SynthEditorPaneUI, localTrue)},
	{"updateKBAction", "Z", nullptr, $PRIVATE, $field(SynthEditorPaneUI, updateKBAction)},
	{}
};

$MethodInfo _SynthEditorPaneUI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SynthEditorPaneUI::*)()>(&SynthEditorPaneUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&SynthEditorPaneUI::createUI))},
	{"getComponentState", "(Ljavax/swing/JComponent;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(SynthEditorPaneUI::*)($JComponent*)>(&SynthEditorPaneUI::getComponentState))},
	{"getContext", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PUBLIC},
	{"getContext", "(Ljavax/swing/JComponent;I)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PRIVATE, $method(static_cast<$SynthContext*(SynthEditorPaneUI::*)($JComponent*,int32_t)>(&SynthEditorPaneUI::getContext))},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"paint", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"paintBackground", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"paintBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, 0},
	{"paintBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"uninstallDefaults", "()V", nullptr, $PROTECTED},
	{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"updateStyle", "(Ljavax/swing/text/JTextComponent;Z)V", nullptr, $PRIVATE, $method(static_cast<void(SynthEditorPaneUI::*)($JTextComponent*,bool)>(&SynthEditorPaneUI::updateStyle))},
	{}
};

$ClassInfo _SynthEditorPaneUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.synth.SynthEditorPaneUI",
	"javax.swing.plaf.basic.BasicEditorPaneUI",
	"javax.swing.plaf.synth.SynthUI",
	_SynthEditorPaneUI_FieldInfo_,
	_SynthEditorPaneUI_MethodInfo_
};

$Object* allocate$SynthEditorPaneUI($Class* clazz) {
	return $of($alloc(SynthEditorPaneUI));
}

int32_t SynthEditorPaneUI::hashCode() {
	 return this->$BasicEditorPaneUI::hashCode();
}

bool SynthEditorPaneUI::equals(Object$* arg0) {
	 return this->$BasicEditorPaneUI::equals(arg0);
}

$Object* SynthEditorPaneUI::clone() {
	 return this->$BasicEditorPaneUI::clone();
}

$String* SynthEditorPaneUI::toString() {
	 return this->$BasicEditorPaneUI::toString();
}

void SynthEditorPaneUI::finalize() {
	this->$BasicEditorPaneUI::finalize();
}

void SynthEditorPaneUI::init$() {
	$BasicEditorPaneUI::init$();
	$init($Boolean);
	$set(this, localTrue, $Boolean::TRUE);
	this->updateKBAction = true;
}

$ComponentUI* SynthEditorPaneUI::createUI($JComponent* c) {
	$init(SynthEditorPaneUI);
	return $new(SynthEditorPaneUI);
}

void SynthEditorPaneUI::installDefaults() {
	$BasicEditorPaneUI::installDefaults();
	$var($JComponent, c, getComponent());
	$init($JEditorPane);
	$var($Object, clientProperty, $nc(c)->getClientProperty($JEditorPane::HONOR_DISPLAY_PROPERTIES));
	if (clientProperty == nullptr) {
		c->putClientProperty($JEditorPane::HONOR_DISPLAY_PROPERTIES, this->localTrue);
	}
	updateStyle($(getComponent()), true);
}

void SynthEditorPaneUI::uninstallDefaults() {
	$var($SynthContext, context, getContext($(getComponent()), $SynthConstants::ENABLED));
	$var($JComponent, c, getComponent());
	$nc(c)->putClientProperty("caretAspectRatio"_s, nullptr);
	$nc(this->style)->uninstallDefaults(context);
	$set(this, style, nullptr);
	$init($JEditorPane);
	$var($Object, clientProperty, c->getClientProperty($JEditorPane::HONOR_DISPLAY_PROPERTIES));
	if ($equals(clientProperty, this->localTrue)) {
		$init($Boolean);
		c->putClientProperty($JEditorPane::HONOR_DISPLAY_PROPERTIES, $Boolean::FALSE);
	}
	$BasicEditorPaneUI::uninstallDefaults();
}

void SynthEditorPaneUI::propertyChange($PropertyChangeEvent* evt) {
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
	$BasicEditorPaneUI::propertyChange(evt);
}

void SynthEditorPaneUI::updateStyle($JTextComponent* comp, bool updateKBAction) {
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

$SynthContext* SynthEditorPaneUI::getContext($JComponent* c) {
	return getContext(c, getComponentState(c));
}

$SynthContext* SynthEditorPaneUI::getContext($JComponent* c, int32_t state) {
	return $SynthContext::getContext(c, this->style, state);
}

int32_t SynthEditorPaneUI::getComponentState($JComponent* c) {
	return $SynthLookAndFeel::getComponentState(c);
}

void SynthEditorPaneUI::update($Graphics* g, $JComponent* c) {
	$var($SynthContext, context, getContext(c));
	$SynthLookAndFeel::update(context, g);
	paintBackground(context, g, c);
	paint(context, g);
}

void SynthEditorPaneUI::paint($SynthContext* context, $Graphics* g) {
	$BasicEditorPaneUI::paint(g, $(getComponent()));
}

void SynthEditorPaneUI::paintBackground($Graphics* g) {
}

void SynthEditorPaneUI::paintBackground($SynthContext* context, $Graphics* g, $JComponent* c) {
	$var($SynthContext, var$0, context);
	$var($Graphics, var$1, g);
	int32_t var$2 = $nc(c)->getWidth();
	$nc($($nc(context)->getPainter()))->paintEditorPaneBackground(var$0, var$1, 0, 0, var$2, c->getHeight());
}

void SynthEditorPaneUI::paintBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($($nc(context)->getPainter()))->paintEditorPaneBorder(context, g, x, y, w, h);
}

SynthEditorPaneUI::SynthEditorPaneUI() {
}

$Class* SynthEditorPaneUI::load$($String* name, bool initialize) {
	$loadClass(SynthEditorPaneUI, name, initialize, &_SynthEditorPaneUI_ClassInfo_, allocate$SynthEditorPaneUI);
	return class$;
}

$Class* SynthEditorPaneUI::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax