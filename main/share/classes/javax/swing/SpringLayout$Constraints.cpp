#include <javax/swing/SpringLayout$Constraints.h>

#include <java/awt/Component$BaselineResizeBehavior.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <javax/swing/Spring$SpringMap.h>
#include <javax/swing/Spring.h>
#include <javax/swing/SpringLayout$1.h>
#include <javax/swing/SpringLayout$Constraints$1.h>
#include <javax/swing/SpringLayout$Constraints$2.h>
#include <javax/swing/SpringLayout.h>
#include <jcpp.h>

#undef ALL_HORIZONTAL
#undef ALL_VERTICAL
#undef MIN_VALUE
#undef UNSET

using $SpringArray = $Array<::javax::swing::Spring>;
using $Component = ::java::awt::Component;
using $Component$BaselineResizeBehavior = ::java::awt::Component$BaselineResizeBehavior;
using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $Spring = ::javax::swing::Spring;
using $Spring$SpringMap = ::javax::swing::Spring$SpringMap;
using $SpringLayout = ::javax::swing::SpringLayout;
using $SpringLayout$1 = ::javax::swing::SpringLayout$1;
using $SpringLayout$Constraints$1 = ::javax::swing::SpringLayout$Constraints$1;
using $SpringLayout$Constraints$2 = ::javax::swing::SpringLayout$Constraints$2;

namespace javax {
	namespace swing {

$FieldInfo _SpringLayout$Constraints_FieldInfo_[] = {
	{"x", "Ljavax/swing/Spring;", nullptr, $PRIVATE, $field(SpringLayout$Constraints, x)},
	{"y", "Ljavax/swing/Spring;", nullptr, $PRIVATE, $field(SpringLayout$Constraints, y)},
	{"width", "Ljavax/swing/Spring;", nullptr, $PRIVATE, $field(SpringLayout$Constraints, width)},
	{"height", "Ljavax/swing/Spring;", nullptr, $PRIVATE, $field(SpringLayout$Constraints, height)},
	{"east", "Ljavax/swing/Spring;", nullptr, $PRIVATE, $field(SpringLayout$Constraints, east)},
	{"south", "Ljavax/swing/Spring;", nullptr, $PRIVATE, $field(SpringLayout$Constraints, south)},
	{"horizontalCenter", "Ljavax/swing/Spring;", nullptr, $PRIVATE, $field(SpringLayout$Constraints, horizontalCenter)},
	{"verticalCenter", "Ljavax/swing/Spring;", nullptr, $PRIVATE, $field(SpringLayout$Constraints, verticalCenter)},
	{"baseline", "Ljavax/swing/Spring;", nullptr, $PRIVATE, $field(SpringLayout$Constraints, baseline)},
	{"horizontalHistory", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PRIVATE, $field(SpringLayout$Constraints, horizontalHistory)},
	{"verticalHistory", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PRIVATE, $field(SpringLayout$Constraints, verticalHistory)},
	{"c", "Ljava/awt/Component;", nullptr, $PRIVATE, $field(SpringLayout$Constraints, c)},
	{}
};

$MethodInfo _SpringLayout$Constraints_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SpringLayout$Constraints::*)()>(&SpringLayout$Constraints::init$))},
	{"<init>", "(Ljavax/swing/Spring;Ljavax/swing/Spring;)V", nullptr, $PUBLIC, $method(static_cast<void(SpringLayout$Constraints::*)($Spring*,$Spring*)>(&SpringLayout$Constraints::init$))},
	{"<init>", "(Ljavax/swing/Spring;Ljavax/swing/Spring;Ljavax/swing/Spring;Ljavax/swing/Spring;)V", nullptr, $PUBLIC, $method(static_cast<void(SpringLayout$Constraints::*)($Spring*,$Spring*,$Spring*,$Spring*)>(&SpringLayout$Constraints::init$))},
	{"<init>", "(Ljava/awt/Component;)V", nullptr, $PUBLIC, $method(static_cast<void(SpringLayout$Constraints::*)($Component*)>(&SpringLayout$Constraints::init$))},
	{"defined", "(Ljava/util/List;Ljava/lang/String;Ljava/lang/String;)Z", "(Ljava/util/List<*>;Ljava/lang/String;Ljava/lang/String;)Z", $PRIVATE, $method(static_cast<bool(SpringLayout$Constraints::*)($List*,$String*,$String*)>(&SpringLayout$Constraints::defined))},
	{"difference", "(Ljavax/swing/Spring;Ljavax/swing/Spring;)Ljavax/swing/Spring;", nullptr, $PRIVATE, $method(static_cast<$Spring*(SpringLayout$Constraints::*)($Spring*,$Spring*)>(&SpringLayout$Constraints::difference))},
	{"getBaseline", "()Ljavax/swing/Spring;", nullptr, $PRIVATE, $method(static_cast<$Spring*(SpringLayout$Constraints::*)()>(&SpringLayout$Constraints::getBaseline))},
	{"getBaselineFromHeight", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(SpringLayout$Constraints::*)(int32_t)>(&SpringLayout$Constraints::getBaselineFromHeight))},
	{"getConstraint", "(Ljava/lang/String;)Ljavax/swing/Spring;", nullptr, $PUBLIC},
	{"getEast", "()Ljavax/swing/Spring;", nullptr, $PRIVATE, $method(static_cast<$Spring*(SpringLayout$Constraints::*)()>(&SpringLayout$Constraints::getEast))},
	{"getHeight", "()Ljavax/swing/Spring;", nullptr, $PUBLIC},
	{"getHeightFromBaseLine", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(SpringLayout$Constraints::*)(int32_t)>(&SpringLayout$Constraints::getHeightFromBaseLine))},
	{"getHorizontalCenter", "()Ljavax/swing/Spring;", nullptr, $PRIVATE, $method(static_cast<$Spring*(SpringLayout$Constraints::*)()>(&SpringLayout$Constraints::getHorizontalCenter))},
	{"getSouth", "()Ljavax/swing/Spring;", nullptr, $PRIVATE, $method(static_cast<$Spring*(SpringLayout$Constraints::*)()>(&SpringLayout$Constraints::getSouth))},
	{"getVerticalCenter", "()Ljavax/swing/Spring;", nullptr, $PRIVATE, $method(static_cast<$Spring*(SpringLayout$Constraints::*)()>(&SpringLayout$Constraints::getVerticalCenter))},
	{"getWidth", "()Ljavax/swing/Spring;", nullptr, $PUBLIC},
	{"getX", "()Ljavax/swing/Spring;", nullptr, $PUBLIC},
	{"getY", "()Ljavax/swing/Spring;", nullptr, $PUBLIC},
	{"heightToRelativeBaseline", "(Ljavax/swing/Spring;)Ljavax/swing/Spring;", nullptr, $PRIVATE, $method(static_cast<$Spring*(SpringLayout$Constraints::*)($Spring*)>(&SpringLayout$Constraints::heightToRelativeBaseline))},
	{"pushConstraint", "(Ljava/lang/String;Ljavax/swing/Spring;Z)V", nullptr, $PRIVATE, $method(static_cast<void(SpringLayout$Constraints::*)($String*,$Spring*,bool)>(&SpringLayout$Constraints::pushConstraint))},
	{"relativeBaselineToHeight", "(Ljavax/swing/Spring;)Ljavax/swing/Spring;", nullptr, $PRIVATE, $method(static_cast<$Spring*(SpringLayout$Constraints::*)($Spring*)>(&SpringLayout$Constraints::relativeBaselineToHeight))},
	{"reset", "()V", nullptr, 0},
	{"scale", "(Ljavax/swing/Spring;F)Ljavax/swing/Spring;", nullptr, $PRIVATE, $method(static_cast<$Spring*(SpringLayout$Constraints::*)($Spring*,float)>(&SpringLayout$Constraints::scale))},
	{"setBaseline", "(Ljavax/swing/Spring;)V", nullptr, $PRIVATE, $method(static_cast<void(SpringLayout$Constraints::*)($Spring*)>(&SpringLayout$Constraints::setBaseline))},
	{"setConstraint", "(Ljava/lang/String;Ljavax/swing/Spring;)V", nullptr, $PUBLIC},
	{"setEast", "(Ljavax/swing/Spring;)V", nullptr, $PRIVATE, $method(static_cast<void(SpringLayout$Constraints::*)($Spring*)>(&SpringLayout$Constraints::setEast))},
	{"setHeight", "(Ljavax/swing/Spring;)V", nullptr, $PUBLIC},
	{"setHorizontalCenter", "(Ljavax/swing/Spring;)V", nullptr, $PRIVATE, $method(static_cast<void(SpringLayout$Constraints::*)($Spring*)>(&SpringLayout$Constraints::setHorizontalCenter))},
	{"setSouth", "(Ljavax/swing/Spring;)V", nullptr, $PRIVATE, $method(static_cast<void(SpringLayout$Constraints::*)($Spring*)>(&SpringLayout$Constraints::setSouth))},
	{"setVerticalCenter", "(Ljavax/swing/Spring;)V", nullptr, $PRIVATE, $method(static_cast<void(SpringLayout$Constraints::*)($Spring*)>(&SpringLayout$Constraints::setVerticalCenter))},
	{"setWidth", "(Ljavax/swing/Spring;)V", nullptr, $PUBLIC},
	{"setX", "(Ljavax/swing/Spring;)V", nullptr, $PUBLIC},
	{"setY", "(Ljavax/swing/Spring;)V", nullptr, $PUBLIC},
	{"sum", "(Ljavax/swing/Spring;Ljavax/swing/Spring;)Ljavax/swing/Spring;", nullptr, $PRIVATE, $method(static_cast<$Spring*(SpringLayout$Constraints::*)($Spring*,$Spring*)>(&SpringLayout$Constraints::sum))},
	{}
};

$InnerClassInfo _SpringLayout$Constraints_InnerClassesInfo_[] = {
	{"javax.swing.SpringLayout$Constraints", "javax.swing.SpringLayout", "Constraints", $PUBLIC | $STATIC},
	{"javax.swing.SpringLayout$Constraints$2", nullptr, nullptr, 0},
	{"javax.swing.SpringLayout$Constraints$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SpringLayout$Constraints_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.SpringLayout$Constraints",
	"java.lang.Object",
	nullptr,
	_SpringLayout$Constraints_FieldInfo_,
	_SpringLayout$Constraints_MethodInfo_,
	nullptr,
	nullptr,
	_SpringLayout$Constraints_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.SpringLayout"
};

$Object* allocate$SpringLayout$Constraints($Class* clazz) {
	return $of($alloc(SpringLayout$Constraints));
}

void SpringLayout$Constraints::init$() {
	$set(this, horizontalHistory, $new($ArrayList, 2));
	$set(this, verticalHistory, $new($ArrayList, 2));
}

void SpringLayout$Constraints::init$($Spring* x, $Spring* y) {
	$set(this, horizontalHistory, $new($ArrayList, 2));
	$set(this, verticalHistory, $new($ArrayList, 2));
	setX(x);
	setY(y);
}

void SpringLayout$Constraints::init$($Spring* x, $Spring* y, $Spring* width, $Spring* height) {
	$set(this, horizontalHistory, $new($ArrayList, 2));
	$set(this, verticalHistory, $new($ArrayList, 2));
	setX(x);
	setY(y);
	setWidth(width);
	setHeight(height);
}

void SpringLayout$Constraints::init$($Component* c) {
	$useLocalCurrentObjectStackCache();
	$set(this, horizontalHistory, $new($ArrayList, 2));
	$set(this, verticalHistory, $new($ArrayList, 2));
	$set(this, c, c);
	setX($($Spring::constant($nc(c)->getX())));
	setY($($Spring::constant($nc(c)->getY())));
	setWidth($($Spring::width(c)));
	setHeight($($Spring::height(c)));
}

void SpringLayout$Constraints::pushConstraint($String* name, $Spring* value, bool horizontal) {
	$useLocalCurrentObjectStackCache();
	bool valid = true;
	$var($List, history, horizontal ? this->horizontalHistory : this->verticalHistory);
	if ($nc(history)->contains(name)) {
		history->remove($of(name));
		valid = false;
	} else if (history->size() == 2 && value != nullptr) {
		history->remove(0);
		valid = false;
	}
	if (value != nullptr) {
		$nc(history)->add(name);
	}
	if (!valid) {
		$init($SpringLayout);
		$var($StringArray, all, horizontal ? $SpringLayout::ALL_HORIZONTAL : $SpringLayout::ALL_VERTICAL);
		{
			$var($StringArray, arr$, all);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($String, s, arr$->get(i$));
				{
					if (!$nc(history)->contains(s)) {
						setConstraint(s, nullptr);
					}
				}
			}
		}
	}
}

$Spring* SpringLayout$Constraints::sum($Spring* s1, $Spring* s2) {
	return (s1 == nullptr || s2 == nullptr) ? ($Spring*)nullptr : $Spring::sum(s1, s2);
}

$Spring* SpringLayout$Constraints::difference($Spring* s1, $Spring* s2) {
	return (s1 == nullptr || s2 == nullptr) ? ($Spring*)nullptr : $Spring::difference(s1, s2);
}

$Spring* SpringLayout$Constraints::scale($Spring* s, float factor) {
	return (s == nullptr) ? ($Spring*)nullptr : $Spring::scale(s, factor);
}

int32_t SpringLayout$Constraints::getBaselineFromHeight(int32_t height) {
	$useLocalCurrentObjectStackCache();
	if (height < 0) {
		return -$nc(this->c)->getBaseline($nc($($nc(this->c)->getPreferredSize()))->width, -height);
	}
	return $nc(this->c)->getBaseline($nc($($nc(this->c)->getPreferredSize()))->width, height);
}

int32_t SpringLayout$Constraints::getHeightFromBaseLine(int32_t baseline) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, prefSize, $nc(this->c)->getPreferredSize());
	int32_t prefHeight = $nc(prefSize)->height;
	int32_t prefBaseline = $nc(this->c)->getBaseline(prefSize->width, prefHeight);
	if (prefBaseline == baseline) {
		return prefHeight;
	}
	$init($SpringLayout$1);
	switch ($nc($SpringLayout$1::$SwitchMap$java$awt$Component$BaselineResizeBehavior)->get($nc(($($nc(this->c)->getBaselineResizeBehavior())))->ordinal())) {
	case 1:
		{
			return prefHeight + (baseline - prefBaseline);
		}
	case 2:
		{
			return prefHeight + 2 * (baseline - prefBaseline);
		}
	case 3:
		{}
	default:
		{}
	}
	return $Integer::MIN_VALUE;
}

$Spring* SpringLayout$Constraints::heightToRelativeBaseline($Spring* s) {
	return $new($SpringLayout$Constraints$1, this, s);
}

$Spring* SpringLayout$Constraints::relativeBaselineToHeight($Spring* s) {
	return $new($SpringLayout$Constraints$2, this, s);
}

bool SpringLayout$Constraints::defined($List* history, $String* s1, $String* s2) {
	bool var$0 = $nc(history)->contains(s1);
	return var$0 && history->contains(s2);
}

void SpringLayout$Constraints::setX($Spring* x) {
	$set(this, x, x);
	pushConstraint("West"_s, x, true);
}

$Spring* SpringLayout$Constraints::getX() {
	$useLocalCurrentObjectStackCache();
	if (this->x == nullptr) {
		if (defined(this->horizontalHistory, "East"_s, "Width"_s)) {
			$set(this, x, difference(this->east, this->width));
		} else if (defined(this->horizontalHistory, "HorizontalCenter"_s, "Width"_s)) {
			$set(this, x, difference(this->horizontalCenter, $(scale(this->width, 0.5f))));
		} else if (defined(this->horizontalHistory, "HorizontalCenter"_s, "East"_s)) {
			$set(this, x, difference($(scale(this->horizontalCenter, 2.0f)), this->east));
		}
	}
	return this->x;
}

void SpringLayout$Constraints::setY($Spring* y) {
	$set(this, y, y);
	pushConstraint("North"_s, y, false);
}

$Spring* SpringLayout$Constraints::getY() {
	$useLocalCurrentObjectStackCache();
	if (this->y == nullptr) {
		if (defined(this->verticalHistory, "South"_s, "Height"_s)) {
			$set(this, y, difference(this->south, this->height));
		} else if (defined(this->verticalHistory, "VerticalCenter"_s, "Height"_s)) {
			$set(this, y, difference(this->verticalCenter, $(scale(this->height, 0.5f))));
		} else if (defined(this->verticalHistory, "VerticalCenter"_s, "South"_s)) {
			$set(this, y, difference($(scale(this->verticalCenter, 2.0f)), this->south));
		} else if (defined(this->verticalHistory, "Baseline"_s, "Height"_s)) {
			$set(this, y, difference(this->baseline, $(heightToRelativeBaseline(this->height))));
		} else if (defined(this->verticalHistory, "Baseline"_s, "South"_s)) {
			$set(this, y, scale($(difference(this->baseline, $(heightToRelativeBaseline(this->south)))), 2.0f));
		}
	}
	return this->y;
}

void SpringLayout$Constraints::setWidth($Spring* width) {
	$set(this, width, width);
	pushConstraint("Width"_s, width, true);
}

$Spring* SpringLayout$Constraints::getWidth() {
	$useLocalCurrentObjectStackCache();
	if (this->width == nullptr) {
		if ($nc(this->horizontalHistory)->contains("East"_s)) {
			$set(this, width, difference(this->east, $(getX())));
		} else if ($nc(this->horizontalHistory)->contains("HorizontalCenter"_s)) {
			$set(this, width, scale($(difference(this->horizontalCenter, $(getX()))), 2.0f));
		}
	}
	return this->width;
}

void SpringLayout$Constraints::setHeight($Spring* height) {
	$set(this, height, height);
	pushConstraint("Height"_s, height, false);
}

$Spring* SpringLayout$Constraints::getHeight() {
	$useLocalCurrentObjectStackCache();
	if (this->height == nullptr) {
		if ($nc(this->verticalHistory)->contains("South"_s)) {
			$set(this, height, difference(this->south, $(getY())));
		} else if ($nc(this->verticalHistory)->contains("VerticalCenter"_s)) {
			$set(this, height, scale($(difference(this->verticalCenter, $(getY()))), 2.0f));
		} else if ($nc(this->verticalHistory)->contains("Baseline"_s)) {
			$set(this, height, relativeBaselineToHeight($(difference(this->baseline, $(getY())))));
		}
	}
	return this->height;
}

void SpringLayout$Constraints::setEast($Spring* east) {
	$set(this, east, east);
	pushConstraint("East"_s, east, true);
}

$Spring* SpringLayout$Constraints::getEast() {
	$useLocalCurrentObjectStackCache();
	if (this->east == nullptr) {
		$var($Spring, var$0, getX());
		$set(this, east, sum(var$0, $(getWidth())));
	}
	return this->east;
}

void SpringLayout$Constraints::setSouth($Spring* south) {
	$set(this, south, south);
	pushConstraint("South"_s, south, false);
}

$Spring* SpringLayout$Constraints::getSouth() {
	$useLocalCurrentObjectStackCache();
	if (this->south == nullptr) {
		$var($Spring, var$0, getY());
		$set(this, south, sum(var$0, $(getHeight())));
	}
	return this->south;
}

$Spring* SpringLayout$Constraints::getHorizontalCenter() {
	$useLocalCurrentObjectStackCache();
	if (this->horizontalCenter == nullptr) {
		$var($Spring, var$0, getX());
		$set(this, horizontalCenter, sum(var$0, $(scale($(getWidth()), 0.5f))));
	}
	return this->horizontalCenter;
}

void SpringLayout$Constraints::setHorizontalCenter($Spring* horizontalCenter) {
	$set(this, horizontalCenter, horizontalCenter);
	pushConstraint("HorizontalCenter"_s, horizontalCenter, true);
}

$Spring* SpringLayout$Constraints::getVerticalCenter() {
	$useLocalCurrentObjectStackCache();
	if (this->verticalCenter == nullptr) {
		$var($Spring, var$0, getY());
		$set(this, verticalCenter, sum(var$0, $(scale($(getHeight()), 0.5f))));
	}
	return this->verticalCenter;
}

void SpringLayout$Constraints::setVerticalCenter($Spring* verticalCenter) {
	$set(this, verticalCenter, verticalCenter);
	pushConstraint("VerticalCenter"_s, verticalCenter, false);
}

$Spring* SpringLayout$Constraints::getBaseline() {
	$useLocalCurrentObjectStackCache();
	if (this->baseline == nullptr) {
		$var($Spring, var$0, getY());
		$set(this, baseline, sum(var$0, $(heightToRelativeBaseline($(getHeight())))));
	}
	return this->baseline;
}

void SpringLayout$Constraints::setBaseline($Spring* baseline) {
	$set(this, baseline, baseline);
	pushConstraint("Baseline"_s, baseline, false);
}

void SpringLayout$Constraints::setConstraint($String* edgeName$renamed, $Spring* s) {
	$var($String, edgeName, edgeName$renamed);
	$assign(edgeName, $nc(edgeName)->intern());
	if (edgeName == "West"_s) {
		setX(s);
	} else if (edgeName == "North"_s) {
		setY(s);
	} else if (edgeName == "East"_s) {
		setEast(s);
	} else if (edgeName == "South"_s) {
		setSouth(s);
	} else if (edgeName == "HorizontalCenter"_s) {
		setHorizontalCenter(s);
	} else if (edgeName == "Width"_s) {
		setWidth(s);
	} else if (edgeName == "Height"_s) {
		setHeight(s);
	} else if (edgeName == "VerticalCenter"_s) {
		setVerticalCenter(s);
	} else if (edgeName == "Baseline"_s) {
		setBaseline(s);
	}
}

$Spring* SpringLayout$Constraints::getConstraint($String* edgeName$renamed) {
	$var($String, edgeName, edgeName$renamed);
	$assign(edgeName, $nc(edgeName)->intern());
	return (edgeName == "West"_s) ? getX() : (edgeName == "North"_s) ? getY() : (edgeName == "East"_s) ? getEast() : (edgeName == "South"_s) ? getSouth() : (edgeName == "Width"_s) ? getWidth() : (edgeName == "Height"_s) ? getHeight() : (edgeName == "HorizontalCenter"_s) ? getHorizontalCenter() : (edgeName == "VerticalCenter"_s) ? getVerticalCenter() : (edgeName == "Baseline"_s) ? getBaseline() : ($Spring*)nullptr;
}

void SpringLayout$Constraints::reset() {
	$useLocalCurrentObjectStackCache();
	$var($SpringArray, allSprings, $new($SpringArray, {
		this->x,
		this->y,
		this->width,
		this->height,
		this->east,
		this->south,
		this->horizontalCenter,
		this->verticalCenter,
		this->baseline
	}));
	{
		$var($SpringArray, arr$, allSprings);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Spring, s, arr$->get(i$));
			{
				if (s != nullptr) {
					s->setValue($Spring::UNSET);
				}
			}
		}
	}
}

SpringLayout$Constraints::SpringLayout$Constraints() {
}

$Class* SpringLayout$Constraints::load$($String* name, bool initialize) {
	$loadClass(SpringLayout$Constraints, name, initialize, &_SpringLayout$Constraints_ClassInfo_, allocate$SpringLayout$Constraints);
	return class$;
}

$Class* SpringLayout$Constraints::class$ = nullptr;

	} // swing
} // javax