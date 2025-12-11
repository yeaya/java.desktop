#include <javax/swing/JToolBar$DefaultToolBarLayout.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/LayoutManager2.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/BoxLayout.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JToolBar.h>
#include <jcpp.h>

#undef LINE_AXIS
#undef PAGE_AXIS
#undef VERTICAL

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $BoxLayout = ::javax::swing::BoxLayout;
using $JComponent = ::javax::swing::JComponent;
using $JToolBar = ::javax::swing::JToolBar;

namespace javax {
	namespace swing {

$FieldInfo _JToolBar$DefaultToolBarLayout_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JToolBar;", nullptr, $FINAL | $SYNTHETIC, $field(JToolBar$DefaultToolBarLayout, this$0)},
	{"lm", "Ljavax/swing/BoxLayout;", nullptr, 0, $field(JToolBar$DefaultToolBarLayout, lm)},
	{}
};

$MethodInfo _JToolBar$DefaultToolBarLayout_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JToolBar;I)V", nullptr, 0, $method(static_cast<void(JToolBar$DefaultToolBarLayout::*)($JToolBar*,int32_t)>(&JToolBar$DefaultToolBarLayout::init$))},
	{"addLayoutComponent", "(Ljava/lang/String;Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"addLayoutComponent", "(Ljava/awt/Component;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"getLayoutAlignmentX", "(Ljava/awt/Container;)F", nullptr, $PUBLIC},
	{"getLayoutAlignmentY", "(Ljava/awt/Container;)F", nullptr, $PUBLIC},
	{"invalidateLayout", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"maximumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"minimumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"preferredLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"removeLayoutComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JToolBar$DefaultToolBarLayout_InnerClassesInfo_[] = {
	{"javax.swing.JToolBar$DefaultToolBarLayout", "javax.swing.JToolBar", "DefaultToolBarLayout", $PRIVATE},
	{}
};

$ClassInfo _JToolBar$DefaultToolBarLayout_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JToolBar$DefaultToolBarLayout",
	"java.lang.Object",
	"java.awt.LayoutManager2,java.io.Serializable,java.beans.PropertyChangeListener,javax.swing.plaf.UIResource",
	_JToolBar$DefaultToolBarLayout_FieldInfo_,
	_JToolBar$DefaultToolBarLayout_MethodInfo_,
	nullptr,
	nullptr,
	_JToolBar$DefaultToolBarLayout_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JToolBar"
};

$Object* allocate$JToolBar$DefaultToolBarLayout($Class* clazz) {
	return $of($alloc(JToolBar$DefaultToolBarLayout));
}

int32_t JToolBar$DefaultToolBarLayout::hashCode() {
	 return this->$LayoutManager2::hashCode();
}

bool JToolBar$DefaultToolBarLayout::equals(Object$* arg0) {
	 return this->$LayoutManager2::equals(arg0);
}

$Object* JToolBar$DefaultToolBarLayout::clone() {
	 return this->$LayoutManager2::clone();
}

$String* JToolBar$DefaultToolBarLayout::toString() {
	 return this->$LayoutManager2::toString();
}

void JToolBar$DefaultToolBarLayout::finalize() {
	this->$LayoutManager2::finalize();
}

void JToolBar$DefaultToolBarLayout::init$($JToolBar* this$0, int32_t orientation) {
	$set(this, this$0, this$0);
	if (orientation == $JToolBar::VERTICAL) {
		$set(this, lm, $new($BoxLayout, this$0, $BoxLayout::PAGE_AXIS));
	} else {
		$set(this, lm, $new($BoxLayout, this$0, $BoxLayout::LINE_AXIS));
	}
}

void JToolBar$DefaultToolBarLayout::addLayoutComponent($String* name, $Component* comp) {
	$nc(this->lm)->addLayoutComponent(name, comp);
}

void JToolBar$DefaultToolBarLayout::addLayoutComponent($Component* comp, Object$* constraints) {
	$nc(this->lm)->addLayoutComponent(comp, constraints);
}

void JToolBar$DefaultToolBarLayout::removeLayoutComponent($Component* comp) {
	$nc(this->lm)->removeLayoutComponent(comp);
}

$Dimension* JToolBar$DefaultToolBarLayout::preferredLayoutSize($Container* target) {
	return $nc(this->lm)->preferredLayoutSize(target);
}

$Dimension* JToolBar$DefaultToolBarLayout::minimumLayoutSize($Container* target) {
	return $nc(this->lm)->minimumLayoutSize(target);
}

$Dimension* JToolBar$DefaultToolBarLayout::maximumLayoutSize($Container* target) {
	return $nc(this->lm)->maximumLayoutSize(target);
}

void JToolBar$DefaultToolBarLayout::layoutContainer($Container* target) {
	$nc(this->lm)->layoutContainer(target);
}

float JToolBar$DefaultToolBarLayout::getLayoutAlignmentX($Container* target) {
	return $nc(this->lm)->getLayoutAlignmentX(target);
}

float JToolBar$DefaultToolBarLayout::getLayoutAlignmentY($Container* target) {
	return $nc(this->lm)->getLayoutAlignmentY(target);
}

void JToolBar$DefaultToolBarLayout::invalidateLayout($Container* target) {
	$nc(this->lm)->invalidateLayout(target);
}

void JToolBar$DefaultToolBarLayout::propertyChange($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($String, name, $nc(e)->getPropertyName());
	if ($nc(name)->equals("orientation"_s)) {
		int32_t o = $nc(($cast($Integer, $(e->getNewValue()))))->intValue();
		if (o == $JToolBar::VERTICAL) {
			$set(this, lm, $new($BoxLayout, this->this$0, $BoxLayout::PAGE_AXIS));
		} else {
			$set(this, lm, $new($BoxLayout, this->this$0, $BoxLayout::LINE_AXIS));
		}
	}
}

JToolBar$DefaultToolBarLayout::JToolBar$DefaultToolBarLayout() {
}

$Class* JToolBar$DefaultToolBarLayout::load$($String* name, bool initialize) {
	$loadClass(JToolBar$DefaultToolBarLayout, name, initialize, &_JToolBar$DefaultToolBarLayout_ClassInfo_, allocate$JToolBar$DefaultToolBarLayout);
	return class$;
}

$Class* JToolBar$DefaultToolBarLayout::class$ = nullptr;

	} // swing
} // javax