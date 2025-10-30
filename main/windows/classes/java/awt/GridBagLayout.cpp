#include <java/awt/GridBagLayout.h>

#include <java/awt/Component$BaselineResizeBehavior.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/GridBagConstraints.h>
#include <java/awt/GridBagLayout$1.h>
#include <java/awt/GridBagLayoutInfo.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/lang/Math.h>
#include <java/util/Arrays.h>
#include <java/util/Hashtable.h>
#include <jcpp.h>

#undef ABOVE_BASELINE
#undef ABOVE_BASELINE_LEADING
#undef ABOVE_BASELINE_TRAILING
#undef BASELINE
#undef BASELINE_LEADING
#undef BASELINE_TRAILING
#undef BELOW_BASELINE
#undef BELOW_BASELINE_LEADING
#undef BELOW_BASELINE_TRAILING
#undef BOTH
#undef CENTER
#undef CENTER_OFFSET
#undef CONSTANT_DESCENT
#undef EAST
#undef EMPIRICMULTIPLIER
#undef FIRST_LINE_END
#undef FIRST_LINE_START
#undef HORIZONTAL
#undef LAST_LINE_END
#undef LAST_LINE_START
#undef LINE_END
#undef LINE_START
#undef MAXGRIDSIZE
#undef MAX_VALUE
#undef MINSIZE
#undef NORTH
#undef NORTHEAST
#undef NORTHWEST
#undef OTHER
#undef PAGE_END
#undef PAGE_START
#undef PREFERREDSIZE
#undef SOUTH
#undef SOUTHEAST
#undef SOUTHWEST
#undef VERTICAL
#undef WEST

using $ComponentArray = $Array<::java::awt::Component>;
using $doubleArray2 = $Array<double, 2>;
using $intArray2 = $Array<int32_t, 2>;
using $Component = ::java::awt::Component;
using $Component$BaselineResizeBehavior = ::java::awt::Component$BaselineResizeBehavior;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $GridBagConstraints = ::java::awt::GridBagConstraints;
using $GridBagLayout$1 = ::java::awt::GridBagLayout$1;
using $GridBagLayoutInfo = ::java::awt::GridBagLayoutInfo;
using $Insets = ::java::awt::Insets;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $Hashtable = ::java::util::Hashtable;

namespace java {
	namespace awt {

$FieldInfo _GridBagLayout_FieldInfo_[] = {
	{"EMPIRICMULTIPLIER", "I", nullptr, $STATIC | $FINAL, $constField(GridBagLayout, EMPIRICMULTIPLIER)},
	{"MAXGRIDSIZE", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(GridBagLayout, MAXGRIDSIZE)},
	{"MINSIZE", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(GridBagLayout, MINSIZE)},
	{"PREFERREDSIZE", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(GridBagLayout, PREFERREDSIZE)},
	{"comptable", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/awt/Component;Ljava/awt/GridBagConstraints;>;", $PROTECTED, $field(GridBagLayout, comptable)},
	{"defaultConstraints", "Ljava/awt/GridBagConstraints;", nullptr, $PROTECTED, $field(GridBagLayout, defaultConstraints)},
	{"layoutInfo", "Ljava/awt/GridBagLayoutInfo;", nullptr, $PROTECTED, $field(GridBagLayout, layoutInfo)},
	{"columnWidths", "[I", nullptr, $PUBLIC, $field(GridBagLayout, columnWidths)},
	{"rowHeights", "[I", nullptr, $PUBLIC, $field(GridBagLayout, rowHeights)},
	{"columnWeights", "[D", nullptr, $PUBLIC, $field(GridBagLayout, columnWeights)},
	{"rowWeights", "[D", nullptr, $PUBLIC, $field(GridBagLayout, rowWeights)},
	{"componentAdjusting", "Ljava/awt/Component;", nullptr, $PRIVATE, $field(GridBagLayout, componentAdjusting)},
	{"rightToLeft", "Z", nullptr, $TRANSIENT, $field(GridBagLayout, rightToLeft)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GridBagLayout, serialVersionUID)},
	{}
};

$MethodInfo _GridBagLayout_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GridBagLayout::*)()>(&GridBagLayout::init$))},
	{"AdjustForGravity", "(Ljava/awt/GridBagConstraints;Ljava/awt/Rectangle;)V", nullptr, $PROTECTED},
	{"ArrangeGrid", "(Ljava/awt/Container;)V", nullptr, $PROTECTED},
	{"GetLayoutInfo", "(Ljava/awt/Container;I)Ljava/awt/GridBagLayoutInfo;", nullptr, $PROTECTED},
	{"GetMinSize", "(Ljava/awt/Container;Ljava/awt/GridBagLayoutInfo;)Ljava/awt/Dimension;", nullptr, $PROTECTED},
	{"addLayoutComponent", "(Ljava/lang/String;Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"addLayoutComponent", "(Ljava/awt/Component;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"adjustForGravity", "(Ljava/awt/GridBagConstraints;Ljava/awt/Rectangle;)V", nullptr, $PROTECTED},
	{"alignAboveBaseline", "(Ljava/awt/GridBagConstraints;Ljava/awt/Rectangle;II)V", nullptr, $PRIVATE, $method(static_cast<void(GridBagLayout::*)($GridBagConstraints*,$Rectangle*,int32_t,int32_t)>(&GridBagLayout::alignAboveBaseline))},
	{"alignBelowBaseline", "(Ljava/awt/GridBagConstraints;Ljava/awt/Rectangle;II)V", nullptr, $PRIVATE, $method(static_cast<void(GridBagLayout::*)($GridBagConstraints*,$Rectangle*,int32_t,int32_t)>(&GridBagLayout::alignBelowBaseline))},
	{"alignOnBaseline", "(Ljava/awt/GridBagConstraints;Ljava/awt/Rectangle;II)V", nullptr, $PRIVATE, $method(static_cast<void(GridBagLayout::*)($GridBagConstraints*,$Rectangle*,int32_t,int32_t)>(&GridBagLayout::alignOnBaseline))},
	{"arrangeGrid", "(Ljava/awt/Container;)V", nullptr, $PROTECTED},
	{"calculateBaseline", "(Ljava/awt/Component;Ljava/awt/GridBagConstraints;Ljava/awt/Dimension;)Z", nullptr, $PRIVATE, $method(static_cast<bool(GridBagLayout::*)($Component*,$GridBagConstraints*,$Dimension*)>(&GridBagLayout::calculateBaseline))},
	{"centerVertically", "(Ljava/awt/GridBagConstraints;Ljava/awt/Rectangle;I)V", nullptr, $PRIVATE, $method(static_cast<void(GridBagLayout::*)($GridBagConstraints*,$Rectangle*,int32_t)>(&GridBagLayout::centerVertically))},
	{"getConstraints", "(Ljava/awt/Component;)Ljava/awt/GridBagConstraints;", nullptr, $PUBLIC},
	{"getLayoutAlignmentX", "(Ljava/awt/Container;)F", nullptr, $PUBLIC},
	{"getLayoutAlignmentY", "(Ljava/awt/Container;)F", nullptr, $PUBLIC},
	{"getLayoutDimensions", "()[[I", nullptr, $PUBLIC},
	{"getLayoutInfo", "(Ljava/awt/Container;I)Ljava/awt/GridBagLayoutInfo;", nullptr, $PROTECTED},
	{"getLayoutOrigin", "()Ljava/awt/Point;", nullptr, $PUBLIC},
	{"getLayoutWeights", "()[[D", nullptr, $PUBLIC},
	{"getMinSize", "(Ljava/awt/Container;Ljava/awt/GridBagLayoutInfo;)Ljava/awt/Dimension;", nullptr, $PROTECTED},
	{"invalidateLayout", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"location", "(II)Ljava/awt/Point;", nullptr, $PUBLIC},
	{"lookupConstraints", "(Ljava/awt/Component;)Ljava/awt/GridBagConstraints;", nullptr, $PROTECTED},
	{"maximumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"minimumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"preInitMaximumArraySizes", "(Ljava/awt/Container;)[J", nullptr, $PRIVATE, $method(static_cast<$longs*(GridBagLayout::*)($Container*)>(&GridBagLayout::preInitMaximumArraySizes))},
	{"preferredLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"removeConstraints", "(Ljava/awt/Component;)V", nullptr, $PRIVATE, $method(static_cast<void(GridBagLayout::*)($Component*)>(&GridBagLayout::removeConstraints))},
	{"removeLayoutComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"setConstraints", "(Ljava/awt/Component;Ljava/awt/GridBagConstraints;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GridBagLayout_InnerClassesInfo_[] = {
	{"java.awt.GridBagLayout$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _GridBagLayout_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.GridBagLayout",
	"java.lang.Object",
	"java.awt.LayoutManager2,java.io.Serializable",
	_GridBagLayout_FieldInfo_,
	_GridBagLayout_MethodInfo_,
	nullptr,
	nullptr,
	_GridBagLayout_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.GridBagLayout$1"
};

$Object* allocate$GridBagLayout($Class* clazz) {
	return $of($alloc(GridBagLayout));
}

int32_t GridBagLayout::hashCode() {
	 return this->$LayoutManager2::hashCode();
}

bool GridBagLayout::equals(Object$* arg0) {
	 return this->$LayoutManager2::equals(arg0);
}

$Object* GridBagLayout::clone() {
	 return this->$LayoutManager2::clone();
}

void GridBagLayout::finalize() {
	this->$LayoutManager2::finalize();
}

void GridBagLayout::init$() {
	this->rightToLeft = false;
	$set(this, comptable, $new($Hashtable));
	$set(this, defaultConstraints, $new($GridBagConstraints));
}

void GridBagLayout::setConstraints($Component* comp, $GridBagConstraints* constraints) {
	$nc(this->comptable)->put(comp, $cast($GridBagConstraints, $($nc(constraints)->clone())));
}

$GridBagConstraints* GridBagLayout::getConstraints($Component* comp) {
	$var($GridBagConstraints, constraints, $cast($GridBagConstraints, $nc(this->comptable)->get(comp)));
	if (constraints == nullptr) {
		setConstraints(comp, this->defaultConstraints);
		$assign(constraints, $cast($GridBagConstraints, $nc(this->comptable)->get(comp)));
	}
	return $cast($GridBagConstraints, $nc(constraints)->clone());
}

$GridBagConstraints* GridBagLayout::lookupConstraints($Component* comp) {
	$var($GridBagConstraints, constraints, $cast($GridBagConstraints, $nc(this->comptable)->get(comp)));
	if (constraints == nullptr) {
		setConstraints(comp, this->defaultConstraints);
		$assign(constraints, $cast($GridBagConstraints, $nc(this->comptable)->get(comp)));
	}
	return constraints;
}

void GridBagLayout::removeConstraints($Component* comp) {
	$nc(this->comptable)->remove(comp);
}

$Point* GridBagLayout::getLayoutOrigin() {
	$var($Point, origin, $new($Point, 0, 0));
	if (this->layoutInfo != nullptr) {
		origin->x = $nc(this->layoutInfo)->startx;
		origin->y = $nc(this->layoutInfo)->starty;
	}
	return origin;
}

$intArray2* GridBagLayout::getLayoutDimensions() {
	$useLocalCurrentObjectStackCache();
	if (this->layoutInfo == nullptr) {
		return $new($intArray2, 2, 0);
	}
	$var($intArray2, dim, $new($intArray2, 2));
	dim->set(0, $$new($ints, $nc(this->layoutInfo)->width));
	dim->set(1, $$new($ints, $nc(this->layoutInfo)->height));
	$System::arraycopy($nc(this->layoutInfo)->minWidth, 0, dim->get(0), 0, $nc(this->layoutInfo)->width);
	$System::arraycopy($nc(this->layoutInfo)->minHeight, 0, dim->get(1), 0, $nc(this->layoutInfo)->height);
	return dim;
}

$doubleArray2* GridBagLayout::getLayoutWeights() {
	$useLocalCurrentObjectStackCache();
	if (this->layoutInfo == nullptr) {
		return $new($doubleArray2, 2, 0);
	}
	$var($doubleArray2, weights, $new($doubleArray2, 2));
	weights->set(0, $$new($doubles, $nc(this->layoutInfo)->width));
	weights->set(1, $$new($doubles, $nc(this->layoutInfo)->height));
	$System::arraycopy($nc(this->layoutInfo)->weightX, 0, weights->get(0), 0, $nc(this->layoutInfo)->width);
	$System::arraycopy($nc(this->layoutInfo)->weightY, 0, weights->get(1), 0, $nc(this->layoutInfo)->height);
	return weights;
}

$Point* GridBagLayout::location(int32_t x, int32_t y) {
	$var($Point, loc, $new($Point, 0, 0));
	int32_t i = 0;
	int32_t d = 0;
	if (this->layoutInfo == nullptr) {
		return loc;
	}
	d = $nc(this->layoutInfo)->startx;
	if (!this->rightToLeft) {
		for (i = 0; i < $nc(this->layoutInfo)->width; ++i) {
			d += $nc($nc(this->layoutInfo)->minWidth)->get(i);
			if (d > x) {
				break;
			}
		}
	} else {
		for (i = $nc(this->layoutInfo)->width - 1; i >= 0; --i) {
			if (d > x) {
				break;
			}
			d += $nc($nc(this->layoutInfo)->minWidth)->get(i);
		}
		++i;
	}
	loc->x = i;
	d = $nc(this->layoutInfo)->starty;
	for (i = 0; i < $nc(this->layoutInfo)->height; ++i) {
		d += $nc($nc(this->layoutInfo)->minHeight)->get(i);
		if (d > y) {
			break;
		}
	}
	loc->y = i;
	return loc;
}

void GridBagLayout::addLayoutComponent($String* name, $Component* comp) {
}

void GridBagLayout::addLayoutComponent($Component* comp, Object$* constraints) {
	if ($instanceOf($GridBagConstraints, constraints)) {
		setConstraints(comp, $cast($GridBagConstraints, constraints));
	} else if (constraints != nullptr) {
		$throwNew($IllegalArgumentException, "cannot add to layout: constraints must be a GridBagConstraint"_s);
	}
}

void GridBagLayout::removeLayoutComponent($Component* comp) {
	removeConstraints(comp);
}

$Dimension* GridBagLayout::preferredLayoutSize($Container* parent) {
	$var($GridBagLayoutInfo, info, getLayoutInfo(parent, GridBagLayout::PREFERREDSIZE));
	return getMinSize(parent, info);
}

$Dimension* GridBagLayout::minimumLayoutSize($Container* parent) {
	$var($GridBagLayoutInfo, info, getLayoutInfo(parent, GridBagLayout::MINSIZE));
	return getMinSize(parent, info);
}

$Dimension* GridBagLayout::maximumLayoutSize($Container* target) {
	return $new($Dimension, $Integer::MAX_VALUE, $Integer::MAX_VALUE);
}

float GridBagLayout::getLayoutAlignmentX($Container* parent) {
	return 0.5f;
}

float GridBagLayout::getLayoutAlignmentY($Container* parent) {
	return 0.5f;
}

void GridBagLayout::invalidateLayout($Container* target) {
}

void GridBagLayout::layoutContainer($Container* parent) {
	arrangeGrid(parent);
}

$String* GridBagLayout::toString() {
	return $of(this)->getClass()->getName();
}

$GridBagLayoutInfo* GridBagLayout::getLayoutInfo($Container* parent, int32_t sizeflag) {
	return GetLayoutInfo(parent, sizeflag);
}

$longs* GridBagLayout::preInitMaximumArraySizes($Container* parent) {
	$useLocalCurrentObjectStackCache();
	$var($ComponentArray, components, $nc(parent)->getComponents());
	$var($Component, comp, nullptr);
	$var($GridBagConstraints, constraints, nullptr);
	int32_t curX = 0;
	int32_t curY = 0;
	int32_t curWidth = 0;
	int32_t curHeight = 0;
	int32_t preMaximumArrayXIndex = 0;
	int32_t preMaximumArrayYIndex = 0;
	$var($longs, returnArray, $new($longs, 2));
	for (int32_t compId = 0; compId < $nc(components)->length; ++compId) {
		$assign(comp, components->get(compId));
		if (!$nc(comp)->isVisible()) {
			continue;
		}
		$assign(constraints, lookupConstraints(comp));
		curX = $nc(constraints)->gridx;
		curY = constraints->gridy;
		curWidth = constraints->gridwidth;
		curHeight = constraints->gridheight;
		if (curX < 0) {
			curX = ++preMaximumArrayYIndex;
		}
		if (curY < 0) {
			curY = ++preMaximumArrayXIndex;
		}
		if (curWidth <= 0) {
			curWidth = 1;
		}
		if (curHeight <= 0) {
			curHeight = 1;
		}
		preMaximumArrayXIndex = $Math::max(curY + curHeight, preMaximumArrayXIndex);
		preMaximumArrayYIndex = $Math::max(curX + curWidth, preMaximumArrayYIndex);
	}
	returnArray->set(0, preMaximumArrayXIndex);
	returnArray->set(1, preMaximumArrayYIndex);
	return returnArray;
}

$GridBagLayoutInfo* GridBagLayout::GetLayoutInfo($Container* parent, int32_t sizeflag) {
	$useLocalCurrentObjectStackCache();
	$synchronized($nc(parent)->getTreeLock()) {
		$var($GridBagLayoutInfo, r, nullptr);
		$var($Component, comp, nullptr);
		$var($GridBagConstraints, constraints, nullptr);
		$var($Dimension, d, nullptr);
		$var($ComponentArray, components, parent->getComponents());
		int32_t layoutWidth = 0;
		int32_t layoutHeight = 0;
		$var($ints, xMaxArray, nullptr);
		$var($ints, yMaxArray, nullptr);
		int32_t compindex = 0;
		int32_t i = 0;
		int32_t k = 0;
		int32_t px = 0;
		int32_t py = 0;
		int32_t pixels_diff = 0;
		int32_t nextSize = 0;
		int32_t curX = 0;
		int32_t curY = 0;
		int32_t curWidth = 1;
		int32_t curHeight = 1;
		int32_t curRow = 0;
		int32_t curCol = 0;
		double weight_diff = 0.0;
		double weight = 0.0;
		int32_t maximumArrayXIndex = 0;
		int32_t maximumArrayYIndex = 0;
		int32_t anchor = 0;
		layoutWidth = (layoutHeight = 0);
		curRow = (curCol = -1);
		$var($longs, arraySizes, preInitMaximumArraySizes(parent));
		maximumArrayXIndex = (GridBagLayout::EMPIRICMULTIPLIER * $nc(arraySizes)->get(0) > $Integer::MAX_VALUE) ? $Integer::MAX_VALUE : GridBagLayout::EMPIRICMULTIPLIER * (int32_t)$nc(arraySizes)->get(0);
		maximumArrayYIndex = (GridBagLayout::EMPIRICMULTIPLIER * arraySizes->get(1) > $Integer::MAX_VALUE) ? $Integer::MAX_VALUE : GridBagLayout::EMPIRICMULTIPLIER * (int32_t)arraySizes->get(1);
		if (this->rowHeights != nullptr) {
			maximumArrayXIndex = $Math::max(maximumArrayXIndex, $nc(this->rowHeights)->length);
		}
		if (this->columnWidths != nullptr) {
			maximumArrayYIndex = $Math::max(maximumArrayYIndex, $nc(this->columnWidths)->length);
		}
		$assign(xMaxArray, $new($ints, maximumArrayXIndex));
		$assign(yMaxArray, $new($ints, maximumArrayYIndex));
		bool hasBaseline = false;
		for (compindex = 0; compindex < $nc(components)->length; ++compindex) {
			$assign(comp, components->get(compindex));
			if (!$nc(comp)->isVisible()) {
				continue;
			}
			$assign(constraints, lookupConstraints(comp));
			curX = $nc(constraints)->gridx;
			curY = constraints->gridy;
			curWidth = constraints->gridwidth;
			if (curWidth <= 0) {
				curWidth = 1;
			}
			curHeight = constraints->gridheight;
			if (curHeight <= 0) {
				curHeight = 1;
			}
			if (curX < 0 && curY < 0) {
				if (curRow >= 0) {
					curY = curRow;
				} else if (curCol >= 0) {
					curX = curCol;
				} else {
					curY = 0;
				}
			}
			if (curX < 0) {
				px = 0;
				for (i = curY; i < (curY + curHeight); ++i) {
					px = $Math::max(px, xMaxArray->get(i));
				}
				curX = px - curX - 1;
				if (curX < 0) {
					curX = 0;
				}
			} else if (curY < 0) {
				py = 0;
				for (i = curX; i < (curX + curWidth); ++i) {
					py = $Math::max(py, yMaxArray->get(i));
				}
				curY = py - curY - 1;
				if (curY < 0) {
					curY = 0;
				}
			}
			px = curX + curWidth;
			if (layoutWidth < px) {
				layoutWidth = px;
			}
			py = curY + curHeight;
			if (layoutHeight < py) {
				layoutHeight = py;
			}
			for (i = curX; i < (curX + curWidth); ++i) {
				yMaxArray->set(i, py);
			}
			for (i = curY; i < (curY + curHeight); ++i) {
				xMaxArray->set(i, px);
			}
			if (sizeflag == GridBagLayout::PREFERREDSIZE) {
				$assign(d, $nc(comp)->getPreferredSize());
			} else {
				$assign(d, $nc(comp)->getMinimumSize());
			}
			constraints->minWidth = $nc(d)->width;
			constraints->minHeight = d->height;
			if (calculateBaseline(comp, constraints, d)) {
				hasBaseline = true;
			}
			if (constraints->gridheight == 0 && constraints->gridwidth == 0) {
				curRow = (curCol = -1);
			}
			if (constraints->gridheight == 0 && curRow < 0) {
				curCol = curX + curWidth;
			} else if (constraints->gridwidth == 0 && curCol < 0) {
				curRow = curY + curHeight;
			}
		}
		if (this->columnWidths != nullptr && layoutWidth < $nc(this->columnWidths)->length) {
			layoutWidth = $nc(this->columnWidths)->length;
		}
		if (this->rowHeights != nullptr && layoutHeight < $nc(this->rowHeights)->length) {
			layoutHeight = $nc(this->rowHeights)->length;
		}
		$assign(r, $new($GridBagLayoutInfo, layoutWidth, layoutHeight));
		curRow = (curCol = -1);
		$Arrays::fill(xMaxArray, 0);
		$Arrays::fill(yMaxArray, 0);
		$var($ints, maxAscent, nullptr);
		$var($ints, maxDescent, nullptr);
		$var($shorts, baselineType, nullptr);
		if (hasBaseline) {
			$set(r, maxAscent, ($assign(maxAscent, $new($ints, layoutHeight))));
			$set(r, maxDescent, ($assign(maxDescent, $new($ints, layoutHeight))));
			$set(r, baselineType, ($assign(baselineType, $new($shorts, layoutHeight))));
			r->hasBaseline$ = true;
		}
		for (compindex = 0; compindex < $nc(components)->length; ++compindex) {
			$assign(comp, components->get(compindex));
			if (!$nc(comp)->isVisible()) {
				continue;
			}
			$assign(constraints, lookupConstraints(comp));
			curX = $nc(constraints)->gridx;
			curY = constraints->gridy;
			curWidth = constraints->gridwidth;
			curHeight = constraints->gridheight;
			if (curX < 0 && curY < 0) {
				if (curRow >= 0) {
					curY = curRow;
				} else if (curCol >= 0) {
					curX = curCol;
				} else {
					curY = 0;
				}
			}
			if (curX < 0) {
				if (curHeight <= 0) {
					curHeight += r->height - curY;
					if (curHeight < 1) {
						curHeight = 1;
					}
				}
				px = 0;
				for (i = curY; i < (curY + curHeight); ++i) {
					px = $Math::max(px, xMaxArray->get(i));
				}
				curX = px - curX - 1;
				if (curX < 0) {
					curX = 0;
				}
			} else if (curY < 0) {
				if (curWidth <= 0) {
					curWidth += r->width - curX;
					if (curWidth < 1) {
						curWidth = 1;
					}
				}
				py = 0;
				for (i = curX; i < (curX + curWidth); ++i) {
					py = $Math::max(py, yMaxArray->get(i));
				}
				curY = py - curY - 1;
				if (curY < 0) {
					curY = 0;
				}
			}
			if (curWidth <= 0) {
				curWidth += r->width - curX;
				if (curWidth < 1) {
					curWidth = 1;
				}
			}
			if (curHeight <= 0) {
				curHeight += r->height - curY;
				if (curHeight < 1) {
					curHeight = 1;
				}
			}
			px = curX + curWidth;
			py = curY + curHeight;
			for (i = curX; i < (curX + curWidth); ++i) {
				yMaxArray->set(i, py);
			}
			for (i = curY; i < (curY + curHeight); ++i) {
				xMaxArray->set(i, px);
			}
			if (constraints->gridheight == 0 && constraints->gridwidth == 0) {
				curRow = (curCol = -1);
			}
			if (constraints->gridheight == 0 && curRow < 0) {
				curCol = curX + curWidth;
			} else if (constraints->gridwidth == 0 && curCol < 0) {
				curRow = curY + curHeight;
			}
			constraints->tempX = curX;
			constraints->tempY = curY;
			constraints->tempWidth = curWidth;
			constraints->tempHeight = curHeight;
			anchor = constraints->anchor;
			if (hasBaseline) {
				switch (anchor) {
				case $GridBagConstraints::BASELINE:
					{}
				case $GridBagConstraints::BASELINE_LEADING:
					{}
				case $GridBagConstraints::BASELINE_TRAILING:
					{
						if (constraints->ascent >= 0) {
							if (curHeight == 1) {
								$nc(maxAscent)->set(curY, $Math::max(maxAscent->get(curY), constraints->ascent));
								$nc(maxDescent)->set(curY, $Math::max(maxDescent->get(curY), constraints->descent));
							} else {
								$init($Component$BaselineResizeBehavior);
								if (constraints->baselineResizeBehavior == $Component$BaselineResizeBehavior::CONSTANT_DESCENT) {
									$nc(maxDescent)->set(curY + curHeight - 1, $Math::max(maxDescent->get(curY + curHeight - 1), constraints->descent));
								} else {
									$nc(maxAscent)->set(curY, $Math::max(maxAscent->get(curY), constraints->ascent));
								}
							}
							$init($Component$BaselineResizeBehavior);
							if (constraints->baselineResizeBehavior == $Component$BaselineResizeBehavior::CONSTANT_DESCENT) {
								(*$nc(baselineType))[curY + curHeight - 1] |= ($sl(1, $nc(constraints->baselineResizeBehavior)->ordinal()));
							} else {
								(*$nc(baselineType))[curY] |= ($sl(1, $nc(constraints->baselineResizeBehavior)->ordinal()));
							}
						}
						break;
					}
				case $GridBagConstraints::ABOVE_BASELINE:
					{}
				case $GridBagConstraints::ABOVE_BASELINE_LEADING:
					{}
				case $GridBagConstraints::ABOVE_BASELINE_TRAILING:
					{
						pixels_diff = constraints->minHeight + $nc(constraints->insets)->top + constraints->ipady;
						$nc(maxAscent)->set(curY, $Math::max(maxAscent->get(curY), pixels_diff));
						$nc(maxDescent)->set(curY, $Math::max(maxDescent->get(curY), $nc(constraints->insets)->bottom));
						break;
					}
				case $GridBagConstraints::BELOW_BASELINE:
					{}
				case $GridBagConstraints::BELOW_BASELINE_LEADING:
					{}
				case $GridBagConstraints::BELOW_BASELINE_TRAILING:
					{
						pixels_diff = constraints->minHeight + $nc(constraints->insets)->bottom + constraints->ipady;
						$nc(maxDescent)->set(curY, $Math::max(maxDescent->get(curY), pixels_diff));
						$nc(maxAscent)->set(curY, $Math::max(maxAscent->get(curY), $nc(constraints->insets)->top));
						break;
					}
				}
			}
		}
		$set(r, weightX, $new($doubles, maximumArrayYIndex));
		$set(r, weightY, $new($doubles, maximumArrayXIndex));
		$set(r, minWidth, $new($ints, maximumArrayYIndex));
		$set(r, minHeight, $new($ints, maximumArrayXIndex));
		if (this->columnWidths != nullptr) {
			$System::arraycopy(this->columnWidths, 0, r->minWidth, 0, $nc(this->columnWidths)->length);
		}
		if (this->rowHeights != nullptr) {
			$System::arraycopy(this->rowHeights, 0, r->minHeight, 0, $nc(this->rowHeights)->length);
		}
		if (this->columnWeights != nullptr) {
			$System::arraycopy(this->columnWeights, 0, r->weightX, 0, $Math::min($nc(r->weightX)->length, $nc(this->columnWeights)->length));
		}
		if (this->rowWeights != nullptr) {
			$System::arraycopy(this->rowWeights, 0, r->weightY, 0, $Math::min($nc(r->weightY)->length, $nc(this->rowWeights)->length));
		}
		nextSize = $Integer::MAX_VALUE;
		for (i = 1; i != $Integer::MAX_VALUE; i = nextSize, nextSize = $Integer::MAX_VALUE) {
			for (compindex = 0; compindex < $nc(components)->length; ++compindex) {
				$assign(comp, components->get(compindex));
				if (!$nc(comp)->isVisible()) {
					continue;
				}
				$assign(constraints, lookupConstraints(comp));
				if ($nc(constraints)->tempWidth == i) {
					px = constraints->tempX + constraints->tempWidth;
					weight_diff = constraints->weightx;
					for (k = constraints->tempX; k < px; ++k) {
						weight_diff -= $nc(r->weightX)->get(k);
					}
					if (weight_diff > 0.0) {
						weight = 0.0;
						for (k = constraints->tempX; k < px; ++k) {
							weight += $nc(r->weightX)->get(k);
						}
						for (k = constraints->tempX; weight > 0.0 && k < px; ++k) {
							double wt = $nc(r->weightX)->get(k);
							double dx = (wt * weight_diff) / weight;
							(*$nc(r->weightX))[k] += dx;
							weight_diff -= dx;
							weight -= wt;
						}
						(*$nc(r->weightX))[px - 1] += weight_diff;
					}
					pixels_diff = constraints->minWidth + constraints->ipadx + $nc(constraints->insets)->left + $nc(constraints->insets)->right;
					for (k = constraints->tempX; k < px; ++k) {
						pixels_diff -= $nc(r->minWidth)->get(k);
					}
					if (pixels_diff > 0) {
						weight = 0.0;
						for (k = constraints->tempX; k < px; ++k) {
							weight += $nc(r->weightX)->get(k);
						}
						for (k = constraints->tempX; weight > 0.0 && k < px; ++k) {
							double wt = $nc(r->weightX)->get(k);
							int32_t dx = $cast(int32_t, ((wt * ((double)pixels_diff)) / weight));
							(*$nc(r->minWidth))[k] += dx;
							pixels_diff -= dx;
							weight -= wt;
						}
						(*$nc(r->minWidth))[px - 1] += pixels_diff;
					}
				} else if (constraints->tempWidth > i && constraints->tempWidth < nextSize) {
					nextSize = constraints->tempWidth;
				}
				if ($nc(constraints)->tempHeight == i) {
					py = constraints->tempY + constraints->tempHeight;
					weight_diff = constraints->weighty;
					for (k = constraints->tempY; k < py; ++k) {
						weight_diff -= $nc(r->weightY)->get(k);
					}
					if (weight_diff > 0.0) {
						weight = 0.0;
						for (k = constraints->tempY; k < py; ++k) {
							weight += $nc(r->weightY)->get(k);
						}
						for (k = constraints->tempY; weight > 0.0 && k < py; ++k) {
							double wt = $nc(r->weightY)->get(k);
							double dy = (wt * weight_diff) / weight;
							(*$nc(r->weightY))[k] += dy;
							weight_diff -= dy;
							weight -= wt;
						}
						(*$nc(r->weightY))[py - 1] += weight_diff;
					}
					pixels_diff = -1;
					if (hasBaseline) {
						switch (constraints->anchor) {
						case $GridBagConstraints::BASELINE:
							{}
						case $GridBagConstraints::BASELINE_LEADING:
							{}
						case $GridBagConstraints::BASELINE_TRAILING:
							{
								if (constraints->ascent >= 0) {
									if (constraints->tempHeight == 1) {
										pixels_diff = $nc(maxAscent)->get(constraints->tempY) + $nc(maxDescent)->get(constraints->tempY);
									} else {
										$init($Component$BaselineResizeBehavior);
										if (constraints->baselineResizeBehavior != $Component$BaselineResizeBehavior::CONSTANT_DESCENT) {
											pixels_diff = $nc(maxAscent)->get(constraints->tempY) + constraints->descent;
										} else {
											pixels_diff = constraints->ascent + $nc(maxDescent)->get(constraints->tempY + constraints->tempHeight - 1);
										}
									}
								}
								break;
							}
						case $GridBagConstraints::ABOVE_BASELINE:
							{}
						case $GridBagConstraints::ABOVE_BASELINE_LEADING:
							{}
						case $GridBagConstraints::ABOVE_BASELINE_TRAILING:
							{
								pixels_diff = $nc(constraints->insets)->top + constraints->minHeight + constraints->ipady + $nc(maxDescent)->get(constraints->tempY);
								break;
							}
						case $GridBagConstraints::BELOW_BASELINE:
							{}
						case $GridBagConstraints::BELOW_BASELINE_LEADING:
							{}
						case $GridBagConstraints::BELOW_BASELINE_TRAILING:
							{
								pixels_diff = $nc(maxAscent)->get(constraints->tempY) + constraints->minHeight + $nc(constraints->insets)->bottom + constraints->ipady;
								break;
							}
						}
					}
					if (pixels_diff == -1) {
						pixels_diff = constraints->minHeight + constraints->ipady + $nc(constraints->insets)->top + $nc(constraints->insets)->bottom;
					}
					for (k = constraints->tempY; k < py; ++k) {
						pixels_diff -= $nc(r->minHeight)->get(k);
					}
					if (pixels_diff > 0) {
						weight = 0.0;
						for (k = constraints->tempY; k < py; ++k) {
							weight += $nc(r->weightY)->get(k);
						}
						for (k = constraints->tempY; weight > 0.0 && k < py; ++k) {
							double wt = $nc(r->weightY)->get(k);
							int32_t dy = $cast(int32_t, ((wt * ((double)pixels_diff)) / weight));
							(*$nc(r->minHeight))[k] += dy;
							pixels_diff -= dy;
							weight -= wt;
						}
						(*$nc(r->minHeight))[py - 1] += pixels_diff;
					}
				} else if (constraints->tempHeight > i && constraints->tempHeight < nextSize) {
					nextSize = constraints->tempHeight;
				}
			}
		}
		return r;
	}
}

bool GridBagLayout::calculateBaseline($Component* c, $GridBagConstraints* constraints, $Dimension* size) {
	int32_t anchor = $nc(constraints)->anchor;
	if (anchor == $GridBagConstraints::BASELINE || anchor == $GridBagConstraints::BASELINE_LEADING || anchor == $GridBagConstraints::BASELINE_TRAILING) {
		int32_t w = $nc(size)->width + constraints->ipadx;
		int32_t h = size->height + constraints->ipady;
		constraints->ascent = $nc(c)->getBaseline(w, h);
		if (constraints->ascent >= 0) {
			int32_t baseline = constraints->ascent;
			constraints->descent = h - constraints->ascent + $nc(constraints->insets)->bottom;
			constraints->ascent += $nc(constraints->insets)->top;
			$set(constraints, baselineResizeBehavior, c->getBaselineResizeBehavior());
			constraints->centerPadding = 0;
			$init($Component$BaselineResizeBehavior);
			if (constraints->baselineResizeBehavior == $Component$BaselineResizeBehavior::CENTER_OFFSET) {
				int32_t nextBaseline = c->getBaseline(w, h + 1);
				constraints->centerOffset = baseline - h / 2;
				if (h % 2 == 0) {
					if (baseline != nextBaseline) {
						constraints->centerPadding = 1;
					}
				} else if (baseline == nextBaseline) {
					--constraints->centerOffset;
					constraints->centerPadding = 1;
				}
			}
		}
		return true;
	} else {
		constraints->ascent = -1;
		return false;
	}
}

void GridBagLayout::adjustForGravity($GridBagConstraints* constraints, $Rectangle* r) {
	AdjustForGravity(constraints, r);
}

void GridBagLayout::AdjustForGravity($GridBagConstraints* constraints, $Rectangle* r) {
	int32_t diffx = 0;
	int32_t diffy = 0;
	int32_t cellY = $nc(r)->y;
	int32_t cellHeight = r->height;
	if (!this->rightToLeft) {
		r->x += $nc($nc(constraints)->insets)->left;
	} else {
		r->x -= r->width - $nc($nc(constraints)->insets)->right;
	}
	r->width -= ($nc($nc(constraints)->insets)->left + $nc(constraints->insets)->right);
	r->y += $nc(constraints->insets)->top;
	r->height -= ($nc(constraints->insets)->top + $nc(constraints->insets)->bottom);
	diffx = 0;
	if ((constraints->fill != $GridBagConstraints::HORIZONTAL && constraints->fill != $GridBagConstraints::BOTH) && (r->width > (constraints->minWidth + constraints->ipadx))) {
		diffx = r->width - (constraints->minWidth + constraints->ipadx);
		r->width = constraints->minWidth + constraints->ipadx;
	}
	diffy = 0;
	if ((constraints->fill != $GridBagConstraints::VERTICAL && constraints->fill != $GridBagConstraints::BOTH) && (r->height > (constraints->minHeight + constraints->ipady))) {
		diffy = r->height - (constraints->minHeight + constraints->ipady);
		r->height = constraints->minHeight + constraints->ipady;
	}
	switch (constraints->anchor) {
	case $GridBagConstraints::BASELINE:
		{
			r->x += diffx / 2;
			alignOnBaseline(constraints, r, cellY, cellHeight);
			break;
		}
	case $GridBagConstraints::BASELINE_LEADING:
		{
			if (this->rightToLeft) {
				r->x += diffx;
			}
			alignOnBaseline(constraints, r, cellY, cellHeight);
			break;
		}
	case $GridBagConstraints::BASELINE_TRAILING:
		{
			if (!this->rightToLeft) {
				r->x += diffx;
			}
			alignOnBaseline(constraints, r, cellY, cellHeight);
			break;
		}
	case $GridBagConstraints::ABOVE_BASELINE:
		{
			r->x += diffx / 2;
			alignAboveBaseline(constraints, r, cellY, cellHeight);
			break;
		}
	case $GridBagConstraints::ABOVE_BASELINE_LEADING:
		{
			if (this->rightToLeft) {
				r->x += diffx;
			}
			alignAboveBaseline(constraints, r, cellY, cellHeight);
			break;
		}
	case $GridBagConstraints::ABOVE_BASELINE_TRAILING:
		{
			if (!this->rightToLeft) {
				r->x += diffx;
			}
			alignAboveBaseline(constraints, r, cellY, cellHeight);
			break;
		}
	case $GridBagConstraints::BELOW_BASELINE:
		{
			r->x += diffx / 2;
			alignBelowBaseline(constraints, r, cellY, cellHeight);
			break;
		}
	case $GridBagConstraints::BELOW_BASELINE_LEADING:
		{
			if (this->rightToLeft) {
				r->x += diffx;
			}
			alignBelowBaseline(constraints, r, cellY, cellHeight);
			break;
		}
	case $GridBagConstraints::BELOW_BASELINE_TRAILING:
		{
			if (!this->rightToLeft) {
				r->x += diffx;
			}
			alignBelowBaseline(constraints, r, cellY, cellHeight);
			break;
		}
	case $GridBagConstraints::CENTER:
		{
			r->x += diffx / 2;
			r->y += diffy / 2;
			break;
		}
	case $GridBagConstraints::PAGE_START:
		{}
	case $GridBagConstraints::NORTH:
		{
			r->x += diffx / 2;
			break;
		}
	case $GridBagConstraints::NORTHEAST:
		{
			r->x += diffx;
			break;
		}
	case $GridBagConstraints::EAST:
		{
			r->x += diffx;
			r->y += diffy / 2;
			break;
		}
	case $GridBagConstraints::SOUTHEAST:
		{
			r->x += diffx;
			r->y += diffy;
			break;
		}
	case $GridBagConstraints::PAGE_END:
		{}
	case $GridBagConstraints::SOUTH:
		{
			r->x += diffx / 2;
			r->y += diffy;
			break;
		}
	case $GridBagConstraints::SOUTHWEST:
		{
			r->y += diffy;
			break;
		}
	case $GridBagConstraints::WEST:
		{
			r->y += diffy / 2;
			break;
		}
	case $GridBagConstraints::NORTHWEST:
		{
			break;
		}
	case $GridBagConstraints::LINE_START:
		{
			if (this->rightToLeft) {
				r->x += diffx;
			}
			r->y += diffy / 2;
			break;
		}
	case $GridBagConstraints::LINE_END:
		{
			if (!this->rightToLeft) {
				r->x += diffx;
			}
			r->y += diffy / 2;
			break;
		}
	case $GridBagConstraints::FIRST_LINE_START:
		{
			if (this->rightToLeft) {
				r->x += diffx;
			}
			break;
		}
	case $GridBagConstraints::FIRST_LINE_END:
		{
			if (!this->rightToLeft) {
				r->x += diffx;
			}
			break;
		}
	case $GridBagConstraints::LAST_LINE_START:
		{
			if (this->rightToLeft) {
				r->x += diffx;
			}
			r->y += diffy;
			break;
		}
	case $GridBagConstraints::LAST_LINE_END:
		{
			if (!this->rightToLeft) {
				r->x += diffx;
			}
			r->y += diffy;
			break;
		}
	default:
		{
			$throwNew($IllegalArgumentException, "illegal anchor value"_s);
		}
	}
}

void GridBagLayout::alignOnBaseline($GridBagConstraints* cons, $Rectangle* r, int32_t cellY, int32_t cellHeight) {
	if ($nc(cons)->ascent >= 0) {
		$init($Component$BaselineResizeBehavior);
		if (cons->baselineResizeBehavior == $Component$BaselineResizeBehavior::CONSTANT_DESCENT) {
			int32_t maxY = cellY + cellHeight - $nc($nc(this->layoutInfo)->maxDescent)->get(cons->tempY + cons->tempHeight - 1) + cons->descent - $nc(cons->insets)->bottom;
			if (!cons->isVerticallyResizable()) {
				$nc(r)->y = maxY - cons->minHeight;
				r->height = cons->minHeight;
			} else {
				$nc(r)->height = maxY - cellY - $nc(cons->insets)->top;
			}
		} else {
			int32_t baseline = 0;
			int32_t ascent = cons->ascent;
			if ($nc(this->layoutInfo)->hasConstantDescent(cons->tempY)) {
				baseline = cellHeight - $nc($nc(this->layoutInfo)->maxDescent)->get(cons->tempY);
			} else {
				baseline = $nc($nc(this->layoutInfo)->maxAscent)->get(cons->tempY);
			}
			if (cons->baselineResizeBehavior == $Component$BaselineResizeBehavior::OTHER) {
				bool fits = false;
				ascent = $nc(this->componentAdjusting)->getBaseline($nc(r)->width, r->height);
				if (ascent >= 0) {
					ascent += $nc(cons->insets)->top;
				}
				if (ascent >= 0 && ascent <= baseline) {
					if (baseline + ($nc(r)->height - ascent - $nc(cons->insets)->top) <= cellHeight - $nc(cons->insets)->bottom) {
						fits = true;
					} else if (cons->isVerticallyResizable()) {
						int32_t ascent2 = $nc(this->componentAdjusting)->getBaseline(r->width, cellHeight - $nc(cons->insets)->bottom - baseline + ascent);
						if (ascent2 >= 0) {
							ascent2 += $nc(cons->insets)->top;
						}
						if (ascent2 >= 0 && ascent2 <= ascent) {
							r->height = cellHeight - $nc(cons->insets)->bottom - baseline + ascent;
							ascent = ascent2;
							fits = true;
						}
					}
				}
				if (!fits) {
					ascent = cons->ascent;
					$nc(r)->width = cons->minWidth;
					r->height = cons->minHeight;
				}
			}
			$nc(r)->y = cellY + baseline - ascent + $nc(cons->insets)->top;
			if (cons->isVerticallyResizable()) {
				$init($GridBagLayout$1);
				switch ($nc($GridBagLayout$1::$SwitchMap$java$awt$Component$BaselineResizeBehavior)->get($nc((cons->baselineResizeBehavior))->ordinal())) {
				case 1:
					{
						r->height = $Math::max(cons->minHeight, cellY + cellHeight - r->y - $nc(cons->insets)->bottom);
						break;
					}
				case 2:
					{
						{
							int32_t upper = r->y - cellY - $nc(cons->insets)->top;
							int32_t lower = cellY + cellHeight - r->y - cons->minHeight - $nc(cons->insets)->bottom;
							int32_t delta = $Math::min(upper, lower);
							delta += delta;
							if (delta > 0 && (cons->minHeight + cons->centerPadding + delta) / 2 + cons->centerOffset != baseline) {
								--delta;
							}
							r->height = cons->minHeight + delta;
							r->y = cellY + baseline - (r->height + cons->centerPadding) / 2 - cons->centerOffset;
						}
						break;
					}
				case 3:
					{
						break;
					}
				default:
					{
						break;
					}
				}
			}
		}
	} else {
		centerVertically(cons, r, cellHeight);
	}
}

void GridBagLayout::alignAboveBaseline($GridBagConstraints* cons, $Rectangle* r, int32_t cellY, int32_t cellHeight) {
	if ($nc(this->layoutInfo)->hasBaseline($nc(cons)->tempY)) {
		int32_t maxY = 0;
		if ($nc(this->layoutInfo)->hasConstantDescent($nc(cons)->tempY)) {
			maxY = cellY + cellHeight - $nc($nc(this->layoutInfo)->maxDescent)->get($nc(cons)->tempY);
		} else {
			maxY = cellY + $nc($nc(this->layoutInfo)->maxAscent)->get($nc(cons)->tempY);
		}
		if ($nc(cons)->isVerticallyResizable()) {
			$nc(r)->y = cellY + $nc(cons->insets)->top;
			r->height = maxY - r->y;
		} else {
			$nc(r)->height = cons->minHeight + cons->ipady;
			r->y = maxY - r->height;
		}
	} else {
		centerVertically(cons, r, cellHeight);
	}
}

void GridBagLayout::alignBelowBaseline($GridBagConstraints* cons, $Rectangle* r, int32_t cellY, int32_t cellHeight) {
	if ($nc(this->layoutInfo)->hasBaseline($nc(cons)->tempY)) {
		if ($nc(this->layoutInfo)->hasConstantDescent($nc(cons)->tempY)) {
			$nc(r)->y = cellY + cellHeight - $nc($nc(this->layoutInfo)->maxDescent)->get($nc(cons)->tempY);
		} else {
			$nc(r)->y = cellY + $nc($nc(this->layoutInfo)->maxAscent)->get($nc(cons)->tempY);
		}
		if ($nc(cons)->isVerticallyResizable()) {
			$nc(r)->height = cellY + cellHeight - r->y - $nc(cons->insets)->bottom;
		}
	} else {
		centerVertically(cons, r, cellHeight);
	}
}

void GridBagLayout::centerVertically($GridBagConstraints* cons, $Rectangle* r, int32_t cellHeight) {
	if (!$nc(cons)->isVerticallyResizable()) {
		$nc(r)->y += $Math::max(0, (cellHeight - $nc(cons->insets)->top - $nc(cons->insets)->bottom - cons->minHeight - cons->ipady) / 2);
	}
}

$Dimension* GridBagLayout::getMinSize($Container* parent, $GridBagLayoutInfo* info) {
	return GetMinSize(parent, info);
}

$Dimension* GridBagLayout::GetMinSize($Container* parent, $GridBagLayoutInfo* info) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, d, $new($Dimension));
	int32_t i = 0;
	int32_t t = 0;
	$var($Insets, insets, $nc(parent)->getInsets());
	t = 0;
	for (i = 0; i < $nc(info)->width; ++i) {
		t += $nc(info->minWidth)->get(i);
	}
	d->width = t + $nc(insets)->left + insets->right;
	t = 0;
	for (i = 0; i < $nc(info)->height; ++i) {
		t += $nc(info->minHeight)->get(i);
	}
	d->height = t + insets->top + insets->bottom;
	return d;
}

void GridBagLayout::arrangeGrid($Container* parent) {
	ArrangeGrid(parent);
}

void GridBagLayout::ArrangeGrid($Container* parent) {
	$useLocalCurrentObjectStackCache();
	$var($Component, comp, nullptr);
	int32_t compindex = 0;
	$var($GridBagConstraints, constraints, nullptr);
	$var($Insets, insets, $nc(parent)->getInsets());
	$var($ComponentArray, components, parent->getComponents());
	$var($Dimension, d, nullptr);
	$var($Rectangle, r, $new($Rectangle));
	int32_t i = 0;
	int32_t diffw = 0;
	int32_t diffh = 0;
	double weight = 0.0;
	$var($GridBagLayoutInfo, info, nullptr);
	this->rightToLeft = !$nc($(parent->getComponentOrientation()))->isLeftToRight();
	if ($nc(components)->length == 0 && (this->columnWidths == nullptr || $nc(this->columnWidths)->length == 0) && (this->rowHeights == nullptr || $nc(this->rowHeights)->length == 0)) {
		return;
	}
	$assign(info, getLayoutInfo(parent, GridBagLayout::PREFERREDSIZE));
	$assign(d, getMinSize(parent, info));
	if (parent->width < $nc(d)->width || parent->height < $nc(d)->height) {
		$assign(info, getLayoutInfo(parent, GridBagLayout::MINSIZE));
		$assign(d, getMinSize(parent, info));
	}
	$set(this, layoutInfo, info);
	r->width = $nc(d)->width;
	r->height = d->height;
	diffw = parent->width - r->width;
	if (diffw != 0) {
		weight = 0.0;
		for (i = 0; i < $nc(info)->width; ++i) {
			weight += $nc(info->weightX)->get(i);
		}
		if (weight > 0.0) {
			for (i = 0; i < $nc(info)->width; ++i) {
				int32_t dx = $cast(int32_t, ((((double)diffw) * $nc(info->weightX)->get(i)) / weight));
				(*$nc(info->minWidth))[i] += dx;
				r->width += dx;
				if ($nc(info->minWidth)->get(i) < 0) {
					r->width -= $nc(info->minWidth)->get(i);
					$nc(info->minWidth)->set(i, 0);
				}
			}
		}
		diffw = parent->width - r->width;
	} else {
		diffw = 0;
	}
	diffh = parent->height - r->height;
	if (diffh != 0) {
		weight = 0.0;
		for (i = 0; i < $nc(info)->height; ++i) {
			weight += $nc(info->weightY)->get(i);
		}
		if (weight > 0.0) {
			for (i = 0; i < $nc(info)->height; ++i) {
				int32_t dy = $cast(int32_t, ((((double)diffh) * $nc(info->weightY)->get(i)) / weight));
				(*$nc(info->minHeight))[i] += dy;
				r->height += dy;
				if ($nc(info->minHeight)->get(i) < 0) {
					r->height -= $nc(info->minHeight)->get(i);
					$nc(info->minHeight)->set(i, 0);
				}
			}
		}
		diffh = parent->height - r->height;
	} else {
		diffh = 0;
	}
	$nc(info)->startx = diffw / 2 + $nc(insets)->left;
	info->starty = diffh / 2 + insets->top;
	for (compindex = 0; compindex < $nc(components)->length; ++compindex) {
		$assign(comp, components->get(compindex));
		if (!$nc(comp)->isVisible()) {
			continue;
		}
		$assign(constraints, lookupConstraints(comp));
		if (!this->rightToLeft) {
			r->x = info->startx;
			for (i = 0; i < $nc(constraints)->tempX; ++i) {
				r->x += $nc(info->minWidth)->get(i);
			}
		} else {
			r->x = parent->width - (diffw / 2 + insets->right);
			for (i = 0; i < $nc(constraints)->tempX; ++i) {
				r->x -= $nc(info->minWidth)->get(i);
			}
		}
		r->y = info->starty;
		for (i = 0; i < $nc(constraints)->tempY; ++i) {
			r->y += $nc(info->minHeight)->get(i);
		}
		r->width = 0;
		for (i = $nc(constraints)->tempX; i < (constraints->tempX + constraints->tempWidth); ++i) {
			r->width += $nc(info->minWidth)->get(i);
		}
		r->height = 0;
		for (i = constraints->tempY; i < (constraints->tempY + constraints->tempHeight); ++i) {
			r->height += $nc(info->minHeight)->get(i);
		}
		$set(this, componentAdjusting, comp);
		adjustForGravity(constraints, r);
		if (r->x < 0) {
			r->width += r->x;
			r->x = 0;
		}
		if (r->y < 0) {
			r->height += r->y;
			r->y = 0;
		}
		if ((r->width <= 0) || (r->height <= 0)) {
			$nc(comp)->setBounds(0, 0, 0, 0);
		} else if ($nc(comp)->x != r->x || $nc(comp)->y != r->y || $nc(comp)->width != r->width || $nc(comp)->height != r->height) {
			comp->setBounds(r->x, r->y, r->width, r->height);
		}
	}
}

GridBagLayout::GridBagLayout() {
}

$Class* GridBagLayout::load$($String* name, bool initialize) {
	$loadClass(GridBagLayout, name, initialize, &_GridBagLayout_ClassInfo_, allocate$GridBagLayout);
	return class$;
}

$Class* GridBagLayout::class$ = nullptr;

	} // awt
} // java