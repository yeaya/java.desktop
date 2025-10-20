#include <javax/swing/text/ComponentView$Invalidator.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/LayoutManager.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Set.h>
#include <javax/swing/text/ComponentView.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $LayoutManager = ::java::awt::LayoutManager;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Set = ::java::util::Set;
using $ComponentView = ::javax::swing::text::ComponentView;
using $View = ::javax::swing::text::View;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _ComponentView$Invalidator_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/ComponentView;", nullptr, $FINAL | $SYNTHETIC, $field(ComponentView$Invalidator, this$0)},
	{"min", "Ljava/awt/Dimension;", nullptr, 0, $field(ComponentView$Invalidator, min)},
	{"pref", "Ljava/awt/Dimension;", nullptr, 0, $field(ComponentView$Invalidator, pref)},
	{"max", "Ljava/awt/Dimension;", nullptr, 0, $field(ComponentView$Invalidator, max)},
	{"yalign", "F", nullptr, 0, $field(ComponentView$Invalidator, yalign)},
	{"xalign", "F", nullptr, 0, $field(ComponentView$Invalidator, xalign)},
	{}
};

$MethodInfo _ComponentView$Invalidator_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/text/ComponentView;Ljava/awt/Component;)V", nullptr, 0, $method(static_cast<void(ComponentView$Invalidator::*)($ComponentView*,$Component*)>(&ComponentView$Invalidator::init$))},
	{"cacheChildSizes", "()V", nullptr, $PRIVATE, $method(static_cast<void(ComponentView$Invalidator::*)()>(&ComponentView$Invalidator::cacheChildSizes))},
	{"doLayout", "()V", nullptr, $PUBLIC},
	{"getAlignmentX", "()F", nullptr, $PUBLIC},
	{"getAlignmentY", "()F", nullptr, $PUBLIC},
	{"getFocusTraversalKeys", "(I)Ljava/util/Set;", "(I)Ljava/util/Set<Ljava/awt/AWTKeyStroke;>;", $PUBLIC},
	{"getMaximumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"invalidate", "()V", nullptr, $PUBLIC},
	{"isShowing", "()Z", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"setBounds", "(IIII)V", nullptr, $PUBLIC},
	{"setVisible", "(Z)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"validateIfNecessary", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ComponentView$Invalidator_InnerClassesInfo_[] = {
	{"javax.swing.text.ComponentView$Invalidator", "javax.swing.text.ComponentView", "Invalidator", 0},
	{}
};

$ClassInfo _ComponentView$Invalidator_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.ComponentView$Invalidator",
	"java.awt.Container",
	"java.beans.PropertyChangeListener",
	_ComponentView$Invalidator_FieldInfo_,
	_ComponentView$Invalidator_MethodInfo_,
	nullptr,
	nullptr,
	_ComponentView$Invalidator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.ComponentView"
};

$Object* allocate$ComponentView$Invalidator($Class* clazz) {
	return $of($alloc(ComponentView$Invalidator));
}

$String* ComponentView$Invalidator::toString() {
	 return this->$Container::toString();
}

int32_t ComponentView$Invalidator::hashCode() {
	 return this->$Container::hashCode();
}

bool ComponentView$Invalidator::equals(Object$* arg0) {
	 return this->$Container::equals(arg0);
}

$Object* ComponentView$Invalidator::clone() {
	 return this->$Container::clone();
}

void ComponentView$Invalidator::finalize() {
	this->$Container::finalize();
}

void ComponentView$Invalidator::init$($ComponentView* this$0, $Component* child) {
	$set(this, this$0, this$0);
	$Container::init$();
	setLayout(nullptr);
	add(child);
	cacheChildSizes();
}

void ComponentView$Invalidator::invalidate() {
	$Container::invalidate();
	if (getParent() != nullptr) {
		this->this$0->preferenceChanged(nullptr, true, true);
	}
}

void ComponentView$Invalidator::doLayout() {
	cacheChildSizes();
}

void ComponentView$Invalidator::setBounds(int32_t x, int32_t y, int32_t w, int32_t h) {
	$Container::setBounds(x, y, w, h);
	if (getComponentCount() > 0) {
		$nc($(getComponent(0)))->setSize(w, h);
	}
	cacheChildSizes();
}

void ComponentView$Invalidator::validateIfNecessary() {
	if (!isValid()) {
		validate();
	}
}

void ComponentView$Invalidator::cacheChildSizes() {
	if (getComponentCount() > 0) {
		$var($Component, child, getComponent(0));
		$set(this, min, $nc(child)->getMinimumSize());
		$set(this, pref, child->getPreferredSize());
		$set(this, max, child->getMaximumSize());
		this->yalign = child->getAlignmentY();
		this->xalign = child->getAlignmentX();
	} else {
		$set(this, min, ($assignField(this, pref, ($assignField(this, max, $new($Dimension, 0, 0))))));
	}
}

void ComponentView$Invalidator::setVisible(bool b) {
	$Container::setVisible(b);
	if (getComponentCount() > 0) {
		$nc($(getComponent(0)))->setVisible(b);
	}
}

bool ComponentView$Invalidator::isShowing() {
	return true;
}

$Dimension* ComponentView$Invalidator::getMinimumSize() {
	validateIfNecessary();
	return this->min;
}

$Dimension* ComponentView$Invalidator::getPreferredSize() {
	validateIfNecessary();
	return this->pref;
}

$Dimension* ComponentView$Invalidator::getMaximumSize() {
	validateIfNecessary();
	return this->max;
}

float ComponentView$Invalidator::getAlignmentX() {
	validateIfNecessary();
	return this->xalign;
}

float ComponentView$Invalidator::getAlignmentY() {
	validateIfNecessary();
	return this->yalign;
}

$Set* ComponentView$Invalidator::getFocusTraversalKeys(int32_t id) {
	return $nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->getDefaultFocusTraversalKeys(id);
}

void ComponentView$Invalidator::propertyChange($PropertyChangeEvent* ev) {
	$useLocalCurrentObjectStackCache();
	$var($Boolean, enable, $cast($Boolean, $nc(ev)->getNewValue()));
	if (getComponentCount() > 0) {
		$nc($(getComponent(0)))->setEnabled($nc(enable)->booleanValue());
	}
}

ComponentView$Invalidator::ComponentView$Invalidator() {
}

$Class* ComponentView$Invalidator::load$($String* name, bool initialize) {
	$loadClass(ComponentView$Invalidator, name, initialize, &_ComponentView$Invalidator_ClassInfo_, allocate$ComponentView$Invalidator);
	return class$;
}

$Class* ComponentView$Invalidator::class$ = nullptr;

		} // text
	} // swing
} // javax