#include <javax/swing/Box$Filler.h>

#include <java/awt/Color.h>
#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/lang/Attribute.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/Box$Filler$AccessibleBoxFiller.h>
#include <javax/swing/Box.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $Box = ::javax::swing::Box;
using $Box$Filler$AccessibleBoxFiller = ::javax::swing::Box$Filler$AccessibleBoxFiller;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

namespace javax {
	namespace swing {

$Attribute Box$Filler_Attribute_var$1[] = {
	{'s', "minimumSize"},
	{'s', "preferredSize"},
	{'s', "maximumSize"},
	{'-'}
};

$NamedAttribute Box$Filler_Attribute_var$0[] = {
	{"value", '[', Box$Filler_Attribute_var$1},
	{}
};

$CompoundAttribute _Box$Filler_MethodAnnotations_init$0[] = {
	{"Ljava/beans/ConstructorProperties;", Box$Filler_Attribute_var$0},
	{}
};

$MethodInfo _Box$Filler_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/Dimension;Ljava/awt/Dimension;Ljava/awt/Dimension;)V", nullptr, $PUBLIC, $method(static_cast<void(Box$Filler::*)($Dimension*,$Dimension*,$Dimension*)>(&Box$Filler::init$)), nullptr, nullptr, _Box$Filler_MethodAnnotations_init$0},
	{"changeShape", "(Ljava/awt/Dimension;Ljava/awt/Dimension;Ljava/awt/Dimension;)V", nullptr, $PUBLIC},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC},
	{"paintComponent", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Box$Filler_InnerClassesInfo_[] = {
	{"javax.swing.Box$Filler", "javax.swing.Box", "Filler", $PUBLIC | $STATIC},
	{"javax.swing.Box$Filler$AccessibleBoxFiller", "javax.swing.Box$Filler", "AccessibleBoxFiller", $PROTECTED},
	{}
};

$ClassInfo _Box$Filler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.Box$Filler",
	"javax.swing.JComponent",
	"javax.accessibility.Accessible",
	nullptr,
	_Box$Filler_MethodInfo_,
	nullptr,
	nullptr,
	_Box$Filler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.Box"
};

$Object* allocate$Box$Filler($Class* clazz) {
	return $of($alloc(Box$Filler));
}

$String* Box$Filler::toString() {
	 return this->$JComponent::toString();
}

int32_t Box$Filler::hashCode() {
	 return this->$JComponent::hashCode();
}

bool Box$Filler::equals(Object$* arg0) {
	 return this->$JComponent::equals(arg0);
}

$Object* Box$Filler::clone() {
	 return this->$JComponent::clone();
}

void Box$Filler::finalize() {
	this->$JComponent::finalize();
}

void Box$Filler::init$($Dimension* min, $Dimension* pref, $Dimension* max) {
	$JComponent::init$();
	setMinimumSize(min);
	setPreferredSize(pref);
	setMaximumSize(max);
	setFocusable(false);
}

void Box$Filler::changeShape($Dimension* min, $Dimension* pref, $Dimension* max) {
	setMinimumSize(min);
	setPreferredSize(pref);
	setMaximumSize(max);
	revalidate();
}

void Box$Filler::paintComponent($Graphics* g) {
	if (this->ui != nullptr) {
		$JComponent::paintComponent(g);
	} else if (isOpaque()) {
		$nc(g)->setColor($(getBackground()));
		int32_t var$0 = getWidth();
		g->fillRect(0, 0, var$0, getHeight());
	}
}

$AccessibleContext* Box$Filler::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($Box$Filler$AccessibleBoxFiller, this));
	}
	return this->accessibleContext;
}

Box$Filler::Box$Filler() {
}

$Class* Box$Filler::load$($String* name, bool initialize) {
	$loadClass(Box$Filler, name, initialize, &_Box$Filler_ClassInfo_, allocate$Box$Filler);
	return class$;
}

$Class* Box$Filler::class$ = nullptr;

	} // swing
} // javax