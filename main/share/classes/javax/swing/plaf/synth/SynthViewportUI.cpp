#include <javax/swing/plaf/synth/SynthViewportUI.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/ViewportUI.h>
#include <javax/swing/plaf/synth/Region.h>
#include <javax/swing/plaf/synth/SynthConstants.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <jcpp.h>

#undef ENABLED

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $ViewportUI = ::javax::swing::plaf::ViewportUI;
using $Region = ::javax::swing::plaf::synth::Region;
using $SynthConstants = ::javax::swing::plaf::synth::SynthConstants;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;
using $SynthPainter = ::javax::swing::plaf::synth::SynthPainter;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthViewportUI_FieldInfo_[] = {
	{"style", "Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PRIVATE, $field(SynthViewportUI, style)},
	{}
};

$MethodInfo _SynthViewportUI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SynthViewportUI::*)()>(&SynthViewportUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&SynthViewportUI::createUI))},
	{"getContext", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PUBLIC},
	{"getContext", "(Ljavax/swing/JComponent;I)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PRIVATE, $method(static_cast<$SynthContext*(SynthViewportUI::*)($JComponent*,int32_t)>(&SynthViewportUI::getContext))},
	{"getRegion", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/synth/Region;", nullptr, $PRIVATE, $method(static_cast<$Region*(SynthViewportUI::*)($JComponent*)>(&SynthViewportUI::getRegion))},
	{"installDefaults", "(Ljavax/swing/JComponent;)V", nullptr, $PROTECTED},
	{"installListeners", "(Ljavax/swing/JComponent;)V", nullptr, $PROTECTED},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paint", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"paintBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"uninstallDefaults", "(Ljavax/swing/JComponent;)V", nullptr, $PROTECTED},
	{"uninstallListeners", "(Ljavax/swing/JComponent;)V", nullptr, $PROTECTED},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"updateStyle", "(Ljavax/swing/JComponent;)V", nullptr, $PRIVATE, $method(static_cast<void(SynthViewportUI::*)($JComponent*)>(&SynthViewportUI::updateStyle))},
	{}
};

$ClassInfo _SynthViewportUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.synth.SynthViewportUI",
	"javax.swing.plaf.ViewportUI",
	"java.beans.PropertyChangeListener,javax.swing.plaf.synth.SynthUI",
	_SynthViewportUI_FieldInfo_,
	_SynthViewportUI_MethodInfo_
};

$Object* allocate$SynthViewportUI($Class* clazz) {
	return $of($alloc(SynthViewportUI));
}

int32_t SynthViewportUI::hashCode() {
	 return this->$ViewportUI::hashCode();
}

bool SynthViewportUI::equals(Object$* arg0) {
	 return this->$ViewportUI::equals(arg0);
}

$Object* SynthViewportUI::clone() {
	 return this->$ViewportUI::clone();
}

$String* SynthViewportUI::toString() {
	 return this->$ViewportUI::toString();
}

void SynthViewportUI::finalize() {
	this->$ViewportUI::finalize();
}

void SynthViewportUI::init$() {
	$ViewportUI::init$();
}

$ComponentUI* SynthViewportUI::createUI($JComponent* c) {
	$init(SynthViewportUI);
	return $new(SynthViewportUI);
}

void SynthViewportUI::installUI($JComponent* c) {
	$ViewportUI::installUI(c);
	installDefaults(c);
	installListeners(c);
}

void SynthViewportUI::uninstallUI($JComponent* c) {
	$ViewportUI::uninstallUI(c);
	uninstallListeners(c);
	uninstallDefaults(c);
}

void SynthViewportUI::installDefaults($JComponent* c) {
	updateStyle(c);
}

void SynthViewportUI::updateStyle($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($SynthContext, context, getContext(c, $SynthConstants::ENABLED));
	$var($JComponent, var$0, $nc(context)->getComponent());
	$var($SynthStyle, newStyle, $SynthLookAndFeel::getStyle(var$0, $(context->getRegion())));
	$var($SynthStyle, oldStyle, $nc(context)->getStyle());
	if (newStyle != oldStyle) {
		if (oldStyle != nullptr) {
			oldStyle->uninstallDefaults(context);
		}
		context->setStyle(newStyle);
		$nc(newStyle)->installDefaults(context);
	}
	$set(this, style, newStyle);
}

void SynthViewportUI::installListeners($JComponent* c) {
	$nc(c)->addPropertyChangeListener(this);
}

void SynthViewportUI::uninstallListeners($JComponent* c) {
	$nc(c)->removePropertyChangeListener(this);
}

void SynthViewportUI::uninstallDefaults($JComponent* c) {
	$var($SynthContext, context, getContext(c, $SynthConstants::ENABLED));
	$nc(this->style)->uninstallDefaults(context);
	$set(this, style, nullptr);
}

$SynthContext* SynthViewportUI::getContext($JComponent* c) {
	return getContext(c, $SynthLookAndFeel::getComponentState(c));
}

$SynthContext* SynthViewportUI::getContext($JComponent* c, int32_t state) {
	return $SynthContext::getContext(c, this->style, state);
}

$Region* SynthViewportUI::getRegion($JComponent* c) {
	return $SynthLookAndFeel::getRegion(c);
}

void SynthViewportUI::update($Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($SynthContext, context, getContext(c));
	$SynthLookAndFeel::update(context, g);
	$var($SynthContext, var$0, context);
	$var($Graphics, var$1, g);
	int32_t var$2 = $nc(c)->getWidth();
	$nc($($nc(context)->getPainter()))->paintViewportBackground(var$0, var$1, 0, 0, var$2, c->getHeight());
	paint(context, g);
}

void SynthViewportUI::paintBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthViewportUI::paint($Graphics* g, $JComponent* c) {
	$var($SynthContext, context, getContext(c));
	paint(context, g);
}

void SynthViewportUI::paint($SynthContext* context, $Graphics* g) {
}

void SynthViewportUI::propertyChange($PropertyChangeEvent* e) {
	if ($SynthLookAndFeel::shouldUpdateStyle(e)) {
		updateStyle($cast($JComponent, $($nc(e)->getSource())));
	}
}

SynthViewportUI::SynthViewportUI() {
}

$Class* SynthViewportUI::load$($String* name, bool initialize) {
	$loadClass(SynthViewportUI, name, initialize, &_SynthViewportUI_ClassInfo_, allocate$SynthViewportUI);
	return class$;
}

$Class* SynthViewportUI::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax