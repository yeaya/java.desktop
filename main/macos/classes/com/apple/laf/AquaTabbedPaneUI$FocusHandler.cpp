#include <com/apple/laf/AquaTabbedPaneUI$FocusHandler.h>

#include <com/apple/laf/AquaTabbedPaneUI.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/FocusTraversalPolicy.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/FocusAdapter.h>
#include <java/awt/event/FocusEvent.h>
#include <java/util/EventObject.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTabbedPane.h>
#include <jcpp.h>

using $AquaTabbedPaneUI = ::com::apple::laf::AquaTabbedPaneUI;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $FocusTraversalPolicy = ::java::awt::FocusTraversalPolicy;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $Rectangle = ::java::awt::Rectangle;
using $FocusAdapter = ::java::awt::event::FocusAdapter;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JTabbedPane = ::javax::swing::JTabbedPane;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaTabbedPaneUI$FocusHandler_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaTabbedPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTabbedPaneUI$FocusHandler, this$0)},
	{"sWorkingRect", "Ljava/awt/Rectangle;", nullptr, 0, $field(AquaTabbedPaneUI$FocusHandler, sWorkingRect)},
	{}
};

$MethodInfo _AquaTabbedPaneUI$FocusHandler_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaTabbedPaneUI;)V", nullptr, $PROTECTED, $method(static_cast<void(AquaTabbedPaneUI$FocusHandler::*)($AquaTabbedPaneUI*)>(&AquaTabbedPaneUI$FocusHandler::init$))},
	{"adjustPaintingRectForFocusRing", "(Ljava/awt/event/FocusEvent;)V", nullptr, 0},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"getTopLevelFocusCycleRootAncestor", "(Ljava/awt/Container;)Ljava/awt/Container;", nullptr, 0},
	{"isDefaultFocusReceiver", "(Ljavax/swing/JComponent;)Z", nullptr, 0},
	{}
};

$InnerClassInfo _AquaTabbedPaneUI$FocusHandler_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaTabbedPaneUI$FocusHandler", "com.apple.laf.AquaTabbedPaneUI", "FocusHandler", $PROTECTED},
	{}
};

$ClassInfo _AquaTabbedPaneUI$FocusHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaTabbedPaneUI$FocusHandler",
	"java.awt.event.FocusAdapter",
	nullptr,
	_AquaTabbedPaneUI$FocusHandler_FieldInfo_,
	_AquaTabbedPaneUI$FocusHandler_MethodInfo_,
	nullptr,
	nullptr,
	_AquaTabbedPaneUI$FocusHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaTabbedPaneUI"
};

$Object* allocate$AquaTabbedPaneUI$FocusHandler($Class* clazz) {
	return $of($alloc(AquaTabbedPaneUI$FocusHandler));
}

void AquaTabbedPaneUI$FocusHandler::init$($AquaTabbedPaneUI* this$0) {
	$set(this, this$0, this$0);
	$FocusAdapter::init$();
	$set(this, sWorkingRect, $new($Rectangle));
}

void AquaTabbedPaneUI$FocusHandler::focusGained($FocusEvent* e) {
	if (isDefaultFocusReceiver(this->this$0->tabPane) && !this->this$0->hasAvoidedFirstFocus) {
		$nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->focusNextComponent();
		this->this$0->hasAvoidedFirstFocus = true;
	}
	adjustPaintingRectForFocusRing(e);
}

void AquaTabbedPaneUI$FocusHandler::focusLost($FocusEvent* e) {
	adjustPaintingRectForFocusRing(e);
}

void AquaTabbedPaneUI$FocusHandler::adjustPaintingRectForFocusRing($FocusEvent* e) {
	$var($JTabbedPane, pane, $cast($JTabbedPane, $nc(e)->getSource()));
	int32_t tabCount = $nc(pane)->getTabCount();
	int32_t selectedIndex = pane->getSelectedIndex();
	if (selectedIndex != -1 && tabCount > 0 && tabCount == $nc(this->this$0->rects)->length) {
		$nc(this->sWorkingRect)->setBounds($nc(this->this$0->rects)->get(selectedIndex));
		$nc(this->sWorkingRect)->grow(4, 4);
		pane->repaint(this->sWorkingRect);
	}
}

bool AquaTabbedPaneUI$FocusHandler::isDefaultFocusReceiver($JComponent* component) {
	$useLocalCurrentObjectStackCache();
	if (this->this$0->isDefaultFocusReceiver == nullptr) {
		$var($Component, defaultFocusReceiver, $nc($($nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->getDefaultFocusTraversalPolicy()))->getDefaultComponent($(getTopLevelFocusCycleRootAncestor(component))));
		$set(this->this$0, isDefaultFocusReceiver, $Boolean::valueOf(defaultFocusReceiver != nullptr && $of(defaultFocusReceiver)->equals(component)));
	}
	return $nc(this->this$0->isDefaultFocusReceiver)->booleanValue();
}

$Container* AquaTabbedPaneUI$FocusHandler::getTopLevelFocusCycleRootAncestor($Container* container$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Container, container, container$renamed);
	$var($Container, ancestor, nullptr);
	while (($assign(ancestor, $nc(container)->getFocusCycleRootAncestor())) != nullptr) {
		$assign(container, ancestor);
	}
	return container;
}

AquaTabbedPaneUI$FocusHandler::AquaTabbedPaneUI$FocusHandler() {
}

$Class* AquaTabbedPaneUI$FocusHandler::load$($String* name, bool initialize) {
	$loadClass(AquaTabbedPaneUI$FocusHandler, name, initialize, &_AquaTabbedPaneUI$FocusHandler_ClassInfo_, allocate$AquaTabbedPaneUI$FocusHandler);
	return class$;
}

$Class* AquaTabbedPaneUI$FocusHandler::class$ = nullptr;

		} // laf
	} // apple
} // com