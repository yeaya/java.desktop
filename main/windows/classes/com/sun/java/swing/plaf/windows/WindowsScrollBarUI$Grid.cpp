#include <com/sun/java/swing/plaf/windows/WindowsScrollBarUI$Grid.h>

#include <com/sun/java/swing/plaf/windows/WindowsScrollBarUI.h>
#include <java/awt/Color.h>
#include <java/awt/Graphics.h>
#include <java/awt/Image.h>
#include <java/awt/Rectangle.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/image/IndexColorModel.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/ref/WeakReference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/HashMap.h>
#include <jcpp.h>

#undef BUFFER_SIZE
#undef TYPE_BYTE
#undef TYPE_BYTE_INDEXED

using $WindowsScrollBarUI = ::com::sun::java::swing::plaf::windows::WindowsScrollBarUI;
using $Color = ::java::awt::Color;
using $Graphics = ::java::awt::Graphics;
using $Image = ::java::awt::Image;
using $Rectangle = ::java::awt::Rectangle;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $IndexColorModel = ::java::awt::image::IndexColorModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $WeakReference = ::java::lang::ref::WeakReference;
using $HashMap = ::java::util::HashMap;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsScrollBarUI$Grid_FieldInfo_[] = {
	{"BUFFER_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsScrollBarUI$Grid, BUFFER_SIZE)},
	{"map", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/ref/WeakReference<Lcom/sun/java/swing/plaf/windows/WindowsScrollBarUI$Grid;>;>;", $PRIVATE | $STATIC, $staticField(WindowsScrollBarUI$Grid, map)},
	{"image", "Ljava/awt/image/BufferedImage;", nullptr, $PRIVATE, $field(WindowsScrollBarUI$Grid, image)},
	{}
};

$MethodInfo _WindowsScrollBarUI$Grid_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Color;Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(static_cast<void(WindowsScrollBarUI$Grid::*)($Color*,$Color*)>(&WindowsScrollBarUI$Grid::init$))},
	{"getGrid", "(Ljava/awt/Color;Ljava/awt/Color;)Lcom/sun/java/swing/plaf/windows/WindowsScrollBarUI$Grid;", nullptr, $PUBLIC | $STATIC, $method(static_cast<WindowsScrollBarUI$Grid*(*)($Color*,$Color*)>(&WindowsScrollBarUI$Grid::getGrid))},
	{"paint", "(Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintGrid", "(Ljava/awt/Graphics;Ljava/awt/Color;Ljava/awt/Color;)V", nullptr, $PRIVATE, $method(static_cast<void(WindowsScrollBarUI$Grid::*)($Graphics*,$Color*,$Color*)>(&WindowsScrollBarUI$Grid::paintGrid))},
	{}
};

$InnerClassInfo _WindowsScrollBarUI$Grid_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsScrollBarUI$Grid", "com.sun.java.swing.plaf.windows.WindowsScrollBarUI", "Grid", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _WindowsScrollBarUI$Grid_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsScrollBarUI$Grid",
	"java.lang.Object",
	nullptr,
	_WindowsScrollBarUI$Grid_FieldInfo_,
	_WindowsScrollBarUI$Grid_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsScrollBarUI$Grid_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsScrollBarUI"
};

$Object* allocate$WindowsScrollBarUI$Grid($Class* clazz) {
	return $of($alloc(WindowsScrollBarUI$Grid));
}

$HashMap* WindowsScrollBarUI$Grid::map = nullptr;

WindowsScrollBarUI$Grid* WindowsScrollBarUI$Grid::getGrid($Color* fg, $Color* bg) {
	$init(WindowsScrollBarUI$Grid);
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $$str({$$str($nc(fg)->getRGB()), " "_s}));
	$var($String, key, $concat(var$0, $$str($nc(bg)->getRGB())));
	$var($WeakReference, ref, $cast($WeakReference, $nc(WindowsScrollBarUI$Grid::map)->get(key)));
	$var(WindowsScrollBarUI$Grid, grid, (ref == nullptr) ? (WindowsScrollBarUI$Grid*)nullptr : $cast(WindowsScrollBarUI$Grid, $nc(ref)->get()));
	if (grid == nullptr) {
		$assign(grid, $new(WindowsScrollBarUI$Grid, fg, bg));
		$nc(WindowsScrollBarUI$Grid::map)->put(key, $$new($WeakReference, grid));
	}
	return grid;
}

void WindowsScrollBarUI$Grid::init$($Color* fg, $Color* bg) {
	$useLocalCurrentObjectStackCache();
	$var($ints, cmap, $new($ints, {
		$nc(fg)->getRGB(),
		$nc(bg)->getRGB()
	}));
	$var($IndexColorModel, icm, $new($IndexColorModel, 8, 2, cmap, 0, false, -1, $DataBuffer::TYPE_BYTE));
	$set(this, image, $new($BufferedImage, WindowsScrollBarUI$Grid::BUFFER_SIZE, WindowsScrollBarUI$Grid::BUFFER_SIZE, $BufferedImage::TYPE_BYTE_INDEXED, icm));
	$var($Graphics, g, $nc(this->image)->getGraphics());
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(g)->setClip(0, 0, WindowsScrollBarUI$Grid::BUFFER_SIZE, WindowsScrollBarUI$Grid::BUFFER_SIZE);
			paintGrid(g, fg, bg);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(g)->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void WindowsScrollBarUI$Grid::paint($Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$var($Rectangle, clipRect, $nc(g)->getClipBounds());
	int32_t minX = $Math::max(x, $nc(clipRect)->x);
	int32_t minY = $Math::max(y, $nc(clipRect)->y);
	int32_t maxX = $Math::min($nc(clipRect)->x + clipRect->width, x + w);
	int32_t maxY = $Math::min($nc(clipRect)->y + clipRect->height, y + h);
	if (maxX <= minX || maxY <= minY) {
		return;
	}
	int32_t xOffset = (minX - x) % 2;
	for (int32_t xCounter = minX; xCounter < maxX; xCounter += WindowsScrollBarUI$Grid::BUFFER_SIZE) {
		int32_t yOffset = (minY - y) % 2;
		int32_t width = $Math::min(WindowsScrollBarUI$Grid::BUFFER_SIZE - xOffset, maxX - xCounter);
		for (int32_t yCounter = minY; yCounter < maxY; yCounter += WindowsScrollBarUI$Grid::BUFFER_SIZE) {
			int32_t height = $Math::min(WindowsScrollBarUI$Grid::BUFFER_SIZE - yOffset, maxY - yCounter);
			g->drawImage(this->image, xCounter, yCounter, xCounter + width, yCounter + height, xOffset, yOffset, xOffset + width, yOffset + height, nullptr);
			if (yOffset != 0) {
				yCounter -= yOffset;
				yOffset = 0;
			}
		}
		if (xOffset != 0) {
			xCounter -= xOffset;
			xOffset = 0;
		}
	}
}

void WindowsScrollBarUI$Grid::paintGrid($Graphics* g, $Color* fg, $Color* bg) {
	$var($Rectangle, clipRect, $nc(g)->getClipBounds());
	g->setColor(bg);
	g->fillRect($nc(clipRect)->x, clipRect->y, clipRect->width, clipRect->height);
	g->setColor(fg);
	g->translate($nc(clipRect)->x, clipRect->y);
	int32_t width = $nc(clipRect)->width;
	int32_t height = clipRect->height;
	int32_t xCounter = clipRect->x % 2;
	for (int32_t end = width - height; xCounter < end; xCounter += 2) {
		g->drawLine(xCounter, 0, xCounter + height, height);
	}
	for (int32_t end = width; xCounter < end; xCounter += 2) {
		g->drawLine(xCounter, 0, width, width - xCounter);
	}
	int32_t yCounter = ((clipRect->x % 2) == 0) ? 2 : 1;
	for (int32_t end = height - width; yCounter < end; yCounter += 2) {
		g->drawLine(0, yCounter, width, yCounter + width);
	}
	for (int32_t end = height; yCounter < end; yCounter += 2) {
		g->drawLine(0, yCounter, height - yCounter, height);
	}
	g->translate(-clipRect->x, -clipRect->y);
}

void clinit$WindowsScrollBarUI$Grid($Class* class$) {
	{
		$assignStatic(WindowsScrollBarUI$Grid::map, $new($HashMap));
	}
}

WindowsScrollBarUI$Grid::WindowsScrollBarUI$Grid() {
}

$Class* WindowsScrollBarUI$Grid::load$($String* name, bool initialize) {
	$loadClass(WindowsScrollBarUI$Grid, name, initialize, &_WindowsScrollBarUI$Grid_ClassInfo_, clinit$WindowsScrollBarUI$Grid, allocate$WindowsScrollBarUI$Grid);
	return class$;
}

$Class* WindowsScrollBarUI$Grid::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com