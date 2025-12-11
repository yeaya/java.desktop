#include <javax/swing/plaf/basic/BasicTabbedPaneUI$Handler.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/ContainerEvent.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/util/Vector.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicHTML.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI$ScrollableTabPanel.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI$ScrollableTabSupport.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI$ScrollableTabViewport.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI$TabContainer.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI.h>
#include <javax/swing/text/View.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Rectangle = ::java::awt::Rectangle;
using $ContainerEvent = ::java::awt::event::ContainerEvent;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicHTML = ::javax::swing::plaf::basic::BasicHTML;
using $BasicTabbedPaneUI = ::javax::swing::plaf::basic::BasicTabbedPaneUI;
using $BasicTabbedPaneUI$ScrollableTabPanel = ::javax::swing::plaf::basic::BasicTabbedPaneUI$ScrollableTabPanel;
using $BasicTabbedPaneUI$ScrollableTabSupport = ::javax::swing::plaf::basic::BasicTabbedPaneUI$ScrollableTabSupport;
using $BasicTabbedPaneUI$ScrollableTabViewport = ::javax::swing::plaf::basic::BasicTabbedPaneUI$ScrollableTabViewport;
using $BasicTabbedPaneUI$TabContainer = ::javax::swing::plaf::basic::BasicTabbedPaneUI$TabContainer;
using $View = ::javax::swing::text::View;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicTabbedPaneUI$Handler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicTabbedPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicTabbedPaneUI$Handler, this$0)},
	{}
};

$MethodInfo _BasicTabbedPaneUI$Handler_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/plaf/basic/BasicTabbedPaneUI;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicTabbedPaneUI$Handler::*)($BasicTabbedPaneUI*)>(&BasicTabbedPaneUI$Handler::init$))},
	{"componentAdded", "(Ljava/awt/event/ContainerEvent;)V", nullptr, $PUBLIC},
	{"componentRemoved", "(Ljava/awt/event/ContainerEvent;)V", nullptr, $PUBLIC},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"setHtmlView", "(Ljavax/swing/text/View;ZI)V", nullptr, $PRIVATE, $method(static_cast<void(BasicTabbedPaneUI$Handler::*)($View*,bool,int32_t)>(&BasicTabbedPaneUI$Handler::setHtmlView))},
	{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateHtmlViews", "(IZ)V", nullptr, $PRIVATE, $method(static_cast<void(BasicTabbedPaneUI$Handler::*)(int32_t,bool)>(&BasicTabbedPaneUI$Handler::updateHtmlViews))},
	{}
};

$InnerClassInfo _BasicTabbedPaneUI$Handler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicTabbedPaneUI$Handler", "javax.swing.plaf.basic.BasicTabbedPaneUI", "Handler", $PRIVATE},
	{}
};

$ClassInfo _BasicTabbedPaneUI$Handler_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicTabbedPaneUI$Handler",
	"java.lang.Object",
	"javax.swing.event.ChangeListener,java.awt.event.ContainerListener,java.awt.event.FocusListener,java.awt.event.MouseListener,java.awt.event.MouseMotionListener,java.beans.PropertyChangeListener",
	_BasicTabbedPaneUI$Handler_FieldInfo_,
	_BasicTabbedPaneUI$Handler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicTabbedPaneUI$Handler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicTabbedPaneUI"
};

$Object* allocate$BasicTabbedPaneUI$Handler($Class* clazz) {
	return $of($alloc(BasicTabbedPaneUI$Handler));
}

int32_t BasicTabbedPaneUI$Handler::hashCode() {
	 return this->$ChangeListener::hashCode();
}

bool BasicTabbedPaneUI$Handler::equals(Object$* arg0) {
	 return this->$ChangeListener::equals(arg0);
}

$Object* BasicTabbedPaneUI$Handler::clone() {
	 return this->$ChangeListener::clone();
}

$String* BasicTabbedPaneUI$Handler::toString() {
	 return this->$ChangeListener::toString();
}

void BasicTabbedPaneUI$Handler::finalize() {
	this->$ChangeListener::finalize();
}

void BasicTabbedPaneUI$Handler::init$($BasicTabbedPaneUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicTabbedPaneUI$Handler::propertyChange($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JTabbedPane, pane, $cast($JTabbedPane, $nc(e)->getSource()));
	$var($String, name, e->getPropertyName());
	bool isScrollLayout = this->this$0->scrollableTabLayoutEnabled();
	if (name == "mnemonicAt"_s) {
		this->this$0->updateMnemonics();
		$nc(pane)->repaint();
	} else if (name == "displayedMnemonicIndexAt"_s) {
		$nc(pane)->repaint();
	} else if (name == "indexForTitle"_s) {
		this->this$0->calculatedBaseline = false;
		$var($Integer, index, $cast($Integer, e->getNewValue()));
		updateHtmlViews($nc(index)->intValue(), false);
	} else if (name == "tabLayoutPolicy"_s) {
		this->this$0->uninstallUI(pane);
		this->this$0->installUI(pane);
		this->this$0->calculatedBaseline = false;
	} else if (name == "tabPlacement"_s) {
		if (this->this$0->scrollableTabLayoutEnabled()) {
			$nc(this->this$0->tabScroller)->createButtons();
		}
		this->this$0->calculatedBaseline = false;
	} else if (name == "opaque"_s && isScrollLayout) {
		bool newVal = $nc(($cast($Boolean, $(e->getNewValue()))))->booleanValue();
		$nc($nc(this->this$0->tabScroller)->tabPanel)->setOpaque(newVal);
		$nc($nc(this->this$0->tabScroller)->viewport)->setOpaque(newVal);
	} else if (name == "background"_s && isScrollLayout) {
		$var($Color, newVal, $cast($Color, e->getNewValue()));
		$nc($nc(this->this$0->tabScroller)->tabPanel)->setBackground(newVal);
		$nc($nc(this->this$0->tabScroller)->viewport)->setBackground(newVal);
		$var($Color, newColor, this->this$0->selectedColor == nullptr ? newVal : this->this$0->selectedColor);
		$nc($nc(this->this$0->tabScroller)->scrollForwardButton)->setBackground(newColor);
		$nc($nc(this->this$0->tabScroller)->scrollBackwardButton)->setBackground(newColor);
	} else if (name == "indexForTabComponent"_s) {
		if (this->this$0->tabContainer != nullptr) {
			$nc(this->this$0->tabContainer)->removeUnusedTabComponents();
		}
		$var($Component, c, $nc(this->this$0->tabPane)->getTabComponentAt($nc(($cast($Integer, $(e->getNewValue()))))->intValue()));
		if (c != nullptr) {
			if (this->this$0->tabContainer == nullptr) {
				this->this$0->installTabContainer();
			} else {
				$nc(this->this$0->tabContainer)->add(c);
			}
		}
		$nc(this->this$0->tabPane)->revalidate();
		$nc(this->this$0->tabPane)->repaint();
		this->this$0->calculatedBaseline = false;
	} else if (name == "indexForNullComponent"_s) {
		this->this$0->isRunsDirty = true;
		updateHtmlViews($nc(($cast($Integer, $(e->getNewValue()))))->intValue(), true);
	} else if (name == "font"_s || $SwingUtilities2::isScaleChanged(e)) {
		this->this$0->calculatedBaseline = false;
	}
}

void BasicTabbedPaneUI$Handler::updateHtmlViews(int32_t index, bool inserted) {
	$useLocalCurrentObjectStackCache();
	$var($String, title, $nc(this->this$0->tabPane)->getTitleAt(index));
	bool isHTML = $BasicHTML::isHTMLString(title);
	if (isHTML) {
		if (this->this$0->htmlViews == nullptr) {
			$set(this->this$0, htmlViews, this->this$0->createHTMLVector());
		} else {
			$var($View, v, $BasicHTML::createHTMLView(this->this$0->tabPane, title));
			setHtmlView(v, inserted, index);
		}
	} else if (this->this$0->htmlViews != nullptr) {
		setHtmlView(nullptr, inserted, index);
	}
	this->this$0->updateMnemonics();
}

void BasicTabbedPaneUI$Handler::setHtmlView($View* v, bool inserted, int32_t index) {
	if (inserted || index >= $nc(this->this$0->htmlViews)->size()) {
		$nc(this->this$0->htmlViews)->insertElementAt(v, index);
	} else {
		$nc(this->this$0->htmlViews)->setElementAt(v, index);
	}
}

void BasicTabbedPaneUI$Handler::stateChanged($ChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JTabbedPane, tabPane, $cast($JTabbedPane, $nc(e)->getSource()));
	$nc(tabPane)->revalidate();
	tabPane->repaint();
	this->this$0->setFocusIndex(tabPane->getSelectedIndex(), false);
	if (this->this$0->scrollableTabLayoutEnabled()) {
		this->this$0->ensureCurrentLayout();
		int32_t index = tabPane->getSelectedIndex();
		if (index < $nc(this->this$0->rects)->length && index != -1) {
			$nc($nc(this->this$0->tabScroller)->tabPanel)->scrollRectToVisible($cast($Rectangle, $($nc($nc(this->this$0->rects)->get(index))->clone())));
		}
	}
}

void BasicTabbedPaneUI$Handler::mouseClicked($MouseEvent* e) {
}

void BasicTabbedPaneUI$Handler::mouseReleased($MouseEvent* e) {
}

void BasicTabbedPaneUI$Handler::mouseEntered($MouseEvent* e) {
	int32_t var$0 = $nc(e)->getX();
	this->this$0->setRolloverTab(var$0, e->getY());
}

void BasicTabbedPaneUI$Handler::mouseExited($MouseEvent* e) {
	this->this$0->setRolloverTab(-1);
}

void BasicTabbedPaneUI$Handler::mousePressed($MouseEvent* e) {
	if (!$nc(this->this$0->tabPane)->isEnabled()) {
		return;
	}
	$var($JTabbedPane, var$0, this->this$0->tabPane);
	int32_t var$1 = $nc(e)->getX();
	int32_t tabIndex = this->this$0->tabForCoordinate(var$0, var$1, e->getY());
	if (tabIndex >= 0 && $nc(this->this$0->tabPane)->isEnabledAt(tabIndex)) {
		if (tabIndex != $nc(this->this$0->tabPane)->getSelectedIndex()) {
			$nc(this->this$0->tabPane)->setSelectedIndex(tabIndex);
		} else if ($nc(this->this$0->tabPane)->isRequestFocusEnabled()) {
			$nc(this->this$0->tabPane)->requestFocus();
		}
	}
}

void BasicTabbedPaneUI$Handler::mouseDragged($MouseEvent* e) {
}

void BasicTabbedPaneUI$Handler::mouseMoved($MouseEvent* e) {
	int32_t var$0 = $nc(e)->getX();
	this->this$0->setRolloverTab(var$0, e->getY());
}

void BasicTabbedPaneUI$Handler::focusGained($FocusEvent* e) {
	this->this$0->setFocusIndex($nc(this->this$0->tabPane)->getSelectedIndex(), true);
}

void BasicTabbedPaneUI$Handler::focusLost($FocusEvent* e) {
	this->this$0->repaintTab(this->this$0->focusIndex);
}

void BasicTabbedPaneUI$Handler::componentAdded($ContainerEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JTabbedPane, tp, $cast($JTabbedPane, $nc(e)->getContainer()));
	$var($Component, child, e->getChild());
	if ($instanceOf($UIResource, child)) {
		return;
	}
	this->this$0->isRunsDirty = true;
	updateHtmlViews($nc(tp)->indexOfComponent(child), true);
}

void BasicTabbedPaneUI$Handler::componentRemoved($ContainerEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JTabbedPane, tp, $cast($JTabbedPane, $nc(e)->getContainer()));
	$var($Component, child, e->getChild());
	if ($instanceOf($UIResource, child)) {
		return;
	}
	$var($Integer, indexObj, $cast($Integer, $nc(tp)->getClientProperty("__index_to_remove__"_s)));
	if (indexObj != nullptr) {
		int32_t index = indexObj->intValue();
		if (this->this$0->htmlViews != nullptr && $nc(this->this$0->htmlViews)->size() > index) {
			$nc(this->this$0->htmlViews)->removeElementAt(index);
		}
		tp->putClientProperty("__index_to_remove__"_s, nullptr);
	}
	this->this$0->isRunsDirty = true;
	this->this$0->updateMnemonics();
	this->this$0->validateFocusIndex();
}

BasicTabbedPaneUI$Handler::BasicTabbedPaneUI$Handler() {
}

$Class* BasicTabbedPaneUI$Handler::load$($String* name, bool initialize) {
	$loadClass(BasicTabbedPaneUI$Handler, name, initialize, &_BasicTabbedPaneUI$Handler_ClassInfo_, allocate$BasicTabbedPaneUI$Handler);
	return class$;
}

$Class* BasicTabbedPaneUI$Handler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax