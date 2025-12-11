#include <javax/swing/plaf/LayerUI.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Component$BaselineResizeBehavior.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Image.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/HierarchyEvent.h>
#include <java/awt/event/InputMethodEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/MouseWheelEvent.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/beans/PropertyChangeSupport.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLayer.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

#undef ANCESTOR_MOVED
#undef ANCESTOR_RESIZED
#undef HIERARCHY_CHANGED
#undef MOUSE_CLICKED
#undef MOUSE_DRAGGED
#undef MOUSE_ENTERED
#undef MOUSE_EXITED
#undef MOUSE_MOVED
#undef MOUSE_PRESSED
#undef MOUSE_RELEASED
#undef MOUSE_WHEEL

using $PropertyChangeListenerArray = $Array<::java::beans::PropertyChangeListener>;
using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $Component$BaselineResizeBehavior = ::java::awt::Component$BaselineResizeBehavior;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Image = ::java::awt::Image;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $HierarchyEvent = ::java::awt::event::HierarchyEvent;
using $InputMethodEvent = ::java::awt::event::InputMethodEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $MouseWheelEvent = ::java::awt::event::MouseWheelEvent;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $PropertyChangeSupport = ::java::beans::PropertyChangeSupport;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JLayer = ::javax::swing::JLayer;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

namespace javax {
	namespace swing {
		namespace plaf {

$FieldInfo _LayerUI_FieldInfo_[] = {
	{"propertyChangeSupport", "Ljava/beans/PropertyChangeSupport;", nullptr, $PRIVATE | $FINAL, $field(LayerUI, propertyChangeSupport)},
	{}
};

$MethodInfo _LayerUI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LayerUI::*)()>(&LayerUI::init$))},
	{"addPropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC},
	{"addPropertyChangeListener", "(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC},
	{"applyPropertyChange", "(Ljava/beans/PropertyChangeEvent;Ljavax/swing/JLayer;)V", "(Ljava/beans/PropertyChangeEvent;Ljavax/swing/JLayer<+TV;>;)V", $PUBLIC},
	{"doLayout", "(Ljavax/swing/JLayer;)V", "(Ljavax/swing/JLayer<+TV;>;)V", $PUBLIC},
	{"eventDispatched", "(Ljava/awt/AWTEvent;Ljavax/swing/JLayer;)V", "(Ljava/awt/AWTEvent;Ljavax/swing/JLayer<+TV;>;)V", $PUBLIC},
	{"firePropertyChange", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"getBaseline", "(Ljavax/swing/JComponent;II)I", nullptr, $PUBLIC},
	{"getBaselineResizeBehavior", "(Ljavax/swing/JComponent;)Ljava/awt/Component$BaselineResizeBehavior;", nullptr, $PUBLIC},
	{"getMaximumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPropertyChangeListeners", "()[Ljava/beans/PropertyChangeListener;", nullptr, $PUBLIC},
	{"getPropertyChangeListeners", "(Ljava/lang/String;)[Ljava/beans/PropertyChangeListener;", nullptr, $PUBLIC},
	{"imageUpdate", "(Ljava/awt/Image;IIIIILjavax/swing/JLayer;)Z", "(Ljava/awt/Image;IIIIILjavax/swing/JLayer<+TV;>;)Z", $PUBLIC},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paintImmediately", "(IIIILjavax/swing/JLayer;)V", "(IIIILjavax/swing/JLayer<+TV;>;)V", $PUBLIC},
	{"processComponentEvent", "(Ljava/awt/event/ComponentEvent;Ljavax/swing/JLayer;)V", "(Ljava/awt/event/ComponentEvent;Ljavax/swing/JLayer<+TV;>;)V", $PROTECTED},
	{"processFocusEvent", "(Ljava/awt/event/FocusEvent;Ljavax/swing/JLayer;)V", "(Ljava/awt/event/FocusEvent;Ljavax/swing/JLayer<+TV;>;)V", $PROTECTED},
	{"processHierarchyBoundsEvent", "(Ljava/awt/event/HierarchyEvent;Ljavax/swing/JLayer;)V", "(Ljava/awt/event/HierarchyEvent;Ljavax/swing/JLayer<+TV;>;)V", $PROTECTED},
	{"processHierarchyEvent", "(Ljava/awt/event/HierarchyEvent;Ljavax/swing/JLayer;)V", "(Ljava/awt/event/HierarchyEvent;Ljavax/swing/JLayer<+TV;>;)V", $PROTECTED},
	{"processInputMethodEvent", "(Ljava/awt/event/InputMethodEvent;Ljavax/swing/JLayer;)V", "(Ljava/awt/event/InputMethodEvent;Ljavax/swing/JLayer<+TV;>;)V", $PROTECTED},
	{"processKeyEvent", "(Ljava/awt/event/KeyEvent;Ljavax/swing/JLayer;)V", "(Ljava/awt/event/KeyEvent;Ljavax/swing/JLayer<+TV;>;)V", $PROTECTED},
	{"processMouseEvent", "(Ljava/awt/event/MouseEvent;Ljavax/swing/JLayer;)V", "(Ljava/awt/event/MouseEvent;Ljavax/swing/JLayer<+TV;>;)V", $PROTECTED},
	{"processMouseMotionEvent", "(Ljava/awt/event/MouseEvent;Ljavax/swing/JLayer;)V", "(Ljava/awt/event/MouseEvent;Ljavax/swing/JLayer<+TV;>;)V", $PROTECTED},
	{"processMouseWheelEvent", "(Ljava/awt/event/MouseWheelEvent;Ljavax/swing/JLayer;)V", "(Ljava/awt/event/MouseWheelEvent;Ljavax/swing/JLayer<+TV;>;)V", $PROTECTED},
	{"removePropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC},
	{"removePropertyChangeListener", "(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"updateUI", "(Ljavax/swing/JLayer;)V", "(Ljavax/swing/JLayer<+TV;>;)V", $PUBLIC},
	{}
};

$ClassInfo _LayerUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.LayerUI",
	"javax.swing.plaf.ComponentUI",
	"java.io.Serializable",
	_LayerUI_FieldInfo_,
	_LayerUI_MethodInfo_,
	"<V:Ljava/awt/Component;>Ljavax/swing/plaf/ComponentUI;Ljava/io/Serializable;"
};

$Object* allocate$LayerUI($Class* clazz) {
	return $of($alloc(LayerUI));
}

int32_t LayerUI::hashCode() {
	 return this->$ComponentUI::hashCode();
}

bool LayerUI::equals(Object$* arg0) {
	 return this->$ComponentUI::equals(arg0);
}

$Object* LayerUI::clone() {
	 return this->$ComponentUI::clone();
}

$String* LayerUI::toString() {
	 return this->$ComponentUI::toString();
}

void LayerUI::finalize() {
	this->$ComponentUI::finalize();
}

void LayerUI::init$() {
	$ComponentUI::init$();
	$set(this, propertyChangeSupport, $new($PropertyChangeSupport, this));
}

void LayerUI::paint($Graphics* g, $JComponent* c) {
	$nc(c)->paint(g);
}

void LayerUI::eventDispatched($AWTEvent* e, $JLayer* l) {
	if ($instanceOf($FocusEvent, e)) {
		processFocusEvent($cast($FocusEvent, e), l);
	} else if ($instanceOf($MouseEvent, e)) {
		switch ($nc(e)->getID()) {
		case $MouseEvent::MOUSE_PRESSED:
			{}
		case $MouseEvent::MOUSE_RELEASED:
			{}
		case $MouseEvent::MOUSE_CLICKED:
			{}
		case $MouseEvent::MOUSE_ENTERED:
			{}
		case $MouseEvent::MOUSE_EXITED:
			{
				processMouseEvent($cast($MouseEvent, e), l);
				break;
			}
		case $MouseEvent::MOUSE_MOVED:
			{}
		case $MouseEvent::MOUSE_DRAGGED:
			{
				processMouseMotionEvent($cast($MouseEvent, e), l);
				break;
			}
		case $MouseEvent::MOUSE_WHEEL:
			{
				processMouseWheelEvent($cast($MouseWheelEvent, e), l);
				break;
			}
		}
	} else if ($instanceOf($KeyEvent, e)) {
		processKeyEvent($cast($KeyEvent, e), l);
	} else if ($instanceOf($ComponentEvent, e)) {
		processComponentEvent($cast($ComponentEvent, e), l);
	} else if ($instanceOf($InputMethodEvent, e)) {
		processInputMethodEvent($cast($InputMethodEvent, e), l);
	} else if ($instanceOf($HierarchyEvent, e)) {
		switch ($nc(e)->getID()) {
		case $HierarchyEvent::HIERARCHY_CHANGED:
			{
				processHierarchyEvent($cast($HierarchyEvent, e), l);
				break;
			}
		case $HierarchyEvent::ANCESTOR_MOVED:
			{}
		case $HierarchyEvent::ANCESTOR_RESIZED:
			{
				processHierarchyBoundsEvent($cast($HierarchyEvent, e), l);
				break;
			}
		}
	}
}

void LayerUI::processComponentEvent($ComponentEvent* e, $JLayer* l) {
}

void LayerUI::processFocusEvent($FocusEvent* e, $JLayer* l) {
}

void LayerUI::processKeyEvent($KeyEvent* e, $JLayer* l) {
}

void LayerUI::processMouseEvent($MouseEvent* e, $JLayer* l) {
}

void LayerUI::processMouseMotionEvent($MouseEvent* e, $JLayer* l) {
}

void LayerUI::processMouseWheelEvent($MouseWheelEvent* e, $JLayer* l) {
}

void LayerUI::processInputMethodEvent($InputMethodEvent* e, $JLayer* l) {
}

void LayerUI::processHierarchyEvent($HierarchyEvent* e, $JLayer* l) {
}

void LayerUI::processHierarchyBoundsEvent($HierarchyEvent* e, $JLayer* l) {
}

void LayerUI::updateUI($JLayer* l) {
}

void LayerUI::installUI($JComponent* c) {
	addPropertyChangeListener($cast($JLayer, c));
}

void LayerUI::uninstallUI($JComponent* c) {
	removePropertyChangeListener($cast($JLayer, c));
}

void LayerUI::addPropertyChangeListener($PropertyChangeListener* listener) {
	$nc(this->propertyChangeSupport)->addPropertyChangeListener(listener);
}

void LayerUI::removePropertyChangeListener($PropertyChangeListener* listener) {
	$nc(this->propertyChangeSupport)->removePropertyChangeListener(listener);
}

$PropertyChangeListenerArray* LayerUI::getPropertyChangeListeners() {
	return $nc(this->propertyChangeSupport)->getPropertyChangeListeners();
}

void LayerUI::addPropertyChangeListener($String* propertyName, $PropertyChangeListener* listener) {
	$nc(this->propertyChangeSupport)->addPropertyChangeListener(propertyName, listener);
}

void LayerUI::removePropertyChangeListener($String* propertyName, $PropertyChangeListener* listener) {
	$nc(this->propertyChangeSupport)->removePropertyChangeListener(propertyName, listener);
}

$PropertyChangeListenerArray* LayerUI::getPropertyChangeListeners($String* propertyName) {
	return $nc(this->propertyChangeSupport)->getPropertyChangeListeners(propertyName);
}

void LayerUI::firePropertyChange($String* propertyName, Object$* oldValue, Object$* newValue) {
	$nc(this->propertyChangeSupport)->firePropertyChange(propertyName, oldValue, newValue);
}

void LayerUI::applyPropertyChange($PropertyChangeEvent* evt, $JLayer* l) {
}

int32_t LayerUI::getBaseline($JComponent* c, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$var($JLayer, l, $cast($JLayer, c));
	if ($nc(l)->getView() != nullptr) {
		return $nc($(l->getView()))->getBaseline(width, height);
	}
	return $ComponentUI::getBaseline(c, width, height);
}

$Component$BaselineResizeBehavior* LayerUI::getBaselineResizeBehavior($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($JLayer, l, $cast($JLayer, c));
	if ($nc(l)->getView() != nullptr) {
		return $nc($(l->getView()))->getBaselineResizeBehavior();
	}
	return $ComponentUI::getBaselineResizeBehavior(c);
}

void LayerUI::doLayout($JLayer* l) {
	$useLocalCurrentObjectStackCache();
	$var($Component, view, $nc(l)->getView());
	if (view != nullptr) {
		int32_t var$0 = l->getWidth();
		view->setBounds(0, 0, var$0, l->getHeight());
	}
	$var($Component, glassPane, l->getGlassPane());
	if (glassPane != nullptr) {
		int32_t var$1 = l->getWidth();
		glassPane->setBounds(0, 0, var$1, l->getHeight());
	}
}

$Dimension* LayerUI::getPreferredSize($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($JLayer, l, $cast($JLayer, c));
	$var($Component, view, $nc(l)->getView());
	if (view != nullptr) {
		return view->getPreferredSize();
	}
	return $ComponentUI::getPreferredSize(c);
}

$Dimension* LayerUI::getMinimumSize($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($JLayer, l, $cast($JLayer, c));
	$var($Component, view, $nc(l)->getView());
	if (view != nullptr) {
		return view->getMinimumSize();
	}
	return $ComponentUI::getMinimumSize(c);
}

$Dimension* LayerUI::getMaximumSize($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($JLayer, l, $cast($JLayer, c));
	$var($Component, view, $nc(l)->getView());
	if (view != nullptr) {
		return view->getMaximumSize();
	}
	return $ComponentUI::getMaximumSize(c);
}

void LayerUI::paintImmediately(int32_t x, int32_t y, int32_t width, int32_t height, $JLayer* l) {
	$nc(l)->paintImmediately(x, y, width, height);
}

bool LayerUI::imageUpdate($Image* img, int32_t infoflags, int32_t x, int32_t y, int32_t w, int32_t h, $JLayer* l) {
	return $nc(l)->imageUpdate(img, infoflags, x, y, w, h);
}

LayerUI::LayerUI() {
}

$Class* LayerUI::load$($String* name, bool initialize) {
	$loadClass(LayerUI, name, initialize, &_LayerUI_ClassInfo_, allocate$LayerUI);
	return class$;
}

$Class* LayerUI::class$ = nullptr;

		} // plaf
	} // swing
} // javax