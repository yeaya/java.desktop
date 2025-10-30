#include <java/awt/ScrollPane.h>

#include <java/awt/AWTError.h>
#include <java/awt/Adjustable.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/Container$AccessibleAWTContainer.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Panel.h>
#include <java/awt/Point.h>
#include <java/awt/ScrollPane$AccessibleAWTScrollPane.h>
#include <java/awt/ScrollPane$PeerFixer.h>
#include <java/awt/ScrollPaneAdjustable.h>
#include <java/awt/Toolkit.h>
#include <java/awt/event/AdjustmentListener.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/MouseWheelEvent.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/ContainerPeer.h>
#include <java/awt/peer/ScrollPanePeer.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <javax/accessibility/AccessibleContext.h>
#include <sun/awt/ComponentFactory.h>
#include <sun/awt/ScrollPaneWheelScroller.h>
#include <sun/awt/SunToolkit.h>
#include <jcpp.h>

#undef HORIZONTAL
#undef MOUSE_WHEEL
#undef SCROLLBARS_ALWAYS
#undef SCROLLBARS_AS_NEEDED
#undef SCROLLBARS_NEVER
#undef VERTICAL

using $AWTError = ::java::awt::AWTError;
using $Adjustable = ::java::awt::Adjustable;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $Container = ::java::awt::Container;
using $Container$AccessibleAWTContainer = ::java::awt::Container$AccessibleAWTContainer;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Panel = ::java::awt::Panel;
using $Point = ::java::awt::Point;
using $ScrollPane$AccessibleAWTScrollPane = ::java::awt::ScrollPane$AccessibleAWTScrollPane;
using $ScrollPane$PeerFixer = ::java::awt::ScrollPane$PeerFixer;
using $ScrollPaneAdjustable = ::java::awt::ScrollPaneAdjustable;
using $Toolkit = ::java::awt::Toolkit;
using $AdjustmentListener = ::java::awt::event::AdjustmentListener;
using $InputEvent = ::java::awt::event::InputEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $MouseWheelEvent = ::java::awt::event::MouseWheelEvent;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ContainerPeer = ::java::awt::peer::ContainerPeer;
using $ScrollPanePeer = ::java::awt::peer::ScrollPanePeer;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $NullPointerException = ::java::lang::NullPointerException;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $ComponentFactory = ::sun::awt::ComponentFactory;
using $ScrollPaneWheelScroller = ::sun::awt::ScrollPaneWheelScroller;
using $SunToolkit = ::sun::awt::SunToolkit;

namespace java {
	namespace awt {

$Attribute ScrollPane_Attribute_var$1[] = {
	{'s', "scrollbarDisplayPolicy"},
	{'-'}
};

$NamedAttribute ScrollPane_Attribute_var$0[] = {
	{"value", '[', ScrollPane_Attribute_var$1},
	{}
};

$CompoundAttribute _ScrollPane_MethodAnnotations_init$1[] = {
	{"Ljava/beans/ConstructorProperties;", ScrollPane_Attribute_var$0},
	{}
};

$CompoundAttribute _ScrollPane_MethodAnnotations_getScrollPosition13[] = {
	{"Ljava/beans/Transient;", nullptr},
	{}
};

$CompoundAttribute _ScrollPane_MethodAnnotations_layout20[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _ScrollPane_FieldInfo_[] = {
	{"SCROLLBARS_AS_NEEDED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ScrollPane, SCROLLBARS_AS_NEEDED)},
	{"SCROLLBARS_ALWAYS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ScrollPane, SCROLLBARS_ALWAYS)},
	{"SCROLLBARS_NEVER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ScrollPane, SCROLLBARS_NEVER)},
	{"scrollbarDisplayPolicy", "I", nullptr, $PRIVATE, $field(ScrollPane, scrollbarDisplayPolicy)},
	{"vAdjustable", "Ljava/awt/ScrollPaneAdjustable;", nullptr, $PRIVATE, $field(ScrollPane, vAdjustable)},
	{"hAdjustable", "Ljava/awt/ScrollPaneAdjustable;", nullptr, $PRIVATE, $field(ScrollPane, hAdjustable)},
	{"base", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ScrollPane, base)},
	{"nameCounter", "I", nullptr, $PRIVATE | $STATIC, $staticField(ScrollPane, nameCounter)},
	{"defaultWheelScroll", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ScrollPane, defaultWheelScroll)},
	{"wheelScrollingEnabled", "Z", nullptr, $PRIVATE, $field(ScrollPane, wheelScrollingEnabled)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ScrollPane, serialVersionUID)},
	{}
};

$MethodInfo _ScrollPane_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ScrollPane::*)()>(&ScrollPane::init$)), "java.awt.HeadlessException"},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(ScrollPane::*)(int32_t)>(&ScrollPane::init$)), "java.awt.HeadlessException", nullptr, _ScrollPane_MethodAnnotations_init$1},
	{"addImpl", "(Ljava/awt/Component;Ljava/lang/Object;I)V", nullptr, $PROTECTED | $FINAL},
	{"addNotify", "()V", nullptr, $PUBLIC},
	{"addToPanel", "(Ljava/awt/Component;Ljava/lang/Object;I)V", nullptr, $PRIVATE, $method(static_cast<void(ScrollPane::*)($Component*,Object$*,int32_t)>(&ScrollPane::addToPanel))},
	{"autoProcessMouseWheel", "(Ljava/awt/event/MouseWheelEvent;)V", nullptr, 0},
	{"calculateChildSize", "()Ljava/awt/Dimension;", nullptr, 0},
	{"constructComponentName", "()Ljava/lang/String;", nullptr, 0},
	{"doLayout", "()V", nullptr, $PUBLIC},
	{"eventTypeEnabled", "(I)Z", nullptr, $PROTECTED},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC},
	{"getHAdjustable", "()Ljava/awt/Adjustable;", nullptr, $PUBLIC},
	{"getHScrollbarHeight", "()I", nullptr, $PUBLIC},
	{"getScrollPosition", "()Ljava/awt/Point;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScrollPane_MethodAnnotations_getScrollPosition13},
	{"getScrollbarDisplayPolicy", "()I", nullptr, $PUBLIC},
	{"getVAdjustable", "()Ljava/awt/Adjustable;", nullptr, $PUBLIC},
	{"getVScrollbarWidth", "()I", nullptr, $PUBLIC},
	{"getViewportSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&ScrollPane::initIDs))},
	{"isWheelScrollingEnabled", "()Z", nullptr, $PUBLIC},
	{"layout", "()V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _ScrollPane_MethodAnnotations_layout20},
	{"paramString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"printComponents", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"processMouseWheelEvent", "(Ljava/awt/event/MouseWheelEvent;)V", nullptr, $PROTECTED},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(ScrollPane::*)($ObjectInputStream*)>(&ScrollPane::readObject)), "java.lang.ClassNotFoundException,java.io.IOException,java.awt.HeadlessException"},
	{"setLayout", "(Ljava/awt/LayoutManager;)V", nullptr, $PUBLIC | $FINAL},
	{"setScrollPosition", "(II)V", nullptr, $PUBLIC},
	{"setScrollPosition", "(Ljava/awt/Point;)V", nullptr, $PUBLIC},
	{"setWheelScrollingEnabled", "(Z)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(ScrollPane::*)($ObjectOutputStream*)>(&ScrollPane::writeObject)), "java.io.IOException"},
	{}
};

#define _METHOD_INDEX_initIDs 22

$InnerClassInfo _ScrollPane_InnerClassesInfo_[] = {
	{"java.awt.ScrollPane$AccessibleAWTScrollPane", "java.awt.ScrollPane", "AccessibleAWTScrollPane", $PROTECTED},
	{"java.awt.ScrollPane$PeerFixer", "java.awt.ScrollPane", "PeerFixer", 0},
	{}
};

$ClassInfo _ScrollPane_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.ScrollPane",
	"java.awt.Container",
	"javax.accessibility.Accessible",
	_ScrollPane_FieldInfo_,
	_ScrollPane_MethodInfo_,
	nullptr,
	nullptr,
	_ScrollPane_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.ScrollPane$AccessibleAWTScrollPane,java.awt.ScrollPane$PeerFixer"
};

$Object* allocate$ScrollPane($Class* clazz) {
	return $of($alloc(ScrollPane));
}

$String* ScrollPane::toString() {
	 return this->$Container::toString();
}

int32_t ScrollPane::hashCode() {
	 return this->$Container::hashCode();
}

bool ScrollPane::equals(Object$* arg0) {
	 return this->$Container::equals(arg0);
}

$Object* ScrollPane::clone() {
	 return this->$Container::clone();
}

void ScrollPane::finalize() {
	this->$Container::finalize();
}

$String* ScrollPane::base = nullptr;
int32_t ScrollPane::nameCounter = 0;

void ScrollPane::initIDs() {
	$init(ScrollPane);
	$prepareNativeStatic(ScrollPane, initIDs, void);
	$invokeNativeStatic(ScrollPane, initIDs);
	$finishNativeStatic();
}

void ScrollPane::init$() {
	ScrollPane::init$(ScrollPane::SCROLLBARS_AS_NEEDED);
}

void ScrollPane::init$(int32_t scrollbarDisplayPolicy) {
	$useLocalCurrentObjectStackCache();
	$Container::init$();
	this->wheelScrollingEnabled = ScrollPane::defaultWheelScroll;
	$GraphicsEnvironment::checkHeadless();
	$set(this, layoutMgr, nullptr);
	this->width = 100;
	this->height = 100;
	switch (scrollbarDisplayPolicy) {
	case ScrollPane::SCROLLBARS_NEVER:
		{}
	case ScrollPane::SCROLLBARS_AS_NEEDED:
		{}
	case ScrollPane::SCROLLBARS_ALWAYS:
		{
			this->scrollbarDisplayPolicy = scrollbarDisplayPolicy;
			break;
		}
	default:
		{
			$throwNew($IllegalArgumentException, "illegal scrollbar display policy"_s);
		}
	}
	$set(this, vAdjustable, $new($ScrollPaneAdjustable, this, $$new($ScrollPane$PeerFixer, this, this), $Adjustable::VERTICAL));
	$set(this, hAdjustable, $new($ScrollPaneAdjustable, this, $$new($ScrollPane$PeerFixer, this, this), $Adjustable::HORIZONTAL));
	setWheelScrollingEnabled(ScrollPane::defaultWheelScroll);
}

$String* ScrollPane::constructComponentName() {
	$useLocalCurrentObjectStackCache();
	$synchronized(ScrollPane::class$) {
		$var($String, var$0, ScrollPane::base);
		return $concat(var$0, $$str(ScrollPane::nameCounter++));
	}
}

void ScrollPane::addToPanel($Component* comp, Object$* constraints, int32_t index) {
	$useLocalCurrentObjectStackCache();
	$var($Panel, child, $new($Panel));
	child->setLayout($$new($BorderLayout));
	child->add(comp);
	$Container::addImpl(child, constraints, index);
	validate();
}

void ScrollPane::addImpl($Component* comp, Object$* constraints, int32_t index) {
	$synchronized(getTreeLock()) {
		if (getComponentCount() > 0) {
			remove(0);
		}
		if (index > 0) {
			$throwNew($IllegalArgumentException, "position greater than 0"_s);
		}
		if (!$SunToolkit::isLightweightOrUnknown(comp)) {
			$Container::addImpl(comp, constraints, index);
		} else {
			addToPanel(comp, constraints, index);
		}
	}
}

int32_t ScrollPane::getScrollbarDisplayPolicy() {
	return this->scrollbarDisplayPolicy;
}

$Dimension* ScrollPane::getViewportSize() {
	$var($Insets, i, getInsets());
	return $new($Dimension, this->width - $nc(i)->right - i->left, this->height - i->top - i->bottom);
}

int32_t ScrollPane::getHScrollbarHeight() {
	int32_t h = 0;
	if (this->scrollbarDisplayPolicy != ScrollPane::SCROLLBARS_NEVER) {
		$var($ScrollPanePeer, peer, $cast($ScrollPanePeer, this->peer));
		if (peer != nullptr) {
			h = peer->getHScrollbarHeight();
		}
	}
	return h;
}

int32_t ScrollPane::getVScrollbarWidth() {
	int32_t w = 0;
	if (this->scrollbarDisplayPolicy != ScrollPane::SCROLLBARS_NEVER) {
		$var($ScrollPanePeer, peer, $cast($ScrollPanePeer, this->peer));
		if (peer != nullptr) {
			w = peer->getVScrollbarWidth();
		}
	}
	return w;
}

$Adjustable* ScrollPane::getVAdjustable() {
	return this->vAdjustable;
}

$Adjustable* ScrollPane::getHAdjustable() {
	return this->hAdjustable;
}

void ScrollPane::setScrollPosition(int32_t x, int32_t y) {
	$synchronized(getTreeLock()) {
		if (getComponentCount() == 0) {
			$throwNew($NullPointerException, "child is null"_s);
		}
		$nc(this->hAdjustable)->setValue(x);
		$nc(this->vAdjustable)->setValue(y);
	}
}

void ScrollPane::setScrollPosition($Point* p) {
	setScrollPosition($nc(p)->x, p->y);
}

$Point* ScrollPane::getScrollPosition() {
	$synchronized(getTreeLock()) {
		if (getComponentCount() == 0) {
			$throwNew($NullPointerException, "child is null"_s);
		}
		int32_t var$0 = $nc(this->hAdjustable)->getValue();
		return $new($Point, var$0, $nc(this->vAdjustable)->getValue());
	}
}

void ScrollPane::setLayout($LayoutManager* mgr) {
	$throwNew($AWTError, "ScrollPane controls layout"_s);
}

void ScrollPane::doLayout() {
	layout();
}

$Dimension* ScrollPane::calculateChildSize() {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, size, getSize());
	$var($Insets, insets, getInsets());
	int32_t viewWidth = $nc(size)->width - $nc(insets)->left * 2;
	int32_t viewHeight = size->height - insets->top * 2;
	bool vbarOn = false;
	bool hbarOn = false;
	$var($Component, child, getComponent(0));
	$var($Dimension, childSize, $new($Dimension, $($nc(child)->getPreferredSize())));
	if (this->scrollbarDisplayPolicy == ScrollPane::SCROLLBARS_AS_NEEDED) {
		vbarOn = childSize->height > viewHeight;
		hbarOn = childSize->width > viewWidth;
	} else if (this->scrollbarDisplayPolicy == ScrollPane::SCROLLBARS_ALWAYS) {
		vbarOn = (hbarOn = true);
	} else {
		vbarOn = (hbarOn = false);
	}
	int32_t vbarWidth = getVScrollbarWidth();
	int32_t hbarHeight = getHScrollbarHeight();
	if (vbarOn) {
		viewWidth -= vbarWidth;
	}
	if (hbarOn) {
		viewHeight -= hbarHeight;
	}
	if (childSize->width < viewWidth) {
		childSize->width = viewWidth;
	}
	if (childSize->height < viewHeight) {
		childSize->height = viewHeight;
	}
	return childSize;
}

void ScrollPane::layout() {
	$useLocalCurrentObjectStackCache();
	if (getComponentCount() == 0) {
		return;
	}
	$var($Component, c, getComponent(0));
	$var($Point, p, getScrollPosition());
	$var($Dimension, cs, calculateChildSize());
	$var($Dimension, vs, getViewportSize());
	$nc(c)->reshape(-$nc(p)->x, -p->y, $nc(cs)->width, cs->height);
	$var($ScrollPanePeer, peer, $cast($ScrollPanePeer, this->peer));
	if (peer != nullptr) {
		peer->childResized($nc(cs)->width, cs->height);
	}
	$assign(vs, getViewportSize());
	$nc(this->hAdjustable)->setSpan(0, $nc(cs)->width, $nc(vs)->width);
	$nc(this->vAdjustable)->setSpan(0, $nc(cs)->height, $nc(vs)->height);
}

void ScrollPane::printComponents($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	if (getComponentCount() == 0) {
		return;
	}
	$var($Component, c, getComponent(0));
	$var($Point, p, $nc(c)->getLocation());
	$var($Dimension, vs, getViewportSize());
	$var($Insets, i, getInsets());
	$var($Graphics, cg, $nc(g)->create());
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(cg)->clipRect($nc(i)->left, i->top, $nc(vs)->width, vs->height);
			cg->translate($nc(p)->x, p->y);
			c->printAll(cg);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(cg)->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void ScrollPane::addNotify() {
	$synchronized(getTreeLock()) {
		int32_t vAdjustableValue = 0;
		int32_t hAdjustableValue = 0;
		if (getComponentCount() > 0) {
			vAdjustableValue = $nc(this->vAdjustable)->getValue();
			hAdjustableValue = $nc(this->hAdjustable)->getValue();
			$nc(this->vAdjustable)->setValue(0);
			$nc(this->hAdjustable)->setValue(0);
		}
		if (this->peer == nullptr) {
			$set(this, peer, $nc($(getComponentFactory()))->createScrollPane(this));
		}
		$Container::addNotify();
		if (getComponentCount() > 0) {
			$nc(this->vAdjustable)->setValue(vAdjustableValue);
			$nc(this->hAdjustable)->setValue(hAdjustableValue);
		}
	}
}

$String* ScrollPane::paramString() {
	$useLocalCurrentObjectStackCache();
	$var($String, sdpStr, nullptr);
	switch (this->scrollbarDisplayPolicy) {
	case ScrollPane::SCROLLBARS_AS_NEEDED:
		{
			$assign(sdpStr, "as-needed"_s);
			break;
		}
	case ScrollPane::SCROLLBARS_ALWAYS:
		{
			$assign(sdpStr, "always"_s);
			break;
		}
	case ScrollPane::SCROLLBARS_NEVER:
		{
			$assign(sdpStr, "never"_s);
			break;
		}
	default:
		{
			$assign(sdpStr, "invalid display policy"_s);
		}
	}
	$var($Point, p, (getComponentCount() > 0) ? getScrollPosition() : $new($Point, 0, 0));
	$var($Insets, i, getInsets());
	$var($String, var$0, $$str({$($Container::paramString()), ",ScrollPosition=("_s, $$str($nc(p)->x), ","_s, $$str(p->y), "),Insets=("_s, $$str($nc(i)->top), ","_s, $$str(i->left), ","_s, $$str(i->bottom), ","_s, $$str(i->right), "),ScrollbarDisplayPolicy="_s, sdpStr, ",wheelScrollingEnabled="_s}));
	return $concat(var$0, $$str(isWheelScrollingEnabled()));
}

void ScrollPane::autoProcessMouseWheel($MouseWheelEvent* e) {
	processMouseWheelEvent(e);
}

void ScrollPane::processMouseWheelEvent($MouseWheelEvent* e) {
	if (isWheelScrollingEnabled()) {
		$ScrollPaneWheelScroller::handleWheelScrolling(this, e);
		$nc(e)->consume();
	}
	$Container::processMouseWheelEvent(e);
}

bool ScrollPane::eventTypeEnabled(int32_t type) {
	if (type == $MouseEvent::MOUSE_WHEEL && isWheelScrollingEnabled()) {
		return true;
	} else {
		return $Container::eventTypeEnabled(type);
	}
}

void ScrollPane::setWheelScrollingEnabled(bool handleWheel) {
	this->wheelScrollingEnabled = handleWheel;
}

bool ScrollPane::isWheelScrollingEnabled() {
	return this->wheelScrollingEnabled;
}

void ScrollPane::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
}

void ScrollPane::readObject($ObjectInputStream* s) {
	$GraphicsEnvironment::checkHeadless();
	$var($ObjectInputStream$GetField, f, $nc(s)->readFields());
	this->scrollbarDisplayPolicy = $nc(f)->get("scrollbarDisplayPolicy"_s, ScrollPane::SCROLLBARS_AS_NEEDED);
	$set(this, hAdjustable, $cast($ScrollPaneAdjustable, f->get("hAdjustable"_s, ($Object*)nullptr)));
	$set(this, vAdjustable, $cast($ScrollPaneAdjustable, f->get("vAdjustable"_s, ($Object*)nullptr)));
	this->wheelScrollingEnabled = f->get("wheelScrollingEnabled"_s, ScrollPane::defaultWheelScroll);
}

$AccessibleContext* ScrollPane::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($ScrollPane$AccessibleAWTScrollPane, this));
	}
	return this->accessibleContext;
}

void clinit$ScrollPane($Class* class$) {
	$assignStatic(ScrollPane::base, "scrollpane"_s);
	{
		$Toolkit::loadLibraries();
		if (!$GraphicsEnvironment::isHeadless()) {
			ScrollPane::initIDs();
		}
	}
	ScrollPane::nameCounter = 0;
}

ScrollPane::ScrollPane() {
}

$Class* ScrollPane::load$($String* name, bool initialize) {
	$loadClass(ScrollPane, name, initialize, &_ScrollPane_ClassInfo_, clinit$ScrollPane, allocate$ScrollPane);
	return class$;
}

$Class* ScrollPane::class$ = nullptr;

	} // awt
} // java