#include <javax/swing/BoxLayout.h>

#include <java/awt/AWTError.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager2.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Attribute.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/SizeRequirements.h>
#include <jcpp.h>

#undef LINE_AXIS
#undef MAX_VALUE
#undef PAGE_AXIS
#undef X_AXIS
#undef Y_AXIS

using $SizeRequirementsArray = $Array<::javax::swing::SizeRequirements>;
using $AWTError = ::java::awt::AWTError;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Insets = ::java::awt::Insets;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $SizeRequirements = ::javax::swing::SizeRequirements;

namespace javax {
	namespace swing {

$Attribute BoxLayout_Attribute_var$1[] = {
	{'s', "target"},
	{'s', "axis"},
	{'-'}
};

$NamedAttribute BoxLayout_Attribute_var$0[] = {
	{"value", '[', BoxLayout_Attribute_var$1},
	{}
};

$CompoundAttribute _BoxLayout_MethodAnnotations_init$0[] = {
	{"Ljava/beans/ConstructorProperties;", BoxLayout_Attribute_var$0},
	{}
};

$FieldInfo _BoxLayout_FieldInfo_[] = {
	{"X_AXIS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BoxLayout, X_AXIS)},
	{"Y_AXIS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BoxLayout, Y_AXIS)},
	{"LINE_AXIS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BoxLayout, LINE_AXIS)},
	{"PAGE_AXIS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BoxLayout, PAGE_AXIS)},
	{"axis", "I", nullptr, $PRIVATE, $field(BoxLayout, axis)},
	{"target", "Ljava/awt/Container;", nullptr, $PRIVATE, $field(BoxLayout, target)},
	{"xChildren", "[Ljavax/swing/SizeRequirements;", nullptr, $PRIVATE | $TRANSIENT, $field(BoxLayout, xChildren)},
	{"yChildren", "[Ljavax/swing/SizeRequirements;", nullptr, $PRIVATE | $TRANSIENT, $field(BoxLayout, yChildren)},
	{"xTotal", "Ljavax/swing/SizeRequirements;", nullptr, $PRIVATE | $TRANSIENT, $field(BoxLayout, xTotal)},
	{"yTotal", "Ljavax/swing/SizeRequirements;", nullptr, $PRIVATE | $TRANSIENT, $field(BoxLayout, yTotal)},
	{"dbg", "Ljava/io/PrintStream;", nullptr, $PRIVATE | $TRANSIENT, $field(BoxLayout, dbg)},
	{}
};

$MethodInfo _BoxLayout_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/Container;I)V", nullptr, $PUBLIC, $method(static_cast<void(BoxLayout::*)($Container*,int32_t)>(&BoxLayout::init$)), nullptr, nullptr, _BoxLayout_MethodAnnotations_init$0},
	{"<init>", "(Ljava/awt/Container;ILjava/io/PrintStream;)V", nullptr, 0, $method(static_cast<void(BoxLayout::*)($Container*,int32_t,$PrintStream*)>(&BoxLayout::init$))},
	{"addLayoutComponent", "(Ljava/lang/String;Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"addLayoutComponent", "(Ljava/awt/Component;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"checkContainer", "(Ljava/awt/Container;)V", nullptr, 0},
	{"checkRequests", "()V", nullptr, 0},
	{"getAxis", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(BoxLayout::*)()>(&BoxLayout::getAxis))},
	{"getLayoutAlignmentX", "(Ljava/awt/Container;)F", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getLayoutAlignmentY", "(Ljava/awt/Container;)F", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getTarget", "()Ljava/awt/Container;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$Container*(BoxLayout::*)()>(&BoxLayout::getTarget))},
	{"invalidateLayout", "(Ljava/awt/Container;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"maximumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"minimumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"preferredLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"removeLayoutComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"resolveAxis", "(ILjava/awt/ComponentOrientation;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(BoxLayout::*)(int32_t,$ComponentOrientation*)>(&BoxLayout::resolveAxis))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _BoxLayout_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.BoxLayout",
	"java.lang.Object",
	"java.awt.LayoutManager2,java.io.Serializable",
	_BoxLayout_FieldInfo_,
	_BoxLayout_MethodInfo_
};

$Object* allocate$BoxLayout($Class* clazz) {
	return $of($alloc(BoxLayout));
}

int32_t BoxLayout::hashCode() {
	 return this->$LayoutManager2::hashCode();
}

bool BoxLayout::equals(Object$* arg0) {
	 return this->$LayoutManager2::equals(arg0);
}

$Object* BoxLayout::clone() {
	 return this->$LayoutManager2::clone();
}

$String* BoxLayout::toString() {
	 return this->$LayoutManager2::toString();
}

void BoxLayout::finalize() {
	this->$LayoutManager2::finalize();
}

void BoxLayout::init$($Container* target, int32_t axis) {
	if (axis != BoxLayout::X_AXIS && axis != BoxLayout::Y_AXIS && axis != BoxLayout::LINE_AXIS && axis != BoxLayout::PAGE_AXIS) {
		$throwNew($AWTError, "Invalid axis"_s);
	}
	this->axis = axis;
	$set(this, target, target);
}

void BoxLayout::init$($Container* target, int32_t axis, $PrintStream* dbg) {
	BoxLayout::init$(target, axis);
	$set(this, dbg, dbg);
}

$Container* BoxLayout::getTarget() {
	return this->target;
}

int32_t BoxLayout::getAxis() {
	return this->axis;
}

void BoxLayout::invalidateLayout($Container* target) {
	$synchronized(this) {
		checkContainer(target);
		$set(this, xChildren, nullptr);
		$set(this, yChildren, nullptr);
		$set(this, xTotal, nullptr);
		$set(this, yTotal, nullptr);
	}
}

void BoxLayout::addLayoutComponent($String* name, $Component* comp) {
	invalidateLayout($($nc(comp)->getParent()));
}

void BoxLayout::removeLayoutComponent($Component* comp) {
	invalidateLayout($($nc(comp)->getParent()));
}

void BoxLayout::addLayoutComponent($Component* comp, Object$* constraints) {
	invalidateLayout($($nc(comp)->getParent()));
}

$Dimension* BoxLayout::preferredLayoutSize($Container* target) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, size, nullptr);
	$synchronized(this) {
		checkContainer(target);
		checkRequests();
		$assign(size, $new($Dimension, $nc(this->xTotal)->preferred, $nc(this->yTotal)->preferred));
	}
	$var($Insets, insets, $nc(target)->getInsets());
	$nc(size)->width = (int32_t)$Math::min((int64_t)size->width + (int64_t)$nc(insets)->left + (int64_t)insets->right, (int64_t)$Integer::MAX_VALUE);
	size->height = (int32_t)$Math::min((int64_t)size->height + (int64_t)$nc(insets)->top + (int64_t)insets->bottom, (int64_t)$Integer::MAX_VALUE);
	return size;
}

$Dimension* BoxLayout::minimumLayoutSize($Container* target) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, size, nullptr);
	$synchronized(this) {
		checkContainer(target);
		checkRequests();
		$assign(size, $new($Dimension, $nc(this->xTotal)->minimum, $nc(this->yTotal)->minimum));
	}
	$var($Insets, insets, $nc(target)->getInsets());
	$nc(size)->width = (int32_t)$Math::min((int64_t)size->width + (int64_t)$nc(insets)->left + (int64_t)insets->right, (int64_t)$Integer::MAX_VALUE);
	size->height = (int32_t)$Math::min((int64_t)size->height + (int64_t)$nc(insets)->top + (int64_t)insets->bottom, (int64_t)$Integer::MAX_VALUE);
	return size;
}

$Dimension* BoxLayout::maximumLayoutSize($Container* target) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, size, nullptr);
	$synchronized(this) {
		checkContainer(target);
		checkRequests();
		$assign(size, $new($Dimension, $nc(this->xTotal)->maximum, $nc(this->yTotal)->maximum));
	}
	$var($Insets, insets, $nc(target)->getInsets());
	$nc(size)->width = (int32_t)$Math::min((int64_t)size->width + (int64_t)$nc(insets)->left + (int64_t)insets->right, (int64_t)$Integer::MAX_VALUE);
	size->height = (int32_t)$Math::min((int64_t)size->height + (int64_t)$nc(insets)->top + (int64_t)insets->bottom, (int64_t)$Integer::MAX_VALUE);
	return size;
}

float BoxLayout::getLayoutAlignmentX($Container* target) {
	$synchronized(this) {
		checkContainer(target);
		checkRequests();
		return $nc(this->xTotal)->alignment;
	}
}

float BoxLayout::getLayoutAlignmentY($Container* target) {
	$synchronized(this) {
		checkContainer(target);
		checkRequests();
		return $nc(this->yTotal)->alignment;
	}
}

void BoxLayout::layoutContainer($Container* target) {
	$useLocalCurrentObjectStackCache();
	checkContainer(target);
	int32_t nChildren = $nc(target)->getComponentCount();
	$var($ints, xOffsets, $new($ints, nChildren));
	$var($ints, xSpans, $new($ints, nChildren));
	$var($ints, yOffsets, $new($ints, nChildren));
	$var($ints, ySpans, $new($ints, nChildren));
	$var($Dimension, alloc, target->getSize());
	$var($Insets, in, target->getInsets());
	$nc(alloc)->width -= $nc(in)->left + in->right;
	alloc->height -= in->top + in->bottom;
	$var($ComponentOrientation, o, target->getComponentOrientation());
	int32_t absoluteAxis = resolveAxis(this->axis, o);
	bool ltr = (absoluteAxis != this->axis) ? $nc(o)->isLeftToRight() : true;
	$synchronized(this) {
		checkRequests();
		if (absoluteAxis == BoxLayout::X_AXIS) {
			$SizeRequirements::calculateTiledPositions(alloc->width, this->xTotal, this->xChildren, xOffsets, xSpans, ltr);
			$SizeRequirements::calculateAlignedPositions(alloc->height, this->yTotal, this->yChildren, yOffsets, ySpans);
		} else {
			$SizeRequirements::calculateAlignedPositions(alloc->width, this->xTotal, this->xChildren, xOffsets, xSpans, ltr);
			$SizeRequirements::calculateTiledPositions(alloc->height, this->yTotal, this->yChildren, yOffsets, ySpans);
		}
	}
	for (int32_t i = 0; i < nChildren; ++i) {
		$var($Component, c, target->getComponent(i));
		int32_t var$0 = (int32_t)$Math::min((int64_t)in->left + (int64_t)xOffsets->get(i), (int64_t)$Integer::MAX_VALUE);
		$nc(c)->setBounds(var$0, (int32_t)$Math::min((int64_t)in->top + (int64_t)yOffsets->get(i), (int64_t)$Integer::MAX_VALUE), xSpans->get(i), ySpans->get(i));
	}
	if (this->dbg != nullptr) {
		for (int32_t i = 0; i < nChildren; ++i) {
			$var($Component, c, target->getComponent(i));
			$nc(this->dbg)->println($($nc(c)->toString()));
			$nc(this->dbg)->println($$str({"X: "_s, $nc(this->xChildren)->get(i)}));
			$nc(this->dbg)->println($$str({"Y: "_s, $nc(this->yChildren)->get(i)}));
		}
	}
}

void BoxLayout::checkContainer($Container* target) {
	if (this->target != target) {
		$throwNew($AWTError, "BoxLayout can\'t be shared"_s);
	}
}

void BoxLayout::checkRequests() {
	$useLocalCurrentObjectStackCache();
	if (this->xChildren == nullptr || this->yChildren == nullptr) {
		int32_t n = $nc(this->target)->getComponentCount();
		$set(this, xChildren, $new($SizeRequirementsArray, n));
		$set(this, yChildren, $new($SizeRequirementsArray, n));
		for (int32_t i = 0; i < n; ++i) {
			$var($Component, c, $nc(this->target)->getComponent(i));
			if (!$nc(c)->isVisible()) {
				$nc(this->xChildren)->set(i, $$new($SizeRequirements, 0, 0, 0, c->getAlignmentX()));
				$nc(this->yChildren)->set(i, $$new($SizeRequirements, 0, 0, 0, c->getAlignmentY()));
				continue;
			}
			$var($Dimension, min, $nc(c)->getMinimumSize());
			$var($Dimension, typ, c->getPreferredSize());
			$var($Dimension, max, c->getMaximumSize());
			$nc(this->xChildren)->set(i, $$new($SizeRequirements, $nc(min)->width, $nc(typ)->width, $nc(max)->width, c->getAlignmentX()));
			$nc(this->yChildren)->set(i, $$new($SizeRequirements, $nc(min)->height, $nc(typ)->height, $nc(max)->height, c->getAlignmentY()));
		}
		int32_t absoluteAxis = resolveAxis(this->axis, $($nc(this->target)->getComponentOrientation()));
		if (absoluteAxis == BoxLayout::X_AXIS) {
			$set(this, xTotal, $SizeRequirements::getTiledSizeRequirements(this->xChildren));
			$set(this, yTotal, $SizeRequirements::getAlignedSizeRequirements(this->yChildren));
		} else {
			$set(this, xTotal, $SizeRequirements::getAlignedSizeRequirements(this->xChildren));
			$set(this, yTotal, $SizeRequirements::getTiledSizeRequirements(this->yChildren));
		}
	}
}

int32_t BoxLayout::resolveAxis(int32_t axis, $ComponentOrientation* o) {
	int32_t absoluteAxis = 0;
	if (axis == BoxLayout::LINE_AXIS) {
		absoluteAxis = $nc(o)->isHorizontal() ? BoxLayout::X_AXIS : BoxLayout::Y_AXIS;
	} else if (axis == BoxLayout::PAGE_AXIS) {
		absoluteAxis = $nc(o)->isHorizontal() ? BoxLayout::Y_AXIS : BoxLayout::X_AXIS;
	} else {
		absoluteAxis = axis;
	}
	return absoluteAxis;
}

BoxLayout::BoxLayout() {
}

$Class* BoxLayout::load$($String* name, bool initialize) {
	$loadClass(BoxLayout, name, initialize, &_BoxLayout_ClassInfo_, allocate$BoxLayout);
	return class$;
}

$Class* BoxLayout::class$ = nullptr;

	} // swing
} // javax