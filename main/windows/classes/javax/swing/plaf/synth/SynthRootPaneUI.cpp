#include <javax/swing/plaf/synth/SynthRootPaneUI.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/RootPaneUI.h>
#include <javax/swing/plaf/basic/BasicRootPaneUI.h>
#include <javax/swing/plaf/synth/SynthConstants.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <javax/swing/plaf/synth/SynthUI.h>
#include <jcpp.h>

#undef ENABLED

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $JComponent = ::javax::swing::JComponent;
using $JRootPane = ::javax::swing::JRootPane;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $RootPaneUI = ::javax::swing::plaf::RootPaneUI;
using $BasicRootPaneUI = ::javax::swing::plaf::basic::BasicRootPaneUI;
using $SynthConstants = ::javax::swing::plaf::synth::SynthConstants;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;
using $SynthPainter = ::javax::swing::plaf::synth::SynthPainter;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;
using $SynthUI = ::javax::swing::plaf::synth::SynthUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthRootPaneUI_FieldInfo_[] = {
	{"style", "Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PRIVATE, $field(SynthRootPaneUI, style)},
	{}
};

$MethodInfo _SynthRootPaneUI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SynthRootPaneUI::*)()>(&SynthRootPaneUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&SynthRootPaneUI::createUI))},
	{"getComponentState", "(Ljavax/swing/JComponent;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(SynthRootPaneUI::*)($JComponent*)>(&SynthRootPaneUI::getComponentState))},
	{"getContext", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PUBLIC},
	{"getContext", "(Ljavax/swing/JComponent;I)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PRIVATE, $method(static_cast<$SynthContext*(SynthRootPaneUI::*)($JComponent*,int32_t)>(&SynthRootPaneUI::getContext))},
	{"installDefaults", "(Ljavax/swing/JRootPane;)V", nullptr, $PROTECTED},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paint", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"paintBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"uninstallDefaults", "(Ljavax/swing/JRootPane;)V", nullptr, $PROTECTED},
	{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"updateStyle", "(Ljavax/swing/JComponent;)V", nullptr, $PRIVATE, $method(static_cast<void(SynthRootPaneUI::*)($JComponent*)>(&SynthRootPaneUI::updateStyle))},
	{}
};

$ClassInfo _SynthRootPaneUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.synth.SynthRootPaneUI",
	"javax.swing.plaf.basic.BasicRootPaneUI",
	"javax.swing.plaf.synth.SynthUI",
	_SynthRootPaneUI_FieldInfo_,
	_SynthRootPaneUI_MethodInfo_
};

$Object* allocate$SynthRootPaneUI($Class* clazz) {
	return $of($alloc(SynthRootPaneUI));
}

int32_t SynthRootPaneUI::hashCode() {
	 return this->$BasicRootPaneUI::hashCode();
}

bool SynthRootPaneUI::equals(Object$* arg0) {
	 return this->$BasicRootPaneUI::equals(arg0);
}

$Object* SynthRootPaneUI::clone() {
	 return this->$BasicRootPaneUI::clone();
}

$String* SynthRootPaneUI::toString() {
	 return this->$BasicRootPaneUI::toString();
}

void SynthRootPaneUI::finalize() {
	this->$BasicRootPaneUI::finalize();
}

void SynthRootPaneUI::init$() {
	$BasicRootPaneUI::init$();
}

$ComponentUI* SynthRootPaneUI::createUI($JComponent* c) {
	$init(SynthRootPaneUI);
	return $new(SynthRootPaneUI);
}

void SynthRootPaneUI::installDefaults($JRootPane* c) {
	updateStyle(c);
}

void SynthRootPaneUI::uninstallDefaults($JRootPane* root) {
	$var($SynthContext, context, getContext(root, $SynthConstants::ENABLED));
	$nc(this->style)->uninstallDefaults(context);
	$set(this, style, nullptr);
}

$SynthContext* SynthRootPaneUI::getContext($JComponent* c) {
	return getContext(c, getComponentState(c));
}

$SynthContext* SynthRootPaneUI::getContext($JComponent* c, int32_t state) {
	return $SynthContext::getContext(c, this->style, state);
}

int32_t SynthRootPaneUI::getComponentState($JComponent* c) {
	return $SynthLookAndFeel::getComponentState(c);
}

void SynthRootPaneUI::updateStyle($JComponent* c) {
	$var($SynthContext, context, getContext(c, $SynthConstants::ENABLED));
	$var($SynthStyle, oldStyle, this->style);
	$set(this, style, $SynthLookAndFeel::updateStyle(context, this));
	if (this->style != oldStyle) {
		if (oldStyle != nullptr) {
			uninstallKeyboardActions($cast($JRootPane, c));
			installKeyboardActions($cast($JRootPane, c));
		}
	}
}

void SynthRootPaneUI::update($Graphics* g, $JComponent* c) {
	$var($SynthContext, context, getContext(c));
	$SynthLookAndFeel::update(context, g);
	$var($SynthContext, var$0, context);
	$var($Graphics, var$1, g);
	int32_t var$2 = $nc(c)->getWidth();
	$nc($($nc(context)->getPainter()))->paintRootPaneBackground(var$0, var$1, 0, 0, var$2, c->getHeight());
	paint(context, g);
}

void SynthRootPaneUI::paint($Graphics* g, $JComponent* c) {
	$var($SynthContext, context, getContext(c));
	paint(context, g);
}

void SynthRootPaneUI::paint($SynthContext* context, $Graphics* g) {
}

void SynthRootPaneUI::paintBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($($nc(context)->getPainter()))->paintRootPaneBorder(context, g, x, y, w, h);
}

void SynthRootPaneUI::propertyChange($PropertyChangeEvent* e) {
	if ($SynthLookAndFeel::shouldUpdateStyle(e)) {
		updateStyle($cast($JRootPane, $($nc(e)->getSource())));
	}
	$BasicRootPaneUI::propertyChange(e);
}

SynthRootPaneUI::SynthRootPaneUI() {
}

$Class* SynthRootPaneUI::load$($String* name, bool initialize) {
	$loadClass(SynthRootPaneUI, name, initialize, &_SynthRootPaneUI_ClassInfo_, allocate$SynthRootPaneUI);
	return class$;
}

$Class* SynthRootPaneUI::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax