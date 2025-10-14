#include <javax/swing/plaf/basic/BasicScrollPaneUI$Handler.h>

#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Dimension.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/MouseWheelEvent.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/BoundedRangeModel.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JViewport.h>
#include <javax/swing/Scrollable.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/plaf/basic/BasicScrollBarUI.h>
#include <javax/swing/plaf/basic/BasicScrollPaneUI.h>
#include <jcpp.h>

#undef HORIZONTAL
#undef TRUE
#undef VERTICAL
#undef WHEEL_BLOCK_SCROLL
#undef WHEEL_UNIT_SCROLL

using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Dimension = ::java::awt::Dimension;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $InputEvent = ::java::awt::event::InputEvent;
using $MouseWheelEvent = ::java::awt::event::MouseWheelEvent;
using $MouseWheelListener = ::java::awt::event::MouseWheelListener;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $BoundedRangeModel = ::javax::swing::BoundedRangeModel;
using $JComponent = ::javax::swing::JComponent;
using $JScrollBar = ::javax::swing::JScrollBar;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JViewport = ::javax::swing::JViewport;
using $Scrollable = ::javax::swing::Scrollable;
using $SwingConstants = ::javax::swing::SwingConstants;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $BasicScrollBarUI = ::javax::swing::plaf::basic::BasicScrollBarUI;
using $BasicScrollPaneUI = ::javax::swing::plaf::basic::BasicScrollPaneUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicScrollPaneUI$Handler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicScrollPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicScrollPaneUI$Handler, this$0)},
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(BasicScrollPaneUI$Handler, $assertionsDisabled)},
	{}
};

$MethodInfo _BasicScrollPaneUI$Handler_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/plaf/basic/BasicScrollPaneUI;)V", nullptr, 0, $method(static_cast<void(BasicScrollPaneUI$Handler::*)($BasicScrollPaneUI*)>(&BasicScrollPaneUI$Handler::init$))},
	{"hsbStateChanged", "(Ljavax/swing/JViewport;Ljavax/swing/event/ChangeEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicScrollPaneUI$Handler::*)($JViewport*,$ChangeEvent*)>(&BasicScrollPaneUI$Handler::hsbStateChanged))},
	{"mouseWheelMoved", "(Ljava/awt/event/MouseWheelEvent;)V", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"sbPropertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicScrollPaneUI$Handler::*)($PropertyChangeEvent*)>(&BasicScrollPaneUI$Handler::sbPropertyChange))},
	{"scrollPanePropertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicScrollPaneUI$Handler::*)($PropertyChangeEvent*)>(&BasicScrollPaneUI$Handler::scrollPanePropertyChange))},
	{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"vsbStateChanged", "(Ljavax/swing/JViewport;Ljavax/swing/event/ChangeEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicScrollPaneUI$Handler::*)($JViewport*,$ChangeEvent*)>(&BasicScrollPaneUI$Handler::vsbStateChanged))},
	{}
};

$InnerClassInfo _BasicScrollPaneUI$Handler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicScrollPaneUI$Handler", "javax.swing.plaf.basic.BasicScrollPaneUI", "Handler", 0},
	{}
};

$ClassInfo _BasicScrollPaneUI$Handler_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicScrollPaneUI$Handler",
	"java.lang.Object",
	"javax.swing.event.ChangeListener,java.beans.PropertyChangeListener,java.awt.event.MouseWheelListener",
	_BasicScrollPaneUI$Handler_FieldInfo_,
	_BasicScrollPaneUI$Handler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicScrollPaneUI$Handler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicScrollPaneUI"
};

$Object* allocate$BasicScrollPaneUI$Handler($Class* clazz) {
	return $of($alloc(BasicScrollPaneUI$Handler));
}

int32_t BasicScrollPaneUI$Handler::hashCode() {
	 return this->$ChangeListener::hashCode();
}

bool BasicScrollPaneUI$Handler::equals(Object$* arg0) {
	 return this->$ChangeListener::equals(arg0);
}

$Object* BasicScrollPaneUI$Handler::clone() {
	 return this->$ChangeListener::clone();
}

$String* BasicScrollPaneUI$Handler::toString() {
	 return this->$ChangeListener::toString();
}

void BasicScrollPaneUI$Handler::finalize() {
	this->$ChangeListener::finalize();
}

bool BasicScrollPaneUI$Handler::$assertionsDisabled = false;

void BasicScrollPaneUI$Handler::init$($BasicScrollPaneUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicScrollPaneUI$Handler::mouseWheelMoved($MouseWheelEvent* e) {
	bool var$0 = $nc(this->this$0->scrollpane)->isWheelScrollingEnabled();
	if (var$0 && $nc(e)->getWheelRotation() != 0) {
		$var($JScrollBar, toScroll, $nc(this->this$0->scrollpane)->getVerticalScrollBar());
		int32_t direction = e->getWheelRotation() < 0 ? -1 : 1;
		int32_t orientation = $SwingConstants::VERTICAL;
		bool var$1 = toScroll == nullptr || !$nc(toScroll)->isVisible();
		if (var$1 || e->isShiftDown()) {
			$assign(toScroll, $nc(this->this$0->scrollpane)->getHorizontalScrollBar());
			if (toScroll == nullptr || !$nc(toScroll)->isVisible()) {
				return;
			}
			orientation = $SwingConstants::HORIZONTAL;
		}
		e->consume();
		if (e->getScrollType() == $MouseWheelEvent::WHEEL_UNIT_SCROLL) {
			$var($JViewport, vp, $nc(this->this$0->scrollpane)->getViewport());
			if (vp == nullptr) {
				return;
			}
			$var($Component, comp, $nc(vp)->getView());
			int32_t units = $Math::abs(e->getUnitsToScroll());
			bool limitScroll = $Math::abs(e->getWheelRotation()) == 1;
			$var($Object, fastWheelScroll, $nc(toScroll)->getClientProperty("JScrollBar.fastWheelScrolling"_s));
			$init($Boolean);
			if ($equals($Boolean::TRUE, fastWheelScroll) && $instanceOf($Scrollable, comp)) {
				$var($Scrollable, scrollComp, $cast($Scrollable, comp));
				$var($Rectangle, viewRect, vp->getViewRect());
				int32_t startingX = $nc(viewRect)->x;
				bool leftToRight = $nc($($nc(comp)->getComponentOrientation()))->isLeftToRight();
				int32_t scrollMin = toScroll->getMinimum();
				int32_t var$2 = toScroll->getMaximum();
				int32_t scrollMax = var$2 - $nc($(toScroll->getModel()))->getExtent();
				if (limitScroll) {
					int32_t blockIncr = $nc(scrollComp)->getScrollableBlockIncrement(viewRect, orientation, direction);
					if (direction < 0) {
						scrollMin = $Math::max(scrollMin, toScroll->getValue() - blockIncr);
					} else {
						scrollMax = $Math::min(scrollMax, toScroll->getValue() + blockIncr);
					}
				}
				for (int32_t i = 0; i < units; ++i) {
					int32_t unitIncr = $nc(scrollComp)->getScrollableUnitIncrement(viewRect, orientation, direction);
					if (orientation == $SwingConstants::VERTICAL) {
						if (direction < 0) {
							viewRect->y -= unitIncr;
							if (viewRect->y <= scrollMin) {
								viewRect->y = scrollMin;
								break;
							}
						} else {
							viewRect->y += unitIncr;
							if (viewRect->y >= scrollMax) {
								viewRect->y = scrollMax;
								break;
							}
						}
					} else if ((leftToRight && direction < 0) || (!leftToRight && direction > 0)) {
						viewRect->x -= unitIncr;
						if (leftToRight) {
							if (viewRect->x < scrollMin) {
								viewRect->x = scrollMin;
								break;
							}
						}
					} else if ((leftToRight && direction > 0) || (!leftToRight && direction < 0)) {
						viewRect->x += unitIncr;
						if (leftToRight) {
							if (viewRect->x > scrollMax) {
								viewRect->x = scrollMax;
								break;
							}
						}
					} else if (!BasicScrollPaneUI$Handler::$assertionsDisabled) {
						$throwNew($AssertionError, $of("Non-sensical ComponentOrientation / scroll direction"_s));
					}
				}
				if (orientation == $SwingConstants::VERTICAL) {
					toScroll->setValue(viewRect->y);
				} else if (leftToRight) {
					toScroll->setValue(viewRect->x);
				} else {
					int32_t newPos = toScroll->getValue() - (viewRect->x - startingX);
					if (newPos < scrollMin) {
						newPos = scrollMin;
					} else if (newPos > scrollMax) {
						newPos = scrollMax;
					}
					toScroll->setValue(newPos);
				}
			} else {
				$BasicScrollBarUI::scrollByUnits(toScroll, direction, units, limitScroll);
			}
		} else if (e->getScrollType() == $MouseWheelEvent::WHEEL_BLOCK_SCROLL) {
			$BasicScrollBarUI::scrollByBlock(toScroll, direction);
		}
	}
}

void BasicScrollPaneUI$Handler::stateChanged($ChangeEvent* e) {
	$var($JViewport, viewport, $nc(this->this$0->scrollpane)->getViewport());
	if (viewport != nullptr) {
		if ($equals($nc(e)->getSource(), viewport)) {
			this->this$0->syncScrollPaneWithViewport();
		} else {
			$var($JScrollBar, hsb, $nc(this->this$0->scrollpane)->getHorizontalScrollBar());
			bool var$0 = hsb != nullptr;
			if (var$0) {
				var$0 = $equals(e->getSource(), hsb->getModel());
			}
			if (var$0) {
				hsbStateChanged(viewport, e);
			} else {
				$var($JScrollBar, vsb, $nc(this->this$0->scrollpane)->getVerticalScrollBar());
				bool var$1 = vsb != nullptr;
				if (var$1) {
					var$1 = $equals(e->getSource(), vsb->getModel());
				}
				if (var$1) {
					vsbStateChanged(viewport, e);
				}
			}
		}
	}
}

void BasicScrollPaneUI$Handler::vsbStateChanged($JViewport* viewport, $ChangeEvent* e) {
	$var($BoundedRangeModel, model, ($cast($BoundedRangeModel, $nc(e)->getSource())));
	$var($Point, p, $nc(viewport)->getViewPosition());
	$nc(p)->y = $nc(model)->getValue();
	viewport->setViewPosition(p);
}

void BasicScrollPaneUI$Handler::hsbStateChanged($JViewport* viewport, $ChangeEvent* e) {
	$var($BoundedRangeModel, model, ($cast($BoundedRangeModel, $nc(e)->getSource())));
	$var($Point, p, $nc(viewport)->getViewPosition());
	int32_t value = $nc(model)->getValue();
	if ($nc($($nc(this->this$0->scrollpane)->getComponentOrientation()))->isLeftToRight()) {
		$nc(p)->x = value;
	} else {
		int32_t max = $nc($(viewport->getViewSize()))->width;
		int32_t extent = $nc($(viewport->getExtentSize()))->width;
		int32_t oldX = $nc(p)->x;
		p->x = max - extent - value;
		if ((extent == 0) && (value != 0) && (oldX == max)) {
			this->this$0->setValueCalled = true;
		} else if ((extent != 0) && (oldX < 0) && (p->x == 0)) {
			p->x += value;
		}
	}
	viewport->setViewPosition(p);
}

void BasicScrollPaneUI$Handler::propertyChange($PropertyChangeEvent* e) {
	if ($equals($nc(e)->getSource(), this->this$0->scrollpane)) {
		scrollPanePropertyChange(e);
	} else {
		sbPropertyChange(e);
	}
}

void BasicScrollPaneUI$Handler::scrollPanePropertyChange($PropertyChangeEvent* e) {
	$var($String, propertyName, $nc(e)->getPropertyName());
	if (propertyName == "verticalScrollBarDisplayPolicy"_s) {
		this->this$0->updateScrollBarDisplayPolicy(e);
	} else if (propertyName == "horizontalScrollBarDisplayPolicy"_s) {
		this->this$0->updateScrollBarDisplayPolicy(e);
	} else if (propertyName == "viewport"_s) {
		this->this$0->updateViewport(e);
	} else if (propertyName == "rowHeader"_s) {
		this->this$0->updateRowHeader(e);
	} else if (propertyName == "columnHeader"_s) {
		this->this$0->updateColumnHeader(e);
	} else if (propertyName == "verticalScrollBar"_s) {
		this->this$0->updateVerticalScrollBar(e);
	} else if (propertyName == "horizontalScrollBar"_s) {
		this->this$0->updateHorizontalScrollBar(e);
	} else if (propertyName == "componentOrientation"_s) {
		$nc(this->this$0->scrollpane)->revalidate();
		$nc(this->this$0->scrollpane)->repaint();
	}
}

void BasicScrollPaneUI$Handler::sbPropertyChange($PropertyChangeEvent* e) {
	$var($String, propertyName, $nc(e)->getPropertyName());
	$var($Object, source, e->getSource());
	if ("model"_s == propertyName) {
		$var($JScrollBar, sb, $nc(this->this$0->scrollpane)->getVerticalScrollBar());
		$var($BoundedRangeModel, oldModel, $cast($BoundedRangeModel, e->getOldValue()));
		$var($ChangeListener, cl, nullptr);
		if ($equals(source, sb)) {
			$assign(cl, this->this$0->vsbChangeListener);
		} else if ($equals(source, $nc(this->this$0->scrollpane)->getHorizontalScrollBar())) {
			$assign(sb, $nc(this->this$0->scrollpane)->getHorizontalScrollBar());
			$assign(cl, this->this$0->hsbChangeListener);
		}
		if (cl != nullptr) {
			if (oldModel != nullptr) {
				oldModel->removeChangeListener(cl);
			}
			if ($nc(sb)->getModel() != nullptr) {
				$nc($(sb->getModel()))->addChangeListener(cl);
			}
		}
	} else if ("componentOrientation"_s == propertyName) {
		if ($equals(source, $nc(this->this$0->scrollpane)->getHorizontalScrollBar())) {
			$var($JScrollBar, hsb, $nc(this->this$0->scrollpane)->getHorizontalScrollBar());
			$var($JViewport, viewport, $nc(this->this$0->scrollpane)->getViewport());
			$var($Point, p, $nc(viewport)->getViewPosition());
			if ($nc($($nc(this->this$0->scrollpane)->getComponentOrientation()))->isLeftToRight()) {
				$nc(p)->x = $nc(hsb)->getValue();
			} else {
				int32_t var$1 = $nc($(viewport->getViewSize()))->width;
				int32_t var$0 = var$1 - $nc($(viewport->getExtentSize()))->width;
				$nc(p)->x = var$0 - $nc(hsb)->getValue();
			}
			viewport->setViewPosition(p);
		}
	}
}

void clinit$BasicScrollPaneUI$Handler($Class* class$) {
	$load($BasicScrollPaneUI);
	BasicScrollPaneUI$Handler::$assertionsDisabled = !$BasicScrollPaneUI::class$->desiredAssertionStatus();
}

BasicScrollPaneUI$Handler::BasicScrollPaneUI$Handler() {
}

$Class* BasicScrollPaneUI$Handler::load$($String* name, bool initialize) {
	$loadClass(BasicScrollPaneUI$Handler, name, initialize, &_BasicScrollPaneUI$Handler_ClassInfo_, clinit$BasicScrollPaneUI$Handler, allocate$BasicScrollPaneUI$Handler);
	return class$;
}

$Class* BasicScrollPaneUI$Handler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax