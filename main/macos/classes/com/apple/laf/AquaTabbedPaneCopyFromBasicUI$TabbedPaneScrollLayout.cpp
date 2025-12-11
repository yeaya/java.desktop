#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI$TabbedPaneScrollLayout.h>

#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI$CroppedEdge.h>
#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI$ScrollableTabPanel.h>
#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport.h>
#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI$ScrollableTabViewport.h>
#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI$TabbedPaneLayout.h>
#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI.h>
#include <com/apple/laf/AquaUtils.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <java/lang/Math.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/JViewport.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $AquaTabbedPaneCopyFromBasicUI = ::com::apple::laf::AquaTabbedPaneCopyFromBasicUI;
using $AquaTabbedPaneCopyFromBasicUI$CroppedEdge = ::com::apple::laf::AquaTabbedPaneCopyFromBasicUI$CroppedEdge;
using $AquaTabbedPaneCopyFromBasicUI$ScrollableTabPanel = ::com::apple::laf::AquaTabbedPaneCopyFromBasicUI$ScrollableTabPanel;
using $AquaTabbedPaneCopyFromBasicUI$ScrollableTabViewport = ::com::apple::laf::AquaTabbedPaneCopyFromBasicUI$ScrollableTabViewport;
using $AquaTabbedPaneCopyFromBasicUI$TabbedPaneLayout = ::com::apple::laf::AquaTabbedPaneCopyFromBasicUI$TabbedPaneLayout;
using $AquaUtils = ::com::apple::laf::AquaUtils;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $FontMetrics = ::java::awt::FontMetrics;
using $Insets = ::java::awt::Insets;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $JViewport = ::javax::swing::JViewport;
using $SwingUtilities = ::javax::swing::SwingUtilities;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaTabbedPaneCopyFromBasicUI$TabbedPaneScrollLayout_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaTabbedPaneCopyFromBasicUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTabbedPaneCopyFromBasicUI$TabbedPaneScrollLayout, this$0)},
	{}
};

$MethodInfo _AquaTabbedPaneCopyFromBasicUI$TabbedPaneScrollLayout_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaTabbedPaneCopyFromBasicUI;)V", nullptr, 0, $method(static_cast<void(AquaTabbedPaneCopyFromBasicUI$TabbedPaneScrollLayout::*)($AquaTabbedPaneCopyFromBasicUI*)>(&AquaTabbedPaneCopyFromBasicUI$TabbedPaneScrollLayout::init$))},
	{"calculateTabRects", "(II)V", nullptr, $PROTECTED},
	{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"layoutCroppedEdge", "()V", nullptr, $PRIVATE, $method(static_cast<void(AquaTabbedPaneCopyFromBasicUI$TabbedPaneScrollLayout::*)()>(&AquaTabbedPaneCopyFromBasicUI$TabbedPaneScrollLayout::layoutCroppedEdge))},
	{"preferredTabAreaHeight", "(II)I", nullptr, $PROTECTED},
	{"preferredTabAreaWidth", "(II)I", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _AquaTabbedPaneCopyFromBasicUI$TabbedPaneScrollLayout_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaTabbedPaneCopyFromBasicUI$TabbedPaneScrollLayout", "com.apple.laf.AquaTabbedPaneCopyFromBasicUI", "TabbedPaneScrollLayout", 0},
	{"com.apple.laf.AquaTabbedPaneCopyFromBasicUI$TabbedPaneLayout", "com.apple.laf.AquaTabbedPaneCopyFromBasicUI", "TabbedPaneLayout", $PUBLIC},
	{}
};

$ClassInfo _AquaTabbedPaneCopyFromBasicUI$TabbedPaneScrollLayout_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaTabbedPaneCopyFromBasicUI$TabbedPaneScrollLayout",
	"com.apple.laf.AquaTabbedPaneCopyFromBasicUI$TabbedPaneLayout",
	nullptr,
	_AquaTabbedPaneCopyFromBasicUI$TabbedPaneScrollLayout_FieldInfo_,
	_AquaTabbedPaneCopyFromBasicUI$TabbedPaneScrollLayout_MethodInfo_,
	nullptr,
	nullptr,
	_AquaTabbedPaneCopyFromBasicUI$TabbedPaneScrollLayout_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaTabbedPaneCopyFromBasicUI"
};

