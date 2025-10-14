#include <javax/swing/plaf/synth/SynthSplitPaneUI.h>

#include <java/awt/Canvas.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/Shape.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Number.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractSet.h>
#include <java/util/HashSet.h>
#include <java/util/Set.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JSplitPane.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/SplitPaneUI.h>
#include <javax/swing/plaf/basic/BasicSplitPaneDivider.h>
#include <javax/swing/plaf/basic/BasicSplitPaneUI.h>
#include <javax/swing/plaf/synth/Region.h>
#include <javax/swing/plaf/synth/SynthConstants.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/plaf/synth/SynthSplitPaneDivider.h>
#include <javax/swing/plaf/synth/SynthSplitPaneUI$1.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <javax/swing/plaf/synth/SynthUI.h>
#include <jcpp.h>

#undef BACKWARD_TRAVERSAL_KEYS
#undef DIVIDER
#undef ENABLED
#undef FORWARD_TRAVERSAL_KEYS
#undef HORIZONTAL_SPLIT
#undef MOUSE_OVER
#undef PRESSED
#undef SHIFT_MASK
#undef SPLIT_PANE_DIVIDER
#undef VK_TAB

using $Canvas = ::java::awt::Canvas;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $Shape = ::java::awt::Shape;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $AbstractSet = ::java::util::AbstractSet;
using $EventObject = ::java::util::EventObject;
using $HashSet = ::java::util::HashSet;
using $Set = ::java::util::Set;
using $JComponent = ::javax::swing::JComponent;
using $JSplitPane = ::javax::swing::JSplitPane;
using $KeyStroke = ::javax::swing::KeyStroke;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $SplitPaneUI = ::javax::swing::plaf::SplitPaneUI;
using $BasicSplitPaneDivider = ::javax::swing::plaf::basic::BasicSplitPaneDivider;
using $BasicSplitPaneUI = ::javax::swing::plaf::basic::BasicSplitPaneUI;
using $Region = ::javax::swing::plaf::synth::Region;
using $SynthConstants = ::javax::swing::plaf::synth::SynthConstants;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;
using $SynthPainter = ::javax::swing::plaf::synth::SynthPainter;
using $SynthSplitPaneDivider = ::javax::swing::plaf::synth::SynthSplitPaneDivider;
using $SynthSplitPaneUI$1 = ::javax::swing::plaf::synth::SynthSplitPaneUI$1;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;
using $SynthUI = ::javax::swing::plaf::synth::SynthUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthSplitPaneUI_FieldInfo_[] = {
	{"managingFocusForwardTraversalKeys", "Ljava/util/Set;", "Ljava/util/Set<Ljavax/swing/KeyStroke;>;", $PRIVATE, $field(SynthSplitPaneUI, managingFocusForwardTraversalKeys)},
	{"managingFocusBackwardTraversalKeys", "Ljava/util/Set;", "Ljava/util/Set<Ljavax/swing/KeyStroke;>;", $PRIVATE, $field(SynthSplitPaneUI, managingFocusBackwardTraversalKeys)},
	{"style", "Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PRIVATE, $field(SynthSplitPaneUI, style)},
	{"dividerStyle", "Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PRIVATE, $field(SynthSplitPaneUI, dividerStyle)},
	{}
};

$MethodInfo _SynthSplitPaneUI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SynthSplitPaneUI::*)()>(&SynthSplitPaneUI::init$))},
	{"createDefaultDivider", "()Ljavax/swing/plaf/basic/BasicSplitPaneDivider;", nullptr, $PUBLIC},
	{"createDefaultNonContinuousLayoutDivider", "()Ljava/awt/Component;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&SynthSplitPaneUI::createUI))},
	{"finishedPaintingChildren", "(Ljavax/swing/JSplitPane;Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"getComponentState", "(Ljavax/swing/JComponent;Ljavax/swing/plaf/synth/Region;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(SynthSplitPaneUI::*)($JComponent*,$Region*)>(&SynthSplitPaneUI::getComponentState))},
	{"getContext", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PUBLIC},
	{"getContext", "(Ljavax/swing/JComponent;I)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PRIVATE, $method(static_cast<$SynthContext*(SynthSplitPaneUI::*)($JComponent*,int32_t)>(&SynthSplitPaneUI::getContext))},
	{"getContext", "(Ljavax/swing/JComponent;Ljavax/swing/plaf/synth/Region;)Ljavax/swing/plaf/synth/SynthContext;", nullptr, 0},
	{"getContext", "(Ljavax/swing/JComponent;Ljavax/swing/plaf/synth/Region;I)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PRIVATE, $method(static_cast<$SynthContext*(SynthSplitPaneUI::*)($JComponent*,$Region*,int32_t)>(&SynthSplitPaneUI::getContext))},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paint", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"paintBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintDragDivider", "(Ljava/awt/Graphics;IIII)V", nullptr, $PRIVATE, $method(static_cast<void(SynthSplitPaneUI::*)($Graphics*,int32_t,int32_t,int32_t,int32_t)>(&SynthSplitPaneUI::paintDragDivider))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"uninstallDefaults", "()V", nullptr, $PROTECTED},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"updateStyle", "(Ljavax/swing/JSplitPane;)V", nullptr, $PRIVATE, $method(static_cast<void(SynthSplitPaneUI::*)($JSplitPane*)>(&SynthSplitPaneUI::updateStyle))},
	{}
};

$InnerClassInfo _SynthSplitPaneUI_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.SynthSplitPaneUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SynthSplitPaneUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.synth.SynthSplitPaneUI",
	"javax.swing.plaf.basic.BasicSplitPaneUI",
	"java.beans.PropertyChangeListener,javax.swing.plaf.synth.SynthUI",
	_SynthSplitPaneUI_FieldInfo_,
	_SynthSplitPaneUI_MethodInfo_,
	nullptr,
	nullptr,
	_SynthSplitPaneUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.SynthSplitPaneUI$1"
};

$Object* allocate$SynthSplitPaneUI($Class* clazz) {
	return $of($alloc(SynthSplitPaneUI));
}

int32_t SynthSplitPaneUI::hashCode() {
	 return this->$BasicSplitPaneUI::hashCode();
}

bool SynthSplitPaneUI::equals(Object$* arg0) {
	 return this->$BasicSplitPaneUI::equals(arg0);
}

$Object* SynthSplitPaneUI::clone() {
	 return this->$BasicSplitPaneUI::clone();
}

$String* SynthSplitPaneUI::toString() {
	 return this->$BasicSplitPaneUI::toString();
}

void SynthSplitPaneUI::finalize() {
	this->$BasicSplitPaneUI::finalize();
}

void SynthSplitPaneUI::init$() {
	$BasicSplitPaneUI::init$();
}

$ComponentUI* SynthSplitPaneUI::createUI($JComponent* x) {
	$init(SynthSplitPaneUI);
	return $new(SynthSplitPaneUI);
}

void SynthSplitPaneUI::installDefaults() {
	updateStyle(this->splitPane);
	setOrientation($nc(this->splitPane)->getOrientation());
	setContinuousLayout($nc(this->splitPane)->isContinuousLayout());
	resetLayoutManager();
	if (this->nonContinuousLayoutDivider == nullptr) {
		setNonContinuousLayoutDivider($(createDefaultNonContinuousLayoutDivider()), true);
	} else {
		setNonContinuousLayoutDivider(this->nonContinuousLayoutDivider, true);
	}
	if (this->managingFocusForwardTraversalKeys == nullptr) {
		$set(this, managingFocusForwardTraversalKeys, $new($HashSet));
		$nc(this->managingFocusForwardTraversalKeys)->add($($KeyStroke::getKeyStroke($KeyEvent::VK_TAB, 0)));
	}
	$nc(this->splitPane)->setFocusTraversalKeys($KeyboardFocusManager::FORWARD_TRAVERSAL_KEYS, this->managingFocusForwardTraversalKeys);
	if (this->managingFocusBackwardTraversalKeys == nullptr) {
		$set(this, managingFocusBackwardTraversalKeys, $new($HashSet));
		$nc(this->managingFocusBackwardTraversalKeys)->add($($KeyStroke::getKeyStroke($KeyEvent::VK_TAB, $InputEvent::SHIFT_MASK)));
	}
	$nc(this->splitPane)->setFocusTraversalKeys($KeyboardFocusManager::BACKWARD_TRAVERSAL_KEYS, this->managingFocusBackwardTraversalKeys);
}

void SynthSplitPaneUI::updateStyle($JSplitPane* splitPane) {
	$init($Region);
	$var($SynthContext, context, getContext(splitPane, $Region::SPLIT_PANE_DIVIDER, $SynthConstants::ENABLED));
	$var($SynthStyle, oldDividerStyle, this->dividerStyle);
	$set(this, dividerStyle, $SynthLookAndFeel::updateStyle(context, this));
	$assign(context, getContext(static_cast<$JComponent*>(splitPane), $SynthConstants::ENABLED));
	$var($SynthStyle, oldStyle, this->style);
	$set(this, style, $SynthLookAndFeel::updateStyle(context, this));
	if (this->style != oldStyle) {
		$var($Object, value, $nc(this->style)->get(context, "SplitPane.size"_s));
		if (value == nullptr) {
			$assign(value, $Integer::valueOf(6));
		}
		$LookAndFeel::installProperty(splitPane, "dividerSize"_s, value);
		this->dividerSize = $nc(($cast($Number, value)))->intValue();
		$assign(value, $nc(this->style)->get(context, "SplitPane.oneTouchExpandable"_s));
		if (value != nullptr) {
			$LookAndFeel::installProperty(splitPane, "oneTouchExpandable"_s, value);
		}
		if (this->divider != nullptr) {
			$nc(splitPane)->remove(static_cast<$Component*>(this->divider));
			$nc(this->divider)->setDividerSize(splitPane->getDividerSize());
		}
		if (oldStyle != nullptr) {
			uninstallKeyboardActions();
			installKeyboardActions();
		}
	}
	if (this->style != oldStyle || this->dividerStyle != oldDividerStyle) {
		if (this->divider != nullptr) {
			$nc(splitPane)->remove(static_cast<$Component*>(this->divider));
		}
		$set(this, divider, createDefaultDivider());
		$nc(this->divider)->setBasicSplitPaneUI(this);
		$init($JSplitPane);
		$nc(splitPane)->add(static_cast<$Component*>(this->divider), $of($JSplitPane::DIVIDER));
	}
}

void SynthSplitPaneUI::installListeners() {
	$BasicSplitPaneUI::installListeners();
	$nc(this->splitPane)->addPropertyChangeListener(this);
}

void SynthSplitPaneUI::uninstallDefaults() {
	$var($SynthContext, context, getContext(static_cast<$JComponent*>(this->splitPane), $SynthConstants::ENABLED));
	$nc(this->style)->uninstallDefaults(context);
	$set(this, style, nullptr);
	$init($Region);
	$assign(context, getContext(this->splitPane, $Region::SPLIT_PANE_DIVIDER, $SynthConstants::ENABLED));
	$nc(this->dividerStyle)->uninstallDefaults(context);
	$set(this, dividerStyle, nullptr);
	$BasicSplitPaneUI::uninstallDefaults();
}

void SynthSplitPaneUI::uninstallListeners() {
	$BasicSplitPaneUI::uninstallListeners();
	$nc(this->splitPane)->removePropertyChangeListener(this);
}

$SynthContext* SynthSplitPaneUI::getContext($JComponent* c) {
	return getContext(c, $SynthLookAndFeel::getComponentState(c));
}

$SynthContext* SynthSplitPaneUI::getContext($JComponent* c, int32_t state) {
	return $SynthContext::getContext(c, this->style, state);
}

$SynthContext* SynthSplitPaneUI::getContext($JComponent* c, $Region* region) {
	return getContext(c, region, getComponentState(c, region));
}

$SynthContext* SynthSplitPaneUI::getContext($JComponent* c, $Region* region, int32_t state) {
	$init($Region);
	if (region == $Region::SPLIT_PANE_DIVIDER) {
		return $SynthContext::getContext(c, region, this->dividerStyle, state);
	}
	return $SynthContext::getContext(c, region, this->style, state);
}

int32_t SynthSplitPaneUI::getComponentState($JComponent* c, $Region* subregion) {
	int32_t state = $SynthLookAndFeel::getComponentState(c);
	if ($nc(this->divider)->isMouseOver()) {
		state |= $SynthConstants::MOUSE_OVER;
	}
	return state;
}

void SynthSplitPaneUI::propertyChange($PropertyChangeEvent* e) {
	if ($SynthLookAndFeel::shouldUpdateStyle(e)) {
		updateStyle($cast($JSplitPane, $($nc(e)->getSource())));
	}
}

$BasicSplitPaneDivider* SynthSplitPaneUI::createDefaultDivider() {
	$var($SynthSplitPaneDivider, divider, $new($SynthSplitPaneDivider, this));
	divider->setDividerSize($nc(this->splitPane)->getDividerSize());
	return divider;
}

$Component* SynthSplitPaneUI::createDefaultNonContinuousLayoutDivider() {
	return $new($SynthSplitPaneUI$1, this);
}

void SynthSplitPaneUI::update($Graphics* g, $JComponent* c) {
	$var($SynthContext, context, getContext(c));
	$SynthLookAndFeel::update(context, g);
	$var($SynthContext, var$0, context);
	$var($Graphics, var$1, g);
	int32_t var$2 = $nc(c)->getWidth();
	$nc($($nc(context)->getPainter()))->paintSplitPaneBackground(var$0, var$1, 0, 0, var$2, c->getHeight());
	paint(context, g);
}

void SynthSplitPaneUI::paint($Graphics* g, $JComponent* c) {
	$var($SynthContext, context, getContext(c));
	paint(context, g);
}

void SynthSplitPaneUI::paint($SynthContext* context, $Graphics* g) {
	$BasicSplitPaneUI::paint(g, this->splitPane);
}

void SynthSplitPaneUI::paintBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($($nc(context)->getPainter()))->paintSplitPaneBorder(context, g, x, y, w, h);
}

void SynthSplitPaneUI::paintDragDivider($Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$init($Region);
	$var($SynthContext, context, getContext(static_cast<$JComponent*>(this->splitPane), $Region::SPLIT_PANE_DIVIDER));
	$nc(context)->setComponentState(((context->getComponentState() | $SynthConstants::MOUSE_OVER) ^ $SynthConstants::MOUSE_OVER) | $SynthConstants::PRESSED);
	$var($Shape, oldClip, $nc(g)->getClip());
	g->clipRect(x, y, w, h);
	$nc($(context->getPainter()))->paintSplitPaneDragDivider(context, g, x, y, w, h, $nc(this->splitPane)->getOrientation());
	g->setClip(oldClip);
}

void SynthSplitPaneUI::finishedPaintingChildren($JSplitPane* jc, $Graphics* g) {
	bool var$0 = jc == this->splitPane && getLastDragLocation() != -1;
	if (var$0 && !isContinuousLayout() && !this->draggingHW) {
		if ($nc(jc)->getOrientation() == $JSplitPane::HORIZONTAL_SPLIT) {
			$var($Graphics, var$1, g);
			int32_t var$2 = getLastDragLocation();
			int32_t var$3 = this->dividerSize - 1;
			paintDragDivider(var$1, var$2, 0, var$3, $nc(this->splitPane)->getHeight() - 1);
		} else {
			$var($Graphics, var$4, g);
			int32_t var$5 = getLastDragLocation();
			paintDragDivider(var$4, 0, var$5, $nc(this->splitPane)->getWidth() - 1, this->dividerSize - 1);
		}
	}
}

SynthSplitPaneUI::SynthSplitPaneUI() {
}

$Class* SynthSplitPaneUI::load$($String* name, bool initialize) {
	$loadClass(SynthSplitPaneUI, name, initialize, &_SynthSplitPaneUI_ClassInfo_, allocate$SynthSplitPaneUI);
	return class$;
}

$Class* SynthSplitPaneUI::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax