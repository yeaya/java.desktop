#include <javax/swing/plaf/basic/BasicTabbedPaneUI$TabbedPaneLayout.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/plaf/basic/BasicGraphicsUtils.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI$TabContainer.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI.h>
#include <jcpp.h>

using $RectangleArray = $Array<::java::awt::Rectangle>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $FontMetrics = ::java::awt::FontMetrics;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $BasicGraphicsUtils = ::javax::swing::plaf::basic::BasicGraphicsUtils;
using $BasicTabbedPaneUI = ::javax::swing::plaf::basic::BasicTabbedPaneUI;
using $BasicTabbedPaneUI$TabContainer = ::javax::swing::plaf::basic::BasicTabbedPaneUI$TabContainer;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicTabbedPaneUI$TabbedPaneLayout_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicTabbedPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicTabbedPaneUI$TabbedPaneLayout, this$0)},
	{}
};

$MethodInfo _BasicTabbedPaneUI$TabbedPaneLayout_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicTabbedPaneUI;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicTabbedPaneUI$TabbedPaneLayout::*)($BasicTabbedPaneUI*)>(&BasicTabbedPaneUI$TabbedPaneLayout::init$))},
	{"addLayoutComponent", "(Ljava/lang/String;Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"calculateLayoutInfo", "()V", nullptr, $PUBLIC},
	{"calculateSize", "(Z)Ljava/awt/Dimension;", nullptr, $PROTECTED},
	{"calculateTabRects", "(II)V", nullptr, $PROTECTED},
	{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"layoutTabComponents", "()V", nullptr, $PRIVATE, $method(static_cast<void(BasicTabbedPaneUI$TabbedPaneLayout::*)()>(&BasicTabbedPaneUI$TabbedPaneLayout::layoutTabComponents))},
	{"minimumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"normalizeTabRuns", "(IIII)V", nullptr, $PROTECTED},
	{"padSelectedTab", "(II)V", nullptr, $PROTECTED},
	{"padTabRun", "(IIII)V", nullptr, $PROTECTED},
	{"preferredLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"preferredTabAreaHeight", "(II)I", nullptr, $PROTECTED},
	{"preferredTabAreaWidth", "(II)I", nullptr, $PROTECTED},
	{"removeLayoutComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"rotateTabRuns", "(II)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _BasicTabbedPaneUI$TabbedPaneLayout_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicTabbedPaneUI$TabbedPaneLayout", "javax.swing.plaf.basic.BasicTabbedPaneUI", "TabbedPaneLayout", $PUBLIC},
	{}
};

$ClassInfo _BasicTabbedPaneUI$TabbedPaneLayout_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicTabbedPaneUI$TabbedPaneLayout",
	"java.lang.Object",
	"java.awt.LayoutManager",
	_BasicTabbedPaneUI$TabbedPaneLayout_FieldInfo_,
	_BasicTabbedPaneUI$TabbedPaneLayout_MethodInfo_,
	nullptr,
	nullptr,
	_BasicTabbedPaneUI$TabbedPaneLayout_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicTabbedPaneUI"
};

$Object* allocate$BasicTabbedPaneUI$TabbedPaneLayout($Class* clazz) {
	return $of($alloc(BasicTabbedPaneUI$TabbedPaneLayout));
}

void BasicTabbedPaneUI$TabbedPaneLayout::init$($BasicTabbedPaneUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicTabbedPaneUI$TabbedPaneLayout::addLayoutComponent($String* name, $Component* comp) {
}

void BasicTabbedPaneUI$TabbedPaneLayout::removeLayoutComponent($Component* comp) {
}

$Dimension* BasicTabbedPaneUI$TabbedPaneLayout::preferredLayoutSize($Container* parent) {
	return calculateSize(false);
}

$Dimension* BasicTabbedPaneUI$TabbedPaneLayout::minimumLayoutSize($Container* parent) {
	return calculateSize(true);
}

$Dimension* BasicTabbedPaneUI$TabbedPaneLayout::calculateSize(bool minimum) {
	$useLocalCurrentObjectStackCache();
	int32_t tabPlacement = $nc(this->this$0->tabPane)->getTabPlacement();
	$var($Insets, insets, $nc(this->this$0->tabPane)->getInsets());
	$var($Insets, contentInsets, this->this$0->getContentBorderInsets(tabPlacement));
	$var($Insets, tabAreaInsets, this->this$0->getTabAreaInsets(tabPlacement));
	$var($Dimension, zeroSize, $new($Dimension, 0, 0));
	int32_t height = 0;
	int32_t width = 0;
	int32_t cWidth = 0;
	int32_t cHeight = 0;
	for (int32_t i = 0; i < $nc(this->this$0->tabPane)->getTabCount(); ++i) {
		$var($Component, component, $nc(this->this$0->tabPane)->getComponentAt(i));
		if (component != nullptr) {
			$var($Dimension, size, minimum ? component->getMinimumSize() : component->getPreferredSize());
			if (size != nullptr) {
				cHeight = $Math::max(size->height, cHeight);
				cWidth = $Math::max(size->width, cWidth);
			}
		}
	}
	width += cWidth;
	height += cHeight;
	int32_t tabExtent = 0;
	switch (tabPlacement) {
	case 2:
		{}
	case 4:
		{
			height = $Math::max(height, this->this$0->calculateMaxTabHeight(tabPlacement));
			tabExtent = preferredTabAreaWidth(tabPlacement, height - $nc(tabAreaInsets)->top - tabAreaInsets->bottom);
			width += tabExtent;
			break;
		}
	case 1:
		{}
	case 3:
		{}
	default:
		{
			width = $Math::max(width, this->this$0->calculateMaxTabWidth(tabPlacement));
			tabExtent = preferredTabAreaHeight(tabPlacement, width - $nc(tabAreaInsets)->left - tabAreaInsets->right);
			height += tabExtent;
		}
	}
	return $new($Dimension, width + $nc(insets)->left + insets->right + $nc(contentInsets)->left + contentInsets->right, height + insets->bottom + insets->top + contentInsets->top + contentInsets->bottom);
}

int32_t BasicTabbedPaneUI$TabbedPaneLayout::preferredTabAreaHeight(int32_t tabPlacement, int32_t width) {
	$var($FontMetrics, metrics, this->this$0->getFontMetrics());
	int32_t tabCount = $nc(this->this$0->tabPane)->getTabCount();
	int32_t total = 0;
	if (tabCount > 0) {
		int32_t rows = 1;
		int32_t x = 0;
		int32_t maxTabHeight = this->this$0->calculateMaxTabHeight(tabPlacement);
		for (int32_t i = 0; i < tabCount; ++i) {
			int32_t tabWidth = this->this$0->calculateTabWidth(tabPlacement, i, metrics);
			if (x != 0 && x + tabWidth > width) {
				++rows;
				x = 0;
			}
			x += tabWidth;
		}
		total = this->this$0->calculateTabAreaHeight(tabPlacement, rows, maxTabHeight);
	}
	return total;
}

int32_t BasicTabbedPaneUI$TabbedPaneLayout::preferredTabAreaWidth(int32_t tabPlacement, int32_t height) {
	$var($FontMetrics, metrics, this->this$0->getFontMetrics());
	int32_t tabCount = $nc(this->this$0->tabPane)->getTabCount();
	int32_t total = 0;
	if (tabCount > 0) {
		int32_t columns = 1;
		int32_t y = 0;
		int32_t fontHeight = $nc(metrics)->getHeight();
		this->this$0->maxTabWidth = this->this$0->calculateMaxTabWidth(tabPlacement);
		for (int32_t i = 0; i < tabCount; ++i) {
			int32_t tabHeight = this->this$0->calculateTabHeight(tabPlacement, i, fontHeight);
			if (y != 0 && y + tabHeight > height) {
				++columns;
				y = 0;
			}
			y += tabHeight;
		}
		total = this->this$0->calculateTabAreaWidth(tabPlacement, columns, this->this$0->maxTabWidth);
	}
	return total;
}

void BasicTabbedPaneUI$TabbedPaneLayout::layoutContainer($Container* parent) {
	$useLocalCurrentObjectStackCache();
	this->this$0->setRolloverTab(-1);
	int32_t tabPlacement = $nc(this->this$0->tabPane)->getTabPlacement();
	$var($Insets, insets, $nc(this->this$0->tabPane)->getInsets());
	int32_t selectedIndex = $nc(this->this$0->tabPane)->getSelectedIndex();
	$var($Component, visibleComponent, this->this$0->getVisibleComponent());
	calculateLayoutInfo();
	$var($Component, selectedComponent, nullptr);
	if (selectedIndex < 0) {
		if (visibleComponent != nullptr) {
			this->this$0->setVisibleComponent(nullptr);
		}
	} else {
		$assign(selectedComponent, $nc(this->this$0->tabPane)->getComponentAt(selectedIndex));
	}
	int32_t cx = 0;
	int32_t cy = 0;
	int32_t cw = 0;
	int32_t ch = 0;
	int32_t totalTabWidth = 0;
	int32_t totalTabHeight = 0;
	$var($Insets, contentInsets, this->this$0->getContentBorderInsets(tabPlacement));
	bool shouldChangeFocus = false;
	if (selectedComponent != nullptr) {
		if (selectedComponent != visibleComponent && visibleComponent != nullptr) {
			if ($SwingUtilities::findFocusOwner(visibleComponent) != nullptr) {
				shouldChangeFocus = true;
			}
		}
		this->this$0->setVisibleComponent(selectedComponent);
	}
	$var($Rectangle, bounds, $nc(this->this$0->tabPane)->getBounds());
	int32_t numChildren = $nc(this->this$0->tabPane)->getComponentCount();
	if (numChildren > 0) {
		switch (tabPlacement) {
		case 2:
			{
				totalTabWidth = this->this$0->calculateTabAreaWidth(tabPlacement, this->this$0->runCount, this->this$0->maxTabWidth);
				cx = $nc(insets)->left + totalTabWidth + $nc(contentInsets)->left;
				cy = $nc(insets)->top + $nc(contentInsets)->top;
				break;
			}
		case 4:
			{
				totalTabWidth = this->this$0->calculateTabAreaWidth(tabPlacement, this->this$0->runCount, this->this$0->maxTabWidth);
				cx = $nc(insets)->left + $nc(contentInsets)->left;
				cy = $nc(insets)->top + $nc(contentInsets)->top;
				break;
			}
		case 3:
			{
				totalTabHeight = this->this$0->calculateTabAreaHeight(tabPlacement, this->this$0->runCount, this->this$0->maxTabHeight);
				cx = $nc(insets)->left + $nc(contentInsets)->left;
				cy = $nc(insets)->top + $nc(contentInsets)->top;
				break;
			}
		case 1:
			{}
		default:
			{
				totalTabHeight = this->this$0->calculateTabAreaHeight(tabPlacement, this->this$0->runCount, this->this$0->maxTabHeight);
				cx = $nc(insets)->left + $nc(contentInsets)->left;
				cy = $nc(insets)->top + totalTabHeight + $nc(contentInsets)->top;
			}
		}
		cw = $nc(bounds)->width - totalTabWidth - $nc(insets)->left - insets->right - $nc(contentInsets)->left - contentInsets->right;
		ch = bounds->height - totalTabHeight - insets->top - insets->bottom - contentInsets->top - contentInsets->bottom;
		for (int32_t i = 0; i < numChildren; ++i) {
			$var($Component, child, $nc(this->this$0->tabPane)->getComponent(i));
			if ($equals(child, this->this$0->tabContainer)) {
				int32_t tabContainerWidth = totalTabWidth == 0 ? bounds->width : totalTabWidth + insets->left + insets->right + contentInsets->left + contentInsets->right;
				int32_t tabContainerHeight = totalTabHeight == 0 ? bounds->height : totalTabHeight + insets->top + insets->bottom + contentInsets->top + contentInsets->bottom;
				int32_t tabContainerX = 0;
				int32_t tabContainerY = 0;
				if (tabPlacement == 3) {
					tabContainerY = bounds->height - tabContainerHeight;
				} else if (tabPlacement == 4) {
					tabContainerX = bounds->width - tabContainerWidth;
				}
				$nc(child)->setBounds(tabContainerX, tabContainerY, tabContainerWidth, tabContainerHeight);
			} else {
				$nc(child)->setBounds(cx, cy, cw, ch);
			}
		}
	}
	layoutTabComponents();
	if (shouldChangeFocus) {
		if (!this->this$0->requestFocusForVisibleComponent()) {
			$nc(this->this$0->tabPane)->requestFocus();
		}
	}
}

void BasicTabbedPaneUI$TabbedPaneLayout::calculateLayoutInfo() {
	int32_t tabCount = $nc(this->this$0->tabPane)->getTabCount();
	this->this$0->assureRectsCreated(tabCount);
	calculateTabRects($nc(this->this$0->tabPane)->getTabPlacement(), tabCount);
	this->this$0->isRunsDirty = false;
}

void BasicTabbedPaneUI$TabbedPaneLayout::layoutTabComponents() {
	$useLocalCurrentObjectStackCache();
	if (this->this$0->tabContainer == nullptr) {
		return;
	}
	$var($Rectangle, rect, $new($Rectangle));
	int32_t var$0 = -$nc(this->this$0->tabContainer)->getX();
	$var($Point, delta, $new($Point, var$0, -$nc(this->this$0->tabContainer)->getY()));
	if (this->this$0->scrollableTabLayoutEnabled()) {
		this->this$0->translatePointToTabPanel(0, 0, delta);
	}
	for (int32_t i = 0; i < $nc(this->this$0->tabPane)->getTabCount(); ++i) {
		$var($Component, c, $nc(this->this$0->tabPane)->getTabComponentAt(i));
		if (c == nullptr) {
			continue;
		}
		this->this$0->getTabBounds(i, rect);
		$var($Dimension, preferredSize, $nc(c)->getPreferredSize());
		$var($Insets, insets, this->this$0->getTabInsets($nc(this->this$0->tabPane)->getTabPlacement(), i));
		int32_t outerX = rect->x + $nc(insets)->left + delta->x;
		int32_t outerY = rect->y + insets->top + delta->y;
		int32_t outerWidth = rect->width - insets->left - insets->right;
		int32_t outerHeight = rect->height - insets->top - insets->bottom;
		int32_t x = outerX + (outerWidth - $nc(preferredSize)->width) / 2;
		int32_t y = outerY + (outerHeight - preferredSize->height) / 2;
		int32_t tabPlacement = $nc(this->this$0->tabPane)->getTabPlacement();
		bool isSeleceted = i == $nc(this->this$0->tabPane)->getSelectedIndex();
		int32_t var$1 = x + this->this$0->getTabLabelShiftX(tabPlacement, i, isSeleceted);
		c->setBounds(var$1, y + this->this$0->getTabLabelShiftY(tabPlacement, i, isSeleceted), preferredSize->width, preferredSize->height);
	}
}

void BasicTabbedPaneUI$TabbedPaneLayout::calculateTabRects(int32_t tabPlacement, int32_t tabCount) {
	$useLocalCurrentObjectStackCache();
	$var($FontMetrics, metrics, this->this$0->getFontMetrics());
	$var($Dimension, size, $nc(this->this$0->tabPane)->getSize());
	$var($Insets, insets, $nc(this->this$0->tabPane)->getInsets());
	$var($Insets, tabAreaInsets, this->this$0->getTabAreaInsets(tabPlacement));
	int32_t fontHeight = $nc(metrics)->getHeight();
	int32_t selectedIndex = $nc(this->this$0->tabPane)->getSelectedIndex();
	int32_t tabRunOverlay = 0;
	int32_t i = 0;
	int32_t j = 0;
	int32_t x = 0;
	int32_t y = 0;
	int32_t returnAt = 0;
	bool verticalTabRuns = (tabPlacement == 2 || tabPlacement == 4);
	bool leftToRight = $BasicGraphicsUtils::isLeftToRight(this->this$0->tabPane);
	switch (tabPlacement) {
	case 2:
		{
			this->this$0->maxTabWidth = this->this$0->calculateMaxTabWidth(tabPlacement);
			x = $nc(insets)->left + $nc(tabAreaInsets)->left;
			y = $nc(insets)->top + $nc(tabAreaInsets)->top;
			returnAt = $nc(size)->height - ($nc(insets)->bottom + $nc(tabAreaInsets)->bottom);
			break;
		}
	case 4:
		{
			this->this$0->maxTabWidth = this->this$0->calculateMaxTabWidth(tabPlacement);
			x = $nc(size)->width - $nc(insets)->right - $nc(tabAreaInsets)->right - this->this$0->maxTabWidth;
			y = $nc(insets)->top + $nc(tabAreaInsets)->top;
			returnAt = $nc(size)->height - ($nc(insets)->bottom + $nc(tabAreaInsets)->bottom);
			break;
		}
	case 3:
		{
			this->this$0->maxTabHeight = this->this$0->calculateMaxTabHeight(tabPlacement);
			x = $nc(insets)->left + $nc(tabAreaInsets)->left;
			y = $nc(size)->height - $nc(insets)->bottom - $nc(tabAreaInsets)->bottom - this->this$0->maxTabHeight;
			returnAt = $nc(size)->width - ($nc(insets)->right + $nc(tabAreaInsets)->right);
			break;
		}
	case 1:
		{}
	default:
		{
			this->this$0->maxTabHeight = this->this$0->calculateMaxTabHeight(tabPlacement);
			x = $nc(insets)->left + $nc(tabAreaInsets)->left;
			y = $nc(insets)->top + $nc(tabAreaInsets)->top;
			returnAt = $nc(size)->width - ($nc(insets)->right + $nc(tabAreaInsets)->right);
			break;
		}
	}
	tabRunOverlay = this->this$0->getTabRunOverlay(tabPlacement);
	this->this$0->runCount = 0;
	this->this$0->selectedRun = -1;
	if (tabCount == 0) {
		return;
	}
	$var($Rectangle, rect, nullptr);
	for (i = 0; i < tabCount; ++i) {
		$assign(rect, $nc(this->this$0->rects)->get(i));
		if (!verticalTabRuns) {
			if (i > 0) {
				$nc(rect)->x = $nc($nc(this->this$0->rects)->get(i - 1))->x + $nc($nc(this->this$0->rects)->get(i - 1))->width;
			} else {
				$nc(this->this$0->tabRuns)->set(0, 0);
				this->this$0->runCount = 1;
				this->this$0->maxTabWidth = 0;
				$nc(rect)->x = x;
			}
			$nc(rect)->width = this->this$0->calculateTabWidth(tabPlacement, i, metrics);
			this->this$0->maxTabWidth = $Math::max(this->this$0->maxTabWidth, rect->width);
			if (rect->x != x && rect->x + rect->width > returnAt) {
				if (this->this$0->runCount > $nc(this->this$0->tabRuns)->length - 1) {
					this->this$0->expandTabRunsArray();
				}
				$nc(this->this$0->tabRuns)->set(this->this$0->runCount, i);
				++this->this$0->runCount;
				rect->x = x;
			}
			rect->y = y;
			rect->height = this->this$0->maxTabHeight;
		} else {
			if (i > 0) {
				$nc(rect)->y = $nc($nc(this->this$0->rects)->get(i - 1))->y + $nc($nc(this->this$0->rects)->get(i - 1))->height;
			} else {
				$nc(this->this$0->tabRuns)->set(0, 0);
				this->this$0->runCount = 1;
				this->this$0->maxTabHeight = 0;
				$nc(rect)->y = y;
			}
			$nc(rect)->height = this->this$0->calculateTabHeight(tabPlacement, i, fontHeight);
			this->this$0->maxTabHeight = $Math::max(this->this$0->maxTabHeight, rect->height);
			if (rect->y != y && rect->y + rect->height > returnAt) {
				if (this->this$0->runCount > $nc(this->this$0->tabRuns)->length - 1) {
					this->this$0->expandTabRunsArray();
				}
				$nc(this->this$0->tabRuns)->set(this->this$0->runCount, i);
				++this->this$0->runCount;
				rect->y = y;
			}
			rect->x = x;
			rect->width = this->this$0->maxTabWidth;
		}
		if (i == selectedIndex) {
			this->this$0->selectedRun = this->this$0->runCount - 1;
		}
	}
	if (this->this$0->runCount > 1) {
		normalizeTabRuns(tabPlacement, tabCount, verticalTabRuns ? y : x, returnAt);
		this->this$0->selectedRun = this->this$0->getRunForTab(tabCount, selectedIndex);
		if (this->this$0->shouldRotateTabRuns(tabPlacement)) {
			rotateTabRuns(tabPlacement, this->this$0->selectedRun);
		}
	}
	for (i = this->this$0->runCount - 1; i >= 0; --i) {
		int32_t start = $nc(this->this$0->tabRuns)->get(i);
		int32_t next = $nc(this->this$0->tabRuns)->get(i == (this->this$0->runCount - 1) ? 0 : i + 1);
		int32_t end = (next != 0 ? next - 1 : tabCount - 1);
		if (!verticalTabRuns) {
			for (j = start; j <= end; ++j) {
				$assign(rect, $nc(this->this$0->rects)->get(j));
				$nc(rect)->y = y;
				rect->x += this->this$0->getTabRunIndent(tabPlacement, i);
			}
			if (this->this$0->shouldPadTabRun(tabPlacement, i)) {
				padTabRun(tabPlacement, start, end, returnAt);
			}
			if (tabPlacement == 3) {
				y -= (this->this$0->maxTabHeight - tabRunOverlay);
			} else {
				y += (this->this$0->maxTabHeight - tabRunOverlay);
			}
		} else {
			for (j = start; j <= end; ++j) {
				$assign(rect, $nc(this->this$0->rects)->get(j));
				$nc(rect)->x = x;
				rect->y += this->this$0->getTabRunIndent(tabPlacement, i);
			}
			if (this->this$0->shouldPadTabRun(tabPlacement, i)) {
				padTabRun(tabPlacement, start, end, returnAt);
			}
			if (tabPlacement == 4) {
				x -= (this->this$0->maxTabWidth - tabRunOverlay);
			} else {
				x += (this->this$0->maxTabWidth - tabRunOverlay);
			}
		}
	}
	padSelectedTab(tabPlacement, selectedIndex);
	if (!leftToRight && !verticalTabRuns) {
		int32_t rightMargin = $nc(size)->width - ($nc(insets)->right + $nc(tabAreaInsets)->right);
		for (i = 0; i < tabCount; ++i) {
			$nc($nc(this->this$0->rects)->get(i))->x = rightMargin - $nc($nc(this->this$0->rects)->get(i))->x - $nc($nc(this->this$0->rects)->get(i))->width;
		}
	}
}

void BasicTabbedPaneUI$TabbedPaneLayout::rotateTabRuns(int32_t tabPlacement, int32_t selectedRun) {
	for (int32_t i = 0; i < selectedRun; ++i) {
		int32_t save = $nc(this->this$0->tabRuns)->get(0);
		for (int32_t j = 1; j < this->this$0->runCount; ++j) {
			$nc(this->this$0->tabRuns)->set(j - 1, $nc(this->this$0->tabRuns)->get(j));
		}
		$nc(this->this$0->tabRuns)->set(this->this$0->runCount - 1, save);
	}
}

void BasicTabbedPaneUI$TabbedPaneLayout::normalizeTabRuns(int32_t tabPlacement, int32_t tabCount, int32_t start, int32_t max) {
	bool verticalTabRuns = (tabPlacement == 2 || tabPlacement == 4);
	int32_t run = this->this$0->runCount - 1;
	bool keepAdjusting = true;
	double weight = 1.25;
	while (keepAdjusting) {
		int32_t last = this->this$0->lastTabInRun(tabCount, run);
		int32_t prevLast = this->this$0->lastTabInRun(tabCount, run - 1);
		int32_t end = 0;
		int32_t prevLastLen = 0;
		if (!verticalTabRuns) {
			end = $nc($nc(this->this$0->rects)->get(last))->x + $nc($nc(this->this$0->rects)->get(last))->width;
			prevLastLen = $cast(int32_t, (this->this$0->maxTabWidth * weight));
		} else {
			end = $nc($nc(this->this$0->rects)->get(last))->y + $nc($nc(this->this$0->rects)->get(last))->height;
			prevLastLen = $cast(int32_t, (this->this$0->maxTabHeight * weight * 2));
		}
		if (max - end > prevLastLen) {
			$nc(this->this$0->tabRuns)->set(run, prevLast);
			if (!verticalTabRuns) {
				$nc($nc(this->this$0->rects)->get(prevLast))->x = start;
			} else {
				$nc($nc(this->this$0->rects)->get(prevLast))->y = start;
			}
			for (int32_t i = prevLast + 1; i <= last; ++i) {
				if (!verticalTabRuns) {
					$nc($nc(this->this$0->rects)->get(i))->x = $nc($nc(this->this$0->rects)->get(i - 1))->x + $nc($nc(this->this$0->rects)->get(i - 1))->width;
				} else {
					$nc($nc(this->this$0->rects)->get(i))->y = $nc($nc(this->this$0->rects)->get(i - 1))->y + $nc($nc(this->this$0->rects)->get(i - 1))->height;
				}
			}
		} else if (run == this->this$0->runCount - 1) {
			keepAdjusting = false;
		}
		if (run - 1 > 0) {
			run -= 1;
		} else {
			run = this->this$0->runCount - 1;
			weight += 0.25;
		}
	}
}

void BasicTabbedPaneUI$TabbedPaneLayout::padTabRun(int32_t tabPlacement, int32_t start, int32_t end, int32_t max) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, lastRect, $nc(this->this$0->rects)->get(end));
	if (tabPlacement == 1 || tabPlacement == 3) {
		int32_t runWidth = ($nc(lastRect)->x + lastRect->width) - $nc($nc(this->this$0->rects)->get(start))->x;
		int32_t deltaWidth = max - (lastRect->x + lastRect->width);
		float factor = (float)deltaWidth / (float)runWidth;
		for (int32_t j = start; j <= end; ++j) {
			$var($Rectangle, pastRect, $nc(this->this$0->rects)->get(j));
			if (j > start) {
				$nc(pastRect)->x = $nc($nc(this->this$0->rects)->get(j - 1))->x + $nc($nc(this->this$0->rects)->get(j - 1))->width;
			}
			$nc(pastRect)->width += $Math::round((float)pastRect->width * factor);
		}
		lastRect->width = max - lastRect->x;
	} else {
		int32_t runHeight = ($nc(lastRect)->y + lastRect->height) - $nc($nc(this->this$0->rects)->get(start))->y;
		int32_t deltaHeight = max - (lastRect->y + lastRect->height);
		float factor = (float)deltaHeight / (float)runHeight;
		for (int32_t j = start; j <= end; ++j) {
			$var($Rectangle, pastRect, $nc(this->this$0->rects)->get(j));
			if (j > start) {
				$nc(pastRect)->y = $nc($nc(this->this$0->rects)->get(j - 1))->y + $nc($nc(this->this$0->rects)->get(j - 1))->height;
			}
			$nc(pastRect)->height += $Math::round((float)pastRect->height * factor);
		}
		lastRect->height = max - lastRect->y;
	}
}

void BasicTabbedPaneUI$TabbedPaneLayout::padSelectedTab(int32_t tabPlacement, int32_t selectedIndex) {
	$useLocalCurrentObjectStackCache();
	if (selectedIndex >= 0) {
		$var($Rectangle, selRect, $nc(this->this$0->rects)->get(selectedIndex));
		$var($Insets, padInsets, this->this$0->getSelectedTabPadInsets(tabPlacement));
		$nc(selRect)->x -= $nc(padInsets)->left;
		selRect->width += (padInsets->left + padInsets->right);
		selRect->y -= padInsets->top;
		selRect->height += (padInsets->top + padInsets->bottom);
		if (!this->this$0->scrollableTabLayoutEnabled()) {
			$var($Dimension, size, $nc(this->this$0->tabPane)->getSize());
			$var($Insets, insets, $nc(this->this$0->tabPane)->getInsets());
			if ((tabPlacement == 2) || (tabPlacement == 4)) {
				int32_t top = $nc(insets)->top - selRect->y;
				if (top > 0) {
					selRect->y += top;
					selRect->height -= top;
				}
				int32_t bottom = (selRect->y + selRect->height) + insets->bottom - $nc(size)->height;
				if (bottom > 0) {
					selRect->height -= bottom;
				}
			} else {
				int32_t left = $nc(insets)->left - selRect->x;
				if (left > 0) {
					selRect->x += left;
					selRect->width -= left;
				}
				int32_t right = (selRect->x + selRect->width) + insets->right - $nc(size)->width;
				if (right > 0) {
					selRect->width -= right;
				}
			}
		}
	}
}

BasicTabbedPaneUI$TabbedPaneLayout::BasicTabbedPaneUI$TabbedPaneLayout() {
}

$Class* BasicTabbedPaneUI$TabbedPaneLayout::load$($String* name, bool initialize) {
	$loadClass(BasicTabbedPaneUI$TabbedPaneLayout, name, initialize, &_BasicTabbedPaneUI$TabbedPaneLayout_ClassInfo_, allocate$BasicTabbedPaneUI$TabbedPaneLayout);
	return class$;
}

$Class* BasicTabbedPaneUI$TabbedPaneLayout::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax