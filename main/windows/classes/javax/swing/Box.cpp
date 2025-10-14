#include <javax/swing/Box.h>

#include <java/awt/AWTError.h>
#include <java/awt/Color.h>
#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/Container$AccessibleAWTContainer.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/Short.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/Box$AccessibleBox.h>
#include <javax/swing/Box$Filler.h>
#include <javax/swing/BoxLayout.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef X_AXIS
#undef Y_AXIS

using $AWTError = ::java::awt::AWTError;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $Container = ::java::awt::Container;
using $Container$AccessibleAWTContainer = ::java::awt::Container$AccessibleAWTContainer;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Short = ::java::lang::Short;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $Box$AccessibleBox = ::javax::swing::Box$AccessibleBox;
using $Box$Filler = ::javax::swing::Box$Filler;
using $BoxLayout = ::javax::swing::BoxLayout;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

namespace javax {
	namespace swing {

$NamedAttribute Box_Attribute_var$0[] = {
	{"defaultProperty", 's', "accessibleContext"},
	{}
};
$CompoundAttribute _Box_Annotations_[] = {
	{"Ljava/beans/JavaBean;", Box_Attribute_var$0},
	{}
};

$NamedAttribute Box_Attribute_var$1[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _Box_MethodAnnotations_getAccessibleContext9[] = {
	{"Ljava/beans/BeanProperty;", Box_Attribute_var$1},
	{}
};


$MethodInfo _Box_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(Box::*)(int32_t)>(&Box::init$))},
	{"createGlue", "()Ljava/awt/Component;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Component*(*)()>(&Box::createGlue))},
	{"createHorizontalBox", "()Ljavax/swing/Box;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Box*(*)()>(&Box::createHorizontalBox))},
	{"createHorizontalGlue", "()Ljava/awt/Component;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Component*(*)()>(&Box::createHorizontalGlue))},
	{"createHorizontalStrut", "(I)Ljava/awt/Component;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Component*(*)(int32_t)>(&Box::createHorizontalStrut))},
	{"createRigidArea", "(Ljava/awt/Dimension;)Ljava/awt/Component;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Component*(*)($Dimension*)>(&Box::createRigidArea))},
	{"createVerticalBox", "()Ljavax/swing/Box;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Box*(*)()>(&Box::createVerticalBox))},
	{"createVerticalGlue", "()Ljava/awt/Component;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Component*(*)()>(&Box::createVerticalGlue))},
	{"createVerticalStrut", "(I)Ljava/awt/Component;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Component*(*)(int32_t)>(&Box::createVerticalStrut))},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _Box_MethodAnnotations_getAccessibleContext9},
	{"paintComponent", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"setLayout", "(Ljava/awt/LayoutManager;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Box_InnerClassesInfo_[] = {
	{"javax.swing.Box$AccessibleBox", "javax.swing.Box", "AccessibleBox", $PROTECTED},
	{"javax.swing.Box$Filler", "javax.swing.Box", "Filler", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Box_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.Box",
	"javax.swing.JComponent",
	"javax.accessibility.Accessible",
	nullptr,
	_Box_MethodInfo_,
	nullptr,
	nullptr,
	_Box_InnerClassesInfo_,
	_Box_Annotations_,
	nullptr,
	"javax.swing.Box$AccessibleBox,javax.swing.Box$Filler,javax.swing.Box$Filler$AccessibleBoxFiller"
};

$Object* allocate$Box($Class* clazz) {
	return $of($alloc(Box));
}

$String* Box::toString() {
	 return this->$JComponent::toString();
}

int32_t Box::hashCode() {
	 return this->$JComponent::hashCode();
}

bool Box::equals(Object$* arg0) {
	 return this->$JComponent::equals(arg0);
}

$Object* Box::clone() {
	 return this->$JComponent::clone();
}

void Box::finalize() {
	this->$JComponent::finalize();
}

void Box::init$(int32_t axis) {
	$JComponent::init$();
	$JComponent::setLayout($$new($BoxLayout, this, axis));
}

Box* Box::createHorizontalBox() {
	$init(Box);
	return $new(Box, $BoxLayout::X_AXIS);
}

Box* Box::createVerticalBox() {
	$init(Box);
	return $new(Box, $BoxLayout::Y_AXIS);
}

$Component* Box::createRigidArea($Dimension* d) {
	$init(Box);
	return $new($Box$Filler, d, d, d);
}

$Component* Box::createHorizontalStrut(int32_t width) {
	$init(Box);
	$var($Dimension, var$0, $new($Dimension, width, 0));
	$var($Dimension, var$1, $new($Dimension, width, 0));
	return $new($Box$Filler, var$0, var$1, $$new($Dimension, width, $Short::MAX_VALUE));
}

$Component* Box::createVerticalStrut(int32_t height) {
	$init(Box);
	$var($Dimension, var$0, $new($Dimension, 0, height));
	$var($Dimension, var$1, $new($Dimension, 0, height));
	return $new($Box$Filler, var$0, var$1, $$new($Dimension, $Short::MAX_VALUE, height));
}

$Component* Box::createGlue() {
	$init(Box);
	$var($Dimension, var$0, $new($Dimension, 0, 0));
	$var($Dimension, var$1, $new($Dimension, 0, 0));
	return $new($Box$Filler, var$0, var$1, $$new($Dimension, $Short::MAX_VALUE, $Short::MAX_VALUE));
}

$Component* Box::createHorizontalGlue() {
	$init(Box);
	$var($Dimension, var$0, $new($Dimension, 0, 0));
	$var($Dimension, var$1, $new($Dimension, 0, 0));
	return $new($Box$Filler, var$0, var$1, $$new($Dimension, $Short::MAX_VALUE, 0));
}

$Component* Box::createVerticalGlue() {
	$init(Box);
	$var($Dimension, var$0, $new($Dimension, 0, 0));
	$var($Dimension, var$1, $new($Dimension, 0, 0));
	return $new($Box$Filler, var$0, var$1, $$new($Dimension, 0, $Short::MAX_VALUE));
}

void Box::setLayout($LayoutManager* l) {
	$throwNew($AWTError, "Illegal request"_s);
}

void Box::paintComponent($Graphics* g) {
	if (this->ui != nullptr) {
		$JComponent::paintComponent(g);
	} else if (isOpaque()) {
		$nc(g)->setColor($(getBackground()));
		int32_t var$0 = getWidth();
		g->fillRect(0, 0, var$0, getHeight());
	}
}

$AccessibleContext* Box::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($Box$AccessibleBox, this));
	}
	return this->accessibleContext;
}

Box::Box() {
}

$Class* Box::load$($String* name, bool initialize) {
	$loadClass(Box, name, initialize, &_Box_ClassInfo_, allocate$Box);
	return class$;
}

$Class* Box::class$ = nullptr;

	} // swing
} // javax