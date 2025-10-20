#include <javax/swing/plaf/synth/SynthScrollPaneUI.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/ContainerListener.h>
#include <java/awt/event/FocusListener.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JViewport.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/ScrollPaneUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicScrollPaneUI.h>
#include <javax/swing/plaf/synth/SynthConstants.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/plaf/synth/SynthScrollPaneUI$ViewportBorder.h>
#include <javax/swing/plaf/synth/SynthScrollPaneUI$ViewportViewFocusHandler.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <javax/swing/plaf/synth/SynthUI.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef ENABLED
#undef FOCUSED

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $ContainerListener = ::java::awt::event::ContainerListener;
using $FocusListener = ::java::awt::event::FocusListener;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JViewport = ::javax::swing::JViewport;
using $UIManager = ::javax::swing::UIManager;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $ScrollPaneUI = ::javax::swing::plaf::ScrollPaneUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicScrollPaneUI = ::javax::swing::plaf::basic::BasicScrollPaneUI;
using $SynthConstants = ::javax::swing::plaf::synth::SynthConstants;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;
using $SynthPainter = ::javax::swing::plaf::synth::SynthPainter;
using $SynthScrollPaneUI$ViewportBorder = ::javax::swing::plaf::synth::SynthScrollPaneUI$ViewportBorder;
using $SynthScrollPaneUI$ViewportViewFocusHandler = ::javax::swing::plaf::synth::SynthScrollPaneUI$ViewportViewFocusHandler;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;
using $SynthUI = ::javax::swing::plaf::synth::SynthUI;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthScrollPaneUI_FieldInfo_[] = {
	{"style", "Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PRIVATE, $field(SynthScrollPaneUI, style)},
	{"viewportViewHasFocus", "Z", nullptr, $PRIVATE, $field(SynthScrollPaneUI, viewportViewHasFocus)},
	{"viewportViewFocusHandler", "Ljavax/swing/plaf/synth/SynthScrollPaneUI$ViewportViewFocusHandler;", nullptr, $PRIVATE, $field(SynthScrollPaneUI, viewportViewFocusHandler)},
	{}
};

$MethodInfo _SynthScrollPaneUI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SynthScrollPaneUI::*)()>(&SynthScrollPaneUI::init$))},
	{"access$000", "(Ljavax/swing/plaf/synth/SynthScrollPaneUI;)Ljavax/swing/JScrollPane;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JScrollPane*(*)(SynthScrollPaneUI*)>(&SynthScrollPaneUI::access$000))},
	{"access$100", "(Ljavax/swing/plaf/synth/SynthScrollPaneUI;)Ljavax/swing/JScrollPane;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JScrollPane*(*)(SynthScrollPaneUI*)>(&SynthScrollPaneUI::access$100))},
	{"access$200", "(Ljavax/swing/plaf/synth/SynthScrollPaneUI;)Ljavax/swing/JScrollPane;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JScrollPane*(*)(SynthScrollPaneUI*)>(&SynthScrollPaneUI::access$200))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&SynthScrollPaneUI::createUI))},
	{"getComponentState", "(Ljavax/swing/JComponent;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(SynthScrollPaneUI::*)($JComponent*)>(&SynthScrollPaneUI::getComponentState))},
	{"getContext", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PUBLIC},
	{"getContext", "(Ljavax/swing/JComponent;I)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PRIVATE, $method(static_cast<$SynthContext*(SynthScrollPaneUI::*)($JComponent*,int32_t)>(&SynthScrollPaneUI::getContext))},
	{"installDefaults", "(Ljavax/swing/JScrollPane;)V", nullptr, $PROTECTED},
	{"installListeners", "(Ljavax/swing/JScrollPane;)V", nullptr, $PROTECTED},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paint", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"paintBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"uninstallDefaults", "(Ljavax/swing/JScrollPane;)V", nullptr, $PROTECTED},
	{"uninstallListeners", "(Ljavax/swing/JComponent;)V", nullptr, $PROTECTED},
	{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"updateStyle", "(Ljavax/swing/JScrollPane;)V", nullptr, $PRIVATE, $method(static_cast<void(SynthScrollPaneUI::*)($JScrollPane*)>(&SynthScrollPaneUI::updateStyle))},
	{}
};

$InnerClassInfo _SynthScrollPaneUI_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.SynthScrollPaneUI$ViewportViewFocusHandler", "javax.swing.plaf.synth.SynthScrollPaneUI", "ViewportViewFocusHandler", $PRIVATE},
	{"javax.swing.plaf.synth.SynthScrollPaneUI$ViewportBorder", "javax.swing.plaf.synth.SynthScrollPaneUI", "ViewportBorder", $PRIVATE},
	{}
};

$ClassInfo _SynthScrollPaneUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.synth.SynthScrollPaneUI",
	"javax.swing.plaf.basic.BasicScrollPaneUI",
	"java.beans.PropertyChangeListener,javax.swing.plaf.synth.SynthUI",
	_SynthScrollPaneUI_FieldInfo_,
	_SynthScrollPaneUI_MethodInfo_,
	nullptr,
	nullptr,
	_SynthScrollPaneUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.SynthScrollPaneUI$ViewportViewFocusHandler,javax.swing.plaf.synth.SynthScrollPaneUI$ViewportBorder"
};

$Object* allocate$SynthScrollPaneUI($Class* clazz) {
	return $of($alloc(SynthScrollPaneUI));
}

int32_t SynthScrollPaneUI::hashCode() {
	 return this->$BasicScrollPaneUI::hashCode();
}

bool SynthScrollPaneUI::equals(Object$* arg0) {
	 return this->$BasicScrollPaneUI::equals(arg0);
}

$Object* SynthScrollPaneUI::clone() {
	 return this->$BasicScrollPaneUI::clone();
}

$String* SynthScrollPaneUI::toString() {
	 return this->$BasicScrollPaneUI::toString();
}

void SynthScrollPaneUI::finalize() {
	this->$BasicScrollPaneUI::finalize();
}

$JScrollPane* SynthScrollPaneUI::access$200(SynthScrollPaneUI* x0) {
	$init(SynthScrollPaneUI);
	return $nc(x0)->scrollpane;
}

$JScrollPane* SynthScrollPaneUI::access$100(SynthScrollPaneUI* x0) {
	$init(SynthScrollPaneUI);
	return $nc(x0)->scrollpane;
}

$JScrollPane* SynthScrollPaneUI::access$000(SynthScrollPaneUI* x0) {
	$init(SynthScrollPaneUI);
	return $nc(x0)->scrollpane;
}

void SynthScrollPaneUI::init$() {
	$BasicScrollPaneUI::init$();
	this->viewportViewHasFocus = false;
}

$ComponentUI* SynthScrollPaneUI::createUI($JComponent* x) {
	$init(SynthScrollPaneUI);
	return $new(SynthScrollPaneUI);
}

void SynthScrollPaneUI::update($Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($SynthContext, context, getContext(c));
	$SynthLookAndFeel::update(context, g);
	$var($SynthContext, var$0, context);
	$var($Graphics, var$1, g);
	int32_t var$2 = $nc(c)->getWidth();
	$nc($($nc(context)->getPainter()))->paintScrollPaneBackground(var$0, var$1, 0, 0, var$2, c->getHeight());
	paint(context, g);
}

void SynthScrollPaneUI::paint($Graphics* g, $JComponent* c) {
	$var($SynthContext, context, getContext(c));
	paint(context, g);
}

void SynthScrollPaneUI::paint($SynthContext* context, $Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$var($Border, vpBorder, $nc(this->scrollpane)->getViewportBorder());
	if (vpBorder != nullptr) {
		$var($Rectangle, r, $nc(this->scrollpane)->getViewportBorderBounds());
		vpBorder->paintBorder(this->scrollpane, g, $nc(r)->x, r->y, r->width, r->height);
	}
}

void SynthScrollPaneUI::paintBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($($nc(context)->getPainter()))->paintScrollPaneBorder(context, g, x, y, w, h);
}

void SynthScrollPaneUI::installDefaults($JScrollPane* scrollpane) {
	updateStyle(scrollpane);
}

void SynthScrollPaneUI::updateStyle($JScrollPane* c) {
	$useLocalCurrentObjectStackCache();
	$var($SynthContext, context, getContext(c, $SynthConstants::ENABLED));
	$var($SynthStyle, oldStyle, this->style);
	$set(this, style, $SynthLookAndFeel::updateStyle(context, this));
	if (this->style != oldStyle) {
		$var($Border, vpBorder, $nc(this->scrollpane)->getViewportBorder());
		if ((vpBorder == nullptr) || ($instanceOf($UIResource, vpBorder))) {
			$nc(this->scrollpane)->setViewportBorder($$new($SynthScrollPaneUI$ViewportBorder, this, context));
		}
		if (oldStyle != nullptr) {
			uninstallKeyboardActions(c);
			installKeyboardActions(c);
		}
	}
}

void SynthScrollPaneUI::installListeners($JScrollPane* c) {
	$useLocalCurrentObjectStackCache();
	$BasicScrollPaneUI::installListeners(c);
	$nc(c)->addPropertyChangeListener(this);
	if ($UIManager::getBoolean("ScrollPane.useChildTextComponentFocus"_s)) {
		$set(this, viewportViewFocusHandler, $new($SynthScrollPaneUI$ViewportViewFocusHandler, this));
		$nc($(c->getViewport()))->addContainerListener(this->viewportViewFocusHandler);
		$var($Component, view, $nc($(c->getViewport()))->getView());
		if ($instanceOf($JTextComponent, view)) {
			$nc(view)->addFocusListener(this->viewportViewFocusHandler);
		}
	}
}

void SynthScrollPaneUI::uninstallDefaults($JScrollPane* c) {
	$useLocalCurrentObjectStackCache();
	$var($SynthContext, context, getContext(c, $SynthConstants::ENABLED));
	$nc(this->style)->uninstallDefaults(context);
	if ($instanceOf($UIResource, $($nc(this->scrollpane)->getViewportBorder()))) {
		$nc(this->scrollpane)->setViewportBorder(nullptr);
	}
}

void SynthScrollPaneUI::uninstallListeners($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$BasicScrollPaneUI::uninstallListeners(c);
	$nc(c)->removePropertyChangeListener(this);
	if (this->viewportViewFocusHandler != nullptr) {
		$var($JViewport, viewport, $nc(($cast($JScrollPane, c)))->getViewport());
		$nc(viewport)->removeContainerListener(this->viewportViewFocusHandler);
		if (viewport->getView() != nullptr) {
			$nc($(viewport->getView()))->removeFocusListener(this->viewportViewFocusHandler);
		}
		$set(this, viewportViewFocusHandler, nullptr);
	}
}

$SynthContext* SynthScrollPaneUI::getContext($JComponent* c) {
	return getContext(c, getComponentState(c));
}

$SynthContext* SynthScrollPaneUI::getContext($JComponent* c, int32_t state) {
	return $SynthContext::getContext(c, this->style, state);
}

int32_t SynthScrollPaneUI::getComponentState($JComponent* c) {
	int32_t baseState = $SynthLookAndFeel::getComponentState(c);
	if (this->viewportViewFocusHandler != nullptr && this->viewportViewHasFocus) {
		baseState = baseState | $SynthConstants::FOCUSED;
	}
	return baseState;
}

void SynthScrollPaneUI::propertyChange($PropertyChangeEvent* e) {
	if ($SynthLookAndFeel::shouldUpdateStyle(e)) {
		updateStyle(this->scrollpane);
	}
}

SynthScrollPaneUI::SynthScrollPaneUI() {
}

$Class* SynthScrollPaneUI::load$($String* name, bool initialize) {
	$loadClass(SynthScrollPaneUI, name, initialize, &_SynthScrollPaneUI_ClassInfo_, allocate$SynthScrollPaneUI);
	return class$;
}

$Class* SynthScrollPaneUI::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax