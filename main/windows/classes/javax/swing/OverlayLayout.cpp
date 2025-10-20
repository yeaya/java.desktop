#include <javax/swing/OverlayLayout.h>

#include <java/awt/AWTError.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager2.h>
#include <java/lang/Array.h>
#include <java/lang/Attribute.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/SizeRequirements.h>
#include <jcpp.h>

using $SizeRequirementsArray = $Array<::javax::swing::SizeRequirements>;
using $AWTError = ::java::awt::AWTError;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Insets = ::java::awt::Insets;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Serializable = ::java::io::Serializable;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $SizeRequirements = ::javax::swing::SizeRequirements;

namespace javax {
	namespace swing {

$Attribute OverlayLayout_Attribute_var$1[] = {
	{'s', "target"},
	{'-'}
};

$NamedAttribute OverlayLayout_Attribute_var$0[] = {
	{"value", '[', OverlayLayout_Attribute_var$1},
	{}
};

$CompoundAttribute _OverlayLayout_MethodAnnotations_init$0[] = {
	{"Ljava/beans/ConstructorProperties;", OverlayLayout_Attribute_var$0},
	{}
};

$FieldInfo _OverlayLayout_FieldInfo_[] = {
	{"target", "Ljava/awt/Container;", nullptr, $PRIVATE, $field(OverlayLayout, target)},
	{"xChildren", "[Ljavax/swing/SizeRequirements;", nullptr, $PRIVATE, $field(OverlayLayout, xChildren)},
	{"yChildren", "[Ljavax/swing/SizeRequirements;", nullptr, $PRIVATE, $field(OverlayLayout, yChildren)},
	{"xTotal", "Ljavax/swing/SizeRequirements;", nullptr, $PRIVATE, $field(OverlayLayout, xTotal)},
	{"yTotal", "Ljavax/swing/SizeRequirements;", nullptr, $PRIVATE, $field(OverlayLayout, yTotal)},
	{}
};

$MethodInfo _OverlayLayout_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/Container;)V", nullptr, $PUBLIC, $method(static_cast<void(OverlayLayout::*)($Container*)>(&OverlayLayout::init$)), nullptr, nullptr, _OverlayLayout_MethodAnnotations_init$0},
	{"addLayoutComponent", "(Ljava/lang/String;Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"addLayoutComponent", "(Ljava/awt/Component;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"checkContainer", "(Ljava/awt/Container;)V", nullptr, 0},
	{"checkRequests", "()V", nullptr, 0},
	{"getLayoutAlignmentX", "(Ljava/awt/Container;)F", nullptr, $PUBLIC},
	{"getLayoutAlignmentY", "(Ljava/awt/Container;)F", nullptr, $PUBLIC},
	{"getTarget", "()Ljava/awt/Container;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$Container*(OverlayLayout::*)()>(&OverlayLayout::getTarget))},
	{"invalidateLayout", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"maximumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"minimumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"preferredLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"removeLayoutComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _OverlayLayout_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.OverlayLayout",
	"java.lang.Object",
	"java.awt.LayoutManager2,java.io.Serializable",
	_OverlayLayout_FieldInfo_,
	_OverlayLayout_MethodInfo_
};

$Object* allocate$OverlayLayout($Class* clazz) {
	return $of($alloc(OverlayLayout));
}

int32_t OverlayLayout::hashCode() {
	 return this->$LayoutManager2::hashCode();
}

bool OverlayLayout::equals(Object$* arg0) {
	 return this->$LayoutManager2::equals(arg0);
}

$Object* OverlayLayout::clone() {
	 return this->$LayoutManager2::clone();
}

$String* OverlayLayout::toString() {
	 return this->$LayoutManager2::toString();
}

void OverlayLayout::finalize() {
	this->$LayoutManager2::finalize();
}

void OverlayLayout::init$($Container* target) {
	$set(this, target, target);
}

$Container* OverlayLayout::getTarget() {
	return this->target;
}

void OverlayLayout::invalidateLayout($Container* target) {
	checkContainer(target);
	$set(this, xChildren, nullptr);
	$set(this, yChildren, nullptr);
	$set(this, xTotal, nullptr);
	$set(this, yTotal, nullptr);
}

void OverlayLayout::addLayoutComponent($String* name, $Component* comp) {
	invalidateLayout($($nc(comp)->getParent()));
}

void OverlayLayout::removeLayoutComponent($Component* comp) {
	invalidateLayout($($nc(comp)->getParent()));
}

void OverlayLayout::addLayoutComponent($Component* comp, Object$* constraints) {
	invalidateLayout($($nc(comp)->getParent()));
}

$Dimension* OverlayLayout::preferredLayoutSize($Container* target) {
	$useLocalCurrentObjectStackCache();
	checkContainer(target);
	checkRequests();
	$var($Dimension, size, $new($Dimension, $nc(this->xTotal)->preferred, $nc(this->yTotal)->preferred));
	$var($Insets, insets, $nc(target)->getInsets());
	size->width += $nc(insets)->left + insets->right;
	size->height += insets->top + insets->bottom;
	return size;
}

$Dimension* OverlayLayout::minimumLayoutSize($Container* target) {
	$useLocalCurrentObjectStackCache();
	checkContainer(target);
	checkRequests();
	$var($Dimension, size, $new($Dimension, $nc(this->xTotal)->minimum, $nc(this->yTotal)->minimum));
	$var($Insets, insets, $nc(target)->getInsets());
	size->width += $nc(insets)->left + insets->right;
	size->height += insets->top + insets->bottom;
	return size;
}

$Dimension* OverlayLayout::maximumLayoutSize($Container* target) {
	$useLocalCurrentObjectStackCache();
	checkContainer(target);
	checkRequests();
	$var($Dimension, size, $new($Dimension, $nc(this->xTotal)->maximum, $nc(this->yTotal)->maximum));
	$var($Insets, insets, $nc(target)->getInsets());
	size->width += $nc(insets)->left + insets->right;
	size->height += insets->top + insets->bottom;
	return size;
}

float OverlayLayout::getLayoutAlignmentX($Container* target) {
	checkContainer(target);
	checkRequests();
	return $nc(this->xTotal)->alignment;
}

float OverlayLayout::getLayoutAlignmentY($Container* target) {
	checkContainer(target);
	checkRequests();
	return $nc(this->yTotal)->alignment;
}

void OverlayLayout::layoutContainer($Container* target) {
	$useLocalCurrentObjectStackCache();
	checkContainer(target);
	checkRequests();
	int32_t nChildren = $nc(target)->getComponentCount();
	$var($ints, xOffsets, $new($ints, nChildren));
	$var($ints, xSpans, $new($ints, nChildren));
	$var($ints, yOffsets, $new($ints, nChildren));
	$var($ints, ySpans, $new($ints, nChildren));
	$var($Dimension, alloc, target->getSize());
	$var($Insets, in, target->getInsets());
	$nc(alloc)->width -= $nc(in)->left + in->right;
	alloc->height -= in->top + in->bottom;
	$SizeRequirements::calculateAlignedPositions(alloc->width, this->xTotal, this->xChildren, xOffsets, xSpans);
	$SizeRequirements::calculateAlignedPositions(alloc->height, this->yTotal, this->yChildren, yOffsets, ySpans);
	for (int32_t i = 0; i < nChildren; ++i) {
		$var($Component, c, target->getComponent(i));
		$nc(c)->setBounds(in->left + xOffsets->get(i), in->top + yOffsets->get(i), xSpans->get(i), ySpans->get(i));
	}
}

void OverlayLayout::checkContainer($Container* target) {
	if (this->target != target) {
		$throwNew($AWTError, "OverlayLayout can\'t be shared"_s);
	}
}

void OverlayLayout::checkRequests() {
	$useLocalCurrentObjectStackCache();
	if (this->xChildren == nullptr || this->yChildren == nullptr) {
		int32_t n = $nc(this->target)->getComponentCount();
		$set(this, xChildren, $new($SizeRequirementsArray, n));
		$set(this, yChildren, $new($SizeRequirementsArray, n));
		for (int32_t i = 0; i < n; ++i) {
			$var($Component, c, $nc(this->target)->getComponent(i));
			$var($Dimension, min, $nc(c)->getMinimumSize());
			$var($Dimension, typ, c->getPreferredSize());
			$var($Dimension, max, c->getMaximumSize());
			$nc(this->xChildren)->set(i, $$new($SizeRequirements, $nc(min)->width, $nc(typ)->width, $nc(max)->width, c->getAlignmentX()));
			$nc(this->yChildren)->set(i, $$new($SizeRequirements, $nc(min)->height, $nc(typ)->height, $nc(max)->height, c->getAlignmentY()));
		}
		$set(this, xTotal, $SizeRequirements::getAlignedSizeRequirements(this->xChildren));
		$set(this, yTotal, $SizeRequirements::getAlignedSizeRequirements(this->yChildren));
	}
}

OverlayLayout::OverlayLayout() {
}

$Class* OverlayLayout::load$($String* name, bool initialize) {
	$loadClass(OverlayLayout, name, initialize, &_OverlayLayout_ClassInfo_, allocate$OverlayLayout);
	return class$;
}

$Class* OverlayLayout::class$ = nullptr;

	} // swing
} // javax