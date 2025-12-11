#include <javax/swing/plaf/synth/SynthToolBarUI.h>

#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Rectangle.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JToolBar.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/ToolBarUI.h>
#include <javax/swing/plaf/basic/BasicToolBarUI$DragWindow.h>
#include <javax/swing/plaf/basic/BasicToolBarUI.h>
#include <javax/swing/plaf/synth/Region.h>
#include <javax/swing/plaf/synth/SynthConstants.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthGraphicsUtils.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <javax/swing/plaf/synth/SynthToolBarUI$SynthToolBarLayoutManager.h>
#include <javax/swing/plaf/synth/SynthUI.h>
#include <jcpp.h>

#undef ENABLED
#undef TOOL_BAR_CONTENT
#undef TOOL_BAR_DRAG_WINDOW

using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $LayoutManager = ::java::awt::LayoutManager;
using $Rectangle = ::java::awt::Rectangle;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JToolBar = ::javax::swing::JToolBar;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $ToolBarUI = ::javax::swing::plaf::ToolBarUI;
using $BasicToolBarUI = ::javax::swing::plaf::basic::BasicToolBarUI;
using $BasicToolBarUI$DragWindow = ::javax::swing::plaf::basic::BasicToolBarUI$DragWindow;
using $Region = ::javax::swing::plaf::synth::Region;
using $SynthConstants = ::javax::swing::plaf::synth::SynthConstants;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthGraphicsUtils = ::javax::swing::plaf::synth::SynthGraphicsUtils;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;
using $SynthPainter = ::javax::swing::plaf::synth::SynthPainter;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;
using $SynthToolBarUI$SynthToolBarLayoutManager = ::javax::swing::plaf::synth::SynthToolBarUI$SynthToolBarLayoutManager;
using $SynthUI = ::javax::swing::plaf::synth::SynthUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthToolBarUI_FieldInfo_[] = {
	{"handleIcon", "Ljavax/swing/Icon;", nullptr, $PRIVATE, $field(SynthToolBarUI, handleIcon)},
	{"contentRect", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(SynthToolBarUI, contentRect)},
	{"style", "Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PRIVATE, $field(SynthToolBarUI, style)},
	{"contentStyle", "Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PRIVATE, $field(SynthToolBarUI, contentStyle)},
	{"dragWindowStyle", "Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PRIVATE, $field(SynthToolBarUI, dragWindowStyle)},
	{}
};

$MethodInfo _SynthToolBarUI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SynthToolBarUI::*)()>(&SynthToolBarUI::init$))},
	{"createLayout", "()Ljava/awt/LayoutManager;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&SynthToolBarUI::createUI))},
	{"getComponentState", "(Ljavax/swing/JComponent;Ljavax/swing/plaf/synth/Region;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(SynthToolBarUI::*)($JComponent*,$Region*)>(&SynthToolBarUI::getComponentState))},
	{"getContext", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PUBLIC},
	{"getContext", "(Ljavax/swing/JComponent;I)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PRIVATE, $method(static_cast<$SynthContext*(SynthToolBarUI::*)($JComponent*,int32_t)>(&SynthToolBarUI::getContext))},
	{"getContext", "(Ljavax/swing/JComponent;Ljavax/swing/plaf/synth/Region;Ljavax/swing/plaf/synth/SynthStyle;)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PRIVATE, $method(static_cast<$SynthContext*(SynthToolBarUI::*)($JComponent*,$Region*,$SynthStyle*)>(&SynthToolBarUI::getContext))},
	{"getContext", "(Ljavax/swing/JComponent;Ljavax/swing/plaf/synth/Region;Ljavax/swing/plaf/synth/SynthStyle;I)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PRIVATE, $method(static_cast<$SynthContext*(SynthToolBarUI::*)($JComponent*,$Region*,$SynthStyle*,int32_t)>(&SynthToolBarUI::getContext))},
	{"installComponents", "()V", nullptr, $PROTECTED},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paint", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"paintBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintContent", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;Ljava/awt/Rectangle;)V", nullptr, $PROTECTED},
	{"paintDragWindow", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"setBorderToNonRollover", "(Ljava/awt/Component;)V", nullptr, $PROTECTED},
	{"setBorderToNormal", "(Ljava/awt/Component;)V", nullptr, $PROTECTED},
	{"setBorderToRollover", "(Ljava/awt/Component;)V", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"uninstallComponents", "()V", nullptr, $PROTECTED},
	{"uninstallDefaults", "()V", nullptr, $PROTECTED},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"updateStyle", "(Ljavax/swing/JToolBar;)V", nullptr, $PRIVATE, $method(static_cast<void(SynthToolBarUI::*)($JToolBar*)>(&SynthToolBarUI::updateStyle))},
	{}
};

$InnerClassInfo _SynthToolBarUI_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.SynthToolBarUI$SynthToolBarLayoutManager", "javax.swing.plaf.synth.SynthToolBarUI", "SynthToolBarLayoutManager", 0},
	{}
};

$ClassInfo _SynthToolBarUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.synth.SynthToolBarUI",
	"javax.swing.plaf.basic.BasicToolBarUI",
	"java.beans.PropertyChangeListener,javax.swing.plaf.synth.SynthUI",
	_SynthToolBarUI_FieldInfo_,
	_SynthToolBarUI_MethodInfo_,
	nullptr,
	nullptr,
	_SynthToolBarUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.SynthToolBarUI$SynthToolBarLayoutManager"
};

$Object* allocate$SynthToolBarUI($Class* clazz) {
	return $of($alloc(SynthToolBarUI));
}

int32_t SynthToolBarUI::hashCode() {
	 return this->$BasicToolBarUI::hashCode();
}

bool SynthToolBarUI::equals(Object$* arg0) {
	 return this->$BasicToolBarUI::equals(arg0);
}

$Object* SynthToolBarUI::clone() {
	 return this->$BasicToolBarUI::clone();
}

$String* SynthToolBarUI::toString() {
	 return this->$BasicToolBarUI::toString();
}

void SynthToolBarUI::finalize() {
	this->$BasicToolBarUI::finalize();
}

void SynthToolBarUI::init$() {
	$BasicToolBarUI::init$();
	$set(this, handleIcon, nullptr);
	$set(this, contentRect, $new($Rectangle));
}

$ComponentUI* SynthToolBarUI::createUI($JComponent* c) {
	$init(SynthToolBarUI);
	return $new(SynthToolBarUI);
}

void SynthToolBarUI::installDefaults() {
	$nc(this->toolBar)->setLayout($(createLayout()));
	updateStyle(this->toolBar);
}

void SynthToolBarUI::installListeners() {
	$BasicToolBarUI::installListeners();
	$nc(this->toolBar)->addPropertyChangeListener(this);
}

void SynthToolBarUI::uninstallListeners() {
	$BasicToolBarUI::uninstallListeners();
	$nc(this->toolBar)->removePropertyChangeListener(this);
}

void SynthToolBarUI::updateStyle($JToolBar* c) {
	$useLocalCurrentObjectStackCache();
	$init($Region);
	$var($SynthContext, context, getContext(c, $Region::TOOL_BAR_CONTENT, this->contentStyle, $SynthConstants::ENABLED));
	$set(this, contentStyle, $SynthLookAndFeel::updateStyle(context, this));
	$assign(context, getContext(c, $Region::TOOL_BAR_DRAG_WINDOW, this->dragWindowStyle, $SynthConstants::ENABLED));
	$set(this, dragWindowStyle, $SynthLookAndFeel::updateStyle(context, this));
	$assign(context, getContext(c, $SynthConstants::ENABLED));
	$var($SynthStyle, oldStyle, this->style);
	$set(this, style, $SynthLookAndFeel::updateStyle(context, this));
	if (oldStyle != this->style) {
		$set(this, handleIcon, $nc(this->style)->getIcon(context, "ToolBar.handleIcon"_s));
		if (oldStyle != nullptr) {
			uninstallKeyboardActions();
			installKeyboardActions();
		}
	}
}

void SynthToolBarUI::uninstallDefaults() {
	$var($SynthContext, context, getContext(this->toolBar, $SynthConstants::ENABLED));
	$nc(this->style)->uninstallDefaults(context);
	$set(this, style, nullptr);
	$set(this, handleIcon, nullptr);
	$init($Region);
	$assign(context, getContext(this->toolBar, $Region::TOOL_BAR_CONTENT, this->contentStyle, $SynthConstants::ENABLED));
	$nc(this->contentStyle)->uninstallDefaults(context);
	$set(this, contentStyle, nullptr);
	$assign(context, getContext(this->toolBar, $Region::TOOL_BAR_DRAG_WINDOW, this->dragWindowStyle, $SynthConstants::ENABLED));
	$nc(this->dragWindowStyle)->uninstallDefaults(context);
	$set(this, dragWindowStyle, nullptr);
	$nc(this->toolBar)->setLayout(nullptr);
}

void SynthToolBarUI::installComponents() {
}

void SynthToolBarUI::uninstallComponents() {
}

$LayoutManager* SynthToolBarUI::createLayout() {
	return $new($SynthToolBarUI$SynthToolBarLayoutManager, this);
}

$SynthContext* SynthToolBarUI::getContext($JComponent* c) {
	return getContext(c, $SynthLookAndFeel::getComponentState(c));
}

$SynthContext* SynthToolBarUI::getContext($JComponent* c, int32_t state) {
	return $SynthContext::getContext(c, this->style, state);
}

$SynthContext* SynthToolBarUI::getContext($JComponent* c, $Region* region, $SynthStyle* style) {
	return $SynthContext::getContext(c, region, style, getComponentState(c, region));
}

$SynthContext* SynthToolBarUI::getContext($JComponent* c, $Region* region, $SynthStyle* style, int32_t state) {
	return $SynthContext::getContext(c, region, style, state);
}

int32_t SynthToolBarUI::getComponentState($JComponent* c, $Region* region) {
	return $SynthLookAndFeel::getComponentState(c);
}

void SynthToolBarUI::update($Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($SynthContext, context, getContext(c));
	$SynthLookAndFeel::update(context, g);
	$var($SynthContext, var$0, context);
	$var($Graphics, var$1, g);
	int32_t var$2 = $nc(c)->getWidth();
	int32_t var$3 = c->getHeight();
	$nc($($nc(context)->getPainter()))->paintToolBarBackground(var$0, var$1, 0, 0, var$2, var$3, $nc(this->toolBar)->getOrientation());
	paint(context, g);
}

void SynthToolBarUI::paint($Graphics* g, $JComponent* c) {
	$var($SynthContext, context, getContext(c));
	paint(context, g);
}

void SynthToolBarUI::paintBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($($nc(context)->getPainter()))->paintToolBarBorder(context, g, x, y, w, h, $nc(this->toolBar)->getOrientation());
}

void SynthToolBarUI::setBorderToNonRollover($Component* c) {
}

void SynthToolBarUI::setBorderToRollover($Component* c) {
}

void SynthToolBarUI::setBorderToNormal($Component* c) {
}

void SynthToolBarUI::paint($SynthContext* context, $Graphics* g) {
	$useLocalCurrentObjectStackCache();
	if (this->handleIcon != nullptr && $nc(this->toolBar)->isFloatable()) {
		int32_t var$0 = 0;
		if ($nc($($nc(this->toolBar)->getComponentOrientation()))->isLeftToRight()) {
			var$0 = 0;
		} else {
			int32_t var$1 = $nc(this->toolBar)->getWidth();
			var$0 = var$1 - $SynthGraphicsUtils::getIconWidth(this->handleIcon, context);
		}
		int32_t startX = var$0;
		$var($Icon, var$2, this->handleIcon);
		$var($SynthContext, var$3, context);
		$var($Graphics, var$4, g);
		int32_t var$5 = startX;
		int32_t var$6 = $SynthGraphicsUtils::getIconWidth(this->handleIcon, context);
		$SynthGraphicsUtils::paintIcon(var$2, var$3, var$4, var$5, 0, var$6, $SynthGraphicsUtils::getIconHeight(this->handleIcon, context));
	}
	$init($Region);
	$var($SynthContext, subcontext, getContext(this->toolBar, $Region::TOOL_BAR_CONTENT, this->contentStyle));
	paintContent(subcontext, g, this->contentRect);
}

void SynthToolBarUI::paintContent($SynthContext* context, $Graphics* g, $Rectangle* bounds) {
	$useLocalCurrentObjectStackCache();
	$SynthLookAndFeel::updateSubregion(context, g, bounds);
	$nc($($nc(context)->getPainter()))->paintToolBarContentBackground(context, g, $nc(bounds)->x, bounds->y, bounds->width, bounds->height, $nc(this->toolBar)->getOrientation());
	$nc($(context->getPainter()))->paintToolBarContentBorder(context, g, $nc(bounds)->x, bounds->y, bounds->width, bounds->height, $nc(this->toolBar)->getOrientation());
}

void SynthToolBarUI::paintDragWindow($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	int32_t w = $nc(this->dragWindow)->getWidth();
	int32_t h = $nc(this->dragWindow)->getHeight();
	$init($Region);
	$var($SynthContext, context, getContext(this->toolBar, $Region::TOOL_BAR_DRAG_WINDOW, this->dragWindowStyle));
	$SynthLookAndFeel::updateSubregion(context, g, $$new($Rectangle, 0, 0, w, h));
	$nc($($nc(context)->getPainter()))->paintToolBarDragWindowBackground(context, g, 0, 0, w, h, $nc(this->dragWindow)->getOrientation());
	$nc($(context->getPainter()))->paintToolBarDragWindowBorder(context, g, 0, 0, w, h, $nc(this->dragWindow)->getOrientation());
}

void SynthToolBarUI::propertyChange($PropertyChangeEvent* e) {
	if ($SynthLookAndFeel::shouldUpdateStyle(e)) {
		updateStyle($cast($JToolBar, $($nc(e)->getSource())));
	}
}

SynthToolBarUI::SynthToolBarUI() {
}

$Class* SynthToolBarUI::load$($String* name, bool initialize) {
	$loadClass(SynthToolBarUI, name, initialize, &_SynthToolBarUI_ClassInfo_, allocate$SynthToolBarUI);
	return class$;
}

$Class* SynthToolBarUI::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax