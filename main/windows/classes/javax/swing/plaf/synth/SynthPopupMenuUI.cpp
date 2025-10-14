#include <javax/swing/plaf/synth/SynthPopupMenuUI.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/BoxLayout.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/PopupMenuUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicPopupMenuUI.h>
#include <javax/swing/plaf/basic/DefaultMenuLayout.h>
#include <javax/swing/plaf/synth/SynthConstants.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthMenuLayout.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <javax/swing/plaf/synth/SynthUI.h>
#include <jcpp.h>

#undef ENABLED
#undef Y_AXIS

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BoxLayout = ::javax::swing::BoxLayout;
using $JComponent = ::javax::swing::JComponent;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $PopupMenuUI = ::javax::swing::plaf::PopupMenuUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicPopupMenuUI = ::javax::swing::plaf::basic::BasicPopupMenuUI;
using $DefaultMenuLayout = ::javax::swing::plaf::basic::DefaultMenuLayout;
using $SynthConstants = ::javax::swing::plaf::synth::SynthConstants;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;
using $SynthMenuLayout = ::javax::swing::plaf::synth::SynthMenuLayout;
using $SynthPainter = ::javax::swing::plaf::synth::SynthPainter;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;
using $SynthUI = ::javax::swing::plaf::synth::SynthUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthPopupMenuUI_FieldInfo_[] = {
	{"style", "Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PRIVATE, $field(SynthPopupMenuUI, style)},
	{}
};

$MethodInfo _SynthPopupMenuUI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SynthPopupMenuUI::*)()>(&SynthPopupMenuUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&SynthPopupMenuUI::createUI))},
	{"getComponentState", "(Ljavax/swing/JComponent;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(SynthPopupMenuUI::*)($JComponent*)>(&SynthPopupMenuUI::getComponentState))},
	{"getContext", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PUBLIC},
	{"getContext", "(Ljavax/swing/JComponent;I)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PRIVATE, $method(static_cast<$SynthContext*(SynthPopupMenuUI::*)($JComponent*,int32_t)>(&SynthPopupMenuUI::getContext))},
	{"installDefaults", "()V", nullptr, $PUBLIC},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paint", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"paintBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"uninstallDefaults", "()V", nullptr, $PROTECTED},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"updateStyle", "(Ljavax/swing/JComponent;)V", nullptr, $PRIVATE, $method(static_cast<void(SynthPopupMenuUI::*)($JComponent*)>(&SynthPopupMenuUI::updateStyle))},
	{}
};

$ClassInfo _SynthPopupMenuUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.synth.SynthPopupMenuUI",
	"javax.swing.plaf.basic.BasicPopupMenuUI",
	"java.beans.PropertyChangeListener,javax.swing.plaf.synth.SynthUI",
	_SynthPopupMenuUI_FieldInfo_,
	_SynthPopupMenuUI_MethodInfo_
};

$Object* allocate$SynthPopupMenuUI($Class* clazz) {
	return $of($alloc(SynthPopupMenuUI));
}

int32_t SynthPopupMenuUI::hashCode() {
	 return this->$BasicPopupMenuUI::hashCode();
}

bool SynthPopupMenuUI::equals(Object$* arg0) {
	 return this->$BasicPopupMenuUI::equals(arg0);
}

$Object* SynthPopupMenuUI::clone() {
	 return this->$BasicPopupMenuUI::clone();
}

$String* SynthPopupMenuUI::toString() {
	 return this->$BasicPopupMenuUI::toString();
}

void SynthPopupMenuUI::finalize() {
	this->$BasicPopupMenuUI::finalize();
}

void SynthPopupMenuUI::init$() {
	$BasicPopupMenuUI::init$();
}

$ComponentUI* SynthPopupMenuUI::createUI($JComponent* x) {
	$init(SynthPopupMenuUI);
	return $new(SynthPopupMenuUI);
}

void SynthPopupMenuUI::installDefaults() {
	bool var$0 = $nc(this->popupMenu)->getLayout() == nullptr;
	if (var$0 || $instanceOf($UIResource, $($nc(this->popupMenu)->getLayout()))) {
		$nc(this->popupMenu)->setLayout($$new($SynthMenuLayout, this->popupMenu, $BoxLayout::Y_AXIS));
	}
	updateStyle(this->popupMenu);
}

void SynthPopupMenuUI::updateStyle($JComponent* c) {
	$var($SynthContext, context, getContext(c, $SynthConstants::ENABLED));
	$var($SynthStyle, oldStyle, this->style);
	$set(this, style, $SynthLookAndFeel::updateStyle(context, this));
	if (this->style != oldStyle) {
		if (oldStyle != nullptr) {
			uninstallKeyboardActions();
			installKeyboardActions();
		}
	}
}

void SynthPopupMenuUI::installListeners() {
	$BasicPopupMenuUI::installListeners();
	$nc(this->popupMenu)->addPropertyChangeListener(this);
}

void SynthPopupMenuUI::uninstallDefaults() {
	$var($SynthContext, context, getContext(this->popupMenu, $SynthConstants::ENABLED));
	$nc(this->style)->uninstallDefaults(context);
	$set(this, style, nullptr);
	if ($instanceOf($UIResource, $($nc(this->popupMenu)->getLayout()))) {
		$nc(this->popupMenu)->setLayout(nullptr);
	}
}

void SynthPopupMenuUI::uninstallListeners() {
	$BasicPopupMenuUI::uninstallListeners();
	$nc(this->popupMenu)->removePropertyChangeListener(this);
}

$SynthContext* SynthPopupMenuUI::getContext($JComponent* c) {
	return getContext(c, getComponentState(c));
}

$SynthContext* SynthPopupMenuUI::getContext($JComponent* c, int32_t state) {
	return $SynthContext::getContext(c, this->style, state);
}

int32_t SynthPopupMenuUI::getComponentState($JComponent* c) {
	return $SynthLookAndFeel::getComponentState(c);
}

void SynthPopupMenuUI::update($Graphics* g, $JComponent* c) {
	$var($SynthContext, context, getContext(c));
	$SynthLookAndFeel::update(context, g);
	$var($SynthContext, var$0, context);
	$var($Graphics, var$1, g);
	int32_t var$2 = $nc(c)->getWidth();
	$nc($($nc(context)->getPainter()))->paintPopupMenuBackground(var$0, var$1, 0, 0, var$2, c->getHeight());
	paint(context, g);
}

void SynthPopupMenuUI::paint($Graphics* g, $JComponent* c) {
	$var($SynthContext, context, getContext(c));
	paint(context, g);
}

void SynthPopupMenuUI::paint($SynthContext* context, $Graphics* g) {
}

void SynthPopupMenuUI::paintBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($($nc(context)->getPainter()))->paintPopupMenuBorder(context, g, x, y, w, h);
}

void SynthPopupMenuUI::propertyChange($PropertyChangeEvent* e) {
	if ($SynthLookAndFeel::shouldUpdateStyle(e)) {
		updateStyle(this->popupMenu);
	}
}

SynthPopupMenuUI::SynthPopupMenuUI() {
}

$Class* SynthPopupMenuUI::load$($String* name, bool initialize) {
	$loadClass(SynthPopupMenuUI, name, initialize, &_SynthPopupMenuUI_ClassInfo_, allocate$SynthPopupMenuUI);
	return class$;
}

$Class* SynthPopupMenuUI::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax