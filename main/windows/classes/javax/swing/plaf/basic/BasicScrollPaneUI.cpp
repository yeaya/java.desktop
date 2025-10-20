#include <javax/swing/plaf/basic/BasicScrollPaneUI.h>

#include <java/awt/Component$BaselineResizeBehavior.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/MouseWheelListener.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/Short.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/BoundedRangeModel.h>
#include <javax/swing/InputMap.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JViewport.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/ScrollPaneConstants.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/ScrollPaneUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicScrollPaneUI$Actions.h>
#include <javax/swing/plaf/basic/BasicScrollPaneUI$Handler.h>
#include <javax/swing/plaf/basic/LazyActionMap.h>
#include <sun/swing/DefaultLookup.h>
#include <sun/swing/UIAction.h>
#include <jcpp.h>

#undef COLUMN_HEADER
#undef CONSTANT_ASCENT
#undef MAX_VALUE
#undef MIN_VALUE
#undef SCROLL_DOWN
#undef SCROLL_END
#undef SCROLL_HOME
#undef SCROLL_LEFT
#undef SCROLL_RIGHT
#undef SCROLL_UP
#undef TRUE
#undef UNIT_SCROLL_DOWN
#undef UNIT_SCROLL_LEFT
#undef UNIT_SCROLL_RIGHT
#undef UNIT_SCROLL_UP
#undef WHEN_ANCESTOR_OF_FOCUSED_COMPONENT

using $Component = ::java::awt::Component;
using $Component$BaselineResizeBehavior = ::java::awt::Component$BaselineResizeBehavior;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $MouseWheelListener = ::java::awt::event::MouseWheelListener;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Short = ::java::lang::Short;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $BoundedRangeModel = ::javax::swing::BoundedRangeModel;
using $InputMap = ::javax::swing::InputMap;
using $JComponent = ::javax::swing::JComponent;
using $JScrollBar = ::javax::swing::JScrollBar;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JViewport = ::javax::swing::JViewport;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $ScrollPaneConstants = ::javax::swing::ScrollPaneConstants;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $Border = ::javax::swing::border::Border;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $ScrollPaneUI = ::javax::swing::plaf::ScrollPaneUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicScrollPaneUI$Actions = ::javax::swing::plaf::basic::BasicScrollPaneUI$Actions;
using $BasicScrollPaneUI$Handler = ::javax::swing::plaf::basic::BasicScrollPaneUI$Handler;
using $LazyActionMap = ::javax::swing::plaf::basic::LazyActionMap;
using $DefaultLookup = ::sun::swing::DefaultLookup;
using $UIAction = ::sun::swing::UIAction;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicScrollPaneUI_FieldInfo_[] = {
	{"scrollpane", "Ljavax/swing/JScrollPane;", nullptr, $PROTECTED, $field(BasicScrollPaneUI, scrollpane)},
	{"vsbChangeListener", "Ljavax/swing/event/ChangeListener;", nullptr, $PROTECTED, $field(BasicScrollPaneUI, vsbChangeListener)},
	{"hsbChangeListener", "Ljavax/swing/event/ChangeListener;", nullptr, $PROTECTED, $field(BasicScrollPaneUI, hsbChangeListener)},
	{"viewportChangeListener", "Ljavax/swing/event/ChangeListener;", nullptr, $PROTECTED, $field(BasicScrollPaneUI, viewportChangeListener)},
	{"spPropertyChangeListener", "Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED, $field(BasicScrollPaneUI, spPropertyChangeListener)},
	{"mouseScrollListener", "Ljava/awt/event/MouseWheelListener;", nullptr, $PRIVATE, $field(BasicScrollPaneUI, mouseScrollListener)},
	{"oldExtent", "I", nullptr, $PRIVATE, $field(BasicScrollPaneUI, oldExtent)},
	{"vsbPropertyChangeListener", "Ljava/beans/PropertyChangeListener;", nullptr, $PRIVATE, $field(BasicScrollPaneUI, vsbPropertyChangeListener)},
	{"hsbPropertyChangeListener", "Ljava/beans/PropertyChangeListener;", nullptr, $PRIVATE, $field(BasicScrollPaneUI, hsbPropertyChangeListener)},
	{"handler", "Ljavax/swing/plaf/basic/BasicScrollPaneUI$Handler;", nullptr, $PRIVATE, $field(BasicScrollPaneUI, handler)},
	{"setValueCalled", "Z", nullptr, $PRIVATE, $field(BasicScrollPaneUI, setValueCalled)},
	{}
};

$MethodInfo _BasicScrollPaneUI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicScrollPaneUI::*)()>(&BasicScrollPaneUI::init$))},
	{"createHSBChangeListener", "()Ljavax/swing/event/ChangeListener;", nullptr, $PROTECTED},
	{"createHSBPropertyChangeListener", "()Ljava/beans/PropertyChangeListener;", nullptr, $PRIVATE, $method(static_cast<$PropertyChangeListener*(BasicScrollPaneUI::*)()>(&BasicScrollPaneUI::createHSBPropertyChangeListener))},
	{"createMouseWheelListener", "()Ljava/awt/event/MouseWheelListener;", nullptr, $PROTECTED},
	{"createPropertyChangeListener", "()Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&BasicScrollPaneUI::createUI))},
	{"createVSBChangeListener", "()Ljavax/swing/event/ChangeListener;", nullptr, $PROTECTED},
	{"createVSBPropertyChangeListener", "()Ljava/beans/PropertyChangeListener;", nullptr, $PRIVATE, $method(static_cast<$PropertyChangeListener*(BasicScrollPaneUI::*)()>(&BasicScrollPaneUI::createVSBPropertyChangeListener))},
	{"createViewportChangeListener", "()Ljavax/swing/event/ChangeListener;", nullptr, $PROTECTED},
	{"getBaseline", "(Ljavax/swing/JComponent;II)I", nullptr, $PUBLIC},
	{"getBaselineResizeBehavior", "(Ljavax/swing/JComponent;)Ljava/awt/Component$BaselineResizeBehavior;", nullptr, $PUBLIC},
	{"getHandler", "()Ljavax/swing/plaf/basic/BasicScrollPaneUI$Handler;", nullptr, $PRIVATE, $method(static_cast<$BasicScrollPaneUI$Handler*(BasicScrollPaneUI::*)()>(&BasicScrollPaneUI::getHandler))},
	{"getInputMap", "(I)Ljavax/swing/InputMap;", nullptr, 0},
	{"getMaximumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"installDefaults", "(Ljavax/swing/JScrollPane;)V", nullptr, $PROTECTED},
	{"installKeyboardActions", "(Ljavax/swing/JScrollPane;)V", nullptr, $PROTECTED},
	{"installListeners", "(Ljavax/swing/JScrollPane;)V", nullptr, $PROTECTED},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"loadActionMap", "(Ljavax/swing/plaf/basic/LazyActionMap;)V", nullptr, $STATIC, $method(static_cast<void(*)($LazyActionMap*)>(&BasicScrollPaneUI::loadActionMap))},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"syncScrollPaneWithViewport", "()V", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"uninstallDefaults", "(Ljavax/swing/JScrollPane;)V", nullptr, $PROTECTED},
	{"uninstallKeyboardActions", "(Ljavax/swing/JScrollPane;)V", nullptr, $PROTECTED},
	{"uninstallListeners", "(Ljavax/swing/JComponent;)V", nullptr, $PROTECTED},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"updateColumnHeader", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PROTECTED},
	{"updateHorizontalScrollBar", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicScrollPaneUI::*)($PropertyChangeEvent*)>(&BasicScrollPaneUI::updateHorizontalScrollBar))},
	{"updateRowHeader", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PROTECTED},
	{"updateScrollBar", "(Ljava/beans/PropertyChangeEvent;Ljavax/swing/event/ChangeListener;Ljava/beans/PropertyChangeListener;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicScrollPaneUI::*)($PropertyChangeEvent*,$ChangeListener*,$PropertyChangeListener*)>(&BasicScrollPaneUI::updateScrollBar))},
	{"updateScrollBarDisplayPolicy", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PROTECTED},
	{"updateVerticalScrollBar", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicScrollPaneUI::*)($PropertyChangeEvent*)>(&BasicScrollPaneUI::updateVerticalScrollBar))},
	{"updateViewport", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _BasicScrollPaneUI_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicScrollPaneUI$Handler", "javax.swing.plaf.basic.BasicScrollPaneUI", "Handler", 0},
	{"javax.swing.plaf.basic.BasicScrollPaneUI$Actions", "javax.swing.plaf.basic.BasicScrollPaneUI", "Actions", $PRIVATE | $STATIC},
	{"javax.swing.plaf.basic.BasicScrollPaneUI$PropertyChangeHandler", "javax.swing.plaf.basic.BasicScrollPaneUI", "PropertyChangeHandler", $PUBLIC},
	{"javax.swing.plaf.basic.BasicScrollPaneUI$MouseWheelHandler", "javax.swing.plaf.basic.BasicScrollPaneUI", "MouseWheelHandler", $PROTECTED},
	{"javax.swing.plaf.basic.BasicScrollPaneUI$VSBChangeListener", "javax.swing.plaf.basic.BasicScrollPaneUI", "VSBChangeListener", $PUBLIC},
	{"javax.swing.plaf.basic.BasicScrollPaneUI$HSBChangeListener", "javax.swing.plaf.basic.BasicScrollPaneUI", "HSBChangeListener", $PUBLIC},
	{"javax.swing.plaf.basic.BasicScrollPaneUI$ViewportChangeHandler", "javax.swing.plaf.basic.BasicScrollPaneUI", "ViewportChangeHandler", $PUBLIC},
	{}
};

$ClassInfo _BasicScrollPaneUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicScrollPaneUI",
	"javax.swing.plaf.ScrollPaneUI",
	"javax.swing.ScrollPaneConstants",
	_BasicScrollPaneUI_FieldInfo_,
	_BasicScrollPaneUI_MethodInfo_,
	nullptr,
	nullptr,
	_BasicScrollPaneUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicScrollPaneUI$Handler,javax.swing.plaf.basic.BasicScrollPaneUI$Actions,javax.swing.plaf.basic.BasicScrollPaneUI$PropertyChangeHandler,javax.swing.plaf.basic.BasicScrollPaneUI$MouseWheelHandler,javax.swing.plaf.basic.BasicScrollPaneUI$VSBChangeListener,javax.swing.plaf.basic.BasicScrollPaneUI$HSBChangeListener,javax.swing.plaf.basic.BasicScrollPaneUI$ViewportChangeHandler"
};

$Object* allocate$BasicScrollPaneUI($Class* clazz) {
	return $of($alloc(BasicScrollPaneUI));
}

int32_t BasicScrollPaneUI::hashCode() {
	 return this->$ScrollPaneUI::hashCode();
}

bool BasicScrollPaneUI::equals(Object$* arg0) {
	 return this->$ScrollPaneUI::equals(arg0);
}

$Object* BasicScrollPaneUI::clone() {
	 return this->$ScrollPaneUI::clone();
}

$String* BasicScrollPaneUI::toString() {
	 return this->$ScrollPaneUI::toString();
}

void BasicScrollPaneUI::finalize() {
	this->$ScrollPaneUI::finalize();
}

void BasicScrollPaneUI::init$() {
	$ScrollPaneUI::init$();
	this->oldExtent = $Integer::MIN_VALUE;
	this->setValueCalled = false;
}

$ComponentUI* BasicScrollPaneUI::createUI($JComponent* x) {
	$init(BasicScrollPaneUI);
	return $new(BasicScrollPaneUI);
}

void BasicScrollPaneUI::loadActionMap($LazyActionMap* map) {
	$init(BasicScrollPaneUI);
	$useLocalCurrentObjectStackCache();
	$init($BasicScrollPaneUI$Actions);
	$nc(map)->put($$new($BasicScrollPaneUI$Actions, $BasicScrollPaneUI$Actions::SCROLL_UP));
	map->put($$new($BasicScrollPaneUI$Actions, $BasicScrollPaneUI$Actions::SCROLL_DOWN));
	map->put($$new($BasicScrollPaneUI$Actions, $BasicScrollPaneUI$Actions::SCROLL_HOME));
	map->put($$new($BasicScrollPaneUI$Actions, $BasicScrollPaneUI$Actions::SCROLL_END));
	map->put($$new($BasicScrollPaneUI$Actions, $BasicScrollPaneUI$Actions::UNIT_SCROLL_UP));
	map->put($$new($BasicScrollPaneUI$Actions, $BasicScrollPaneUI$Actions::UNIT_SCROLL_DOWN));
	map->put($$new($BasicScrollPaneUI$Actions, $BasicScrollPaneUI$Actions::SCROLL_LEFT));
	map->put($$new($BasicScrollPaneUI$Actions, $BasicScrollPaneUI$Actions::SCROLL_RIGHT));
	map->put($$new($BasicScrollPaneUI$Actions, $BasicScrollPaneUI$Actions::UNIT_SCROLL_RIGHT));
	map->put($$new($BasicScrollPaneUI$Actions, $BasicScrollPaneUI$Actions::UNIT_SCROLL_LEFT));
}

void BasicScrollPaneUI::paint($Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($Border, vpBorder, $nc(this->scrollpane)->getViewportBorder());
	if (vpBorder != nullptr) {
		$var($Rectangle, r, $nc(this->scrollpane)->getViewportBorderBounds());
		vpBorder->paintBorder(this->scrollpane, g, $nc(r)->x, r->y, r->width, r->height);
	}
}

$Dimension* BasicScrollPaneUI::getMaximumSize($JComponent* c) {
	return $new($Dimension, $Short::MAX_VALUE, $Short::MAX_VALUE);
}

void BasicScrollPaneUI::installDefaults($JScrollPane* scrollpane) {
	$LookAndFeel::installBorder(scrollpane, "ScrollPane.border"_s);
	$LookAndFeel::installColorsAndFont(scrollpane, "ScrollPane.background"_s, "ScrollPane.foreground"_s, "ScrollPane.font"_s);
	$var($Border, vpBorder, $nc(scrollpane)->getViewportBorder());
	if ((vpBorder == nullptr) || ($instanceOf($UIResource, vpBorder))) {
		$assign(vpBorder, $UIManager::getBorder("ScrollPane.viewportBorder"_s));
		scrollpane->setViewportBorder(vpBorder);
	}
	$init($Boolean);
	$LookAndFeel::installProperty(scrollpane, "opaque"_s, $Boolean::TRUE);
}

void BasicScrollPaneUI::installListeners($JScrollPane* c) {
	$useLocalCurrentObjectStackCache();
	$set(this, vsbChangeListener, createVSBChangeListener());
	$set(this, vsbPropertyChangeListener, createVSBPropertyChangeListener());
	$set(this, hsbChangeListener, createHSBChangeListener());
	$set(this, hsbPropertyChangeListener, createHSBPropertyChangeListener());
	$set(this, viewportChangeListener, createViewportChangeListener());
	$set(this, spPropertyChangeListener, createPropertyChangeListener());
	$var($JViewport, viewport, $nc(this->scrollpane)->getViewport());
	$var($JScrollBar, vsb, $nc(this->scrollpane)->getVerticalScrollBar());
	$var($JScrollBar, hsb, $nc(this->scrollpane)->getHorizontalScrollBar());
	if (viewport != nullptr) {
		viewport->addChangeListener(this->viewportChangeListener);
	}
	if (vsb != nullptr) {
		$nc($(vsb->getModel()))->addChangeListener(this->vsbChangeListener);
		vsb->addPropertyChangeListener(this->vsbPropertyChangeListener);
	}
	if (hsb != nullptr) {
		$nc($(hsb->getModel()))->addChangeListener(this->hsbChangeListener);
		hsb->addPropertyChangeListener(this->hsbPropertyChangeListener);
	}
	$nc(this->scrollpane)->addPropertyChangeListener(this->spPropertyChangeListener);
	$set(this, mouseScrollListener, createMouseWheelListener());
	$nc(this->scrollpane)->addMouseWheelListener(this->mouseScrollListener);
}

void BasicScrollPaneUI::installKeyboardActions($JScrollPane* c) {
	$var($InputMap, inputMap, getInputMap($JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT));
	$SwingUtilities::replaceUIInputMap(c, $JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT, inputMap);
	$LazyActionMap::installLazyActionMap(c, BasicScrollPaneUI::class$, "ScrollPane.actionMap"_s);
}

$InputMap* BasicScrollPaneUI::getInputMap(int32_t condition) {
	$useLocalCurrentObjectStackCache();
	if (condition == $JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT) {
		$var($InputMap, keyMap, $cast($InputMap, $DefaultLookup::get(this->scrollpane, this, "ScrollPane.ancestorInputMap"_s)));
		$var($InputMap, rtlKeyMap, nullptr);
		bool var$0 = $nc($($nc(this->scrollpane)->getComponentOrientation()))->isLeftToRight();
		if (var$0 || (($assign(rtlKeyMap, $cast($InputMap, $DefaultLookup::get(this->scrollpane, this, "ScrollPane.ancestorInputMap.RightToLeft"_s)))) == nullptr)) {
			return keyMap;
		} else {
			$nc(rtlKeyMap)->setParent(keyMap);
			return rtlKeyMap;
		}
	}
	return nullptr;
}

void BasicScrollPaneUI::installUI($JComponent* x) {
	$set(this, scrollpane, $cast($JScrollPane, x));
	installDefaults(this->scrollpane);
	installListeners(this->scrollpane);
	installKeyboardActions(this->scrollpane);
}

void BasicScrollPaneUI::uninstallDefaults($JScrollPane* c) {
	$LookAndFeel::uninstallBorder(this->scrollpane);
	if ($instanceOf($UIResource, $($nc(this->scrollpane)->getViewportBorder()))) {
		$nc(this->scrollpane)->setViewportBorder(nullptr);
	}
}

void BasicScrollPaneUI::uninstallListeners($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($JViewport, viewport, $nc(this->scrollpane)->getViewport());
	$var($JScrollBar, vsb, $nc(this->scrollpane)->getVerticalScrollBar());
	$var($JScrollBar, hsb, $nc(this->scrollpane)->getHorizontalScrollBar());
	if (viewport != nullptr) {
		viewport->removeChangeListener(this->viewportChangeListener);
	}
	if (vsb != nullptr) {
		$nc($(vsb->getModel()))->removeChangeListener(this->vsbChangeListener);
		vsb->removePropertyChangeListener(this->vsbPropertyChangeListener);
	}
	if (hsb != nullptr) {
		$nc($(hsb->getModel()))->removeChangeListener(this->hsbChangeListener);
		hsb->removePropertyChangeListener(this->hsbPropertyChangeListener);
	}
	$nc(this->scrollpane)->removePropertyChangeListener(this->spPropertyChangeListener);
	if (this->mouseScrollListener != nullptr) {
		$nc(this->scrollpane)->removeMouseWheelListener(this->mouseScrollListener);
	}
	$set(this, vsbChangeListener, nullptr);
	$set(this, hsbChangeListener, nullptr);
	$set(this, viewportChangeListener, nullptr);
	$set(this, spPropertyChangeListener, nullptr);
	$set(this, mouseScrollListener, nullptr);
	$set(this, handler, nullptr);
}

void BasicScrollPaneUI::uninstallKeyboardActions($JScrollPane* c) {
	$SwingUtilities::replaceUIActionMap(c, nullptr);
	$SwingUtilities::replaceUIInputMap(c, $JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT, nullptr);
}

void BasicScrollPaneUI::uninstallUI($JComponent* c) {
	uninstallDefaults(this->scrollpane);
	uninstallListeners(this->scrollpane);
	uninstallKeyboardActions(this->scrollpane);
	$set(this, scrollpane, nullptr);
}

$BasicScrollPaneUI$Handler* BasicScrollPaneUI::getHandler() {
	if (this->handler == nullptr) {
		$set(this, handler, $new($BasicScrollPaneUI$Handler, this));
	}
	return this->handler;
}

void BasicScrollPaneUI::syncScrollPaneWithViewport() {
	$useLocalCurrentObjectStackCache();
	$var($JViewport, viewport, $nc(this->scrollpane)->getViewport());
	$var($JScrollBar, vsb, $nc(this->scrollpane)->getVerticalScrollBar());
	$var($JScrollBar, hsb, $nc(this->scrollpane)->getHorizontalScrollBar());
	$var($JViewport, rowHead, $nc(this->scrollpane)->getRowHeader());
	$var($JViewport, colHead, $nc(this->scrollpane)->getColumnHeader());
	bool ltr = $nc($($nc(this->scrollpane)->getComponentOrientation()))->isLeftToRight();
	if (viewport != nullptr) {
		$var($Dimension, extentSize, viewport->getExtentSize());
		$var($Dimension, viewSize, viewport->getViewSize());
		$var($Point, viewPosition, viewport->getViewPosition());
		if (vsb != nullptr) {
			int32_t extent = $nc(extentSize)->height;
			int32_t max = $nc(viewSize)->height;
			int32_t value = $Math::max(0, $Math::min($nc(viewPosition)->y, max - extent));
			vsb->setValues(value, extent, 0, max);
		}
		if (hsb != nullptr) {
			int32_t extent = $nc(extentSize)->width;
			int32_t max = $nc(viewSize)->width;
			int32_t value = 0;
			if (ltr) {
				value = $Math::max(0, $Math::min($nc(viewPosition)->x, max - extent));
			} else {
				int32_t currentValue = hsb->getValue();
				if (this->setValueCalled && ((max - currentValue) == $nc(viewPosition)->x)) {
					value = $Math::max(0, $Math::min(max - extent, currentValue));
					if (extent != 0) {
						this->setValueCalled = false;
					}
				} else if (extent > max) {
					viewPosition->x = max - extent;
					viewport->setViewPosition(viewPosition);
					value = 0;
				} else {
					value = $Math::max(0, $Math::min(max - extent, max - extent - viewPosition->x));
					if (this->oldExtent > extent) {
						value -= this->oldExtent - extent;
					}
				}
			}
			this->oldExtent = extent;
			hsb->setValues(value, extent, 0, max);
		}
		if (rowHead != nullptr) {
			$var($Point, p, rowHead->getViewPosition());
			$nc(p)->y = $nc($(viewport->getViewPosition()))->y;
			p->x = 0;
			rowHead->setViewPosition(p);
		}
		if (colHead != nullptr) {
			$var($Point, p, colHead->getViewPosition());
			if (ltr) {
				$nc(p)->x = $nc($(viewport->getViewPosition()))->x;
			} else {
				$nc(p)->x = $Math::max(0, $nc($(viewport->getViewPosition()))->x);
			}
			$nc(p)->y = 0;
			colHead->setViewPosition(p);
		}
	}
}

int32_t BasicScrollPaneUI::getBaseline($JComponent* c, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	if (c == nullptr) {
		$throwNew($NullPointerException, "Component must be non-null"_s);
	}
	if (width < 0 || height < 0) {
		$throwNew($IllegalArgumentException, "Width and height must be >= 0"_s);
	}
	$var($JViewport, viewport, $nc(this->scrollpane)->getViewport());
	$var($Insets, spInsets, $nc(this->scrollpane)->getInsets());
	int32_t y = $nc(spInsets)->top;
	height = height - spInsets->top - spInsets->bottom;
	width = width - spInsets->left - spInsets->right;
	$var($JViewport, columnHeader, $nc(this->scrollpane)->getColumnHeader());
	if (columnHeader != nullptr && columnHeader->isVisible()) {
		$var($Component, header, columnHeader->getView());
		if (header != nullptr && header->isVisible()) {
			$var($Dimension, headerPref, header->getPreferredSize());
			int32_t baseline = header->getBaseline($nc(headerPref)->width, headerPref->height);
			if (baseline >= 0) {
				return y + baseline;
			}
		}
		$var($Dimension, columnPref, columnHeader->getPreferredSize());
		height -= $nc(columnPref)->height;
		y += columnPref->height;
	}
	$var($Component, view, (viewport == nullptr) ? ($Component*)nullptr : $nc(viewport)->getView());
	bool var$0 = view != nullptr && view->isVisible();
	$init($Component$BaselineResizeBehavior);
	if (var$0 && view->getBaselineResizeBehavior() == $Component$BaselineResizeBehavior::CONSTANT_ASCENT) {
		$var($Border, viewportBorder, $nc(this->scrollpane)->getViewportBorder());
		if (viewportBorder != nullptr) {
			$var($Insets, vpbInsets, viewportBorder->getBorderInsets(this->scrollpane));
			y += $nc(vpbInsets)->top;
			height = height - vpbInsets->top - vpbInsets->bottom;
			width = width - vpbInsets->left - vpbInsets->right;
		}
		bool var$1 = view->getWidth() > 0;
		if (var$1 && view->getHeight() > 0) {
			$var($Dimension, min, view->getMinimumSize());
			width = $Math::max($nc(min)->width, view->getWidth());
			height = $Math::max($nc(min)->height, view->getHeight());
		}
		if (width > 0 && height > 0) {
			int32_t baseline = view->getBaseline(width, height);
			if (baseline > 0) {
				return y + baseline;
			}
		}
	}
	return -1;
}

$Component$BaselineResizeBehavior* BasicScrollPaneUI::getBaselineResizeBehavior($JComponent* c) {
	$ScrollPaneUI::getBaselineResizeBehavior(c);
	$init($Component$BaselineResizeBehavior);
	return $Component$BaselineResizeBehavior::CONSTANT_ASCENT;
}

$ChangeListener* BasicScrollPaneUI::createViewportChangeListener() {
	return getHandler();
}

$PropertyChangeListener* BasicScrollPaneUI::createHSBPropertyChangeListener() {
	return getHandler();
}

$ChangeListener* BasicScrollPaneUI::createHSBChangeListener() {
	return getHandler();
}

$PropertyChangeListener* BasicScrollPaneUI::createVSBPropertyChangeListener() {
	return getHandler();
}

$ChangeListener* BasicScrollPaneUI::createVSBChangeListener() {
	return getHandler();
}

$MouseWheelListener* BasicScrollPaneUI::createMouseWheelListener() {
	return getHandler();
}

void BasicScrollPaneUI::updateScrollBarDisplayPolicy($PropertyChangeEvent* e) {
	$nc(this->scrollpane)->revalidate();
	$nc(this->scrollpane)->repaint();
}

