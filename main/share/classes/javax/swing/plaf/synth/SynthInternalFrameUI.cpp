#include <javax/swing/plaf/synth/SynthInternalFrameUI.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/event/ComponentListener.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/InternalFrameUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane.h>
#include <javax/swing/plaf/basic/BasicInternalFrameUI$ComponentHandler.h>
#include <javax/swing/plaf/basic/BasicInternalFrameUI.h>
#include <javax/swing/plaf/synth/SynthConstants.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthInternalFrameTitlePane.h>
#include <javax/swing/plaf/synth/SynthInternalFrameUI$1.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <javax/swing/plaf/synth/SynthUI.h>
#include <jcpp.h>

#undef ENABLED
#undef IS_MAXIMUM_PROPERTY
#undef IS_SELECTED_PROPERTY

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $LayoutManager = ::java::awt::LayoutManager;
using $ComponentListener = ::java::awt::event::ComponentListener;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $UIManager = ::javax::swing::UIManager;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $InternalFrameUI = ::javax::swing::plaf::InternalFrameUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicInternalFrameTitlePane = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane;
using $BasicInternalFrameUI = ::javax::swing::plaf::basic::BasicInternalFrameUI;
using $BasicInternalFrameUI$ComponentHandler = ::javax::swing::plaf::basic::BasicInternalFrameUI$ComponentHandler;
using $SynthConstants = ::javax::swing::plaf::synth::SynthConstants;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthInternalFrameTitlePane = ::javax::swing::plaf::synth::SynthInternalFrameTitlePane;
using $SynthInternalFrameUI$1 = ::javax::swing::plaf::synth::SynthInternalFrameUI$1;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;
using $SynthPainter = ::javax::swing::plaf::synth::SynthPainter;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;
using $SynthUI = ::javax::swing::plaf::synth::SynthUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthInternalFrameUI_FieldInfo_[] = {
	{"style", "Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PRIVATE, $field(SynthInternalFrameUI, style)},
	{}
};

$MethodInfo _SynthInternalFrameUI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PROTECTED, $method(static_cast<void(SynthInternalFrameUI::*)($JInternalFrame*)>(&SynthInternalFrameUI::init$))},
	{"access$000", "(Ljavax/swing/plaf/synth/SynthInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(SynthInternalFrameUI*)>(&SynthInternalFrameUI::access$000))},
	{"access$100", "(Ljavax/swing/plaf/synth/SynthInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(SynthInternalFrameUI*)>(&SynthInternalFrameUI::access$100))},
	{"access$200", "(Ljavax/swing/plaf/synth/SynthInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(SynthInternalFrameUI*)>(&SynthInternalFrameUI::access$200))},
	{"access$300", "(Ljavax/swing/plaf/synth/SynthInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(SynthInternalFrameUI*)>(&SynthInternalFrameUI::access$300))},
	{"access$400", "(Ljavax/swing/plaf/synth/SynthInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(SynthInternalFrameUI*)>(&SynthInternalFrameUI::access$400))},
	{"access$502", "(Ljavax/swing/plaf/synth/SynthInternalFrameUI;Ljavax/swing/JInternalFrame;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(SynthInternalFrameUI*,$JInternalFrame*)>(&SynthInternalFrameUI::access$502))},
	{"access$602", "(Ljavax/swing/plaf/synth/SynthInternalFrameUI;Ljavax/swing/JInternalFrame;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(SynthInternalFrameUI*,$JInternalFrame*)>(&SynthInternalFrameUI::access$602))},
	{"createComponentListener", "()Ljava/awt/event/ComponentListener;", nullptr, $PROTECTED},
	{"createNorthPane", "(Ljavax/swing/JInternalFrame;)Ljavax/swing/JComponent;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&SynthInternalFrameUI::createUI))},
	{"getComponentState", "(Ljavax/swing/JComponent;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(SynthInternalFrameUI::*)($JComponent*)>(&SynthInternalFrameUI::getComponentState))},
	{"getContext", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PUBLIC},
	{"getContext", "(Ljavax/swing/JComponent;I)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PRIVATE, $method(static_cast<$SynthContext*(SynthInternalFrameUI::*)($JComponent*,int32_t)>(&SynthInternalFrameUI::getContext))},
	{"installDefaults", "()V", nullptr, $PUBLIC},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paint", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"paintBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"uninstallComponents", "()V", nullptr, $PROTECTED},
	{"uninstallDefaults", "()V", nullptr, $PROTECTED},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"updateStyle", "(Ljavax/swing/JComponent;)V", nullptr, $PRIVATE, $method(static_cast<void(SynthInternalFrameUI::*)($JComponent*)>(&SynthInternalFrameUI::updateStyle))},
	{}
};

$InnerClassInfo _SynthInternalFrameUI_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.SynthInternalFrameUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SynthInternalFrameUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.synth.SynthInternalFrameUI",
	"javax.swing.plaf.basic.BasicInternalFrameUI",
	"javax.swing.plaf.synth.SynthUI,java.beans.PropertyChangeListener",
	_SynthInternalFrameUI_FieldInfo_,
	_SynthInternalFrameUI_MethodInfo_,
	nullptr,
	nullptr,
	_SynthInternalFrameUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.SynthInternalFrameUI$1"
};

$Object* allocate$SynthInternalFrameUI($Class* clazz) {
	return $of($alloc(SynthInternalFrameUI));
}

int32_t SynthInternalFrameUI::hashCode() {
	 return this->$BasicInternalFrameUI::hashCode();
}

bool SynthInternalFrameUI::equals(Object$* arg0) {
	 return this->$BasicInternalFrameUI::equals(arg0);
}

$Object* SynthInternalFrameUI::clone() {
	 return this->$BasicInternalFrameUI::clone();
}

$String* SynthInternalFrameUI::toString() {
	 return this->$BasicInternalFrameUI::toString();
}

void SynthInternalFrameUI::finalize() {
	this->$BasicInternalFrameUI::finalize();
}

$JInternalFrame* SynthInternalFrameUI::access$602(SynthInternalFrameUI* x0, $JInternalFrame* x1) {
	$init(SynthInternalFrameUI);
	return $set($nc(x0), frame, x1);
}

$JInternalFrame* SynthInternalFrameUI::access$502(SynthInternalFrameUI* x0, $JInternalFrame* x1) {
	$init(SynthInternalFrameUI);
	return $set($nc(x0), frame, x1);
}

$JInternalFrame* SynthInternalFrameUI::access$400(SynthInternalFrameUI* x0) {
	$init(SynthInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* SynthInternalFrameUI::access$300(SynthInternalFrameUI* x0) {
	$init(SynthInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* SynthInternalFrameUI::access$200(SynthInternalFrameUI* x0) {
	$init(SynthInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* SynthInternalFrameUI::access$100(SynthInternalFrameUI* x0) {
	$init(SynthInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* SynthInternalFrameUI::access$000(SynthInternalFrameUI* x0) {
	$init(SynthInternalFrameUI);
	return $nc(x0)->frame;
}

$ComponentUI* SynthInternalFrameUI::createUI($JComponent* b) {
	$init(SynthInternalFrameUI);
	return $new(SynthInternalFrameUI, $cast($JInternalFrame, b));
}

void SynthInternalFrameUI::init$($JInternalFrame* b) {
	$BasicInternalFrameUI::init$(b);
}

void SynthInternalFrameUI::installDefaults() {
	$nc(this->frame)->setLayout($set(this, internalFrameLayout, createLayoutManager()));
	updateStyle(this->frame);
}

void SynthInternalFrameUI::installListeners() {
	$BasicInternalFrameUI::installListeners();
	$nc(this->frame)->addPropertyChangeListener(this);
}

void SynthInternalFrameUI::uninstallComponents() {
	if ($instanceOf($UIResource, $($nc(this->frame)->getComponentPopupMenu()))) {
		$nc(this->frame)->setComponentPopupMenu(nullptr);
	}
	$BasicInternalFrameUI::uninstallComponents();
}

void SynthInternalFrameUI::uninstallListeners() {
	$nc(this->frame)->removePropertyChangeListener(this);
	$BasicInternalFrameUI::uninstallListeners();
}

void SynthInternalFrameUI::updateStyle($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($SynthContext, context, getContext(c, $SynthConstants::ENABLED));
	$var($SynthStyle, oldStyle, this->style);
	$set(this, style, $SynthLookAndFeel::updateStyle(context, this));
	if (this->style != oldStyle) {
		$var($Icon, frameIcon, $nc(this->frame)->getFrameIcon());
		if (frameIcon == nullptr || $instanceOf($UIResource, frameIcon)) {
			$nc(this->frame)->setFrameIcon($($nc($($nc(context)->getStyle()))->getIcon(context, "InternalFrame.icon"_s)));
		}
		if (oldStyle != nullptr) {
			uninstallKeyboardActions();
			installKeyboardActions();
		}
	}
}

void SynthInternalFrameUI::uninstallDefaults() {
	$var($SynthContext, context, getContext(this->frame, $SynthConstants::ENABLED));
	$nc(this->style)->uninstallDefaults(context);
	$set(this, style, nullptr);
	if ($nc(this->frame)->getLayout() == this->internalFrameLayout) {
		$nc(this->frame)->setLayout(nullptr);
	}
}

$SynthContext* SynthInternalFrameUI::getContext($JComponent* c) {
	return getContext(c, getComponentState(c));
}

$SynthContext* SynthInternalFrameUI::getContext($JComponent* c, int32_t state) {
	return $SynthContext::getContext(c, this->style, state);
}

int32_t SynthInternalFrameUI::getComponentState($JComponent* c) {
	return $SynthLookAndFeel::getComponentState(c);
}

$JComponent* SynthInternalFrameUI::createNorthPane($JInternalFrame* w) {
	$set(this, titlePane, $new($SynthInternalFrameTitlePane, w));
	$nc(this->titlePane)->setName("InternalFrame.northPane"_s);
	return this->titlePane;
}

$ComponentListener* SynthInternalFrameUI::createComponentListener() {
	if ($UIManager::getBoolean("InternalFrame.useTaskBar"_s)) {
		return $new($SynthInternalFrameUI$1, this);
	} else {
		return $BasicInternalFrameUI::createComponentListener();
	}
}

void SynthInternalFrameUI::update($Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($SynthContext, context, getContext(c));
	$SynthLookAndFeel::update(context, g);
	$var($SynthContext, var$0, context);
	$var($Graphics, var$1, g);
	int32_t var$2 = $nc(c)->getWidth();
	$nc($($nc(context)->getPainter()))->paintInternalFrameBackground(var$0, var$1, 0, 0, var$2, c->getHeight());
	paint(context, g);
}

void SynthInternalFrameUI::paint($Graphics* g, $JComponent* c) {
	$var($SynthContext, context, getContext(c));
	paint(context, g);
}

void SynthInternalFrameUI::paint($SynthContext* context, $Graphics* g) {
}

void SynthInternalFrameUI::paintBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($($nc(context)->getPainter()))->paintInternalFrameBorder(context, g, x, y, w, h);
}

void SynthInternalFrameUI::propertyChange($PropertyChangeEvent* evt) {
	$useLocalCurrentObjectStackCache();
	$var($SynthStyle, oldStyle, this->style);
	$var($JInternalFrame, f, $cast($JInternalFrame, $nc(evt)->getSource()));
	$var($String, prop, evt->getPropertyName());
	if ($SynthLookAndFeel::shouldUpdateStyle(evt)) {
		updateStyle(f);
	}
	$init($JInternalFrame);
	if (this->style == oldStyle && (prop == $JInternalFrame::IS_MAXIMUM_PROPERTY || prop == $JInternalFrame::IS_SELECTED_PROPERTY)) {
		$var($SynthContext, context, getContext(f, $SynthConstants::ENABLED));
		$nc(this->style)->uninstallDefaults(context);
		$nc(this->style)->installDefaults(context, this);
	}
}

SynthInternalFrameUI::SynthInternalFrameUI() {
}

$Class* SynthInternalFrameUI::load$($String* name, bool initialize) {
	$loadClass(SynthInternalFrameUI, name, initialize, &_SynthInternalFrameUI_ClassInfo_, allocate$SynthInternalFrameUI);
	return class$;
}

$Class* SynthInternalFrameUI::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax