#include <java/awt/GridLayout.h>

#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$FieldInfo _GridLayout_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GridLayout, serialVersionUID)},
	{"hgap", "I", nullptr, 0, $field(GridLayout, hgap)},
	{"vgap", "I", nullptr, 0, $field(GridLayout, vgap)},
	{"rows", "I", nullptr, 0, $field(GridLayout, rows)},
	{"cols", "I", nullptr, 0, $field(GridLayout, cols)},
	{}
};

$MethodInfo _GridLayout_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GridLayout::*)()>(&GridLayout::init$))},
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(GridLayout::*)(int32_t,int32_t)>(&GridLayout::init$))},
	{"<init>", "(IIII)V", nullptr, $PUBLIC, $method(static_cast<void(GridLayout::*)(int32_t,int32_t,int32_t,int32_t)>(&GridLayout::init$))},
	{"addLayoutComponent", "(Ljava/lang/String;Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"getColumns", "()I", nullptr, $PUBLIC},
	{"getHgap", "()I", nullptr, $PUBLIC},
	{"getRows", "()I", nullptr, $PUBLIC},
	{"getVgap", "()I", nullptr, $PUBLIC},
	{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"minimumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"preferredLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"removeLayoutComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"setColumns", "(I)V", nullptr, $PUBLIC},
	{"setHgap", "(I)V", nullptr, $PUBLIC},
	{"setRows", "(I)V", nullptr, $PUBLIC},
	{"setVgap", "(I)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _GridLayout_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.GridLayout",
	"java.lang.Object",
	"java.awt.LayoutManager,java.io.Serializable",
	_GridLayout_FieldInfo_,
	_GridLayout_MethodInfo_
};

$Object* allocate$GridLayout($Class* clazz) {
	return $of($alloc(GridLayout));
}

int32_t GridLayout::hashCode() {
	 return this->$LayoutManager::hashCode();
}

bool GridLayout::equals(Object$* arg0) {
	 return this->$LayoutManager::equals(arg0);
}

$Object* GridLayout::clone() {
	 return this->$LayoutManager::clone();
}

void GridLayout::finalize() {
	this->$LayoutManager::finalize();
}

void GridLayout::init$() {
	GridLayout::init$(1, 0, 0, 0);
}

void GridLayout::init$(int32_t rows, int32_t cols) {
	GridLayout::init$(rows, cols, 0, 0);
}

void GridLayout::init$(int32_t rows, int32_t cols, int32_t hgap, int32_t vgap) {
	if ((rows == 0) && (cols == 0)) {
		$throwNew($IllegalArgumentException, "rows and cols cannot both be zero"_s);
	}
	this->rows = rows;
	this->cols = cols;
	this->hgap = hgap;
	this->vgap = vgap;
}

int32_t GridLayout::getRows() {
	return this->rows;
}

void GridLayout::setRows(int32_t rows) {
	if ((rows == 0) && (this->cols == 0)) {
		$throwNew($IllegalArgumentException, "rows and cols cannot both be zero"_s);
	}
	this->rows = rows;
}

int32_t GridLayout::getColumns() {
	return this->cols;
}

void GridLayout::setColumns(int32_t cols) {
	if ((cols == 0) && (this->rows == 0)) {
		$throwNew($IllegalArgumentException, "rows and cols cannot both be zero"_s);
	}
	this->cols = cols;
}

int32_t GridLayout::getHgap() {
	return this->hgap;
}

void GridLayout::setHgap(int32_t hgap) {
	this->hgap = hgap;
}

int32_t GridLayout::getVgap() {
	return this->vgap;
}

void GridLayout::setVgap(int32_t vgap) {
	this->vgap = vgap;
}

void GridLayout::addLayoutComponent($String* name, $Component* comp) {
}

void GridLayout::removeLayoutComponent($Component* comp) {
}

$Dimension* GridLayout::preferredLayoutSize($Container* parent) {
	$synchronized($nc(parent)->getTreeLock()) {
		$var($Insets, insets, parent->getInsets());
		int32_t ncomponents = parent->getComponentCount();
		int32_t nrows = this->rows;
		int32_t ncols = this->cols;
		if (nrows > 0) {
			ncols = $div((ncomponents + nrows - 1), nrows);
		} else {
			nrows = $div((ncomponents + ncols - 1), ncols);
		}
		int32_t w = 0;
		int32_t h = 0;
		for (int32_t i = 0; i < ncomponents; ++i) {
			$var($Component, comp, parent->getComponent(i));
			$var($Dimension, d, $nc(comp)->getPreferredSize());
			if (w < $nc(d)->width) {
				w = d->width;
			}
			if (h < $nc(d)->height) {
				h = d->height;
			}
		}
		return $new($Dimension, $nc(insets)->left + insets->right + ncols * w + (ncols - 1) * this->hgap, insets->top + insets->bottom + nrows * h + (nrows - 1) * this->vgap);
	}
}

$Dimension* GridLayout::minimumLayoutSize($Container* parent) {
	$synchronized($nc(parent)->getTreeLock()) {
		$var($Insets, insets, parent->getInsets());
		int32_t ncomponents = parent->getComponentCount();
		int32_t nrows = this->rows;
		int32_t ncols = this->cols;
		if (nrows > 0) {
			ncols = $div((ncomponents + nrows - 1), nrows);
		} else {
			nrows = $div((ncomponents + ncols - 1), ncols);
		}
		int32_t w = 0;
		int32_t h = 0;
		for (int32_t i = 0; i < ncomponents; ++i) {
			$var($Component, comp, parent->getComponent(i));
			$var($Dimension, d, $nc(comp)->getMinimumSize());
			if (w < $nc(d)->width) {
				w = d->width;
			}
			if (h < $nc(d)->height) {
				h = d->height;
			}
		}
		return $new($Dimension, $nc(insets)->left + insets->right + ncols * w + (ncols - 1) * this->hgap, insets->top + insets->bottom + nrows * h + (nrows - 1) * this->vgap);
	}
}

void GridLayout::layoutContainer($Container* parent) {
	$synchronized($nc(parent)->getTreeLock()) {
		$var($Insets, insets, parent->getInsets());
		int32_t ncomponents = parent->getComponentCount();
		int32_t nrows = this->rows;
		int32_t ncols = this->cols;
		bool ltr = $nc($(parent->getComponentOrientation()))->isLeftToRight();
		if (ncomponents == 0) {
			return;
		}
		if (nrows > 0) {
			ncols = $div((ncomponents + nrows - 1), nrows);
		} else {
			nrows = $div((ncomponents + ncols - 1), ncols);
		}
		int32_t totalGapsWidth = (ncols - 1) * this->hgap;
		int32_t widthWOInsets = parent->width - ($nc(insets)->left + insets->right);
		int32_t widthOnComponent = $div((widthWOInsets - totalGapsWidth), ncols);
		int32_t extraWidthAvailable = (widthWOInsets - (widthOnComponent * ncols + totalGapsWidth)) / 2;
		int32_t totalGapsHeight = (nrows - 1) * this->vgap;
		int32_t heightWOInsets = parent->height - (insets->top + insets->bottom);
		int32_t heightOnComponent = $div((heightWOInsets - totalGapsHeight), nrows);
		int32_t extraHeightAvailable = (heightWOInsets - (heightOnComponent * nrows + totalGapsHeight)) / 2;
		if (ltr) {
			{
				int32_t c = 0;
				int32_t x = insets->left + extraWidthAvailable;
				for (; c < ncols; ++c, x += widthOnComponent + this->hgap) {
					{
						int32_t r = 0;
						int32_t y = insets->top + extraHeightAvailable;
						for (; r < nrows; ++r, y += heightOnComponent + this->vgap) {
							int32_t i = r * ncols + c;
							if (i < ncomponents) {
								$nc($(parent->getComponent(i)))->setBounds(x, y, widthOnComponent, heightOnComponent);
							}
						}
					}
				}
			}
		} else {
			{
				int32_t c = 0;
				int32_t x = (parent->width - insets->right - widthOnComponent) - extraWidthAvailable;
				for (; c < ncols; ++c, x -= widthOnComponent + this->hgap) {
					{
						int32_t r = 0;
						int32_t y = insets->top + extraHeightAvailable;
						for (; r < nrows; ++r, y += heightOnComponent + this->vgap) {
							int32_t i = r * ncols + c;
							if (i < ncomponents) {
								$nc($(parent->getComponent(i)))->setBounds(x, y, widthOnComponent, heightOnComponent);
							}
						}
					}
				}
			}
		}
	}
}

$String* GridLayout::toString() {
	return $str({$($of(this)->getClass()->getName()), "[hgap="_s, $$str(this->hgap), ",vgap="_s, $$str(this->vgap), ",rows="_s, $$str(this->rows), ",cols="_s, $$str(this->cols), "]"_s});
}

GridLayout::GridLayout() {
}

$Class* GridLayout::load$($String* name, bool initialize) {
	$loadClass(GridLayout, name, initialize, &_GridLayout_ClassInfo_, allocate$GridLayout);
	return class$;
}

$Class* GridLayout::class$ = nullptr;

	} // awt
} // java