$Object* allocate$AquaTabbedPaneCopyFromBasicUI$TabbedPaneScrollLayout($Class* clazz) {
	return $of($alloc(AquaTabbedPaneCopyFromBasicUI$TabbedPaneScrollLayout));
}

void AquaTabbedPaneCopyFromBasicUI$TabbedPaneScrollLayout::init$($AquaTabbedPaneCopyFromBasicUI* this$0) {
	$set(this, this$0, this$0);
	$AquaTabbedPaneCopyFromBasicUI$TabbedPaneLayout::init$(this$0);
}

int32_t AquaTabbedPaneCopyFromBasicUI$TabbedPaneScrollLayout::preferredTabAreaHeight(int32_t tabPlacement, int32_t width) {
	return this->this$0->calculateMaxTabHeight(tabPlacement);
}

int32_t AquaTabbedPaneCopyFromBasicUI$TabbedPaneScrollLayout::preferredTabAreaWidth(int32_t tabPlacement, int32_t height) {
	return this->this$0->calculateMaxTabWidth(tabPlacement);
}

void AquaTabbedPaneCopyFromBasicUI$TabbedPaneScrollLayout::layoutContainer($Container* parent) {
	$useLocalCurrentObjectStackCache();
	this->this$0->setRolloverTab(-1);
	int32_t tabPlacement = $nc(this->this$0->tabPane)->getTabPlacement();
	int32_t tabCount = $nc(this->this$0->tabPane)->getTabCount();
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
	if ($nc(this->this$0->tabPane)->getTabCount() == 0) {
		$nc($nc(this->this$0->tabScroller)->croppedEdge)->resetParams();
		$nc($nc(this->this$0->tabScroller)->scrollForwardButton)->setVisible(false);
		$nc($nc(this->this$0->tabScroller)->scrollBackwardButton)->setVisible(false);
		return;
	}
	bool shouldChangeFocus = false;
	if (selectedComponent != nullptr) {
		if (selectedComponent != visibleComponent && visibleComponent != nullptr) {
			if ($SwingUtilities::findFocusOwner(visibleComponent) != nullptr) {
				shouldChangeFocus = true;
			}
		}
		this->this$0->setVisibleComponent(selectedComponent);
	}
	int32_t tx = 0;
	int32_t ty = 0;
	int32_t tw = 0;
	int32_t th = 0;
	int32_t cx = 0;
	int32_t cy = 0;
	int32_t cw = 0;
	int32_t ch = 0;
	$var($Insets, contentInsets, this->this$0->getContentBorderInsets(tabPlacement));
	$var($Rectangle, bounds, $nc(this->this$0->tabPane)->getBounds());
	int32_t numChildren = $nc(this->this$0->tabPane)->getComponentCount();
	if (numChildren > 0) {
		switch (tabPlacement) {
		case 2:
			{
				tw = this->this$0->calculateTabAreaWidth(tabPlacement, this->this$0->runCount, this->this$0->maxTabWidth);
				th = $nc(bounds)->height - $nc(insets)->top - insets->bottom;
				tx = $nc(insets)->left;
				ty = $nc(insets)->top;
				cx = tx + tw + $nc(contentInsets)->left;
				cy = ty + $nc(contentInsets)->top;
				cw = $nc(bounds)->width - $nc(insets)->left - insets->right - tw - $nc(contentInsets)->left - contentInsets->right;
				ch = $nc(bounds)->height - $nc(insets)->top - insets->bottom - $nc(contentInsets)->top - contentInsets->bottom;
				break;
			}
		case 4:
			{
				tw = this->this$0->calculateTabAreaWidth(tabPlacement, this->this$0->runCount, this->this$0->maxTabWidth);
				th = $nc(bounds)->height - $nc(insets)->top - insets->bottom;
				tx = $nc(bounds)->width - $nc(insets)->right - tw;
				ty = $nc(insets)->top;
				cx = $nc(insets)->left + $nc(contentInsets)->left;
				cy = $nc(insets)->top + $nc(contentInsets)->top;
				cw = $nc(bounds)->width - $nc(insets)->left - insets->right - tw - $nc(contentInsets)->left - contentInsets->right;
				ch = $nc(bounds)->height - $nc(insets)->top - insets->bottom - $nc(contentInsets)->top - contentInsets->bottom;
				break;
			}
		case 3:
			{
				tw = $nc(bounds)->width - $nc(insets)->left - insets->right;
				th = this->this$0->calculateTabAreaHeight(tabPlacement, this->this$0->runCount, this->this$0->maxTabHeight);
				tx = $nc(insets)->left;
				ty = $nc(bounds)->height - $nc(insets)->bottom - th;
				cx = $nc(insets)->left + $nc(contentInsets)->left;
				cy = $nc(insets)->top + $nc(contentInsets)->top;
				cw = $nc(bounds)->width - $nc(insets)->left - insets->right - $nc(contentInsets)->left - contentInsets->right;
				ch = $nc(bounds)->height - $nc(insets)->top - insets->bottom - th - $nc(contentInsets)->top - contentInsets->bottom;
				break;
			}
		case 1:
			{}
		default:
			{
				tw = $nc(bounds)->width - $nc(insets)->left - insets->right;
				th = this->this$0->calculateTabAreaHeight(tabPlacement, this->this$0->runCount, this->this$0->maxTabHeight);
				tx = $nc(insets)->left;
				ty = $nc(insets)->top;
				cx = tx + $nc(contentInsets)->left;
				cy = ty + th + $nc(contentInsets)->top;
				cw = $nc(bounds)->width - $nc(insets)->left - insets->right - $nc(contentInsets)->left - contentInsets->right;
				ch = $nc(bounds)->height - $nc(insets)->top - insets->bottom - th - $nc(contentInsets)->top - contentInsets->bottom;
			}
		}
		for (int32_t i = 0; i < numChildren; ++i) {
			$var($Component, child, $nc(this->this$0->tabPane)->getComponent(i));
			if (this->this$0->tabScroller != nullptr && $equals(child, $nc(this->this$0->tabScroller)->viewport)) {
				$var($JViewport, viewport, $cast($JViewport, child));
				$var($Rectangle, viewRect, $nc(viewport)->getViewRect());
				int32_t vw = tw;
				int32_t vh = th;
				$var($Dimension, butSize, $nc($nc(this->this$0->tabScroller)->scrollForwardButton)->getPreferredSize());
				{
					int32_t totalTabHeight = 0;
					int32_t totalTabWidth = 0;
					switch (tabPlacement) {
					case 2:
						{}
					case 4:
						{
							totalTabHeight = $nc($nc(this->this$0->rects)->get(tabCount - 1))->y + $nc($nc(this->this$0->rects)->get(tabCount - 1))->height;
							if (totalTabHeight > th) {
								vh = (th > 2 * $nc(butSize)->height) ? th - 2 * $nc(butSize)->height : 0;
								if (totalTabHeight - $nc(viewRect)->y <= vh) {
									vh = totalTabHeight - viewRect->y;
								}
							}
							break;
						}
					case 3:
						{}
					case 1:
						{}
					default:
						{
							totalTabWidth = $nc($nc(this->this$0->rects)->get(tabCount - 1))->x + $nc($nc(this->this$0->rects)->get(tabCount - 1))->width;
							if (totalTabWidth > tw) {
								vw = (tw > 2 * $nc(butSize)->width) ? tw - 2 * $nc(butSize)->width : 0;
								if (totalTabWidth - $nc(viewRect)->x <= vw) {
									vw = totalTabWidth - viewRect->x;
								}
							}
						}
					}
				}
				$nc(child)->setBounds(tx, ty, vw, vh);
			} else if (this->this$0->tabScroller != nullptr && ($equals(child, $nc(this->this$0->tabScroller)->scrollForwardButton) || $equals(child, $nc(this->this$0->tabScroller)->scrollBackwardButton))) {
				$var($Component, scrollbutton, child);
				$var($Dimension, bsize, $nc(scrollbutton)->getPreferredSize());
				int32_t bx = 0;
				int32_t by = 0;
				int32_t bw = $nc(bsize)->width;
				int32_t bh = bsize->height;
				bool visible = false;
				{
					int32_t totalTabHeight = 0;
					int32_t totalTabWidth = 0;
					switch (tabPlacement) {
					case 2:
						{}
					case 4:
						{
							totalTabHeight = $nc($nc(this->this$0->rects)->get(tabCount - 1))->y + $nc($nc(this->this$0->rects)->get(tabCount - 1))->height;
							if (totalTabHeight > th) {
								visible = true;
								bx = (tabPlacement == 2 ? tx + tw - bsize->width : tx);
								by = ($equals(child, $nc(this->this$0->tabScroller)->scrollForwardButton)) ? $nc(bounds)->height - $nc(insets)->bottom - bsize->height : bounds->height - insets->bottom - 2 * bsize->height;
							}
							break;
						}
					case 3:
						{}
					case 1:
						{}
					default:
						{
							totalTabWidth = $nc($nc(this->this$0->rects)->get(tabCount - 1))->x + $nc($nc(this->this$0->rects)->get(tabCount - 1))->width;
							if (totalTabWidth > tw) {
								visible = true;
								bx = ($equals(child, $nc(this->this$0->tabScroller)->scrollForwardButton)) ? $nc(bounds)->width - $nc(insets)->left - bsize->width : bounds->width - insets->left - 2 * bsize->width;
								by = (tabPlacement == 1 ? ty + th - bsize->height : ty);
							}
						}
					}
				}
				$nc(child)->setVisible(visible);
				if (visible) {
					child->setBounds(bx, by, bw, bh);
				}
			} else {
				$nc(child)->setBounds(cx, cy, cw, ch);
			}
		}
		$AquaTabbedPaneCopyFromBasicUI$TabbedPaneLayout::layoutTabComponents();
		layoutCroppedEdge();
		if (shouldChangeFocus) {
			if (!this->this$0->requestFocusForVisibleComponent()) {
				$nc(this->this$0->tabPane)->requestFocus();
			}
		}
	}
}

void AquaTabbedPaneCopyFromBasicUI$TabbedPaneScrollLayout::layoutCroppedEdge() {
	$useLocalCurrentObjectStackCache();
	$nc($nc(this->this$0->tabScroller)->croppedEdge)->resetParams();
	$var($Rectangle, viewRect, $nc($nc(this->this$0->tabScroller)->viewport)->getViewRect());
	int32_t cropline = 0;
	for (int32_t i = 0; i < $nc(this->this$0->rects)->length; ++i) {
		$var($Rectangle, tabRect, $nc(this->this$0->rects)->get(i));
		switch ($nc(this->this$0->tabPane)->getTabPlacement()) {
		case 2:
			{}
		case 4:
			{
				cropline = $nc(viewRect)->y + viewRect->height;
				if (($nc(tabRect)->y < cropline) && (tabRect->y + tabRect->height > cropline)) {
					$nc($nc(this->this$0->tabScroller)->croppedEdge)->setParams(i, cropline - tabRect->y - 1, -$nc(this->this$0->currentTabAreaInsets)->left, 0);
				}
				break;
			}
		case 1:
			{}
		case 3:
			{}
		default:
			{
				cropline = $nc(viewRect)->x + viewRect->width;
				if (($nc(tabRect)->x < cropline - 1) && (tabRect->x + tabRect->width > cropline)) {
					$nc($nc(this->this$0->tabScroller)->croppedEdge)->setParams(i, cropline - tabRect->x - 1, 0, -$nc(this->this$0->currentTabAreaInsets)->top);
				}
			}
		}
	}
}

void AquaTabbedPaneCopyFromBasicUI$TabbedPaneScrollLayout::calculateTabRects(int32_t tabPlacement, int32_t tabCount) {
	$useLocalCurrentObjectStackCache();
	$var($FontMetrics, metrics, this->this$0->getFontMetrics());
	$var($Dimension, size, $nc(this->this$0->tabPane)->getSize());
	$var($Insets, insets, $nc(this->this$0->tabPane)->getInsets());
	$var($Insets, tabAreaInsets, this->this$0->getTabAreaInsets(tabPlacement));
	int32_t fontHeight = $nc(metrics)->getHeight();
	int32_t selectedIndex = $nc(this->this$0->tabPane)->getSelectedIndex();
	int32_t i = 0;
	bool verticalTabRuns = (tabPlacement == 2 || tabPlacement == 4);
	bool leftToRight = $AquaUtils::isLeftToRight(this->this$0->tabPane);
	int32_t x = $nc(tabAreaInsets)->left;
	int32_t y = tabAreaInsets->top;
	int32_t totalWidth = 0;
	int32_t totalHeight = 0;
	switch (tabPlacement) {
	case 2:
		{}
	case 4:
		{
			this->this$0->maxTabWidth = this->this$0->calculateMaxTabWidth(tabPlacement);
			break;
		}
	case 3:
		{}
	case 1:
		{}
	default:
		{
			this->this$0->maxTabHeight = this->this$0->calculateMaxTabHeight(tabPlacement);
		}
	}
	this->this$0->runCount = 0;
	this->this$0->selectedRun = -1;
	if (tabCount == 0) {
		return;
	}
	this->this$0->selectedRun = 0;
	this->this$0->runCount = 1;
	$var($Rectangle, rect, nullptr);
	for (i = 0; i < tabCount; ++i) {
		$assign(rect, $nc(this->this$0->rects)->get(i));
		if (!verticalTabRuns) {
			if (i > 0) {
				$nc(rect)->x = $nc($nc(this->this$0->rects)->get(i - 1))->x + $nc($nc(this->this$0->rects)->get(i - 1))->width;
			} else {
				$nc(this->this$0->tabRuns)->set(0, 0);
				this->this$0->maxTabWidth = 0;
				totalHeight += this->this$0->maxTabHeight;
				$nc(rect)->x = x;
			}
			$nc(rect)->width = this->this$0->calculateTabWidth(tabPlacement, i, metrics);
			totalWidth = rect->x + rect->width;
			this->this$0->maxTabWidth = $Math::max(this->this$0->maxTabWidth, rect->width);
			rect->y = y;
			rect->height = this->this$0->maxTabHeight;
		} else {
			if (i > 0) {
				$nc(rect)->y = $nc($nc(this->this$0->rects)->get(i - 1))->y + $nc($nc(this->this$0->rects)->get(i - 1))->height;
			} else {
				$nc(this->this$0->tabRuns)->set(0, 0);
				this->this$0->maxTabHeight = 0;
				totalWidth = this->this$0->maxTabWidth;
				$nc(rect)->y = y;
			}
			$nc(rect)->height = this->this$0->calculateTabHeight(tabPlacement, i, fontHeight);
			totalHeight = rect->y + rect->height;
			this->this$0->maxTabHeight = $Math::max(this->this$0->maxTabHeight, rect->height);
			rect->x = x;
			rect->width = this->this$0->maxTabWidth;
		}
	}
	if (this->this$0->tabsOverlapBorder) {
		padSelectedTab(tabPlacement, selectedIndex);
	}
	if (!leftToRight && !verticalTabRuns) {
		int32_t rightMargin = $nc(size)->width - ($nc(insets)->right + tabAreaInsets->right);
		for (i = 0; i < tabCount; ++i) {
			$nc($nc(this->this$0->rects)->get(i))->x = rightMargin - $nc($nc(this->this$0->rects)->get(i))->x - $nc($nc(this->this$0->rects)->get(i))->width;
		}
	}
	$nc($nc(this->this$0->tabScroller)->tabPanel)->setPreferredSize($$new($Dimension, totalWidth, totalHeight));
}

AquaTabbedPaneCopyFromBasicUI$TabbedPaneScrollLayout::AquaTabbedPaneCopyFromBasicUI$TabbedPaneScrollLayout() {
}

$Class* AquaTabbedPaneCopyFromBasicUI$TabbedPaneScrollLayout::load$($String* name, bool initialize) {
	$loadClass(AquaTabbedPaneCopyFromBasicUI$TabbedPaneScrollLayout, name, initialize, &_AquaTabbedPaneCopyFromBasicUI$TabbedPaneScrollLayout_ClassInfo_, allocate$AquaTabbedPaneCopyFromBasicUI$TabbedPaneScrollLayout);
	return class$;
}

$Class* AquaTabbedPaneCopyFromBasicUI$TabbedPaneScrollLayout::class$ = nullptr;

		} // laf
	} // apple
} // com