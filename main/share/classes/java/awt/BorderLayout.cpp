#include <java/awt/BorderLayout.h>

#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager2.h>
#include <java/lang/Math.h>
#include <jcpp.h>

#undef AFTER_LAST_LINE
#undef AFTER_LINE_ENDS
#undef BEFORE_FIRST_LINE
#undef BEFORE_LINE_BEGINS
#undef CENTER
#undef EAST
#undef LINE_END
#undef LINE_START
#undef MAX_VALUE
#undef NORTH
#undef PAGE_END
#undef PAGE_START
#undef SOUTH
#undef WEST

using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Insets = ::java::awt::Insets;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$CompoundAttribute _BorderLayout_MethodAnnotations_addLayoutComponent3[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _BorderLayout_FieldInfo_[] = {
	{"hgap", "I", nullptr, 0, $field(BorderLayout, hgap)},
	{"vgap", "I", nullptr, 0, $field(BorderLayout, vgap)},
	{"north", "Ljava/awt/Component;", nullptr, 0, $field(BorderLayout, north)},
	{"west", "Ljava/awt/Component;", nullptr, 0, $field(BorderLayout, west)},
	{"east", "Ljava/awt/Component;", nullptr, 0, $field(BorderLayout, east)},
	{"south", "Ljava/awt/Component;", nullptr, 0, $field(BorderLayout, south)},
	{"center", "Ljava/awt/Component;", nullptr, 0, $field(BorderLayout, center)},
	{"firstLine", "Ljava/awt/Component;", nullptr, 0, $field(BorderLayout, firstLine)},
	{"lastLine", "Ljava/awt/Component;", nullptr, 0, $field(BorderLayout, lastLine)},
	{"firstItem", "Ljava/awt/Component;", nullptr, 0, $field(BorderLayout, firstItem)},
	{"lastItem", "Ljava/awt/Component;", nullptr, 0, $field(BorderLayout, lastItem)},
	{"NORTH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BorderLayout, NORTH)},
	{"SOUTH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BorderLayout, SOUTH)},
	{"EAST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BorderLayout, EAST)},
	{"WEST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BorderLayout, WEST)},
	{"CENTER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BorderLayout, CENTER)},
	{"BEFORE_FIRST_LINE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BorderLayout, BEFORE_FIRST_LINE)},
	{"AFTER_LAST_LINE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BorderLayout, AFTER_LAST_LINE)},
	{"BEFORE_LINE_BEGINS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BorderLayout, BEFORE_LINE_BEGINS)},
	{"AFTER_LINE_ENDS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BorderLayout, AFTER_LINE_ENDS)},
	{"PAGE_START", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BorderLayout, PAGE_START)},
	{"PAGE_END", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BorderLayout, PAGE_END)},
	{"LINE_START", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BorderLayout, LINE_START)},
	{"LINE_END", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BorderLayout, LINE_END)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BorderLayout, serialVersionUID)},
	{}
};

$MethodInfo _BorderLayout_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BorderLayout::*)()>(&BorderLayout::init$))},
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(BorderLayout::*)(int32_t,int32_t)>(&BorderLayout::init$))},
	{"addLayoutComponent", "(Ljava/awt/Component;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"addLayoutComponent", "(Ljava/lang/String;Ljava/awt/Component;)V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _BorderLayout_MethodAnnotations_addLayoutComponent3},
	{"getChild", "(Ljava/lang/String;Z)Ljava/awt/Component;", nullptr, $PRIVATE, $method(static_cast<$Component*(BorderLayout::*)($String*,bool)>(&BorderLayout::getChild))},
	{"getConstraints", "(Ljava/awt/Component;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getHgap", "()I", nullptr, $PUBLIC},
	{"getLayoutAlignmentX", "(Ljava/awt/Container;)F", nullptr, $PUBLIC},
	{"getLayoutAlignmentY", "(Ljava/awt/Container;)F", nullptr, $PUBLIC},
	{"getLayoutComponent", "(Ljava/lang/Object;)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getLayoutComponent", "(Ljava/awt/Container;Ljava/lang/Object;)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getVgap", "()I", nullptr, $PUBLIC},
	{"invalidateLayout", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"maximumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"minimumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"preferredLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"removeLayoutComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"setHgap", "(I)V", nullptr, $PUBLIC},
	{"setVgap", "(I)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _BorderLayout_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.BorderLayout",
	"java.lang.Object",
	"java.awt.LayoutManager2,java.io.Serializable",
	_BorderLayout_FieldInfo_,
	_BorderLayout_MethodInfo_
};

$Object* allocate$BorderLayout($Class* clazz) {
	return $of($alloc(BorderLayout));
}

int32_t BorderLayout::hashCode() {
	 return this->$LayoutManager2::hashCode();
}

bool BorderLayout::equals(Object$* arg0) {
	 return this->$LayoutManager2::equals(arg0);
}

$Object* BorderLayout::clone() {
	 return this->$LayoutManager2::clone();
}

void BorderLayout::finalize() {
	this->$LayoutManager2::finalize();
}

$String* BorderLayout::NORTH = nullptr;
$String* BorderLayout::SOUTH = nullptr;
$String* BorderLayout::EAST = nullptr;
$String* BorderLayout::WEST = nullptr;
$String* BorderLayout::CENTER = nullptr;
$String* BorderLayout::BEFORE_FIRST_LINE = nullptr;
$String* BorderLayout::AFTER_LAST_LINE = nullptr;
$String* BorderLayout::BEFORE_LINE_BEGINS = nullptr;
$String* BorderLayout::AFTER_LINE_ENDS = nullptr;
$String* BorderLayout::PAGE_START = nullptr;
$String* BorderLayout::PAGE_END = nullptr;
$String* BorderLayout::LINE_START = nullptr;
$String* BorderLayout::LINE_END = nullptr;

void BorderLayout::init$() {
	BorderLayout::init$(0, 0);
}

void BorderLayout::init$(int32_t hgap, int32_t vgap) {
	this->hgap = hgap;
	this->vgap = vgap;
}

int32_t BorderLayout::getHgap() {
	return this->hgap;
}

void BorderLayout::setHgap(int32_t hgap) {
	this->hgap = hgap;
}

int32_t BorderLayout::getVgap() {
	return this->vgap;
}

void BorderLayout::setVgap(int32_t vgap) {
	this->vgap = vgap;
}

void BorderLayout::addLayoutComponent($Component* comp, Object$* constraints) {
	$synchronized($nc(comp)->getTreeLock()) {
		if ((constraints == nullptr) || ($instanceOf($String, constraints))) {
			addLayoutComponent($cast($String, constraints), comp);
		} else {
			$throwNew($IllegalArgumentException, "cannot add to layout: constraint must be a string (or null)"_s);
		}
	}
}

void BorderLayout::addLayoutComponent($String* name$renamed, $Component* comp) {
	$useLocalCurrentObjectStackCache();
	$var($String, name, name$renamed);
	$synchronized($nc(comp)->getTreeLock()) {
		if (name == nullptr) {
			$assign(name, "Center"_s);
		}
		if ("Center"_s->equals(name)) {
			$set(this, center, comp);
		} else if ("North"_s->equals(name)) {
			$set(this, north, comp);
		} else if ("South"_s->equals(name)) {
			$set(this, south, comp);
		} else if ("East"_s->equals(name)) {
			$set(this, east, comp);
		} else if ("West"_s->equals(name)) {
			$set(this, west, comp);
		} else if ($nc(BorderLayout::BEFORE_FIRST_LINE)->equals(name)) {
			$set(this, firstLine, comp);
		} else if ($nc(BorderLayout::AFTER_LAST_LINE)->equals(name)) {
			$set(this, lastLine, comp);
		} else if ($nc(BorderLayout::BEFORE_LINE_BEGINS)->equals(name)) {
			$set(this, firstItem, comp);
		} else if ($nc(BorderLayout::AFTER_LINE_ENDS)->equals(name)) {
			$set(this, lastItem, comp);
		} else {
			$throwNew($IllegalArgumentException, $$str({"cannot add to layout: unknown constraint: "_s, name}));
		}
	}
}

void BorderLayout::removeLayoutComponent($Component* comp) {
	$synchronized($nc(comp)->getTreeLock()) {
		if (comp == this->center) {
			$set(this, center, nullptr);
		} else if (comp == this->north) {
			$set(this, north, nullptr);
		} else if (comp == this->south) {
			$set(this, south, nullptr);
		} else if (comp == this->east) {
			$set(this, east, nullptr);
		} else if (comp == this->west) {
			$set(this, west, nullptr);
		}
		if (comp == this->firstLine) {
			$set(this, firstLine, nullptr);
		} else if (comp == this->lastLine) {
			$set(this, lastLine, nullptr);
		} else if (comp == this->firstItem) {
			$set(this, firstItem, nullptr);
		} else if (comp == this->lastItem) {
			$set(this, lastItem, nullptr);
		}
	}
}

$Component* BorderLayout::getLayoutComponent(Object$* constraints) {
	if ($nc(BorderLayout::CENTER)->equals(constraints)) {
		return this->center;
	} else if ($nc(BorderLayout::NORTH)->equals(constraints)) {
		return this->north;
	} else if ($nc(BorderLayout::SOUTH)->equals(constraints)) {
		return this->south;
	} else if ($nc(BorderLayout::WEST)->equals(constraints)) {
		return this->west;
	} else if ($nc(BorderLayout::EAST)->equals(constraints)) {
		return this->east;
	} else if ($nc(BorderLayout::PAGE_START)->equals(constraints)) {
		return this->firstLine;
	} else if ($nc(BorderLayout::PAGE_END)->equals(constraints)) {
		return this->lastLine;
	} else if ($nc(BorderLayout::LINE_START)->equals(constraints)) {
		return this->firstItem;
	} else if ($nc(BorderLayout::LINE_END)->equals(constraints)) {
		return this->lastItem;
	} else {
		$throwNew($IllegalArgumentException, $$str({"cannot get component: unknown constraint: "_s, constraints}));
	}
}

$Component* BorderLayout::getLayoutComponent($Container* target, Object$* constraints) {
	$useLocalCurrentObjectStackCache();
	bool ltr = $nc($($nc(target)->getComponentOrientation()))->isLeftToRight();
	$var($Component, result, nullptr);
	if ($nc(BorderLayout::NORTH)->equals(constraints)) {
		$assign(result, (this->firstLine != nullptr) ? this->firstLine : this->north);
	} else if ($nc(BorderLayout::SOUTH)->equals(constraints)) {
		$assign(result, (this->lastLine != nullptr) ? this->lastLine : this->south);
	} else if ($nc(BorderLayout::WEST)->equals(constraints)) {
		$assign(result, ltr ? this->firstItem : this->lastItem);
		if (result == nullptr) {
			$assign(result, this->west);
		}
	} else if ($nc(BorderLayout::EAST)->equals(constraints)) {
		$assign(result, ltr ? this->lastItem : this->firstItem);
		if (result == nullptr) {
			$assign(result, this->east);
		}
	} else if ($nc(BorderLayout::CENTER)->equals(constraints)) {
		$assign(result, this->center);
	} else {
		$throwNew($IllegalArgumentException, $$str({"cannot get component: invalid constraint: "_s, constraints}));
	}
	return result;
}

$Object* BorderLayout::getConstraints($Component* comp) {
	if (comp == nullptr) {
		return $of(nullptr);
	}
	if (comp == this->center) {
		return $of(BorderLayout::CENTER);
	} else if (comp == this->north) {
		return $of(BorderLayout::NORTH);
	} else if (comp == this->south) {
		return $of(BorderLayout::SOUTH);
	} else if (comp == this->west) {
		return $of(BorderLayout::WEST);
	} else if (comp == this->east) {
		return $of(BorderLayout::EAST);
	} else if (comp == this->firstLine) {
		return $of(BorderLayout::PAGE_START);
	} else if (comp == this->lastLine) {
		return $of(BorderLayout::PAGE_END);
	} else if (comp == this->firstItem) {
		return $of(BorderLayout::LINE_START);
	} else if (comp == this->lastItem) {
		return $of(BorderLayout::LINE_END);
	}
	return $of(nullptr);
}

$Dimension* BorderLayout::minimumLayoutSize($Container* target) {
	$useLocalCurrentObjectStackCache();
	$synchronized($nc(target)->getTreeLock()) {
		$var($Dimension, dim, $new($Dimension, 0, 0));
		bool ltr = $nc($(target->getComponentOrientation()))->isLeftToRight();
		$var($Component, c, nullptr);
		if (($assign(c, getChild(BorderLayout::EAST, ltr))) != nullptr) {
			$var($Dimension, d, $nc(c)->getMinimumSize());
			dim->width += $nc(d)->width + this->hgap;
			dim->height = $Math::max(d->height, dim->height);
		}
		if (($assign(c, getChild(BorderLayout::WEST, ltr))) != nullptr) {
			$var($Dimension, d, $nc(c)->getMinimumSize());
			dim->width += $nc(d)->width + this->hgap;
			dim->height = $Math::max(d->height, dim->height);
		}
		if (($assign(c, getChild(BorderLayout::CENTER, ltr))) != nullptr) {
			$var($Dimension, d, $nc(c)->getMinimumSize());
			dim->width += $nc(d)->width;
			dim->height = $Math::max(d->height, dim->height);
		}
		if (($assign(c, getChild(BorderLayout::NORTH, ltr))) != nullptr) {
			$var($Dimension, d, $nc(c)->getMinimumSize());
			dim->width = $Math::max($nc(d)->width, dim->width);
			dim->height += $nc(d)->height + this->vgap;
		}
		if (($assign(c, getChild(BorderLayout::SOUTH, ltr))) != nullptr) {
			$var($Dimension, d, $nc(c)->getMinimumSize());
			dim->width = $Math::max($nc(d)->width, dim->width);
			dim->height += $nc(d)->height + this->vgap;
		}
		$var($Insets, insets, target->getInsets());
		dim->width += $nc(insets)->left + insets->right;
		dim->height += insets->top + insets->bottom;
		return dim;
	}
}

$Dimension* BorderLayout::preferredLayoutSize($Container* target) {
	$useLocalCurrentObjectStackCache();
	$synchronized($nc(target)->getTreeLock()) {
		$var($Dimension, dim, $new($Dimension, 0, 0));
		bool ltr = $nc($(target->getComponentOrientation()))->isLeftToRight();
		$var($Component, c, nullptr);
		if (($assign(c, getChild(BorderLayout::EAST, ltr))) != nullptr) {
			$var($Dimension, d, $nc(c)->getPreferredSize());
			dim->width += $nc(d)->width + this->hgap;
			dim->height = $Math::max(d->height, dim->height);
		}
		if (($assign(c, getChild(BorderLayout::WEST, ltr))) != nullptr) {
			$var($Dimension, d, $nc(c)->getPreferredSize());
			dim->width += $nc(d)->width + this->hgap;
			dim->height = $Math::max(d->height, dim->height);
		}
		if (($assign(c, getChild(BorderLayout::CENTER, ltr))) != nullptr) {
			$var($Dimension, d, $nc(c)->getPreferredSize());
			dim->width += $nc(d)->width;
			dim->height = $Math::max(d->height, dim->height);
		}
		if (($assign(c, getChild(BorderLayout::NORTH, ltr))) != nullptr) {
			$var($Dimension, d, $nc(c)->getPreferredSize());
			dim->width = $Math::max($nc(d)->width, dim->width);
			dim->height += $nc(d)->height + this->vgap;
		}
		if (($assign(c, getChild(BorderLayout::SOUTH, ltr))) != nullptr) {
			$var($Dimension, d, $nc(c)->getPreferredSize());
			dim->width = $Math::max($nc(d)->width, dim->width);
			dim->height += $nc(d)->height + this->vgap;
		}
		$var($Insets, insets, target->getInsets());
		dim->width += $nc(insets)->left + insets->right;
		dim->height += insets->top + insets->bottom;
		return dim;
	}
}

$Dimension* BorderLayout::maximumLayoutSize($Container* target) {
	return $new($Dimension, $Integer::MAX_VALUE, $Integer::MAX_VALUE);
}

float BorderLayout::getLayoutAlignmentX($Container* parent) {
	return 0.5f;
}

float BorderLayout::getLayoutAlignmentY($Container* parent) {
	return 0.5f;
}

void BorderLayout::invalidateLayout($Container* target) {
}

void BorderLayout::layoutContainer($Container* target) {
	$useLocalCurrentObjectStackCache();
	$synchronized($nc(target)->getTreeLock()) {
		$var($Insets, insets, target->getInsets());
		int32_t top = $nc(insets)->top;
		int32_t bottom = target->height - insets->bottom;
		int32_t left = insets->left;
		int32_t right = target->width - insets->right;
		bool ltr = $nc($(target->getComponentOrientation()))->isLeftToRight();
		$var($Component, c, nullptr);
		if (($assign(c, getChild(BorderLayout::NORTH, ltr))) != nullptr) {
			$nc(c)->setSize(right - left, c->height);
			$var($Dimension, d, c->getPreferredSize());
			c->setBounds(left, top, right - left, $nc(d)->height);
			top += $nc(d)->height + this->vgap;
		}
		if (($assign(c, getChild(BorderLayout::SOUTH, ltr))) != nullptr) {
			$nc(c)->setSize(right - left, c->height);
			$var($Dimension, d, c->getPreferredSize());
			c->setBounds(left, bottom - $nc(d)->height, right - left, d->height);
			bottom -= $nc(d)->height + this->vgap;
		}
		if (($assign(c, getChild(BorderLayout::EAST, ltr))) != nullptr) {
			$nc(c)->setSize(c->width, bottom - top);
			$var($Dimension, d, c->getPreferredSize());
			c->setBounds(right - $nc(d)->width, top, d->width, bottom - top);
			right -= $nc(d)->width + this->hgap;
		}
		if (($assign(c, getChild(BorderLayout::WEST, ltr))) != nullptr) {
			$nc(c)->setSize(c->width, bottom - top);
			$var($Dimension, d, c->getPreferredSize());
			c->setBounds(left, top, $nc(d)->width, bottom - top);
			left += $nc(d)->width + this->hgap;
		}
		if (($assign(c, getChild(BorderLayout::CENTER, ltr))) != nullptr) {
			$nc(c)->setBounds(left, top, right - left, bottom - top);
		}
	}
}

$Component* BorderLayout::getChild($String* key, bool ltr) {
	$var($Component, result, nullptr);
	if (key == BorderLayout::NORTH) {
		$assign(result, (this->firstLine != nullptr) ? this->firstLine : this->north);
	} else if (key == BorderLayout::SOUTH) {
		$assign(result, (this->lastLine != nullptr) ? this->lastLine : this->south);
	} else if (key == BorderLayout::WEST) {
		$assign(result, ltr ? this->firstItem : this->lastItem);
		if (result == nullptr) {
			$assign(result, this->west);
		}
	} else if (key == BorderLayout::EAST) {
		$assign(result, ltr ? this->lastItem : this->firstItem);
		if (result == nullptr) {
			$assign(result, this->east);
		}
	} else if (key == BorderLayout::CENTER) {
		$assign(result, this->center);
	}
	if (result != nullptr && !result->visible) {
		$assign(result, nullptr);
	}
	return result;
}

$String* BorderLayout::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({$($of(this)->getClass()->getName()), "[hgap="_s, $$str(this->hgap), ",vgap="_s, $$str(this->vgap), "]"_s});
}

BorderLayout::BorderLayout() {
}

void clinit$BorderLayout($Class* class$) {
	$assignStatic(BorderLayout::NORTH, "North"_s);
	$assignStatic(BorderLayout::SOUTH, "South"_s);
	$assignStatic(BorderLayout::EAST, "East"_s);
	$assignStatic(BorderLayout::WEST, "West"_s);
	$assignStatic(BorderLayout::CENTER, "Center"_s);
	$assignStatic(BorderLayout::BEFORE_FIRST_LINE, "First"_s);
	$assignStatic(BorderLayout::AFTER_LAST_LINE, "Last"_s);
	$assignStatic(BorderLayout::BEFORE_LINE_BEGINS, "Before"_s);
	$assignStatic(BorderLayout::AFTER_LINE_ENDS, "After"_s);
	$assignStatic(BorderLayout::PAGE_START, BorderLayout::BEFORE_FIRST_LINE);
	$assignStatic(BorderLayout::PAGE_END, BorderLayout::AFTER_LAST_LINE);
	$assignStatic(BorderLayout::LINE_START, BorderLayout::BEFORE_LINE_BEGINS);
	$assignStatic(BorderLayout::LINE_END, BorderLayout::AFTER_LINE_ENDS);
}

$Class* BorderLayout::load$($String* name, bool initialize) {
	$loadClass(BorderLayout, name, initialize, &_BorderLayout_ClassInfo_, clinit$BorderLayout, allocate$BorderLayout);
	return class$;
}

$Class* BorderLayout::class$ = nullptr;

	} // awt
} // java