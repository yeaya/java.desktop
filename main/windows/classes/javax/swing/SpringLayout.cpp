#include <javax/swing/SpringLayout.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/Spring$HeightSpring.h>
#include <javax/swing/Spring$WidthSpring.h>
#include <javax/swing/Spring.h>
#include <javax/swing/SpringLayout$Constraints.h>
#include <javax/swing/SpringLayout$SpringProxy.h>
#include <jcpp.h>

#undef ALL_HORIZONTAL
#undef ALL_VERTICAL
#undef BASELINE
#undef EAST
#undef HEIGHT
#undef HORIZONTAL_CENTER
#undef MAX_VALUE
#undef NORTH
#undef SOUTH
#undef UNSET
#undef VERTICAL_CENTER
#undef WEST
#undef WIDTH

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Insets = ::java::awt::Insets;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSet = ::java::util::AbstractSet;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $JComponent = ::javax::swing::JComponent;
using $Spring = ::javax::swing::Spring;
using $Spring$HeightSpring = ::javax::swing::Spring$HeightSpring;
using $Spring$WidthSpring = ::javax::swing::Spring$WidthSpring;
using $SpringLayout$Constraints = ::javax::swing::SpringLayout$Constraints;
using $SpringLayout$SpringProxy = ::javax::swing::SpringLayout$SpringProxy;

namespace javax {
	namespace swing {

$FieldInfo _SpringLayout_FieldInfo_[] = {
	{"componentConstraints", "Ljava/util/Map;", "Ljava/util/Map<Ljava/awt/Component;Ljavax/swing/SpringLayout$Constraints;>;", $PRIVATE, $field(SpringLayout, componentConstraints)},
	{"cyclicReference", "Ljavax/swing/Spring;", nullptr, $PRIVATE, $field(SpringLayout, cyclicReference)},
	{"cyclicSprings", "Ljava/util/Set;", "Ljava/util/Set<Ljavax/swing/Spring;>;", $PRIVATE, $field(SpringLayout, cyclicSprings)},
	{"acyclicSprings", "Ljava/util/Set;", "Ljava/util/Set<Ljavax/swing/Spring;>;", $PRIVATE, $field(SpringLayout, acyclicSprings)},
	{"NORTH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SpringLayout, NORTH)},
	{"SOUTH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SpringLayout, SOUTH)},
	{"EAST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SpringLayout, EAST)},
	{"WEST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SpringLayout, WEST)},
	{"HORIZONTAL_CENTER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SpringLayout, HORIZONTAL_CENTER)},
	{"VERTICAL_CENTER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SpringLayout, VERTICAL_CENTER)},
	{"BASELINE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SpringLayout, BASELINE)},
	{"WIDTH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SpringLayout, WIDTH)},
	{"HEIGHT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SpringLayout, HEIGHT)},
	{"ALL_HORIZONTAL", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(SpringLayout, ALL_HORIZONTAL)},
	{"ALL_VERTICAL", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(SpringLayout, ALL_VERTICAL)},
	{}
};

$MethodInfo _SpringLayout_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SpringLayout::*)()>(&SpringLayout::init$))},
	{"abandonCycles", "(Ljavax/swing/Spring;)Ljavax/swing/Spring;", nullptr, $PRIVATE, $method(static_cast<$Spring*(SpringLayout::*)($Spring*)>(&SpringLayout::abandonCycles))},
	{"addInsets", "(IILjava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Dimension*(*)(int32_t,int32_t,$Container*)>(&SpringLayout::addInsets))},
	{"addLayoutComponent", "(Ljava/lang/String;Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"addLayoutComponent", "(Ljava/awt/Component;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"applyDefaults", "(Ljava/awt/Component;Ljavax/swing/SpringLayout$Constraints;)Ljavax/swing/SpringLayout$Constraints;", nullptr, $PRIVATE, $method(static_cast<$SpringLayout$Constraints*(SpringLayout::*)($Component*,$SpringLayout$Constraints*)>(&SpringLayout::applyDefaults))},
	{"applyDefaults", "(Ljavax/swing/SpringLayout$Constraints;Ljava/lang/String;Ljavax/swing/Spring;Ljava/lang/String;Ljavax/swing/Spring;Ljava/util/List;)V", "(Ljavax/swing/SpringLayout$Constraints;Ljava/lang/String;Ljavax/swing/Spring;Ljava/lang/String;Ljavax/swing/Spring;Ljava/util/List<Ljava/lang/String;>;)V", $PRIVATE, $method(static_cast<void(SpringLayout::*)($SpringLayout$Constraints*,$String*,$Spring*,$String*,$Spring*,$List*)>(&SpringLayout::applyDefaults))},
	{"getConstraint", "(Ljava/lang/String;Ljava/awt/Component;)Ljavax/swing/Spring;", nullptr, $PUBLIC},
	{"getConstraints", "(Ljava/awt/Component;)Ljavax/swing/SpringLayout$Constraints;", nullptr, $PUBLIC},
	{"getLayoutAlignmentX", "(Ljava/awt/Container;)F", nullptr, $PUBLIC},
	{"getLayoutAlignmentY", "(Ljava/awt/Container;)F", nullptr, $PUBLIC},
	{"invalidateLayout", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"isCyclic", "(Ljavax/swing/Spring;)Z", nullptr, 0},
	{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"maximumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"minimumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"preferredLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"putConstraint", "(Ljava/lang/String;Ljava/awt/Component;ILjava/lang/String;Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"putConstraint", "(Ljava/lang/String;Ljava/awt/Component;Ljavax/swing/Spring;Ljava/lang/String;Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"putConstraint", "(Ljava/lang/String;Ljava/awt/Component;Ljavax/swing/Spring;)V", nullptr, $PRIVATE, $method(static_cast<void(SpringLayout::*)($String*,$Component*,$Spring*)>(&SpringLayout::putConstraint))},
	{"putConstraints", "(Ljava/awt/Component;Ljavax/swing/SpringLayout$Constraints;)V", nullptr, $PRIVATE, $method(static_cast<void(SpringLayout::*)($Component*,$SpringLayout$Constraints*)>(&SpringLayout::putConstraints))},
	{"removeLayoutComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"resetCyclicStatuses", "()V", nullptr, $PRIVATE, $method(static_cast<void(SpringLayout::*)()>(&SpringLayout::resetCyclicStatuses))},
	{"setParent", "(Ljava/awt/Container;)V", nullptr, $PRIVATE, $method(static_cast<void(SpringLayout::*)($Container*)>(&SpringLayout::setParent))},
	{}
};

$InnerClassInfo _SpringLayout_InnerClassesInfo_[] = {
	{"javax.swing.SpringLayout$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"javax.swing.SpringLayout$SpringProxy", "javax.swing.SpringLayout", "SpringProxy", $PRIVATE | $STATIC},
	{"javax.swing.SpringLayout$Constraints", "javax.swing.SpringLayout", "Constraints", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _SpringLayout_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.SpringLayout",
	"java.lang.Object",
	"java.awt.LayoutManager2",
	_SpringLayout_FieldInfo_,
	_SpringLayout_MethodInfo_,
	nullptr,
	nullptr,
	_SpringLayout_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.SpringLayout$1,javax.swing.SpringLayout$SpringProxy,javax.swing.SpringLayout$Constraints,javax.swing.SpringLayout$Constraints$2,javax.swing.SpringLayout$Constraints$1"
};

$Object* allocate$SpringLayout($Class* clazz) {
	return $of($alloc(SpringLayout));
}


$String* SpringLayout::NORTH = nullptr;

$String* SpringLayout::SOUTH = nullptr;

$String* SpringLayout::EAST = nullptr;

$String* SpringLayout::WEST = nullptr;

$String* SpringLayout::HORIZONTAL_CENTER = nullptr;

$String* SpringLayout::VERTICAL_CENTER = nullptr;

$String* SpringLayout::BASELINE = nullptr;

$String* SpringLayout::WIDTH = nullptr;

$String* SpringLayout::HEIGHT = nullptr;
$StringArray* SpringLayout::ALL_HORIZONTAL = nullptr;
$StringArray* SpringLayout::ALL_VERTICAL = nullptr;

void SpringLayout::init$() {
	$set(this, componentConstraints, $new($HashMap));
	$set(this, cyclicReference, $Spring::constant($Spring::UNSET));
}

void SpringLayout::resetCyclicStatuses() {
	$set(this, cyclicSprings, $new($HashSet));
	$set(this, acyclicSprings, $new($HashSet));
}

void SpringLayout::setParent($Container* p) {
	resetCyclicStatuses();
	$var($SpringLayout$Constraints, pc, getConstraints(p));
	$nc(pc)->setX($($Spring::constant(0)));
	pc->setY($($Spring::constant(0)));
	$var($Spring, width, pc->getWidth());
	if ($instanceOf($Spring$WidthSpring, width) && $equals($nc(($cast($Spring$WidthSpring, width)))->c, p)) {
		pc->setWidth($($Spring::constant(0, 0, $Integer::MAX_VALUE)));
	}
	$var($Spring, height, pc->getHeight());
	if ($instanceOf($Spring$HeightSpring, height) && $equals($nc(($cast($Spring$HeightSpring, height)))->c, p)) {
		pc->setHeight($($Spring::constant(0, 0, $Integer::MAX_VALUE)));
	}
}

bool SpringLayout::isCyclic($Spring* s) {
	if (s == nullptr) {
		return false;
	}
	if ($nc(this->cyclicSprings)->contains(s)) {
		return true;
	}
	if ($nc(this->acyclicSprings)->contains(s)) {
		return false;
	}
	$nc(this->cyclicSprings)->add(s);
	bool result = $nc(s)->isCyclic(this);
	if (!result) {
		$nc(this->acyclicSprings)->add(s);
		$nc(this->cyclicSprings)->remove(s);
	} else {
		$init($System);
		$nc($System::err)->println($$str({s, " is cyclic. "_s}));
	}
	return result;
}

$Spring* SpringLayout::abandonCycles($Spring* s) {
	return isCyclic(s) ? this->cyclicReference : s;
}

void SpringLayout::addLayoutComponent($String* name, $Component* c) {
}

void SpringLayout::removeLayoutComponent($Component* c) {
	$nc(this->componentConstraints)->remove(c);
}

$Dimension* SpringLayout::addInsets(int32_t width, int32_t height, $Container* p) {
	$init(SpringLayout);
	$var($Insets, i, $nc(p)->getInsets());
	return $new($Dimension, width + $nc(i)->left + i->right, height + i->top + i->bottom);
}

$Dimension* SpringLayout::minimumLayoutSize($Container* parent) {
	setParent(parent);
	$var($SpringLayout$Constraints, pc, getConstraints(parent));
	int32_t var$0 = $nc($(abandonCycles($($nc(pc)->getWidth()))))->getMinimumValue();
	return addInsets(var$0, $nc($(abandonCycles($($nc(pc)->getHeight()))))->getMinimumValue(), parent);
}

$Dimension* SpringLayout::preferredLayoutSize($Container* parent) {
	setParent(parent);
	$var($SpringLayout$Constraints, pc, getConstraints(parent));
	int32_t var$0 = $nc($(abandonCycles($($nc(pc)->getWidth()))))->getPreferredValue();
	return addInsets(var$0, $nc($(abandonCycles($($nc(pc)->getHeight()))))->getPreferredValue(), parent);
}

$Dimension* SpringLayout::maximumLayoutSize($Container* parent) {
	setParent(parent);
	$var($SpringLayout$Constraints, pc, getConstraints(parent));
	int32_t var$0 = $nc($(abandonCycles($($nc(pc)->getWidth()))))->getMaximumValue();
	return addInsets(var$0, $nc($(abandonCycles($($nc(pc)->getHeight()))))->getMaximumValue(), parent);
}

void SpringLayout::addLayoutComponent($Component* component, Object$* constraints) {
	if ($instanceOf($SpringLayout$Constraints, constraints)) {
		putConstraints(component, $cast($SpringLayout$Constraints, constraints));
	}
}

float SpringLayout::getLayoutAlignmentX($Container* p) {
	return 0.5f;
}

float SpringLayout::getLayoutAlignmentY($Container* p) {
	return 0.5f;
}

void SpringLayout::invalidateLayout($Container* p) {
}

void SpringLayout::putConstraint($String* e1, $Component* c1, int32_t pad, $String* e2, $Component* c2) {
	putConstraint(e1, c1, $($Spring::constant(pad)), e2, c2);
}

void SpringLayout::putConstraint($String* e1, $Component* c1, $Spring* s, $String* e2, $Component* c2) {
	putConstraint(e1, c1, $($Spring::sum(s, $(getConstraint(e2, c2)))));
}

void SpringLayout::putConstraint($String* e, $Component* c, $Spring* s) {
	if (s != nullptr) {
		$nc($(getConstraints(c)))->setConstraint(e, s);
	}
}

$SpringLayout$Constraints* SpringLayout::applyDefaults($Component* c, $SpringLayout$Constraints* constraints$renamed) {
	$var($SpringLayout$Constraints, constraints, constraints$renamed);
	if (constraints == nullptr) {
		$assign(constraints, $new($SpringLayout$Constraints));
	}
	if ($nc(constraints)->c == nullptr) {
		$set(constraints, c, c);
	}
	if ($nc($nc(constraints)->horizontalHistory)->size() < 2) {
		$var($SpringLayout$Constraints, var$0, constraints);
		$var($String, var$1, SpringLayout::WEST);
		$var($Spring, var$2, $Spring::constant(0));
		$var($String, var$3, SpringLayout::WIDTH);
		applyDefaults(var$0, var$1, var$2, var$3, $($Spring::width(c)), constraints->horizontalHistory);
	}
	if ($nc($nc(constraints)->verticalHistory)->size() < 2) {
		$var($SpringLayout$Constraints, var$4, constraints);
		$var($String, var$5, SpringLayout::NORTH);
		$var($Spring, var$6, $Spring::constant(0));
		$var($String, var$7, SpringLayout::HEIGHT);
		applyDefaults(var$4, var$5, var$6, var$7, $($Spring::height(c)), constraints->verticalHistory);
	}
	return constraints;
}

void SpringLayout::applyDefaults($SpringLayout$Constraints* constraints, $String* name1, $Spring* spring1, $String* name2, $Spring* spring2, $List* history) {
	if ($nc(history)->size() == 0) {
		$nc(constraints)->setConstraint(name1, spring1);
		constraints->setConstraint(name2, spring2);
	} else {
		if ($nc(constraints)->getConstraint(name2) == nullptr) {
			constraints->setConstraint(name2, spring2);
		} else {
			constraints->setConstraint(name1, spring1);
		}
		$Collections::rotate(history, 1);
	}
}

void SpringLayout::putConstraints($Component* component, $SpringLayout$Constraints* constraints) {
	$nc(this->componentConstraints)->put(component, $(applyDefaults(component, constraints)));
}

$SpringLayout$Constraints* SpringLayout::getConstraints($Component* c) {
	$var($SpringLayout$Constraints, result, $cast($SpringLayout$Constraints, $nc(this->componentConstraints)->get(c)));
	if (result == nullptr) {
		if ($instanceOf($JComponent, c)) {
			$var($Object, cp, $nc(($cast($JComponent, c)))->getClientProperty(SpringLayout::class$));
			if ($instanceOf($SpringLayout$Constraints, cp)) {
				return applyDefaults(c, $cast($SpringLayout$Constraints, cp));
			}
		}
		$assign(result, $new($SpringLayout$Constraints));
		putConstraints(c, result);
	}
	return result;
}

$Spring* SpringLayout::getConstraint($String* edgeName$renamed, $Component* c) {
	$var($String, edgeName, edgeName$renamed);
	$assign(edgeName, $nc(edgeName)->intern());
	return $new($SpringLayout$SpringProxy, edgeName, c, this);
}

void SpringLayout::layoutContainer($Container* parent) {
	setParent(parent);
	int32_t n = $nc(parent)->getComponentCount();
	$nc($(getConstraints(parent)))->reset();
	for (int32_t i = 0; i < n; ++i) {
		$nc($(getConstraints($(parent->getComponent(i)))))->reset();
	}
	$var($Insets, insets, parent->getInsets());
	$var($SpringLayout$Constraints, pc, getConstraints(parent));
	$nc($(abandonCycles($($nc(pc)->getX()))))->setValue(0);
	$nc($(abandonCycles($($nc(pc)->getY()))))->setValue(0);
	$nc($(abandonCycles($($nc(pc)->getWidth()))))->setValue(parent->getWidth() - $nc(insets)->left - insets->right);
	$nc($(abandonCycles($($nc(pc)->getHeight()))))->setValue(parent->getHeight() - $nc(insets)->top - insets->bottom);
	for (int32_t i = 0; i < n; ++i) {
		$var($Component, c, parent->getComponent(i));
		$var($SpringLayout$Constraints, cc, getConstraints(c));
		int32_t x = $nc($(abandonCycles($($nc(cc)->getX()))))->getValue();
		int32_t y = $nc($(abandonCycles($($nc(cc)->getY()))))->getValue();
		int32_t width = $nc($(abandonCycles($($nc(cc)->getWidth()))))->getValue();
		int32_t height = $nc($(abandonCycles($($nc(cc)->getHeight()))))->getValue();
		$nc(c)->setBounds($nc(insets)->left + x, insets->top + y, width, height);
	}
}

void clinit$SpringLayout($Class* class$) {
	$assignStatic(SpringLayout::NORTH, "North"_s);
	$assignStatic(SpringLayout::SOUTH, "South"_s);
	$assignStatic(SpringLayout::EAST, "East"_s);
	$assignStatic(SpringLayout::WEST, "West"_s);
	$assignStatic(SpringLayout::HORIZONTAL_CENTER, "HorizontalCenter"_s);
	$assignStatic(SpringLayout::VERTICAL_CENTER, "VerticalCenter"_s);
	$assignStatic(SpringLayout::BASELINE, "Baseline"_s);
	$assignStatic(SpringLayout::WIDTH, "Width"_s);
	$assignStatic(SpringLayout::HEIGHT, "Height"_s);
	$assignStatic(SpringLayout::ALL_HORIZONTAL, $new($StringArray, {
		SpringLayout::WEST,
		SpringLayout::WIDTH,
		SpringLayout::EAST,
		SpringLayout::HORIZONTAL_CENTER
	}));
	$assignStatic(SpringLayout::ALL_VERTICAL, $new($StringArray, {
		SpringLayout::NORTH,
		SpringLayout::HEIGHT,
		SpringLayout::SOUTH,
		SpringLayout::VERTICAL_CENTER,
		SpringLayout::BASELINE
	}));
}

SpringLayout::SpringLayout() {
}

$Class* SpringLayout::load$($String* name, bool initialize) {
	$loadClass(SpringLayout, name, initialize, &_SpringLayout_ClassInfo_, clinit$SpringLayout, allocate$SpringLayout);
	return class$;
}

$Class* SpringLayout::class$ = nullptr;

	} // swing
} // javax