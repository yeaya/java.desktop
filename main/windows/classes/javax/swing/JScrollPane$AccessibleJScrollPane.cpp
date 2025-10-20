#include <javax/swing/JScrollPane$AccessibleJScrollPane.h>

#include <java/awt/Component.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleRelation.h>
#include <javax/accessibility/AccessibleRelationSet.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JViewport.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/event/ChangeListener.h>
#include <jcpp.h>

#undef ACCESSIBLE_VISIBLE_DATA_PROPERTY
#undef CONTROLLED_BY
#undef CONTROLLER_FOR
#undef SCROLL_PANE

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleRelation = ::javax::accessibility::AccessibleRelation;
using $AccessibleRelationSet = ::javax::accessibility::AccessibleRelationSet;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JScrollBar = ::javax::swing::JScrollBar;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JViewport = ::javax::swing::JViewport;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;

namespace javax {
	namespace swing {

$FieldInfo _JScrollPane$AccessibleJScrollPane_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JScrollPane;", nullptr, $FINAL | $SYNTHETIC, $field(JScrollPane$AccessibleJScrollPane, this$0)},
	{"viewPort", "Ljavax/swing/JViewport;", nullptr, $PROTECTED, $field(JScrollPane$AccessibleJScrollPane, viewPort)},
	{}
};

$MethodInfo _JScrollPane$AccessibleJScrollPane_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JScrollPane;)V", nullptr, $PUBLIC, $method(static_cast<void(JScrollPane$AccessibleJScrollPane::*)($JScrollPane*)>(&JScrollPane$AccessibleJScrollPane::init$))},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"resetViewPort", "()V", nullptr, $PUBLIC},
	{"setScrollBarRelations", "(Ljavax/swing/JScrollBar;)V", nullptr, 0},
	{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JScrollPane$AccessibleJScrollPane_InnerClassesInfo_[] = {
	{"javax.swing.JScrollPane$AccessibleJScrollPane", "javax.swing.JScrollPane", "AccessibleJScrollPane", $PROTECTED},
	{"javax.swing.JComponent$AccessibleJComponent", "javax.swing.JComponent", "AccessibleJComponent", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _JScrollPane$AccessibleJScrollPane_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JScrollPane$AccessibleJScrollPane",
	"javax.swing.JComponent$AccessibleJComponent",
	"javax.swing.event.ChangeListener,java.beans.PropertyChangeListener",
	_JScrollPane$AccessibleJScrollPane_FieldInfo_,
	_JScrollPane$AccessibleJScrollPane_MethodInfo_,
	nullptr,
	nullptr,
	_JScrollPane$AccessibleJScrollPane_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JScrollPane"
};

$Object* allocate$JScrollPane$AccessibleJScrollPane($Class* clazz) {
	return $of($alloc(JScrollPane$AccessibleJScrollPane));
}

int32_t JScrollPane$AccessibleJScrollPane::hashCode() {
	 return this->$JComponent$AccessibleJComponent::hashCode();
}

bool JScrollPane$AccessibleJScrollPane::equals(Object$* arg0) {
	 return this->$JComponent$AccessibleJComponent::equals(arg0);
}

$Object* JScrollPane$AccessibleJScrollPane::clone() {
	 return this->$JComponent$AccessibleJComponent::clone();
}

$String* JScrollPane$AccessibleJScrollPane::toString() {
	 return this->$JComponent$AccessibleJComponent::toString();
}

void JScrollPane$AccessibleJScrollPane::finalize() {
	this->$JComponent$AccessibleJComponent::finalize();
}

void JScrollPane$AccessibleJScrollPane::resetViewPort() {
	if (this->viewPort != nullptr) {
		$nc(this->viewPort)->removeChangeListener(this);
		$nc(this->viewPort)->removePropertyChangeListener(this);
	}
	$set(this, viewPort, this->this$0->getViewport());
	if (this->viewPort != nullptr) {
		$nc(this->viewPort)->addChangeListener(this);
		$nc(this->viewPort)->addPropertyChangeListener(this);
	}
}

void JScrollPane$AccessibleJScrollPane::init$($JScrollPane* this$0) {
	$set(this, this$0, this$0);
	$JComponent$AccessibleJComponent::init$(this$0);
	$set(this, viewPort, nullptr);
	resetViewPort();
	$var($JScrollBar, scrollBar, this$0->getHorizontalScrollBar());
	if (scrollBar != nullptr) {
		setScrollBarRelations(scrollBar);
	}
	$assign(scrollBar, this$0->getVerticalScrollBar());
	if (scrollBar != nullptr) {
		setScrollBarRelations(scrollBar);
	}
}

$AccessibleRole* JScrollPane$AccessibleJScrollPane::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::SCROLL_PANE;
}

void JScrollPane$AccessibleJScrollPane::stateChanged($ChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	if (e == nullptr) {
		$throwNew($NullPointerException);
	}
	$init($AccessibleContext);
	$var($String, var$0, $AccessibleContext::ACCESSIBLE_VISIBLE_DATA_PROPERTY);
	$var($Object, var$1, $of($Boolean::valueOf(false)));
	firePropertyChange(var$0, var$1, $($Boolean::valueOf(true)));
}

void JScrollPane$AccessibleJScrollPane::propertyChange($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($String, propertyName, $nc(e)->getPropertyName());
	if (propertyName == "horizontalScrollBar"_s || propertyName == "verticalScrollBar"_s) {
		if ($instanceOf($JScrollBar, $(e->getNewValue()))) {
			setScrollBarRelations($cast($JScrollBar, $(e->getNewValue())));
		}
	}
}

void JScrollPane$AccessibleJScrollPane::setScrollBarRelations($JScrollBar* scrollBar) {
	$useLocalCurrentObjectStackCache();
	$init($AccessibleRelation);
	$var($AccessibleRelation, controlledBy, $new($AccessibleRelation, $AccessibleRelation::CONTROLLED_BY, $of(scrollBar)));
	$var($AccessibleRelation, controllerFor, $new($AccessibleRelation, $AccessibleRelation::CONTROLLER_FOR, $of(this->this$0)));
	$var($AccessibleContext, ac, $nc(scrollBar)->getAccessibleContext());
	$nc($($nc(ac)->getAccessibleRelationSet()))->add(controllerFor);
	$nc($(getAccessibleRelationSet()))->add(controlledBy);
}

JScrollPane$AccessibleJScrollPane::JScrollPane$AccessibleJScrollPane() {
}

$Class* JScrollPane$AccessibleJScrollPane::load$($String* name, bool initialize) {
	$loadClass(JScrollPane$AccessibleJScrollPane, name, initialize, &_JScrollPane$AccessibleJScrollPane_ClassInfo_, allocate$JScrollPane$AccessibleJScrollPane);
	return class$;
}

$Class* JScrollPane$AccessibleJScrollPane::class$ = nullptr;

	} // swing
} // javax