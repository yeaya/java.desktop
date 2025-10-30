#include <javax/swing/JLayer.h>

#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/Container$AccessibleAWTContainer.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Image.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/lang/UnsupportedOperationException.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLayer$1.h>
#include <javax/swing/JLayer$DefaultLayerGlassPane.h>
#include <javax/swing/JLayer$LayerEventController.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/Scrollable.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/LayerUI.h>
#include <jcpp.h>

#undef VERTICAL

using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $Container = ::java::awt::Container;
using $Container$AccessibleAWTContainer = ::java::awt::Container$AccessibleAWTContainer;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Image = ::java::awt::Image;
using $LayoutManager = ::java::awt::LayoutManager;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JLayer$1 = ::javax::swing::JLayer$1;
using $JLayer$DefaultLayerGlassPane = ::javax::swing::JLayer$DefaultLayerGlassPane;
using $JLayer$LayerEventController = ::javax::swing::JLayer$LayerEventController;
using $JPanel = ::javax::swing::JPanel;
using $Scrollable = ::javax::swing::Scrollable;
using $SwingConstants = ::javax::swing::SwingConstants;
using $Border = ::javax::swing::border::Border;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $LayerUI = ::javax::swing::plaf::LayerUI;

namespace javax {
	namespace swing {

$FieldInfo _JLayer_FieldInfo_[] = {
	{"view", "Ljava/awt/Component;", "TV;", $PRIVATE, $field(JLayer, view)},
	{"layerUI", "Ljavax/swing/plaf/LayerUI;", "Ljavax/swing/plaf/LayerUI<-TV;>;", $PRIVATE, $field(JLayer, layerUI)},
	{"glassPane", "Ljavax/swing/JPanel;", nullptr, $PRIVATE, $field(JLayer, glassPane)},
	{"eventMask", "J", nullptr, $PRIVATE, $field(JLayer, eventMask)},
	{"isPaintCalling", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(JLayer, isPaintCalling)},
	{"isPaintImmediatelyCalling", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(JLayer, isPaintImmediatelyCalling)},
	{"isImageUpdateCalling", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(JLayer, isImageUpdateCalling)},
	{"eventController", "Ljavax/swing/JLayer$LayerEventController;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JLayer, eventController)},
	{}
};

$MethodInfo _JLayer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JLayer::*)()>(&JLayer::init$))},
	{"<init>", "(Ljava/awt/Component;)V", "(TV;)V", $PUBLIC, $method(static_cast<void(JLayer::*)($Component*)>(&JLayer::init$))},
	{"<init>", "(Ljava/awt/Component;Ljavax/swing/plaf/LayerUI;)V", "(TV;Ljavax/swing/plaf/LayerUI<TV;>;)V", $PUBLIC, $method(static_cast<void(JLayer::*)($Component*,$LayerUI*)>(&JLayer::init$))},
	{"addImpl", "(Ljava/awt/Component;Ljava/lang/Object;I)V", nullptr, $PROTECTED},
	{"addNotify", "()V", nullptr, $PUBLIC},
	{"createGlassPane", "()Ljavax/swing/JPanel;", nullptr, $PUBLIC, $method(static_cast<$JPanel*(JLayer::*)()>(&JLayer::createGlassPane))},
	{"doLayout", "()V", nullptr, $PUBLIC},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC},
	{"getBorder", "()Ljavax/swing/border/Border;", nullptr, $PUBLIC},
	{"getGlassPane", "()Ljavax/swing/JPanel;", nullptr, $PUBLIC, $method(static_cast<$JPanel*(JLayer::*)()>(&JLayer::getGlassPane))},
	{"getLayerEventMask", "()J", nullptr, $PUBLIC, $method(static_cast<int64_t(JLayer::*)()>(&JLayer::getLayerEventMask))},
	{"getPreferredScrollableViewportSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getScrollableBlockIncrement", "(Ljava/awt/Rectangle;II)I", nullptr, $PUBLIC},
	{"getScrollableTracksViewportHeight", "()Z", nullptr, $PUBLIC},
	{"getScrollableTracksViewportWidth", "()Z", nullptr, $PUBLIC},
	{"getScrollableUnitIncrement", "(Ljava/awt/Rectangle;II)I", nullptr, $PUBLIC},
	{"getUI", "()Ljavax/swing/plaf/LayerUI;", "()Ljavax/swing/plaf/LayerUI<-TV;>;", $PUBLIC},
	{"getView", "()Ljava/awt/Component;", "()TV;", $PUBLIC, $method(static_cast<$Component*(JLayer::*)()>(&JLayer::getView))},
	{"imageUpdate", "(Ljava/awt/Image;IIIII)Z", nullptr, $PUBLIC},
	{"isOptimizedDrawingEnabled", "()Z", nullptr, $PUBLIC},
	{"isPaintingOrigin", "()Z", nullptr, $PROTECTED},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"paintComponent", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"paintImmediately", "(IIII)V", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(JLayer::*)($ObjectInputStream*)>(&JLayer::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"remove", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"removeAll", "()V", nullptr, $PUBLIC},
	{"removeNotify", "()V", nullptr, $PUBLIC},
	{"setBorder", "(Ljavax/swing/border/Border;)V", nullptr, $PUBLIC},
	{"setGlassPane", "(Ljavax/swing/JPanel;)V", nullptr, $PUBLIC, $method(static_cast<void(JLayer::*)($JPanel*)>(&JLayer::setGlassPane))},
	{"setLayerEventMask", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(JLayer::*)(int64_t)>(&JLayer::setLayerEventMask))},
	{"setLayout", "(Ljava/awt/LayoutManager;)V", nullptr, $PUBLIC},
	{"setUI", "(Ljavax/swing/plaf/LayerUI;)V", "(Ljavax/swing/plaf/LayerUI<-TV;>;)V", $PUBLIC, $method(static_cast<void(JLayer::*)($LayerUI*)>(&JLayer::setUI))},
	{"setView", "(Ljava/awt/Component;)V", "(TV;)V", $PUBLIC, $method(static_cast<void(JLayer::*)($Component*)>(&JLayer::setView))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateUI", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JLayer_InnerClassesInfo_[] = {
	{"javax.swing.JLayer$DefaultLayerGlassPane", "javax.swing.JLayer", "DefaultLayerGlassPane", $PRIVATE | $STATIC},
	{"javax.swing.JLayer$LayerEventController", "javax.swing.JLayer", "LayerEventController", $PRIVATE | $STATIC},
	{"javax.swing.JLayer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JLayer_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.swing.JLayer",
	"javax.swing.JComponent",
	"javax.swing.Scrollable,java.beans.PropertyChangeListener,javax.accessibility.Accessible",
	_JLayer_FieldInfo_,
	_JLayer_MethodInfo_,
	"<V:Ljava/awt/Component;>Ljavax/swing/JComponent;Ljavax/swing/Scrollable;Ljava/beans/PropertyChangeListener;Ljavax/accessibility/Accessible;",
	nullptr,
	_JLayer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.JLayer$DefaultLayerGlassPane,javax.swing.JLayer$LayerEventController,javax.swing.JLayer$LayerEventController$2,javax.swing.JLayer$LayerEventController$1,javax.swing.JLayer$1"
};

$Object* allocate$JLayer($Class* clazz) {
	return $of($alloc(JLayer));
}

$String* JLayer::toString() {
	 return this->$JComponent::toString();
}

int32_t JLayer::hashCode() {
	 return this->$JComponent::hashCode();
}

bool JLayer::equals(Object$* arg0) {
	 return this->$JComponent::equals(arg0);
}

$Object* JLayer::clone() {
	 return this->$JComponent::clone();
}

void JLayer::finalize() {
	this->$JComponent::finalize();
}

$JLayer$LayerEventController* JLayer::eventController = nullptr;

void JLayer::init$() {
	JLayer::init$(nullptr);
}

void JLayer::init$($Component* view) {
	JLayer::init$(view, $$new($LayerUI));
}

void JLayer::init$($Component* view, $LayerUI* ui) {
	$JComponent::init$();
	setGlassPane($(createGlassPane()));
	setView(view);
	setUI(ui);
}

$Component* JLayer::getView() {
	return this->view;
}

void JLayer::setView($Component* view) {
	$var($Component, oldView, getView());
	if (oldView != nullptr) {
		$JComponent::remove(oldView);
	}
	if (view != nullptr) {
		$JComponent::addImpl(view, nullptr, getComponentCount());
	}
	$set(this, view, view);
	firePropertyChange("view"_s, $of(oldView), $of(view));
	revalidate();
	repaint();
}

void JLayer::setUI($LayerUI* ui) {
	$set(this, layerUI, ui);
	$JComponent::setUI(ui);
}

$ComponentUI* JLayer::getUI() {
	return this->layerUI;
}

$JPanel* JLayer::getGlassPane() {
	return this->glassPane;
}

void JLayer::setGlassPane($JPanel* glassPane) {
	$useLocalCurrentObjectStackCache();
	$var($Component, oldGlassPane, getGlassPane());
	bool isGlassPaneVisible = false;
	if (oldGlassPane != nullptr) {
		isGlassPaneVisible = oldGlassPane->isVisible();
		$JComponent::remove(oldGlassPane);
	}
	if (glassPane != nullptr) {
		glassPane->setMixingCutoutShape($$new($Rectangle));
		glassPane->setVisible(isGlassPaneVisible);
		$JComponent::addImpl(glassPane, nullptr, 0);
	}
	$set(this, glassPane, glassPane);
	firePropertyChange("glassPane"_s, $of(oldGlassPane), $of(glassPane));
	revalidate();
	repaint();
}

$JPanel* JLayer::createGlassPane() {
	return $new($JLayer$DefaultLayerGlassPane);
}

void JLayer::setLayout($LayoutManager* mgr) {
	if (mgr != nullptr) {
		$throwNew($IllegalArgumentException, "JLayer.setLayout() not supported"_s);
	}
}

void JLayer::setBorder($Border* border) {
	if ($instanceOf($JComponent, this->view)) {
		$nc(($cast($JComponent, this->view)))->setBorder(border);
	}
}

$Border* JLayer::getBorder() {
	if ($instanceOf($JComponent, this->view)) {
		return $nc(($cast($JComponent, this->view)))->getBorder();
	}
	return nullptr;
}

void JLayer::addImpl($Component* comp, Object$* constraints, int32_t index) {
	$throwNew($UnsupportedOperationException, "Adding components to JLayer is not supported, use setView() or setGlassPane() instead"_s);
}

void JLayer::remove($Component* comp) {
	if (comp == nullptr) {
		$JComponent::remove(comp);
	} else if (comp == getView()) {
		setView(nullptr);
	} else if ($equals(comp, getGlassPane())) {
		setGlassPane(nullptr);
	} else {
		$JComponent::remove(comp);
	}
}

void JLayer::removeAll() {
	if (this->view != nullptr) {
		setView(nullptr);
	}
	if (this->glassPane != nullptr) {
		setGlassPane(nullptr);
	}
}

bool JLayer::isPaintingOrigin() {
	return true;
}

void JLayer::paintImmediately(int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	if (!this->isPaintImmediatelyCalling && $cast($LayerUI, getUI()) != nullptr) {
		this->isPaintImmediatelyCalling = true;
		{
			$var($Throwable, var$0, nullptr);
			try {
				$nc($($cast($LayerUI, getUI())))->paintImmediately(x, y, w, h, this);
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				this->isPaintImmediatelyCalling = false;
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} else {
		$JComponent::paintImmediately(x, y, w, h);
	}
}

bool JLayer::imageUpdate($Image* img, int32_t infoflags, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	if (!this->isImageUpdateCalling && $cast($LayerUI, getUI()) != nullptr) {
		this->isImageUpdateCalling = true;
		{
			$var($Throwable, var$0, nullptr);
			bool var$2 = false;
			bool return$1 = false;
			try {
				var$2 = $nc($($cast($LayerUI, getUI())))->imageUpdate(img, infoflags, x, y, w, h, this);
				return$1 = true;
				goto $finally;
			} catch ($Throwable& var$3) {
				$assign(var$0, var$3);
			} $finally: {
				this->isImageUpdateCalling = false;
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	} else {
		return $JComponent::imageUpdate(img, infoflags, x, y, w, h);
	}
}

void JLayer::paint($Graphics* g) {
	if (!this->isPaintCalling) {
		this->isPaintCalling = true;
		{
			$var($Throwable, var$0, nullptr);
			try {
				$JComponent::paintComponent(g);
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				this->isPaintCalling = false;
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} else {
		$JComponent::paint(g);
	}
}

void JLayer::paintComponent($Graphics* g) {
}

bool JLayer::isOptimizedDrawingEnabled() {
	return false;
}

void JLayer::propertyChange($PropertyChangeEvent* evt) {
	if ($cast($LayerUI, getUI()) != nullptr) {
		$nc($($cast($LayerUI, getUI())))->applyPropertyChange(evt, this);
	}
}

void JLayer::setLayerEventMask(int64_t layerEventMask) {
	int64_t oldEventMask = getLayerEventMask();
	this->eventMask = layerEventMask;
	firePropertyChange("layerEventMask"_s, oldEventMask, layerEventMask);
	if (layerEventMask != oldEventMask) {
		disableEvents(oldEventMask);
		enableEvents(this->eventMask);
		if (isDisplayable()) {
			$nc(JLayer::eventController)->updateAWTEventListener(oldEventMask, layerEventMask);
		}
	}
}

int64_t JLayer::getLayerEventMask() {
	return this->eventMask;
}

void JLayer::updateUI() {
	if ($cast($LayerUI, getUI()) != nullptr) {
		$nc($($cast($LayerUI, getUI())))->updateUI(this);
	}
}

$Dimension* JLayer::getPreferredScrollableViewportSize() {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($Scrollable, $(getView()))) {
		return $nc(($cast($Scrollable, $(getView()))))->getPreferredScrollableViewportSize();
	}
	return getPreferredSize();
}

int32_t JLayer::getScrollableBlockIncrement($Rectangle* visibleRect, int32_t orientation, int32_t direction) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($Scrollable, $(getView()))) {
		return $nc(($cast($Scrollable, $(getView()))))->getScrollableBlockIncrement(visibleRect, orientation, direction);
	}
	return (orientation == $SwingConstants::VERTICAL) ? $nc(visibleRect)->height : visibleRect->width;
}

bool JLayer::getScrollableTracksViewportHeight() {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($Scrollable, $(getView()))) {
		return $nc(($cast($Scrollable, $(getView()))))->getScrollableTracksViewportHeight();
	}
	return false;
}

bool JLayer::getScrollableTracksViewportWidth() {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($Scrollable, $(getView()))) {
		return $nc(($cast($Scrollable, $(getView()))))->getScrollableTracksViewportWidth();
	}
	return false;
}

int32_t JLayer::getScrollableUnitIncrement($Rectangle* visibleRect, int32_t orientation, int32_t direction) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($Scrollable, $(getView()))) {
		return $nc(($cast($Scrollable, $(getView()))))->getScrollableUnitIncrement(visibleRect, orientation, direction);
	}
	return 1;
}

void JLayer::readObject($ObjectInputStream* s) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectInputStream$GetField, f, $nc(s)->readFields());
	$set(this, view, $cast($Component, $nc(f)->get("view"_s, ($Object*)nullptr)));
	$set(this, glassPane, $cast($JPanel, f->get("glassPane"_s, ($Object*)nullptr)));
	this->eventMask = f->get("eventMask"_s, (int64_t)0);
	if (this->eventMask != 0) {
		$nc(JLayer::eventController)->updateAWTEventListener(0, this->eventMask);
	}
	$var($LayerUI, newLayerUI, $cast($LayerUI, f->get("layerUI"_s, ($Object*)nullptr)));
	if (newLayerUI != nullptr) {
		setUI(newLayerUI);
	}
}

void JLayer::addNotify() {
	$JComponent::addNotify();
	$nc(JLayer::eventController)->updateAWTEventListener(0, this->eventMask);
}

void JLayer::removeNotify() {
	$JComponent::removeNotify();
	$nc(JLayer::eventController)->updateAWTEventListener(this->eventMask, 0);
}

void JLayer::doLayout() {
	if ($cast($LayerUI, getUI()) != nullptr) {
		$nc($($cast($LayerUI, getUI())))->doLayout(this);
	}
}

$AccessibleContext* JLayer::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JLayer$1, this));
	}
	return this->accessibleContext;
}

void clinit$JLayer($Class* class$) {
	$assignStatic(JLayer::eventController, $new($JLayer$LayerEventController));
}

JLayer::JLayer() {
}

$Class* JLayer::load$($String* name, bool initialize) {
	$loadClass(JLayer, name, initialize, &_JLayer_ClassInfo_, clinit$JLayer, allocate$JLayer);
	return class$;
}

$Class* JLayer::class$ = nullptr;

	} // swing
} // javax