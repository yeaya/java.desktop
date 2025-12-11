#include <javax/swing/BufferStrategyPaintManager.h>

#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Window.h>
#include <java/awt/image/BufferStrategy.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Math.h>
#include <java/lang/Runnable.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/swing/BufferStrategyPaintManager$1.h>
#include <javax/swing/BufferStrategyPaintManager$2.h>
#include <javax/swing/BufferStrategyPaintManager$BufferInfo.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/RepaintManager$PaintManager.h>
#include <javax/swing/RepaintManager.h>
#include <javax/swing/RootPaneContainer.h>
#include <javax/swing/SwingUtilities.h>
#include <sun/awt/SubRegionShowable.h>
#include <sun/awt/SunToolkit.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef FINER
#undef FINEST
#undef LOGGER
#undef MAX_VALUE

using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $Window = ::java::awt::Window;
using $BufferStrategy = ::java::awt::image::BufferStrategy;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InterruptedException = ::java::lang::InterruptedException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $BufferStrategyPaintManager$1 = ::javax::swing::BufferStrategyPaintManager$1;
using $BufferStrategyPaintManager$2 = ::javax::swing::BufferStrategyPaintManager$2;
using $BufferStrategyPaintManager$BufferInfo = ::javax::swing::BufferStrategyPaintManager$BufferInfo;
using $JComponent = ::javax::swing::JComponent;
using $JRootPane = ::javax::swing::JRootPane;
using $RepaintManager = ::javax::swing::RepaintManager;
using $RepaintManager$PaintManager = ::javax::swing::RepaintManager$PaintManager;
using $RootPaneContainer = ::javax::swing::RootPaneContainer;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $SubRegionShowable = ::sun::awt::SubRegionShowable;
using $SunToolkit = ::sun::awt::SunToolkit;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace javax {
	namespace swing {

$FieldInfo _BufferStrategyPaintManager_FieldInfo_[] = {
	{"LOGGER", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BufferStrategyPaintManager, LOGGER)},
	{"bufferInfos", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljavax/swing/BufferStrategyPaintManager$BufferInfo;>;", $PRIVATE, $field(BufferStrategyPaintManager, bufferInfos)},
	{"painting", "Z", nullptr, $PRIVATE, $field(BufferStrategyPaintManager, painting)},
	{"showing", "Z", nullptr, $PRIVATE, $field(BufferStrategyPaintManager, showing)},
	{"accumulatedX", "I", nullptr, $PRIVATE, $field(BufferStrategyPaintManager, accumulatedX)},
	{"accumulatedY", "I", nullptr, $PRIVATE, $field(BufferStrategyPaintManager, accumulatedY)},
	{"accumulatedMaxX", "I", nullptr, $PRIVATE, $field(BufferStrategyPaintManager, accumulatedMaxX)},
	{"accumulatedMaxY", "I", nullptr, $PRIVATE, $field(BufferStrategyPaintManager, accumulatedMaxY)},
	{"rootJ", "Ljavax/swing/JComponent;", nullptr, $PRIVATE, $field(BufferStrategyPaintManager, rootJ)},
	{"xOffset", "I", nullptr, $PRIVATE, $field(BufferStrategyPaintManager, xOffset)},
	{"yOffset", "I", nullptr, $PRIVATE, $field(BufferStrategyPaintManager, yOffset)},
	{"bsg", "Ljava/awt/Graphics;", nullptr, $PRIVATE, $field(BufferStrategyPaintManager, bsg)},
	{"bufferStrategy", "Ljava/awt/image/BufferStrategy;", nullptr, $PRIVATE, $field(BufferStrategyPaintManager, bufferStrategy)},
	{"bufferInfo", "Ljavax/swing/BufferStrategyPaintManager$BufferInfo;", nullptr, $PRIVATE, $field(BufferStrategyPaintManager, bufferInfo)},
	{"disposeBufferOnEnd", "Z", nullptr, $PRIVATE, $field(BufferStrategyPaintManager, disposeBufferOnEnd)},
	{}
};

$MethodInfo _BufferStrategyPaintManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(BufferStrategyPaintManager::*)()>(&BufferStrategyPaintManager::init$))},
	{"accumulate", "(IIII)V", nullptr, $PRIVATE, $method(static_cast<void(BufferStrategyPaintManager::*)(int32_t,int32_t,int32_t,int32_t)>(&BufferStrategyPaintManager::accumulate))},
	{"beginPaint", "()V", nullptr, $PUBLIC},
	{"copyArea", "(Ljavax/swing/JComponent;Ljava/awt/Graphics;IIIIIIZ)V", nullptr, $PUBLIC},
	{"dispose", "()V", nullptr, $PROTECTED},
	{"dispose", "(Ljava/util/List;)V", "(Ljava/util/List<Ljavax/swing/BufferStrategyPaintManager$BufferInfo;>;)V", $PRIVATE, $method(static_cast<void(BufferStrategyPaintManager::*)($List*)>(&BufferStrategyPaintManager::dispose))},
	{"doubleBufferingChanged", "(Ljavax/swing/JRootPane;)V", nullptr, $PUBLIC},
	{"doubleBufferingChanged0", "(Ljavax/swing/JRootPane;)V", nullptr, $PRIVATE, $method(static_cast<void(BufferStrategyPaintManager::*)($JRootPane*)>(&BufferStrategyPaintManager::doubleBufferingChanged0))},
	{"endPaint", "()V", nullptr, $PUBLIC},
	{"fetchRoot", "(Ljavax/swing/JComponent;)Ljava/awt/Container;", nullptr, $PRIVATE, $method(static_cast<$Container*(BufferStrategyPaintManager::*)($JComponent*)>(&BufferStrategyPaintManager::fetchRoot))},
	{"flushAccumulatedRegion", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(BufferStrategyPaintManager::*)()>(&BufferStrategyPaintManager::flushAccumulatedRegion))},
	{"getBufferInfo", "(Ljava/awt/Container;)Ljavax/swing/BufferStrategyPaintManager$BufferInfo;", nullptr, $PRIVATE, $method(static_cast<$BufferStrategyPaintManager$BufferInfo*(BufferStrategyPaintManager::*)($Container*)>(&BufferStrategyPaintManager::getBufferInfo))},
	{"paint", "(Ljavax/swing/JComponent;Ljavax/swing/JComponent;Ljava/awt/Graphics;IIII)Z", nullptr, $PUBLIC},
	{"prepare", "(Ljavax/swing/JComponent;Ljava/awt/Container;ZIIII)Z", nullptr, $PRIVATE, $method(static_cast<bool(BufferStrategyPaintManager::*)($JComponent*,$Container*,bool,int32_t,int32_t,int32_t,int32_t)>(&BufferStrategyPaintManager::prepare))},
	{"resetAccumulated", "()V", nullptr, $PRIVATE, $method(static_cast<void(BufferStrategyPaintManager::*)()>(&BufferStrategyPaintManager::resetAccumulated))},
	{"resetDoubleBufferPerWindow", "()V", nullptr, $PRIVATE, $method(static_cast<void(BufferStrategyPaintManager::*)()>(&BufferStrategyPaintManager::resetDoubleBufferPerWindow))},
	{"show", "(Ljava/awt/Container;IIII)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BufferStrategyPaintManager_InnerClassesInfo_[] = {
	{"javax.swing.RepaintManager$PaintManager", "javax.swing.RepaintManager", "PaintManager", $STATIC},
	{"javax.swing.BufferStrategyPaintManager$BufferInfo", "javax.swing.BufferStrategyPaintManager", "BufferInfo", $PRIVATE},
	{"javax.swing.BufferStrategyPaintManager$2", nullptr, nullptr, 0},
	{"javax.swing.BufferStrategyPaintManager$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BufferStrategyPaintManager_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.BufferStrategyPaintManager",
	"javax.swing.RepaintManager$PaintManager",
	nullptr,
	_BufferStrategyPaintManager_FieldInfo_,
	_BufferStrategyPaintManager_MethodInfo_,
	nullptr,
	nullptr,
	_BufferStrategyPaintManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.BufferStrategyPaintManager$BufferInfo,javax.swing.BufferStrategyPaintManager$2,javax.swing.BufferStrategyPaintManager$1"
};

$Object* allocate$BufferStrategyPaintManager($Class* clazz) {
	return $of($alloc(BufferStrategyPaintManager));
}

$PlatformLogger* BufferStrategyPaintManager::LOGGER = nullptr;

void BufferStrategyPaintManager::init$() {
	$RepaintManager$PaintManager::init$();
	$set(this, bufferInfos, $new($ArrayList, 1));
}

void BufferStrategyPaintManager::dispose() {
	$SwingUtilities::invokeLater($$new($BufferStrategyPaintManager$1, this));
}

void BufferStrategyPaintManager::dispose($List* bufferInfos) {
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc(BufferStrategyPaintManager::LOGGER)->isLoggable($PlatformLogger$Level::FINER)) {
		$nc(BufferStrategyPaintManager::LOGGER)->finer("BufferStrategyPaintManager disposed"_s, static_cast<$Throwable*>($$new($RuntimeException)));
	}
	if (bufferInfos != nullptr) {
		{
			$var($Iterator, i$, bufferInfos->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($BufferStrategyPaintManager$BufferInfo, bufferInfo, $cast($BufferStrategyPaintManager$BufferInfo, i$->next()));
				{
					$nc(bufferInfo)->dispose();
				}
			}
		}
	}
}

bool BufferStrategyPaintManager::show($Container* c, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$synchronized(this) {
		if (this->painting) {
			return false;
		}
		this->showing = true;
	}
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			$var($BufferStrategyPaintManager$BufferInfo, info, getBufferInfo(c));
			$var($BufferStrategy, bufferStrategy, nullptr);
			bool var$3 = info != nullptr && info->isInSync();
			if (var$3 && ($assign(bufferStrategy, info->getBufferStrategy(false))) != nullptr) {
				$var($SubRegionShowable, bsSubRegion, $cast($SubRegionShowable, bufferStrategy));
				bool paintAllOnExpose = info->getPaintAllOnExpose();
				info->setPaintAllOnExpose(false);
				if ($nc(bsSubRegion)->showIfNotLost(x, y, (x + w), (y + h))) {
					var$2 = !paintAllOnExpose;
					return$1 = true;
					goto $finally;
				}
				$nc(this->bufferInfo)->setContentsLostDuringExpose(true);
			}
		} catch ($Throwable& var$4) {
			$assign(var$0, var$4);
		} $finally: {
			$synchronized(this) {
				this->showing = false;
				$of(this)->notifyAll();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	return false;
}

bool BufferStrategyPaintManager::paint($JComponent* paintingComponent, $JComponent* bufferComponent, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$var($Container, root, fetchRoot(paintingComponent));
	if (prepare(paintingComponent, root, true, x, y, w, h)) {
		if (($instanceOf($SunGraphics2D, g)) && $equals($nc(($cast($SunGraphics2D, g)))->getDestination(), root)) {
			int32_t cx = $nc(($cast($SunGraphics2D, this->bsg)))->constrainX;
			int32_t cy = $nc(($cast($SunGraphics2D, this->bsg)))->constrainY;
			if (cx != 0 || cy != 0) {
				$nc(this->bsg)->translate(-cx, -cy);
			}
			$nc(($cast($SunGraphics2D, this->bsg)))->constrain(this->xOffset + cx, this->yOffset + cy, x + w, y + h);
			$nc(this->bsg)->setClip(x, y, w, h);
			$nc(paintingComponent)->paintToOffscreen(this->bsg, x, y, w, h, x + w, y + h);
			accumulate(this->xOffset + x, this->yOffset + y, w, h);
			return true;
		} else {
			$nc(this->bufferInfo)->setInSync(false);
		}
	}
	$init($PlatformLogger$Level);
	if ($nc(BufferStrategyPaintManager::LOGGER)->isLoggable($PlatformLogger$Level::FINER)) {
		$nc(BufferStrategyPaintManager::LOGGER)->finer("prepare failed"_s);
	}
	return $RepaintManager$PaintManager::paint(paintingComponent, bufferComponent, g, x, y, w, h);
}

void BufferStrategyPaintManager::copyArea($JComponent* c, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t deltaX, int32_t deltaY, bool clip) {
	$useLocalCurrentObjectStackCache();
	$var($Container, root, fetchRoot(c));
	bool var$0 = prepare(c, root, false, 0, 0, 0, 0);
	if (var$0 && $nc(this->bufferInfo)->isInSync()) {
		if (clip) {
			$var($Rectangle, cBounds, $nc(c)->getVisibleRect());
			int32_t relX = this->xOffset + x;
			int32_t relY = this->yOffset + y;
			$nc(this->bsg)->clipRect(this->xOffset + $nc(cBounds)->x, this->yOffset + cBounds->y, cBounds->width, cBounds->height);
			$nc(this->bsg)->copyArea(relX, relY, w, h, deltaX, deltaY);
		} else {
			$nc(this->bsg)->copyArea(this->xOffset + x, this->yOffset + y, w, h, deltaX, deltaY);
		}
		accumulate(x + this->xOffset + deltaX, y + this->yOffset + deltaY, w, h);
	} else {
		$init($PlatformLogger$Level);
		if ($nc(BufferStrategyPaintManager::LOGGER)->isLoggable($PlatformLogger$Level::FINER)) {
			$nc(BufferStrategyPaintManager::LOGGER)->finer("copyArea: prepare failed or not in sync"_s);
		}
		if (!flushAccumulatedRegion()) {
			$nc(this->rootJ)->repaint();
		} else {
			$RepaintManager$PaintManager::copyArea(c, g, x, y, w, h, deltaX, deltaY, clip);
		}
	}
}

void BufferStrategyPaintManager::beginPaint() {
	$synchronized(this) {
		this->painting = true;
		while (this->showing) {
			try {
				$of(this)->wait();
			} catch ($InterruptedException& ie) {
			}
		}
	}
	$init($PlatformLogger$Level);
	if ($nc(BufferStrategyPaintManager::LOGGER)->isLoggable($PlatformLogger$Level::FINEST)) {
		$nc(BufferStrategyPaintManager::LOGGER)->finest("beginPaint"_s);
	}
	resetAccumulated();
}

void BufferStrategyPaintManager::endPaint() {
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc(BufferStrategyPaintManager::LOGGER)->isLoggable($PlatformLogger$Level::FINEST)) {
		$nc(BufferStrategyPaintManager::LOGGER)->finest($$str({"endPaint: region "_s, $$str(this->accumulatedX), " "_s, $$str(this->accumulatedY), " "_s, $$str(this->accumulatedMaxX), " "_s, $$str(this->accumulatedMaxY)}));
	}
	if (this->painting) {
		if (!flushAccumulatedRegion()) {
			if (!isRepaintingRoot()) {
				repaintRoot(this->rootJ);
			} else {
				resetDoubleBufferPerWindow();
				$nc(this->rootJ)->repaint();
			}
		}
	}
	$var($BufferStrategyPaintManager$BufferInfo, toDispose, nullptr);
	$synchronized(this) {
		this->painting = false;
		if (this->disposeBufferOnEnd) {
			this->disposeBufferOnEnd = false;
			$assign(toDispose, this->bufferInfo);
			$nc(this->bufferInfos)->remove($of(toDispose));
		}
	}
	if (toDispose != nullptr) {
		toDispose->dispose();
	}
}

bool BufferStrategyPaintManager::flushAccumulatedRegion() {
	bool success = true;
	if (this->accumulatedX != $Integer::MAX_VALUE) {
		$var($SubRegionShowable, bsSubRegion, $cast($SubRegionShowable, this->bufferStrategy));
		bool contentsLost = $nc(this->bufferStrategy)->contentsLost();
		if (!contentsLost) {
			$nc(bsSubRegion)->show(this->accumulatedX, this->accumulatedY, this->accumulatedMaxX, this->accumulatedMaxY);
			contentsLost = $nc(this->bufferStrategy)->contentsLost();
		}
		if (contentsLost) {
			$init($PlatformLogger$Level);
			if ($nc(BufferStrategyPaintManager::LOGGER)->isLoggable($PlatformLogger$Level::FINER)) {
				$nc(BufferStrategyPaintManager::LOGGER)->finer("endPaint: contents lost"_s);
			}
			$nc(this->bufferInfo)->setInSync(false);
			success = false;
		}
	}
	resetAccumulated();
	return success;
}

void BufferStrategyPaintManager::resetAccumulated() {
	this->accumulatedX = $Integer::MAX_VALUE;
	this->accumulatedY = $Integer::MAX_VALUE;
	this->accumulatedMaxX = 0;
	this->accumulatedMaxY = 0;
}

void BufferStrategyPaintManager::doubleBufferingChanged($JRootPane* rootPane) {
	bool var$1 = !$nc(rootPane)->isDoubleBuffered();
	bool var$0 = (var$1 || !$nc(rootPane)->getUseTrueDoubleBuffering());
	if (var$0 && rootPane->getParent() != nullptr) {
		if (!$SwingUtilities::isEventDispatchThread()) {
			$var($Runnable, updater, $new($BufferStrategyPaintManager$2, this, rootPane));
			$SwingUtilities::invokeLater(updater);
		} else {
			doubleBufferingChanged0(rootPane);
		}
	}
}

void BufferStrategyPaintManager::doubleBufferingChanged0($JRootPane* rootPane) {
	$useLocalCurrentObjectStackCache();
	$var($BufferStrategyPaintManager$BufferInfo, info, nullptr);
	$synchronized(this) {
		while (this->showing) {
			try {
				$of(this)->wait();
			} catch ($InterruptedException& ie) {
			}
		}
		$assign(info, getBufferInfo($($nc(rootPane)->getParent())));
		if (this->painting && this->bufferInfo == info) {
			this->disposeBufferOnEnd = true;
			$assign(info, nullptr);
		} else if (info != nullptr) {
			$nc(this->bufferInfos)->remove($of(info));
		}
	}
	if (info != nullptr) {
		info->dispose();
	}
}

bool BufferStrategyPaintManager::prepare($JComponent* c, $Container* root, bool isPaint, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	if (this->bsg != nullptr) {
		$nc(this->bsg)->dispose();
		$set(this, bsg, nullptr);
	}
	$set(this, bufferStrategy, nullptr);
	if (root != nullptr) {
		bool contentsLost = false;
		$var($BufferStrategyPaintManager$BufferInfo, bufferInfo, getBufferInfo(root));
		if (bufferInfo == nullptr) {
			contentsLost = true;
			$assign(bufferInfo, $new($BufferStrategyPaintManager$BufferInfo, this, root));
			$nc(this->bufferInfos)->add(bufferInfo);
			$init($PlatformLogger$Level);
			if ($nc(BufferStrategyPaintManager::LOGGER)->isLoggable($PlatformLogger$Level::FINER)) {
				$nc(BufferStrategyPaintManager::LOGGER)->finer($$str({"prepare: new BufferInfo: "_s, root}));
			}
		}
		$set(this, bufferInfo, bufferInfo);
		if (!$nc(bufferInfo)->hasBufferStrategyChanged()) {
			$set(this, bufferStrategy, bufferInfo->getBufferStrategy(true));
			if (this->bufferStrategy != nullptr) {
				$set(this, bsg, $nc(this->bufferStrategy)->getDrawGraphics());
				if ($nc(this->bufferStrategy)->contentsRestored()) {
					contentsLost = true;
					$init($PlatformLogger$Level);
					if ($nc(BufferStrategyPaintManager::LOGGER)->isLoggable($PlatformLogger$Level::FINER)) {
						$nc(BufferStrategyPaintManager::LOGGER)->finer("prepare: contents restored in prepare"_s);
					}
				}
			} else {
				return false;
			}
			if (bufferInfo->getContentsLostDuringExpose()) {
				contentsLost = true;
				bufferInfo->setContentsLostDuringExpose(false);
				$init($PlatformLogger$Level);
				if ($nc(BufferStrategyPaintManager::LOGGER)->isLoggable($PlatformLogger$Level::FINER)) {
					$nc(BufferStrategyPaintManager::LOGGER)->finer("prepare: contents lost on expose"_s);
				}
			}
			bool var$0 = isPaint && c == this->rootJ && x == 0 && y == 0 && $nc(c)->getWidth() == w;
			if (var$0 && c->getHeight() == h) {
				bufferInfo->setInSync(true);
			} else if (contentsLost) {
				bufferInfo->setInSync(false);
				if (!isRepaintingRoot()) {
					repaintRoot(this->rootJ);
				} else {
					resetDoubleBufferPerWindow();
				}
			}
			return (this->bufferInfos != nullptr);
		}
	}
	return false;
}

$Container* BufferStrategyPaintManager::fetchRoot($JComponent* c) {
	bool encounteredHW = false;
	$set(this, rootJ, c);
	$var($Container, root, c);
	this->xOffset = (this->yOffset = 0);
	while (root != nullptr && (!($instanceOf($Window, root)) && !$SunToolkit::isInstanceOf($of(root), "java.applet.Applet"_s))) {
		this->xOffset += root->getX();
		this->yOffset += root->getY();
		$assign(root, root->getParent());
		if (root != nullptr) {
			if ($instanceOf($JComponent, root)) {
				$set(this, rootJ, $cast($JComponent, root));
			} else if (!root->isLightweight()) {
				if (!encounteredHW) {
					encounteredHW = true;
				} else {
					return nullptr;
				}
			}
		}
	}
	if (($instanceOf($RootPaneContainer, root)) && ($instanceOf($JRootPane, this->rootJ))) {
		bool var$0 = $nc(this->rootJ)->isDoubleBuffered();
		if (var$0 && $nc(($cast($JRootPane, this->rootJ)))->getUseTrueDoubleBuffering()) {
			return root;
		}
	}
	return nullptr;
}

void BufferStrategyPaintManager::resetDoubleBufferPerWindow() {
	if (this->bufferInfos != nullptr) {
		dispose(this->bufferInfos);
		$set(this, bufferInfos, nullptr);
		$nc(this->repaintManager)->setPaintManager(nullptr);
	}
}

$BufferStrategyPaintManager$BufferInfo* BufferStrategyPaintManager::getBufferInfo($Container* root) {
	$useLocalCurrentObjectStackCache();
	for (int32_t counter = $nc(this->bufferInfos)->size() - 1; counter >= 0; --counter) {
		$var($BufferStrategyPaintManager$BufferInfo, bufferInfo, $cast($BufferStrategyPaintManager$BufferInfo, $nc(this->bufferInfos)->get(counter)));
		$var($Container, biRoot, $nc(bufferInfo)->getRoot());
		if (biRoot == nullptr) {
			$nc(this->bufferInfos)->remove(counter);
			$init($PlatformLogger$Level);
			if ($nc(BufferStrategyPaintManager::LOGGER)->isLoggable($PlatformLogger$Level::FINER)) {
				$nc(BufferStrategyPaintManager::LOGGER)->finer("BufferInfo pruned, root null"_s);
			}
		} else if (biRoot == root) {
			return bufferInfo;
		}
	}
	return nullptr;
}

void BufferStrategyPaintManager::accumulate(int32_t x, int32_t y, int32_t w, int32_t h) {
	this->accumulatedX = $Math::min(x, this->accumulatedX);
	this->accumulatedY = $Math::min(y, this->accumulatedY);
	this->accumulatedMaxX = $Math::max(this->accumulatedMaxX, x + w);
	this->accumulatedMaxY = $Math::max(this->accumulatedMaxY, y + h);
}

void clinit$BufferStrategyPaintManager($Class* class$) {
	$assignStatic(BufferStrategyPaintManager::LOGGER, $PlatformLogger::getLogger("javax.swing.BufferStrategyPaintManager"_s));
}

BufferStrategyPaintManager::BufferStrategyPaintManager() {
}

$Class* BufferStrategyPaintManager::load$($String* name, bool initialize) {
	$loadClass(BufferStrategyPaintManager, name, initialize, &_BufferStrategyPaintManager_ClassInfo_, clinit$BufferStrategyPaintManager, allocate$BufferStrategyPaintManager);
	return class$;
}

$Class* BufferStrategyPaintManager::class$ = nullptr;

	} // swing
} // javax