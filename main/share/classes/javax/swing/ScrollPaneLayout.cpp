#include <javax/swing/ScrollPaneLayout.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Rectangle.h>
#include <java/lang/Math.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JViewport.h>
#include <javax/swing/ScrollPaneConstants.h>
#include <javax/swing/Scrollable.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <jcpp.h>

#undef COLUMN_HEADER
#undef HORIZONTAL_SCROLLBAR
#undef HORIZONTAL_SCROLLBAR_ALWAYS
#undef HORIZONTAL_SCROLLBAR_AS_NEEDED
#undef HORIZONTAL_SCROLLBAR_NEVER
#undef LOWER_LEFT_CORNER
#undef LOWER_RIGHT_CORNER
#undef ROW_HEADER
#undef UPPER_LEFT_CORNER
#undef UPPER_RIGHT_CORNER
#undef VERTICAL_SCROLLBAR
#undef VERTICAL_SCROLLBAR_ALWAYS
#undef VERTICAL_SCROLLBAR_AS_NEEDED
#undef VERTICAL_SCROLLBAR_NEVER
#undef VIEWPORT

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $Rectangle = ::java::awt::Rectangle;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JScrollBar = ::javax::swing::JScrollBar;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JViewport = ::javax::swing::JViewport;
using $ScrollPaneConstants = ::javax::swing::ScrollPaneConstants;
using $Scrollable = ::javax::swing::Scrollable;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $Border = ::javax::swing::border::Border;

namespace javax {
	namespace swing {

$CompoundAttribute _ScrollPaneLayout_MethodAnnotations_getViewportBorderBounds13[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _ScrollPaneLayout_FieldInfo_[] = {
	{"viewport", "Ljavax/swing/JViewport;", nullptr, $PROTECTED, $field(ScrollPaneLayout, viewport)},
	{"vsb", "Ljavax/swing/JScrollBar;", nullptr, $PROTECTED, $field(ScrollPaneLayout, vsb)},
	{"hsb", "Ljavax/swing/JScrollBar;", nullptr, $PROTECTED, $field(ScrollPaneLayout, hsb)},
	{"rowHead", "Ljavax/swing/JViewport;", nullptr, $PROTECTED, $field(ScrollPaneLayout, rowHead)},
	{"colHead", "Ljavax/swing/JViewport;", nullptr, $PROTECTED, $field(ScrollPaneLayout, colHead)},
	{"lowerLeft", "Ljava/awt/Component;", nullptr, $PROTECTED, $field(ScrollPaneLayout, lowerLeft)},
	{"lowerRight", "Ljava/awt/Component;", nullptr, $PROTECTED, $field(ScrollPaneLayout, lowerRight)},
	{"upperLeft", "Ljava/awt/Component;", nullptr, $PROTECTED, $field(ScrollPaneLayout, upperLeft)},
	{"upperRight", "Ljava/awt/Component;", nullptr, $PROTECTED, $field(ScrollPaneLayout, upperRight)},
	{"vsbPolicy", "I", nullptr, $PROTECTED, $field(ScrollPaneLayout, vsbPolicy)},
	{"hsbPolicy", "I", nullptr, $PROTECTED, $field(ScrollPaneLayout, hsbPolicy)},
	{}
};

$MethodInfo _ScrollPaneLayout_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ScrollPaneLayout::*)()>(&ScrollPaneLayout::init$))},
	{"addLayoutComponent", "(Ljava/lang/String;Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"addSingletonComponent", "(Ljava/awt/Component;Ljava/awt/Component;)Ljava/awt/Component;", nullptr, $PROTECTED},
	{"adjustForHSB", "(ZLjava/awt/Rectangle;Ljava/awt/Rectangle;Ljava/awt/Insets;)V", nullptr, $PRIVATE, $method(static_cast<void(ScrollPaneLayout::*)(bool,$Rectangle*,$Rectangle*,$Insets*)>(&ScrollPaneLayout::adjustForHSB))},
	{"adjustForVSB", "(ZLjava/awt/Rectangle;Ljava/awt/Rectangle;Ljava/awt/Insets;Z)V", nullptr, $PRIVATE, $method(static_cast<void(ScrollPaneLayout::*)(bool,$Rectangle*,$Rectangle*,$Insets*,bool)>(&ScrollPaneLayout::adjustForVSB))},
	{"getColumnHeader", "()Ljavax/swing/JViewport;", nullptr, $PUBLIC},
	{"getCorner", "(Ljava/lang/String;)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getHorizontalScrollBar", "()Ljavax/swing/JScrollBar;", nullptr, $PUBLIC},
	{"getHorizontalScrollBarPolicy", "()I", nullptr, $PUBLIC},
	{"getRowHeader", "()Ljavax/swing/JViewport;", nullptr, $PUBLIC},
	{"getVerticalScrollBar", "()Ljavax/swing/JScrollBar;", nullptr, $PUBLIC},
	{"getVerticalScrollBarPolicy", "()I", nullptr, $PUBLIC},
	{"getViewport", "()Ljavax/swing/JViewport;", nullptr, $PUBLIC},
	{"getViewportBorderBounds", "(Ljavax/swing/JScrollPane;)Ljava/awt/Rectangle;", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _ScrollPaneLayout_MethodAnnotations_getViewportBorderBounds13},
	{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"minimumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"preferredLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"removeLayoutComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"setHorizontalScrollBarPolicy", "(I)V", nullptr, $PUBLIC},
	{"setVerticalScrollBarPolicy", "(I)V", nullptr, $PUBLIC},
	{"syncWithScrollPane", "(Ljavax/swing/JScrollPane;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ScrollPaneLayout_InnerClassesInfo_[] = {
	{"javax.swing.ScrollPaneLayout$UIResource", "javax.swing.ScrollPaneLayout", "UIResource", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _ScrollPaneLayout_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.ScrollPaneLayout",
	"java.lang.Object",
	"java.awt.LayoutManager,javax.swing.ScrollPaneConstants,java.io.Serializable",
	_ScrollPaneLayout_FieldInfo_,
	_ScrollPaneLayout_MethodInfo_,
	nullptr,
	nullptr,
	_ScrollPaneLayout_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.ScrollPaneLayout$UIResource"
};

$Object* allocate$ScrollPaneLayout($Class* clazz) {
	return $of($alloc(ScrollPaneLayout));
}

int32_t ScrollPaneLayout::hashCode() {
	 return this->$LayoutManager::hashCode();
}

bool ScrollPaneLayout::equals(Object$* arg0) {
	 return this->$LayoutManager::equals(arg0);
}

$Object* ScrollPaneLayout::clone() {
	 return this->$LayoutManager::clone();
}

$String* ScrollPaneLayout::toString() {
	 return this->$LayoutManager::toString();
}

void ScrollPaneLayout::finalize() {
	this->$LayoutManager::finalize();
}

void ScrollPaneLayout::init$() {
	this->vsbPolicy = $ScrollPaneConstants::VERTICAL_SCROLLBAR_AS_NEEDED;
	this->hsbPolicy = $ScrollPaneConstants::HORIZONTAL_SCROLLBAR_AS_NEEDED;
}

void ScrollPaneLayout::syncWithScrollPane($JScrollPane* sp) {
	$set(this, viewport, $nc(sp)->getViewport());
	$set(this, vsb, sp->getVerticalScrollBar());
	$set(this, hsb, sp->getHorizontalScrollBar());
	$set(this, rowHead, sp->getRowHeader());
	$set(this, colHead, sp->getColumnHeader());
	$init($ScrollPaneConstants);
	$set(this, lowerLeft, sp->getCorner($ScrollPaneConstants::LOWER_LEFT_CORNER));
	$set(this, lowerRight, sp->getCorner($ScrollPaneConstants::LOWER_RIGHT_CORNER));
	$set(this, upperLeft, sp->getCorner($ScrollPaneConstants::UPPER_LEFT_CORNER));
	$set(this, upperRight, sp->getCorner($ScrollPaneConstants::UPPER_RIGHT_CORNER));
	this->vsbPolicy = sp->getVerticalScrollBarPolicy();
	this->hsbPolicy = sp->getHorizontalScrollBarPolicy();
}

$Component* ScrollPaneLayout::addSingletonComponent($Component* oldC, $Component* newC) {
	if ((oldC != nullptr) && (oldC != newC)) {
		$nc($(oldC->getParent()))->remove(oldC);
	}
	return newC;
}

void ScrollPaneLayout::addLayoutComponent($String* s, $Component* c) {
	$init($ScrollPaneConstants);
	if ($nc(s)->equals($ScrollPaneConstants::VIEWPORT)) {
		$set(this, viewport, $cast($JViewport, addSingletonComponent(this->viewport, c)));
	} else {
		if (s->equals($ScrollPaneConstants::VERTICAL_SCROLLBAR)) {
			$set(this, vsb, $cast($JScrollBar, addSingletonComponent(this->vsb, c)));
		} else {
			if (s->equals($ScrollPaneConstants::HORIZONTAL_SCROLLBAR)) {
				$set(this, hsb, $cast($JScrollBar, addSingletonComponent(this->hsb, c)));
			} else {
				if (s->equals($ScrollPaneConstants::ROW_HEADER)) {
					$set(this, rowHead, $cast($JViewport, addSingletonComponent(this->rowHead, c)));
				} else {
					if (s->equals($ScrollPaneConstants::COLUMN_HEADER)) {
						$set(this, colHead, $cast($JViewport, addSingletonComponent(this->colHead, c)));
					} else {
						if (s->equals($ScrollPaneConstants::LOWER_LEFT_CORNER)) {
							$set(this, lowerLeft, addSingletonComponent(this->lowerLeft, c));
						} else {
							if (s->equals($ScrollPaneConstants::LOWER_RIGHT_CORNER)) {
								$set(this, lowerRight, addSingletonComponent(this->lowerRight, c));
							} else {
								if (s->equals($ScrollPaneConstants::UPPER_LEFT_CORNER)) {
									$set(this, upperLeft, addSingletonComponent(this->upperLeft, c));
								} else {
									if (s->equals($ScrollPaneConstants::UPPER_RIGHT_CORNER)) {
										$set(this, upperRight, addSingletonComponent(this->upperRight, c));
									} else {
										$throwNew($IllegalArgumentException, $$str({"invalid layout key "_s, s}));
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void ScrollPaneLayout::removeLayoutComponent($Component* c) {
	if ($equals(c, this->viewport)) {
		$set(this, viewport, nullptr);
	} else if ($equals(c, this->vsb)) {
		$set(this, vsb, nullptr);
	} else if ($equals(c, this->hsb)) {
		$set(this, hsb, nullptr);
	} else if ($equals(c, this->rowHead)) {
		$set(this, rowHead, nullptr);
	} else if ($equals(c, this->colHead)) {
		$set(this, colHead, nullptr);
	} else if (c == this->lowerLeft) {
		$set(this, lowerLeft, nullptr);
	} else if (c == this->lowerRight) {
		$set(this, lowerRight, nullptr);
	} else if (c == this->upperLeft) {
		$set(this, upperLeft, nullptr);
	} else if (c == this->upperRight) {
		$set(this, upperRight, nullptr);
	}
}

int32_t ScrollPaneLayout::getVerticalScrollBarPolicy() {
	return this->vsbPolicy;
}

void ScrollPaneLayout::setVerticalScrollBarPolicy(int32_t x) {
	switch (x) {
	case $ScrollPaneConstants::VERTICAL_SCROLLBAR_AS_NEEDED:
		{}
	case $ScrollPaneConstants::VERTICAL_SCROLLBAR_NEVER:
		{}
	case $ScrollPaneConstants::VERTICAL_SCROLLBAR_ALWAYS:
		{
			this->vsbPolicy = x;
			break;
		}
	default:
		{
			$throwNew($IllegalArgumentException, "invalid verticalScrollBarPolicy"_s);
		}
	}
}

int32_t ScrollPaneLayout::getHorizontalScrollBarPolicy() {
	return this->hsbPolicy;
}

void ScrollPaneLayout::setHorizontalScrollBarPolicy(int32_t x) {
	switch (x) {
	case $ScrollPaneConstants::HORIZONTAL_SCROLLBAR_AS_NEEDED:
		{}
	case $ScrollPaneConstants::HORIZONTAL_SCROLLBAR_NEVER:
		{}
	case $ScrollPaneConstants::HORIZONTAL_SCROLLBAR_ALWAYS:
		{
			this->hsbPolicy = x;
			break;
		}
	default:
		{
			$throwNew($IllegalArgumentException, "invalid horizontalScrollBarPolicy"_s);
		}
	}
}

$JViewport* ScrollPaneLayout::getViewport() {
	return this->viewport;
}

$JScrollBar* ScrollPaneLayout::getHorizontalScrollBar() {
	return this->hsb;
}

$JScrollBar* ScrollPaneLayout::getVerticalScrollBar() {
	return this->vsb;
}

$JViewport* ScrollPaneLayout::getRowHeader() {
	return this->rowHead;
}

$JViewport* ScrollPaneLayout::getColumnHeader() {
	return this->colHead;
}

$Component* ScrollPaneLayout::getCorner($String* key) {
	$init($ScrollPaneConstants);
	if ($nc(key)->equals($ScrollPaneConstants::LOWER_LEFT_CORNER)) {
		return this->lowerLeft;
	} else {
		if (key->equals($ScrollPaneConstants::LOWER_RIGHT_CORNER)) {
			return this->lowerRight;
		} else {
			if (key->equals($ScrollPaneConstants::UPPER_LEFT_CORNER)) {
				return this->upperLeft;
			} else {
				if (key->equals($ScrollPaneConstants::UPPER_RIGHT_CORNER)) {
					return this->upperRight;
				} else {
					return nullptr;
				}
			}
		}
	}
}

$Dimension* ScrollPaneLayout::preferredLayoutSize($Container* parent) {
	$useLocalCurrentObjectStackCache();
	$var($JScrollPane, scrollPane, $cast($JScrollPane, parent));
	this->vsbPolicy = $nc(scrollPane)->getVerticalScrollBarPolicy();
	this->hsbPolicy = scrollPane->getHorizontalScrollBarPolicy();
	$var($Insets, insets, $nc(parent)->getInsets());
	int32_t prefWidth = $nc(insets)->left + insets->right;
	int32_t prefHeight = insets->top + insets->bottom;
	$var($Dimension, extentSize, nullptr);
	$var($Dimension, viewSize, nullptr);
	$var($Component, view, nullptr);
	if (this->viewport != nullptr) {
		$assign(extentSize, $nc(this->viewport)->getPreferredSize());
		$assign(view, $nc(this->viewport)->getView());
		if (view != nullptr) {
			$assign(viewSize, view->getPreferredSize());
		} else {
			$assign(viewSize, $new($Dimension, 0, 0));
		}
	}
	if (extentSize != nullptr) {
		prefWidth += extentSize->width;
		prefHeight += extentSize->height;
	}
	$var($Border, viewportBorder, scrollPane->getViewportBorder());
	if (viewportBorder != nullptr) {
		$var($Insets, vpbInsets, viewportBorder->getBorderInsets(parent));
		prefWidth += $nc(vpbInsets)->left + vpbInsets->right;
		prefHeight += vpbInsets->top + vpbInsets->bottom;
	}
	if ((this->rowHead != nullptr) && $nc(this->rowHead)->isVisible()) {
		prefWidth += $nc($($nc(this->rowHead)->getPreferredSize()))->width;
	}
	if ((this->colHead != nullptr) && $nc(this->colHead)->isVisible()) {
		prefHeight += $nc($($nc(this->colHead)->getPreferredSize()))->height;
	}
	if ((this->vsb != nullptr) && (this->vsbPolicy != $ScrollPaneConstants::VERTICAL_SCROLLBAR_NEVER)) {
		if (this->vsbPolicy == $ScrollPaneConstants::VERTICAL_SCROLLBAR_ALWAYS) {
			prefWidth += $nc($($nc(this->vsb)->getPreferredSize()))->width;
		} else if ((viewSize != nullptr) && (extentSize != nullptr)) {
			bool canScroll = true;
			if ($instanceOf($Scrollable, view)) {
				canScroll = !$nc(($cast($Scrollable, view)))->getScrollableTracksViewportHeight();
			}
			if (canScroll && (viewSize->height > extentSize->height)) {
				prefWidth += $nc($($nc(this->vsb)->getPreferredSize()))->width;
			}
		}
	}
	if ((this->hsb != nullptr) && (this->hsbPolicy != $ScrollPaneConstants::HORIZONTAL_SCROLLBAR_NEVER)) {
		if (this->hsbPolicy == $ScrollPaneConstants::HORIZONTAL_SCROLLBAR_ALWAYS) {
			prefHeight += $nc($($nc(this->hsb)->getPreferredSize()))->height;
		} else if ((viewSize != nullptr) && (extentSize != nullptr)) {
			bool canScroll = true;
			if ($instanceOf($Scrollable, view)) {
				canScroll = !$nc(($cast($Scrollable, view)))->getScrollableTracksViewportWidth();
			}
			if (canScroll && (viewSize->width > extentSize->width)) {
				prefHeight += $nc($($nc(this->hsb)->getPreferredSize()))->height;
			}
		}
	}
	return $new($Dimension, prefWidth, prefHeight);
}

$Dimension* ScrollPaneLayout::minimumLayoutSize($Container* parent) {
	$useLocalCurrentObjectStackCache();
	$var($JScrollPane, scrollPane, $cast($JScrollPane, parent));
	this->vsbPolicy = $nc(scrollPane)->getVerticalScrollBarPolicy();
	this->hsbPolicy = scrollPane->getHorizontalScrollBarPolicy();
	$var($Insets, insets, $nc(parent)->getInsets());
	int32_t minWidth = $nc(insets)->left + insets->right;
	int32_t minHeight = insets->top + insets->bottom;
	if (this->viewport != nullptr) {
		$var($Dimension, size, $nc(this->viewport)->getMinimumSize());
		minWidth += $nc(size)->width;
		minHeight += size->height;
	}
	$var($Border, viewportBorder, scrollPane->getViewportBorder());
	if (viewportBorder != nullptr) {
		$var($Insets, vpbInsets, viewportBorder->getBorderInsets(parent));
		minWidth += $nc(vpbInsets)->left + vpbInsets->right;
		minHeight += vpbInsets->top + vpbInsets->bottom;
	}
	if ((this->rowHead != nullptr) && $nc(this->rowHead)->isVisible()) {
		$var($Dimension, size, $nc(this->rowHead)->getMinimumSize());
		minWidth += $nc(size)->width;
		minHeight = $Math::max(minHeight, size->height);
	}
	if ((this->colHead != nullptr) && $nc(this->colHead)->isVisible()) {
		$var($Dimension, size, $nc(this->colHead)->getMinimumSize());
		minWidth = $Math::max(minWidth, $nc(size)->width);
		minHeight += $nc(size)->height;
	}
	if ((this->vsb != nullptr) && (this->vsbPolicy != $ScrollPaneConstants::VERTICAL_SCROLLBAR_NEVER)) {
		$var($Dimension, size, $nc(this->vsb)->getMinimumSize());
		minWidth += $nc(size)->width;
		minHeight = $Math::max(minHeight, size->height);
	}
	if ((this->hsb != nullptr) && (this->hsbPolicy != $ScrollPaneConstants::HORIZONTAL_SCROLLBAR_NEVER)) {
		$var($Dimension, size, $nc(this->hsb)->getMinimumSize());
		minWidth = $Math::max(minWidth, $nc(size)->width);
		minHeight += $nc(size)->height;
	}
	return $new($Dimension, minWidth, minHeight);
}

void ScrollPaneLayout::layoutContainer($Container* parent) {
	$useLocalCurrentObjectStackCache();
	$var($JScrollPane, scrollPane, $cast($JScrollPane, parent));
	this->vsbPolicy = $nc(scrollPane)->getVerticalScrollBarPolicy();
	this->hsbPolicy = scrollPane->getHorizontalScrollBarPolicy();
	$var($Rectangle, availR, scrollPane->getBounds());
	$nc(availR)->x = (availR->y = 0);
	$var($Insets, insets, $nc(parent)->getInsets());
	availR->x = $nc(insets)->left;
	availR->y = insets->top;
	availR->width -= insets->left + insets->right;
	availR->height -= insets->top + insets->bottom;
	bool leftToRight = $SwingUtilities::isLeftToRight(scrollPane);
	$var($Rectangle, colHeadR, $new($Rectangle, 0, availR->y, 0, 0));
	if ((this->colHead != nullptr) && ($nc(this->colHead)->isVisible())) {
		int32_t colHeadHeight = $Math::min(availR->height, $nc($($nc(this->colHead)->getPreferredSize()))->height);
		colHeadR->height = colHeadHeight;
		availR->y += colHeadHeight;
		availR->height -= colHeadHeight;
	}
	$var($Rectangle, rowHeadR, $new($Rectangle, 0, 0, 0, 0));
	if ((this->rowHead != nullptr) && ($nc(this->rowHead)->isVisible())) {
		int32_t rowHeadWidth = $Math::min(availR->width, $nc($($nc(this->rowHead)->getPreferredSize()))->width);
		rowHeadR->width = rowHeadWidth;
		availR->width -= rowHeadWidth;
		if (leftToRight) {
			rowHeadR->x = availR->x;
			availR->x += rowHeadWidth;
		} else {
			rowHeadR->x = availR->x + availR->width;
		}
	}
	$var($Border, viewportBorder, scrollPane->getViewportBorder());
	$var($Insets, vpbInsets, nullptr);
	if (viewportBorder != nullptr) {
		$assign(vpbInsets, viewportBorder->getBorderInsets(parent));
		availR->x += $nc(vpbInsets)->left;
		availR->y += vpbInsets->top;
		availR->width -= vpbInsets->left + vpbInsets->right;
		availR->height -= vpbInsets->top + vpbInsets->bottom;
	} else {
		$assign(vpbInsets, $new($Insets, 0, 0, 0, 0));
	}
	$var($Component, view, (this->viewport != nullptr) ? $nc(this->viewport)->getView() : ($Component*)nullptr);
	$var($Dimension, viewPrefSize, (view != nullptr) ? $nc(view)->getPreferredSize() : $new($Dimension, 0, 0));
	$var($Dimension, extentSize, (this->viewport != nullptr) ? $nc(this->viewport)->toViewCoordinates($(availR->getSize())) : $new($Dimension, 0, 0));
	bool viewTracksViewportWidth = false;
	bool viewTracksViewportHeight = false;
	bool isEmpty = (availR->width < 0 || availR->height < 0);
	$var($Scrollable, sv, nullptr);
	if (!isEmpty && $instanceOf($Scrollable, view)) {
		$assign(sv, $cast($Scrollable, view));
		viewTracksViewportWidth = sv->getScrollableTracksViewportWidth();
		viewTracksViewportHeight = sv->getScrollableTracksViewportHeight();
	} else {
		$assign(sv, nullptr);
	}
	$var($Rectangle, vsbR, $new($Rectangle, 0, availR->y - $nc(vpbInsets)->top, 0, 0));
	bool vsbNeeded = false;
	if (this->vsbPolicy == $ScrollPaneConstants::VERTICAL_SCROLLBAR_ALWAYS) {
		vsbNeeded = true;
	} else if (this->vsbPolicy == $ScrollPaneConstants::VERTICAL_SCROLLBAR_NEVER) {
		vsbNeeded = false;
	} else {
		vsbNeeded = !viewTracksViewportHeight && ($nc(viewPrefSize)->height > $nc(extentSize)->height);
	}
	if ((this->vsb != nullptr) && vsbNeeded) {
		adjustForVSB(true, availR, vsbR, vpbInsets, leftToRight);
		$assign(extentSize, $nc(this->viewport)->toViewCoordinates($(availR->getSize())));
	}
	$var($Rectangle, hsbR, $new($Rectangle, availR->x - $nc(vpbInsets)->left, 0, 0, 0));
	bool hsbNeeded = false;
	if (this->hsbPolicy == $ScrollPaneConstants::HORIZONTAL_SCROLLBAR_ALWAYS) {
		hsbNeeded = true;
	} else if (this->hsbPolicy == $ScrollPaneConstants::HORIZONTAL_SCROLLBAR_NEVER) {
		hsbNeeded = false;
	} else {
		hsbNeeded = !viewTracksViewportWidth && ($nc(viewPrefSize)->width > $nc(extentSize)->width);
	}
	if ((this->hsb != nullptr) && hsbNeeded) {
		adjustForHSB(true, availR, hsbR, vpbInsets);
		if ((this->vsb != nullptr) && !vsbNeeded && (this->vsbPolicy != $ScrollPaneConstants::VERTICAL_SCROLLBAR_NEVER)) {
			$assign(extentSize, $nc(this->viewport)->toViewCoordinates($(availR->getSize())));
			vsbNeeded = $nc(viewPrefSize)->height > $nc(extentSize)->height;
			if (vsbNeeded) {
				adjustForVSB(true, availR, vsbR, vpbInsets, leftToRight);
			}
		}
	}
	if (this->viewport != nullptr) {
		$nc(this->viewport)->setBounds(availR);
		if (sv != nullptr) {
			$assign(extentSize, $nc(this->viewport)->toViewCoordinates($(availR->getSize())));
			bool oldHSBNeeded = hsbNeeded;
			bool oldVSBNeeded = vsbNeeded;
			viewTracksViewportWidth = sv->getScrollableTracksViewportWidth();
			viewTracksViewportHeight = sv->getScrollableTracksViewportHeight();
			if (this->vsb != nullptr && this->vsbPolicy == $ScrollPaneConstants::VERTICAL_SCROLLBAR_AS_NEEDED) {
				bool newVSBNeeded = !viewTracksViewportHeight && ($nc(viewPrefSize)->height > $nc(extentSize)->height);
				if (newVSBNeeded != vsbNeeded) {
					vsbNeeded = newVSBNeeded;
					adjustForVSB(vsbNeeded, availR, vsbR, vpbInsets, leftToRight);
					$assign(extentSize, $nc(this->viewport)->toViewCoordinates($(availR->getSize())));
				}
			}
			if (this->hsb != nullptr && this->hsbPolicy == $ScrollPaneConstants::HORIZONTAL_SCROLLBAR_AS_NEEDED) {
				bool newHSBbNeeded = !viewTracksViewportWidth && ($nc(viewPrefSize)->width > $nc(extentSize)->width);
				if (newHSBbNeeded != hsbNeeded) {
					hsbNeeded = newHSBbNeeded;
					adjustForHSB(hsbNeeded, availR, hsbR, vpbInsets);
					if ((this->vsb != nullptr) && !vsbNeeded && (this->vsbPolicy != $ScrollPaneConstants::VERTICAL_SCROLLBAR_NEVER)) {
						$assign(extentSize, $nc(this->viewport)->toViewCoordinates($(availR->getSize())));
						vsbNeeded = viewPrefSize->height > $nc(extentSize)->height;
						if (vsbNeeded) {
							adjustForVSB(true, availR, vsbR, vpbInsets, leftToRight);
						}
					}
				}
			}
			if (oldHSBNeeded != hsbNeeded || oldVSBNeeded != vsbNeeded) {
				$nc(this->viewport)->setBounds(availR);
			}
		}
	}
	vsbR->height = availR->height + $nc(vpbInsets)->top + vpbInsets->bottom;
	hsbR->width = availR->width + vpbInsets->left + vpbInsets->right;
	rowHeadR->height = availR->height + vpbInsets->top + vpbInsets->bottom;
	rowHeadR->y = availR->y - vpbInsets->top;
	colHeadR->width = availR->width + vpbInsets->left + vpbInsets->right;
	colHeadR->x = availR->x - vpbInsets->left;
	if (this->rowHead != nullptr) {
		$nc(this->rowHead)->setBounds(rowHeadR);
	}
	if (this->colHead != nullptr) {
		$nc(this->colHead)->setBounds(colHeadR);
	}
	if (this->vsb != nullptr) {
		if (vsbNeeded) {
			if (this->colHead != nullptr && $UIManager::getBoolean("ScrollPane.fillUpperCorner"_s)) {
				if ((leftToRight && this->upperRight == nullptr) || (!leftToRight && this->upperLeft == nullptr)) {
					vsbR->y = colHeadR->y;
					vsbR->height += colHeadR->height;
				}
			}
			$nc(this->vsb)->setVisible(true);
			$nc(this->vsb)->setBounds(vsbR);
		} else {
			$nc(this->vsb)->setVisible(false);
		}
	}
	if (this->hsb != nullptr) {
		if (hsbNeeded) {
			if (this->rowHead != nullptr && $UIManager::getBoolean("ScrollPane.fillLowerCorner"_s)) {
				if ((leftToRight && this->lowerLeft == nullptr) || (!leftToRight && this->lowerRight == nullptr)) {
					if (leftToRight) {
						hsbR->x = rowHeadR->x;
					}
					hsbR->width += rowHeadR->width;
				}
			}
			$nc(this->hsb)->setVisible(true);
			$nc(this->hsb)->setBounds(hsbR);
		} else {
			$nc(this->hsb)->setVisible(false);
		}
	}
	if (this->lowerLeft != nullptr) {
		$nc(this->lowerLeft)->setBounds(leftToRight ? rowHeadR->x : vsbR->x, hsbR->y, leftToRight ? rowHeadR->width : vsbR->width, hsbR->height);
	}
	if (this->lowerRight != nullptr) {
		$nc(this->lowerRight)->setBounds(leftToRight ? vsbR->x : rowHeadR->x, hsbR->y, leftToRight ? vsbR->width : rowHeadR->width, hsbR->height);
	}
	if (this->upperLeft != nullptr) {
		$nc(this->upperLeft)->setBounds(leftToRight ? rowHeadR->x : vsbR->x, colHeadR->y, leftToRight ? rowHeadR->width : vsbR->width, colHeadR->height);
	}
	if (this->upperRight != nullptr) {
		$nc(this->upperRight)->setBounds(leftToRight ? vsbR->x : rowHeadR->x, colHeadR->y, leftToRight ? vsbR->width : rowHeadR->width, colHeadR->height);
	}
}

void ScrollPaneLayout::adjustForVSB(bool wantsVSB, $Rectangle* available, $Rectangle* vsbR, $Insets* vpbInsets, bool leftToRight) {
	int32_t oldWidth = $nc(vsbR)->width;
	if (wantsVSB) {
		int32_t vsbWidth = $Math::max(0, $Math::min($nc($($nc(this->vsb)->getPreferredSize()))->width, $nc(available)->width));
		$nc(available)->width -= vsbWidth;
		vsbR->width = vsbWidth;
		if (leftToRight) {
			vsbR->x = available->x + available->width + $nc(vpbInsets)->right;
		} else {
			vsbR->x = available->x - $nc(vpbInsets)->left;
			available->x += vsbWidth;
		}
	} else {
		$nc(available)->width += oldWidth;
	}
}

void ScrollPaneLayout::adjustForHSB(bool wantsHSB, $Rectangle* available, $Rectangle* hsbR, $Insets* vpbInsets) {
	int32_t oldHeight = $nc(hsbR)->height;
	if (wantsHSB) {
		int32_t hsbHeight = $Math::max(0, $Math::min($nc(available)->height, $nc($($nc(this->hsb)->getPreferredSize()))->height));
		$nc(available)->height -= hsbHeight;
		hsbR->y = available->y + available->height + $nc(vpbInsets)->bottom;
		hsbR->height = hsbHeight;
	} else {
		$nc(available)->height += oldHeight;
	}
}

$Rectangle* ScrollPaneLayout::getViewportBorderBounds($JScrollPane* scrollpane) {
	return $nc(scrollpane)->getViewportBorderBounds();
}

ScrollPaneLayout::ScrollPaneLayout() {
}

$Class* ScrollPaneLayout::load$($String* name, bool initialize) {
	$loadClass(ScrollPaneLayout, name, initialize, &_ScrollPaneLayout_ClassInfo_, allocate$ScrollPaneLayout);
	return class$;
}

$Class* ScrollPaneLayout::class$ = nullptr;

	} // swing
} // javax