void BasicScrollPaneUI::updateViewport($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JViewport, oldViewport, ($cast($JViewport, $nc(e)->getOldValue())));
	$var($JViewport, newViewport, ($cast($JViewport, e->getNewValue())));
	if (oldViewport != nullptr) {
		oldViewport->removeChangeListener(this->viewportChangeListener);
	}
	if (newViewport != nullptr) {
		$var($Point, p, newViewport->getViewPosition());
		if ($nc($($nc(this->scrollpane)->getComponentOrientation()))->isLeftToRight()) {
			$nc(p)->x = $Math::max(p->x, 0);
		} else {
			int32_t max = $nc($(newViewport->getViewSize()))->width;
			int32_t extent = $nc($(newViewport->getExtentSize()))->width;
			if (extent > max) {
				$nc(p)->x = max - extent;
			} else {
				$nc(p)->x = $Math::max(0, $Math::min(max - extent, p->x));
			}
		}
		$nc(p)->y = $Math::max(p->y, 0);
		newViewport->setViewPosition(p);
		newViewport->addChangeListener(this->viewportChangeListener);
	}
}

void BasicScrollPaneUI::updateRowHeader($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JViewport, newRowHead, ($cast($JViewport, $nc(e)->getNewValue())));
	if (newRowHead != nullptr) {
		$var($JViewport, viewport, $nc(this->scrollpane)->getViewport());
		$var($Point, p, newRowHead->getViewPosition());
		$nc(p)->y = (viewport != nullptr) ? $nc($($nc(viewport)->getViewPosition()))->y : 0;
		newRowHead->setViewPosition(p);
	}
}

void BasicScrollPaneUI::updateColumnHeader($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JViewport, newColHead, ($cast($JViewport, $nc(e)->getNewValue())));
	if (newColHead != nullptr) {
		$var($JViewport, viewport, $nc(this->scrollpane)->getViewport());
		$var($Point, p, newColHead->getViewPosition());
		if (viewport == nullptr) {
			$nc(p)->x = 0;
		} else if ($nc($($nc(this->scrollpane)->getComponentOrientation()))->isLeftToRight()) {
			$nc(p)->x = $nc($($nc(viewport)->getViewPosition()))->x;
		} else {
			$nc(p)->x = $Math::max(0, $nc($($nc(viewport)->getViewPosition()))->x);
		}
		newColHead->setViewPosition(p);
		$init($ScrollPaneConstants);
		$nc(this->scrollpane)->add(static_cast<$Component*>(newColHead), $of($ScrollPaneConstants::COLUMN_HEADER));
	}
}

void BasicScrollPaneUI::updateHorizontalScrollBar($PropertyChangeEvent* pce) {
	updateScrollBar(pce, this->hsbChangeListener, this->hsbPropertyChangeListener);
}

void BasicScrollPaneUI::updateVerticalScrollBar($PropertyChangeEvent* pce) {
	updateScrollBar(pce, this->vsbChangeListener, this->vsbPropertyChangeListener);
}

void BasicScrollPaneUI::updateScrollBar($PropertyChangeEvent* pce, $ChangeListener* cl, $PropertyChangeListener* pcl) {
	$useLocalCurrentObjectStackCache();
	$var($JScrollBar, sb, $cast($JScrollBar, $nc(pce)->getOldValue()));
	if (sb != nullptr) {
		if (cl != nullptr) {
			$nc($(sb->getModel()))->removeChangeListener(cl);
		}
		if (pcl != nullptr) {
			sb->removePropertyChangeListener(pcl);
		}
	}
	$assign(sb, $cast($JScrollBar, pce->getNewValue()));
	if (sb != nullptr) {
		if (cl != nullptr) {
			$nc($(sb->getModel()))->addChangeListener(cl);
		}
		if (pcl != nullptr) {
			sb->addPropertyChangeListener(pcl);
		}
	}
}

$PropertyChangeListener* BasicScrollPaneUI::createPropertyChangeListener() {
	return getHandler();
}

BasicScrollPaneUI::BasicScrollPaneUI() {
}

$Class* BasicScrollPaneUI::load$($String* name, bool initialize) {
	$loadClass(BasicScrollPaneUI, name, initialize, &_BasicScrollPaneUI_ClassInfo_, allocate$BasicScrollPaneUI);
	return class$;
}

$Class* BasicScrollPaneUI::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax