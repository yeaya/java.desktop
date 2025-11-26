#include <sun/awt/X11/XMenuWindow.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/lang/Math.h>
#include <java/lang/Runnable.h>
#include <java/util/Vector.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/XBaseMenuWindow$MappingData.h>
#include <sun/awt/X11/XBaseMenuWindow.h>
#include <sun/awt/X11/XBaseWindow.h>
#include <sun/awt/X11/XCheckboxMenuItemPeer.h>
#include <sun/awt/X11/XCreateWindowParams.h>
#include <sun/awt/X11/XMenuItemPeer$TextMetrics.h>
#include <sun/awt/X11/XMenuItemPeer.h>
#include <sun/awt/X11/XMenuPeer.h>
#include <sun/awt/X11/XMenuWindow$1.h>
#include <sun/awt/X11/XMenuWindow$MappingData.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XWindow.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef CHECKMARK_SIZE
#undef CHECKMARK_X
#undef CHECKMARK_Y
#undef DELAYED
#undef FINER
#undef OVERRIDE_REDIRECT
#undef TARGET
#undef TRUE
#undef WINDOW_ITEM_INDENT
#undef WINDOW_ITEM_MARGIN_BOTTOM
#undef WINDOW_ITEM_MARGIN_LEFT
#undef WINDOW_ITEM_MARGIN_RIGHT
#undef WINDOW_ITEM_MARGIN_TOP
#undef WINDOW_SHORTCUT_SPACING
#undef WINDOW_SPACING_BOTTOM
#undef WINDOW_SPACING_LEFT
#undef WINDOW_SPACING_RIGHT
#undef WINDOW_SPACING_TOP

using $XMenuItemPeer$TextMetricsArray = $Array<::sun::awt::X11::XMenuItemPeer$TextMetrics>;
using $XMenuItemPeerArray = $Array<::sun::awt::X11::XMenuItemPeer>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $Graphics = ::java::awt::Graphics;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $HashMap = ::java::util::HashMap;
using $Vector = ::java::util::Vector;
using $SunToolkit = ::sun::awt::SunToolkit;
using $XBaseMenuWindow = ::sun::awt::X11::XBaseMenuWindow;
using $XBaseMenuWindow$MappingData = ::sun::awt::X11::XBaseMenuWindow$MappingData;
using $XBaseWindow = ::sun::awt::X11::XBaseWindow;
using $XCheckboxMenuItemPeer = ::sun::awt::X11::XCheckboxMenuItemPeer;
using $XCreateWindowParams = ::sun::awt::X11::XCreateWindowParams;
using $XMenuItemPeer = ::sun::awt::X11::XMenuItemPeer;
using $XMenuItemPeer$TextMetrics = ::sun::awt::X11::XMenuItemPeer$TextMetrics;
using $XMenuPeer = ::sun::awt::X11::XMenuPeer;
using $XMenuWindow$1 = ::sun::awt::X11::XMenuWindow$1;
using $XMenuWindow$MappingData = ::sun::awt::X11::XMenuWindow$MappingData;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XWindow = ::sun::awt::X11::XWindow;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XMenuWindow_FieldInfo_[] = {
	{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC, $staticField(XMenuWindow, log)},
	{"menuPeer", "Lsun/awt/X11/XMenuPeer;", nullptr, $PRIVATE, $field(XMenuWindow, menuPeer)},
	{"WINDOW_SPACING_LEFT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMenuWindow, WINDOW_SPACING_LEFT)},
	{"WINDOW_SPACING_RIGHT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMenuWindow, WINDOW_SPACING_RIGHT)},
	{"WINDOW_SPACING_TOP", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMenuWindow, WINDOW_SPACING_TOP)},
	{"WINDOW_SPACING_BOTTOM", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMenuWindow, WINDOW_SPACING_BOTTOM)},
	{"WINDOW_ITEM_INDENT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMenuWindow, WINDOW_ITEM_INDENT)},
	{"WINDOW_ITEM_MARGIN_LEFT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMenuWindow, WINDOW_ITEM_MARGIN_LEFT)},
	{"WINDOW_ITEM_MARGIN_RIGHT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMenuWindow, WINDOW_ITEM_MARGIN_RIGHT)},
	{"WINDOW_ITEM_MARGIN_TOP", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMenuWindow, WINDOW_ITEM_MARGIN_TOP)},
	{"WINDOW_ITEM_MARGIN_BOTTOM", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMenuWindow, WINDOW_ITEM_MARGIN_BOTTOM)},
	{"WINDOW_SHORTCUT_SPACING", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMenuWindow, WINDOW_SHORTCUT_SPACING)},
	{"CHECKMARK_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMenuWindow, CHECKMARK_SIZE)},
	{"CHECKMARK_X", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMenuWindow, CHECKMARK_X)},
	{"CHECKMARK_Y", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMenuWindow, CHECKMARK_Y)},
	{}
};

$MethodInfo _XMenuWindow_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XMenuPeer;)V", nullptr, 0, $method(static_cast<void(XMenuWindow::*)($XMenuPeer*)>(&XMenuWindow::init$))},
	{"ensureCreated", "()Z", nullptr, 0},
	{"getCaptionSize", "()Ljava/awt/Dimension;", nullptr, $PROTECTED},
	{"getDesiredSize", "()Ljava/awt/Dimension;", nullptr, 0},
	{"getMenuPeer", "()Lsun/awt/X11/XMenuPeer;", nullptr, 0},
	{"getMenuTargetItems", "()Ljava/util/Vector;", "()Ljava/util/Vector<Ljava/awt/MenuItem;>;", 0},
	{"getParentMenuWindow", "()Lsun/awt/X11/XBaseMenuWindow;", nullptr, $PROTECTED},
	{"getSubmenuBounds", "(Ljava/awt/Rectangle;Ljava/awt/Dimension;)Ljava/awt/Rectangle;", nullptr, $PROTECTED},
	{"hide", "()V", nullptr, 0},
	{"isCreated", "()Z", nullptr, 0},
	{"map", "()Lsun/awt/X11/XMenuWindow$MappingData;", nullptr, $PROTECTED},
	{"paintCaption", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;)V", nullptr, $PROTECTED},
	{"paintPeer", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"postInit", "(Lsun/awt/X11/XCreateWindowParams;)V", nullptr, 0},
	{"show", "(Ljava/awt/Rectangle;)V", nullptr, 0},
	{"updateSize", "()V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _XMenuWindow_InnerClassesInfo_[] = {
	{"sun.awt.X11.XMenuWindow$MappingData", "sun.awt.X11.XMenuWindow", "MappingData", $STATIC},
	{"sun.awt.X11.XMenuWindow$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XMenuWindow_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XMenuWindow",
	"sun.awt.X11.XBaseMenuWindow",
	nullptr,
	_XMenuWindow_FieldInfo_,
	_XMenuWindow_MethodInfo_,
	nullptr,
	nullptr,
	_XMenuWindow_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.X11.XMenuWindow$MappingData,sun.awt.X11.XMenuWindow$1"
};

$Object* allocate$XMenuWindow($Class* clazz) {
	return $of($alloc(XMenuWindow));
}

$PlatformLogger* XMenuWindow::log = nullptr;
$ints* XMenuWindow::CHECKMARK_X = nullptr;
$ints* XMenuWindow::CHECKMARK_Y = nullptr;

void XMenuWindow::init$($XMenuPeer* menuPeer) {
	$useLocalCurrentObjectStackCache();
	$XBaseMenuWindow::init$();
	if (menuPeer != nullptr) {
		$set(this, menuPeer, menuPeer);
		$set(this, target, $nc($(menuPeer->getContainer()))->target);
		$var($Vector, targetItemVector, nullptr);
		$assign(targetItemVector, getMenuTargetItems());
		reloadItems(targetItemVector);
	}
}

void XMenuWindow::postInit($XCreateWindowParams* params) {
	$XBaseMenuWindow::postInit(params);
}

$XBaseMenuWindow* XMenuWindow::getParentMenuWindow() {
	return (this->menuPeer != nullptr) ? $nc(this->menuPeer)->getContainer() : ($XBaseMenuWindow*)nullptr;
}

$XBaseMenuWindow$MappingData* XMenuWindow::map() {
	$useLocalCurrentObjectStackCache();
	int32_t itemCnt = 0;
	if (!isCreated()) {
		$var($XMenuItemPeerArray, var$0, $new($XMenuItemPeerArray, 0));
		$var($Rectangle, var$1, $new($Rectangle, 0, 0, 0, 0));
		$var($XMenuWindow$MappingData, mappingData, $new($XMenuWindow$MappingData, var$0, var$1, $$new($Dimension, 0, 0), 0, 0, 0));
		return mappingData;
	}
	$var($XMenuItemPeerArray, itemVector, copyItems());
	itemCnt = $nc(itemVector)->length;
	$var($Dimension, captionSize, getCaptionSize());
	int32_t maxWidth = (captionSize != nullptr) ? $nc(captionSize)->width : 0;
	int32_t maxLeftIndent = 0;
	int32_t maxRightIndent = 0;
	int32_t maxShortcutWidth = 0;
	$var($XMenuItemPeer$TextMetricsArray, itemMetrics, $new($XMenuItemPeer$TextMetricsArray, itemCnt));
	for (int32_t i = 0; i < itemCnt; ++i) {
		$var($XMenuItemPeer, item, itemVector->get(i));
		itemMetrics->set(i, $($nc(itemVector->get(i))->getTextMetrics()));
		$var($Dimension, dim, $nc(itemMetrics->get(i))->getTextDimension());
		if (dim != nullptr) {
			if ($instanceOf($XCheckboxMenuItemPeer, itemVector->get(i))) {
				maxLeftIndent = $Math::max(maxLeftIndent, dim->height);
			} else if ($instanceOf($XMenuPeer, itemVector->get(i))) {
				maxRightIndent = $Math::max(maxRightIndent, dim->height);
			}
			maxWidth = $Math::max(maxWidth, dim->width);
			maxShortcutWidth = $Math::max(maxShortcutWidth, $nc(itemMetrics->get(i))->getShortcutWidth());
		}
	}
	int32_t nextOffset = XMenuWindow::WINDOW_SPACING_TOP;
	int32_t shortcutOrigin = XMenuWindow::WINDOW_SPACING_LEFT + XMenuWindow::WINDOW_ITEM_MARGIN_LEFT + maxLeftIndent + maxWidth;
	if (maxShortcutWidth > 0) {
		shortcutOrigin = shortcutOrigin + XMenuWindow::WINDOW_SHORTCUT_SPACING;
	}
	int32_t rightMarkOrigin = shortcutOrigin + maxShortcutWidth;
	int32_t itemWidth = rightMarkOrigin + maxRightIndent + XMenuWindow::WINDOW_ITEM_MARGIN_RIGHT;
	int32_t width = XMenuWindow::WINDOW_SPACING_LEFT + itemWidth + XMenuWindow::WINDOW_SPACING_RIGHT;
	$var($Rectangle, captionRect, nullptr);
	if (captionSize != nullptr) {
		$assign(captionRect, $new($Rectangle, XMenuWindow::WINDOW_SPACING_LEFT, nextOffset, itemWidth, captionSize->height));
		nextOffset += captionSize->height;
	} else {
		$assign(captionRect, $new($Rectangle, XMenuWindow::WINDOW_SPACING_LEFT, nextOffset, maxWidth, 0));
	}
	for (int32_t i = 0; i < itemCnt; ++i) {
		$var($XMenuItemPeer, item, itemVector->get(i));
		$var($XMenuItemPeer$TextMetrics, metrics, itemMetrics->get(i));
		$var($Dimension, dim, $nc(metrics)->getTextDimension());
		if (dim != nullptr) {
			int32_t itemHeight = XMenuWindow::WINDOW_ITEM_MARGIN_TOP + dim->height + XMenuWindow::WINDOW_ITEM_MARGIN_BOTTOM;
			$var($Rectangle, bounds, $new($Rectangle, XMenuWindow::WINDOW_SPACING_LEFT, nextOffset, itemWidth, itemHeight));
			int32_t y = (itemHeight + dim->height) / 2 - metrics->getTextBaseline();
			$var($Point, textOrigin, $new($Point, XMenuWindow::WINDOW_SPACING_LEFT + XMenuWindow::WINDOW_ITEM_MARGIN_LEFT + maxLeftIndent, nextOffset + y));
			nextOffset += itemHeight;
			$nc(item)->map(bounds, textOrigin);
		} else {
			$var($Rectangle, bounds, $new($Rectangle, XMenuWindow::WINDOW_SPACING_LEFT, nextOffset, 0, 0));
			$var($Point, textOrigin, $new($Point, XMenuWindow::WINDOW_SPACING_LEFT + XMenuWindow::WINDOW_ITEM_MARGIN_LEFT + maxLeftIndent, nextOffset));
			$nc(item)->map(bounds, textOrigin);
		}
	}
	int32_t height = nextOffset + XMenuWindow::WINDOW_SPACING_BOTTOM;
	$var($XMenuWindow$MappingData, mappingData, $new($XMenuWindow$MappingData, itemVector, captionRect, $$new($Dimension, width, height), maxLeftIndent, shortcutOrigin, rightMarkOrigin));
	return mappingData;
}

$Rectangle* XMenuWindow::getSubmenuBounds($Rectangle* itemBounds, $Dimension* windowSize) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, globalBounds, toGlobal(itemBounds));
	$var($Rectangle, screenBounds, $nc($(getCurrentGraphicsConfiguration()))->getBounds());
	$var($Rectangle, res, nullptr);
	$assign(res, fitWindowRight(globalBounds, windowSize, screenBounds));
	if (res != nullptr) {
		return res;
	}
	$assign(res, fitWindowBelow(globalBounds, windowSize, screenBounds));
	if (res != nullptr) {
		return res;
	}
	$assign(res, fitWindowAbove(globalBounds, windowSize, screenBounds));
	if (res != nullptr) {
		return res;
	}
	$assign(res, fitWindowLeft(globalBounds, windowSize, screenBounds));
	if (res != nullptr) {
		return res;
	}
	return fitWindowToScreen(windowSize, screenBounds);
}

void XMenuWindow::updateSize() {
	resetMapping();
	if (isShowing()) {
		$XToolkit::executeOnEventHandlerThread(this->target, $$new($XMenuWindow$1, this));
	}
}

$Dimension* XMenuWindow::getCaptionSize() {
	return nullptr;
}

void XMenuWindow::paintCaption($Graphics* g, $Rectangle* rect) {
}

$XMenuPeer* XMenuWindow::getMenuPeer() {
	return this->menuPeer;
}

$Vector* XMenuWindow::getMenuTargetItems() {
	return $nc(this->menuPeer)->getTargetItems();
}

$Dimension* XMenuWindow::getDesiredSize() {
	$var($XMenuWindow$MappingData, mappingData, $cast($XMenuWindow$MappingData, getMappingData()));
	return $nc(mappingData)->getDesiredSize();
}

bool XMenuWindow::isCreated() {
	return getWindow() != 0;
}

bool XMenuWindow::ensureCreated() {
	if (!isCreated()) {
		$var($XCreateWindowParams, params, getDelayedParams());
		$init($XBaseWindow);
		$nc(params)->remove($XBaseWindow::DELAYED);
		$init($Boolean);
		params->add($of($XBaseWindow::OVERRIDE_REDIRECT), $of($Boolean::TRUE));
		$init($XWindow);
		params->add($of($XWindow::TARGET), $of(this->target));
		init(params);
	}
	return true;
}

void XMenuWindow::show($Rectangle* bounds) {
	$useLocalCurrentObjectStackCache();
	if (!isCreated()) {
		return;
	}
	$init($PlatformLogger$Level);
	if ($nc(XMenuWindow::log)->isLoggable($PlatformLogger$Level::FINER)) {
		$nc(XMenuWindow::log)->finer($$str({"showing menu window + "_s, $$str(getWindow()), " at "_s, bounds}));
	}
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			reshape($nc(bounds)->x, bounds->y, bounds->width, bounds->height);
			xSetVisible(true);
			toFront();
			selectItem($(getFirstSelectableItem()), false);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void XMenuWindow::hide() {
	selectItem(nullptr, false);
	xSetVisible(false);
}

void XMenuWindow::paintPeer($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	resetColors();
	int32_t width = getWidth();
	int32_t height = getHeight();
	flush();
	$nc(g)->setColor($(getBackgroundColor()));
	g->fillRect(1, 1, width - 2, height - 2);
	draw3DRect(g, 0, 0, width, height, true);
	$var($XMenuWindow$MappingData, mappingData, $cast($XMenuWindow$MappingData, getMappingData()));
	paintCaption(g, $($nc(mappingData)->getCaptionRect()));
	$var($XMenuItemPeerArray, itemVector, $nc(mappingData)->getItems());
	$var($Dimension, windowSize, mappingData->getDesiredSize());
	$var($XMenuItemPeer, selectedItem, getSelectedItem());
	for (int32_t i = 0; i < $nc(itemVector)->length; ++i) {
		$var($XMenuItemPeer, item, itemVector->get(i));
		$var($XMenuItemPeer$TextMetrics, metrics, $nc(item)->getTextMetrics());
		$var($Rectangle, bounds, item->getBounds());
		if (item->isSeparator()) {
			draw3DRect(g, $nc(bounds)->x, bounds->y + bounds->height / 2, bounds->width, 2, false);
		} else {
			g->setFont($(item->getTargetFont()));
			$var($Point, textOrigin, item->getTextOrigin());
			$var($Dimension, textDim, $nc(metrics)->getTextDimension());
			if (item == selectedItem) {
				g->setColor($(getSelectedColor()));
				g->fillRect($nc(bounds)->x, bounds->y, bounds->width, bounds->height);
				draw3DRect(g, $nc(bounds)->x, bounds->y, bounds->width, bounds->height, false);
			}
			g->setColor(item->isTargetItemEnabled() ? $(getForegroundColor()) : $(getDisabledColor()));
			g->drawString($(item->getTargetLabel()), $nc(textOrigin)->x, textOrigin->y);
			$var($String, shortcutText, item->getShortcutText());
			if (shortcutText != nullptr) {
				g->drawString(shortcutText, mappingData->getShortcutOrigin(), $nc(textOrigin)->y);
			}
			if ($instanceOf($XMenuPeer, item)) {
				int32_t markWidth = $nc(textDim)->height * 4 / 5;
				int32_t markHeight = textDim->height * 4 / 5;
				int32_t markX = $nc(bounds)->x + bounds->width - markWidth - XMenuWindow::WINDOW_SPACING_RIGHT - XMenuWindow::WINDOW_ITEM_MARGIN_RIGHT;
				int32_t markY = bounds->y + (bounds->height - markHeight) / 2;
				g->setColor(item->isTargetItemEnabled() ? $(getDarkShadowColor()) : $(getDisabledColor()));
				g->drawLine(markX, markY + markHeight, markX + markWidth, markY + markHeight / 2);
				g->setColor(item->isTargetItemEnabled() ? $(getLightShadowColor()) : $(getDisabledColor()));
				g->drawLine(markX, markY, markX + markWidth, markY + markHeight / 2);
				g->drawLine(markX, markY, markX, markY + markHeight);
			} else if ($instanceOf($XCheckboxMenuItemPeer, item)) {
				int32_t markWidth = $nc(textDim)->height * 4 / 5;
				int32_t markHeight = textDim->height * 4 / 5;
				int32_t markX = XMenuWindow::WINDOW_SPACING_LEFT + XMenuWindow::WINDOW_ITEM_MARGIN_LEFT;
				int32_t markY = $nc(bounds)->y + (bounds->height - markHeight) / 2;
				bool checkState = $nc(($cast($XCheckboxMenuItemPeer, item)))->getTargetState();
				if (checkState) {
					g->setColor($(getSelectedColor()));
					g->fillRect(markX, markY, markWidth, markHeight);
					draw3DRect(g, markX, markY, markWidth, markHeight, false);
					$var($ints, px, $new($ints, $nc(XMenuWindow::CHECKMARK_X)->length));
					$var($ints, py, $new($ints, $nc(XMenuWindow::CHECKMARK_X)->length));
					for (int32_t j = 0; j < $nc(XMenuWindow::CHECKMARK_X)->length; ++j) {
						px->set(j, markX + $div($nc(XMenuWindow::CHECKMARK_X)->get(j) * markWidth, XMenuWindow::CHECKMARK_SIZE));
						py->set(j, markY + $div($nc(XMenuWindow::CHECKMARK_Y)->get(j) * markHeight, XMenuWindow::CHECKMARK_SIZE));
					}
					g->setColor(item->isTargetItemEnabled() ? $(getForegroundColor()) : $(getDisabledColor()));
					g->fillPolygon(px, py, $nc(XMenuWindow::CHECKMARK_X)->length);
				} else {
					g->setColor($(getBackgroundColor()));
					g->fillRect(markX, markY, markWidth, markHeight);
					draw3DRect(g, markX, markY, markWidth, markHeight, true);
				}
			}
		}
	}
	flush();
}

void clinit$XMenuWindow($Class* class$) {
	$assignStatic(XMenuWindow::log, $PlatformLogger::getLogger("sun.awt.X11.XMenuWindow"_s));
	$assignStatic(XMenuWindow::CHECKMARK_X, $new($ints, {
		1,
		25,
		56,
		124,
		124,
		85,
		64
	}));
	$assignStatic(XMenuWindow::CHECKMARK_Y, $new($ints, {
		59,
		35,
		67,
		0,
		12,
		66,
		123
	}));
}

XMenuWindow::XMenuWindow() {
}

$Class* XMenuWindow::load$($String* name, bool initialize) {
	$loadClass(XMenuWindow, name, initialize, &_XMenuWindow_ClassInfo_, clinit$XMenuWindow, allocate$XMenuWindow);
	return class$;
}

$Class* XMenuWindow::class$ = nullptr;

		} // X11
	} // awt
} // sun