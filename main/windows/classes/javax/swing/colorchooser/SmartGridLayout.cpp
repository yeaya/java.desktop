#include <javax/swing/colorchooser/SmartGridLayout.h>

#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ComponentArray = $Array<::java::awt::Component>;
using $ComponentArray2 = $Array<::java::awt::Component, 2>;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace colorchooser {

$FieldInfo _SmartGridLayout_FieldInfo_[] = {
	{"rows", "I", nullptr, 0, $field(SmartGridLayout, rows)},
	{"columns", "I", nullptr, 0, $field(SmartGridLayout, columns)},
	{"xGap", "I", nullptr, 0, $field(SmartGridLayout, xGap)},
	{"yGap", "I", nullptr, 0, $field(SmartGridLayout, yGap)},
	{"componentCount", "I", nullptr, 0, $field(SmartGridLayout, componentCount)},
	{"layoutGrid", "[[Ljava/awt/Component;", nullptr, 0, $field(SmartGridLayout, layoutGrid)},
	{}
};

$MethodInfo _SmartGridLayout_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(SmartGridLayout::*)(int32_t,int32_t)>(&SmartGridLayout::init$))},
	{"addLayoutComponent", "(Ljava/lang/String;Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"buildLayoutGrid", "(Ljava/awt/Container;)V", nullptr, $PRIVATE, $method(static_cast<void(SmartGridLayout::*)($Container*)>(&SmartGridLayout::buildLayoutGrid))},
	{"computeColumnWidth", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(SmartGridLayout::*)(int32_t)>(&SmartGridLayout::computeColumnWidth))},
	{"computeRowHeight", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(SmartGridLayout::*)(int32_t)>(&SmartGridLayout::computeRowHeight))},
	{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"minimumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"preferredLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"removeLayoutComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SmartGridLayout_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.colorchooser.SmartGridLayout",
	"java.lang.Object",
	"java.awt.LayoutManager,java.io.Serializable",
	_SmartGridLayout_FieldInfo_,
	_SmartGridLayout_MethodInfo_
};

$Object* allocate$SmartGridLayout($Class* clazz) {
	return $of($alloc(SmartGridLayout));
}

int32_t SmartGridLayout::hashCode() {
	 return this->$LayoutManager::hashCode();
}

bool SmartGridLayout::equals(Object$* arg0) {
	 return this->$LayoutManager::equals(arg0);
}

$Object* SmartGridLayout::clone() {
	 return this->$LayoutManager::clone();
}

$String* SmartGridLayout::toString() {
	 return this->$LayoutManager::toString();
}

void SmartGridLayout::finalize() {
	this->$LayoutManager::finalize();
}

void SmartGridLayout::init$(int32_t numColumns, int32_t numRows) {
	this->rows = 2;
	this->columns = 2;
	this->xGap = 2;
	this->yGap = 2;
	this->componentCount = 0;
	this->rows = numRows;
	this->columns = numColumns;
	$set(this, layoutGrid, $new($ComponentArray2, numColumns, numRows));
}

void SmartGridLayout::layoutContainer($Container* c) {
	buildLayoutGrid(c);
	$var($ints, rowHeights, $new($ints, this->rows));
	$var($ints, columnWidths, $new($ints, this->columns));
	for (int32_t row = 0; row < this->rows; ++row) {
		rowHeights->set(row, computeRowHeight(row));
	}
	for (int32_t column = 0; column < this->columns; ++column) {
		columnWidths->set(column, computeColumnWidth(column));
	}
	$var($Insets, insets, $nc(c)->getInsets());
	if ($nc($(c->getComponentOrientation()))->isLeftToRight()) {
		int32_t horizLoc = $nc(insets)->left;
		for (int32_t column = 0; column < this->columns; ++column) {
			int32_t vertLoc = insets->top;
			for (int32_t row = 0; row < this->rows; ++row) {
				$var($Component, current, $nc($nc(this->layoutGrid)->get(column))->get(row));
				$nc(current)->setBounds(horizLoc, vertLoc, columnWidths->get(column), rowHeights->get(row));
				vertLoc += (rowHeights->get(row) + this->yGap);
			}
			horizLoc += (columnWidths->get(column) + this->xGap);
		}
	} else {
		int32_t horizLoc = c->getWidth() - $nc(insets)->right;
		for (int32_t column = 0; column < this->columns; ++column) {
			int32_t vertLoc = insets->top;
			horizLoc -= columnWidths->get(column);
			for (int32_t row = 0; row < this->rows; ++row) {
				$var($Component, current, $nc($nc(this->layoutGrid)->get(column))->get(row));
				$nc(current)->setBounds(horizLoc, vertLoc, columnWidths->get(column), rowHeights->get(row));
				vertLoc += (rowHeights->get(row) + this->yGap);
			}
			horizLoc -= this->xGap;
		}
	}
}

$Dimension* SmartGridLayout::minimumLayoutSize($Container* c) {
	buildLayoutGrid(c);
	$var($Insets, insets, $nc(c)->getInsets());
	int32_t height = 0;
	int32_t width = 0;
	for (int32_t row = 0; row < this->rows; ++row) {
		height += computeRowHeight(row);
	}
	for (int32_t column = 0; column < this->columns; ++column) {
		width += computeColumnWidth(column);
	}
	height += (this->yGap * (this->rows - 1)) + $nc(insets)->top + insets->bottom;
	width += (this->xGap * (this->columns - 1)) + insets->right + insets->left;
	return $new($Dimension, width, height);
}

$Dimension* SmartGridLayout::preferredLayoutSize($Container* c) {
	return minimumLayoutSize(c);
}

void SmartGridLayout::addLayoutComponent($String* s, $Component* c) {
}

void SmartGridLayout::removeLayoutComponent($Component* c) {
}

void SmartGridLayout::buildLayoutGrid($Container* c) {
	$var($ComponentArray, children, $nc(c)->getComponents());
	for (int32_t componentCount = 0; componentCount < $nc(children)->length; ++componentCount) {
		int32_t row = 0;
		int32_t column = 0;
		if (componentCount != 0) {
			column = $mod(componentCount, this->columns);
			row = $div((componentCount - column), this->columns);
		}
		$nc($nc(this->layoutGrid)->get(column))->set(row, children->get(componentCount));
	}
}

int32_t SmartGridLayout::computeColumnWidth(int32_t columnNum) {
	int32_t maxWidth = 1;
	for (int32_t row = 0; row < this->rows; ++row) {
		int32_t width = $nc($($nc($nc($nc(this->layoutGrid)->get(columnNum))->get(row))->getPreferredSize()))->width;
		if (width > maxWidth) {
			maxWidth = width;
		}
	}
	return maxWidth;
}

int32_t SmartGridLayout::computeRowHeight(int32_t rowNum) {
	int32_t maxHeight = 1;
	for (int32_t column = 0; column < this->columns; ++column) {
		int32_t height = $nc($($nc($nc($nc(this->layoutGrid)->get(column))->get(rowNum))->getPreferredSize()))->height;
		if (height > maxHeight) {
			maxHeight = height;
		}
	}
	return maxHeight;
}

SmartGridLayout::SmartGridLayout() {
}

$Class* SmartGridLayout::load$($String* name, bool initialize) {
	$loadClass(SmartGridLayout, name, initialize, &_SmartGridLayout_ClassInfo_, allocate$SmartGridLayout);
	return class$;
}

$Class* SmartGridLayout::class$ = nullptr;

		} // colorchooser
	} // swing
} // javax