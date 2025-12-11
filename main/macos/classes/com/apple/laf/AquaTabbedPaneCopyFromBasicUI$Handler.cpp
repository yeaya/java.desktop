#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI$Handler.h>

#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI$ScrollableTabPanel.h>
#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport.h>
#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI$ScrollableTabViewport.h>
#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI$TabContainer.h>
#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI.h>
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
#include <javax/swing/text/View.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

using $AquaTabbedPaneCopyFromBasicUI = ::com::apple::laf::AquaTabbedPaneCopyFromBasicUI;
using $AquaTabbedPaneCopyFromBasicUI$ScrollableTabPanel = ::com::apple::laf::AquaTabbedPaneCopyFromBasicUI$ScrollableTabPanel;
using $AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport = ::com::apple::laf::AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport;
using $AquaTabbedPaneCopyFromBasicUI$ScrollableTabViewport = ::com::apple::laf::AquaTabbedPaneCopyFromBasicUI$ScrollableTabViewport;
using $AquaTabbedPaneCopyFromBasicUI$TabContainer = ::com::apple::laf::AquaTabbedPaneCopyFromBasicUI$TabContainer;
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
using $View = ::javax::swing::text::View;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaTabbedPaneCopyFromBasicUI$Handler_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaTabbedPaneCopyFromBasicUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTabbedPaneCopyFromBasicUI$Handler, this$0)},
	{}
};

$MethodInfo _AquaTabbedPaneCopyFromBasicUI$Handler_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/apple/laf/AquaTabbedPaneCopyFromBasicUI;)V", nullptr, $PRIVATE, $method(static_cast<void(AquaTabbedPaneCopyFromBasicUI$Handler::*)($AquaTabbedPaneCopyFromBasicUI*)>(&AquaTabbedPaneCopyFromBasicUI$Handler::init$))},
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
	{"setHtmlView", "(Ljavax/swing/text/View;ZI)V", nullptr, $PRIVATE, $method(static_cast<void(AquaTabbedPaneCopyFromBasicUI$Handler::*)($View*,bool,int32_t)>(&AquaTabbedPaneCopyFromBasicUI$Handler::setHtmlView))},
	{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateHtmlViews", "(IZ)V", nullptr, $PRIVATE, $method(static_cast<void(AquaTabbedPaneCopyFromBasicUI$Handler::*)(int32_t,bool)>(&AquaTabbedPaneCopyFromBasicUI$Handler::updateHtmlViews))},
	{}
};

$InnerClassInfo _AquaTabbedPaneCopyFromBasicUI$Handler_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaTabbedPaneCopyFromBasicUI$Handler", "com.apple.laf.AquaTabbedPaneCopyFromBasicUI", "Handler", $PRIVATE},
	{}
};

$ClassInfo _AquaTabbedPaneCopyFromBasicUI$Handler_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaTabbedPaneCopyFromBasicUI$Handler",
	"java.lang.Object",
	"javax.swing.event.ChangeListener,java.awt.event.ContainerListener,java.awt.event.FocusListener,java.awt.event.MouseListener,java.awt.event.MouseMotionListener,java.beans.PropertyChangeListener",
	_AquaTabbedPaneCopyFromBasicUI$Handler_FieldInfo_,
	_AquaTabbedPaneCopyFromBasicUI$Handler_MethodInfo_,
	nullptr,
	nullptr,
	_AquaTabbedPaneCopyFromBasicUI$Handler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaTabbedPaneCopyFromBasicUI"
};

$Object* allocate$AquaTabbedPaneCopyFromBasicUI$Handler($Class* clazz) {
	return $of($alloc(AquaTabbedPaneCopyFromBasicUI$Handler));
}

int32_t AquaTabbedPaneCopyFromBasicUI$Handler::hashCode() {
	 return this->$ChangeListener::hashCode();
}

bool AquaTabbedPaneCopyFromBasicUI$Handler::equals(Object$* arg0) {
	 return this->$ChangeListener::equals(arg0);
}

$Object* AquaTabbedPaneCopyFromBasicUI$Handler::clone() {
	 return this->$ChangeListener::clone();
}

$String* AquaTabbedPaneCopyFromBasicUI$Handler::toString() {
	 return this->$ChangeListener::toString();
}

void AquaTabbedPaneCopyFromBasicUI$Handler::finalize() {
	this->$ChangeListener::finalize();
}

void AquaTabbedPaneCopyFromBasicUI$Handler::init$($AquaTabbedPaneCopyFromBasicUI* this$0) {
	$set(this, this$0, this$0);
}

void AquaTabbedPaneCopyFromBasicUI$Handler::propertyChange($PropertyChangeEvent* e) {
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
		updateHtmlViews($nc(($cast($Integer, $(e->getNewValue()))))->intValue(), false);
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

void AquaTabbedPaneCopyFromBasicUI$Handler::stateChanged($ChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JTabbedPane, tabPane, $cast($JTabbedPane, $nc(e)->getSource()));
	$nc(tabPane)->revalidate();
	tabPane->repaint();
	this->this$0->setFocusIndex(tabPane->getSelectedIndex(), false);
	if (this->this$0->scrollableTabLayoutEnabled()) {
		int32_t index = tabPane->getSelectedIndex();
		if (index < $nc(this->this$0->rects)->length && index != -1) {
			$nc($nc(this->this$0->tabScroller)->tabPanel)->scrollRectToVisible($cast($Rectangle, $($nc($nc(this->this$0->rects)->get(index))->clone())));
		}
	}
}

void AquaTabbedPaneCopyFromBasicUI$Handler::mouseClicked($MouseEvent* e) {
}

void AquaTabbedPaneCopyFromBasicUI$Handler::mouseReleased($MouseEvent* e) {
}

void AquaTabbedPaneCopyFromBasicUI$Handler::mouseEntered($MouseEvent* e) {
	int32_t var$0 = $nc(e)->getX();
	this->this$0->setRolloverTab(var$0, e->getY());
}

void AquaTabbedPaneCopyFromBasicUI$Handler::mouseExited($MouseEvent* e) {
	this->this$0->setRolloverTab(-1);
}

void AquaTabbedPaneCopyFromBasicUI$Handler::mousePressed($MouseEvent* e) {
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

void AquaTabbedPaneCopyFromBasicUI$Handler::mouseDragged($MouseEvent* e) {
}

void AquaTabbedPaneCopyFromBasicUI$Handler::mouseMoved($MouseEvent* e) {
	int32_t var$0 = $nc(e)->getX();
	this->this$0->setRolloverTab(var$0, e->getY());
}

void AquaTabbedPaneCopyFromBasicUI$Handler::focusGained($FocusEvent* e) {
	this->this$0->setFocusIndex($nc(this->this$0->tabPane)->getSelectedIndex(), true);
}

void AquaTabbedPaneCopyFromBasicUI$Handler::focusLost($FocusEvent* e) {
	this->this$0->repaintTab(this->this$0->focusIndex);
}

void AquaTabbedPaneCopyFromBasicUI$Handler::componentAdded($ContainerEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JTabbedPane, tp, $cast($JTabbedPane, $nc(e)->getContainer()));
	$var($Component, child, e->getChild());
	if ($instanceOf($UIResource, child)) {
		return;
	}
	this->this$0->isRunsDirty = true;
	updateHtmlViews($nc(tp)->indexOfComponent(child), true);
}

void AquaTabbedPaneCopyFromBasicUI$Handler::updateHtmlViews(int32_t index, bool inserted) {
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

void AquaTabbedPaneCopyFromBasicUI$Handler::setHtmlView($View* v, bool inserted, int32_t index) {
	if (inserted || index >= $nc(this->this$0->htmlViews)->size()) {
		$nc(this->this$0->htmlViews)->insertElementAt(v, index);
	} else {
		$nc(this->this$0->htmlViews)->setElementAt(v, index);
	}
}

void AquaTabbedPaneCopyFromBasicUI$Handler::componentRemoved($ContainerEvent* e) {
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

AquaTabbedPaneCopyFromBasicUI$Handler::AquaTabbedPaneCopyFromBasicUI$Handler() {
}

$Class* AquaTabbedPaneCopyFromBasicUI$Handler::load$($String* name, bool initialize) {
	$loadClass(AquaTabbedPaneCopyFromBasicUI$Handler, name, initialize, &_AquaTabbedPaneCopyFromBasicUI$Handler_ClassInfo_, allocate$AquaTabbedPaneCopyFromBasicUI$Handler);
	return class$;
}

$Class* AquaTabbedPaneCopyFromBasicUI$Handler::class$ = nullptr;

		} // laf
	} // apple
} // com