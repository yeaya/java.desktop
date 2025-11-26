#include <sun/awt/im/CompositionArea.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/awt/event/InputMethodEvent.h>
#include <java/awt/event/InputMethodListener.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowListener.h>
#include <java/awt/font/FontRenderContext.h>
#include <java/awt/font/TextHitInfo.h>
#include <java/awt/font/TextLayout.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/im/InputMethodRequests.h>
#include <java/lang/Math.h>
#include <java/text/AttributedCharacterIterator.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/LineBorder.h>
#include <sun/awt/im/CompositionArea$FrameWindowAdapter.h>
#include <sun/awt/im/CompositionAreaHandler.h>
#include <sun/awt/im/InputContext.h>
#include <sun/awt/im/InputMethodContext.h>
#include <sun/awt/im/InputMethodWindow.h>
#include <jcpp.h>

#undef HEIGHT_MARGIN
#undef KEY_EVENT_MASK
#undef PASSIVE_WIDTH
#undef SPACING
#undef TEXT_ORIGIN_X
#undef TEXT_ORIGIN_Y
#undef WIDTH_MARGIN

using $AWTEvent = ::java::awt::AWTEvent;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $FontMetrics = ::java::awt::FontMetrics;
using $Frame = ::java::awt::Frame;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Insets = ::java::awt::Insets;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Toolkit = ::java::awt::Toolkit;
using $Window = ::java::awt::Window;
using $InputMethodEvent = ::java::awt::event::InputMethodEvent;
using $InputMethodListener = ::java::awt::event::InputMethodListener;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowListener = ::java::awt::event::WindowListener;
using $FontRenderContext = ::java::awt::font::FontRenderContext;
using $TextHitInfo = ::java::awt::font::TextHitInfo;
using $TextLayout = ::java::awt::font::TextLayout;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $InputMethodRequests = ::java::awt::im::InputMethodRequests;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributedCharacterIterator = ::java::text::AttributedCharacterIterator;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $Border = ::javax::swing::border::Border;
using $LineBorder = ::javax::swing::border::LineBorder;
using $CompositionArea$FrameWindowAdapter = ::sun::awt::im::CompositionArea$FrameWindowAdapter;
using $CompositionAreaHandler = ::sun::awt::im::CompositionAreaHandler;
using $InputContext = ::sun::awt::im::InputContext;
using $InputMethodContext = ::sun::awt::im::InputMethodContext;
using $InputMethodWindow = ::sun::awt::im::InputMethodWindow;

namespace sun {
	namespace awt {
		namespace im {

$FieldInfo _CompositionArea_FieldInfo_[] = {
	{"handler", "Lsun/awt/im/CompositionAreaHandler;", nullptr, $PRIVATE, $field(CompositionArea, handler)},
	{"composedTextLayout", "Ljava/awt/font/TextLayout;", nullptr, $PRIVATE, $field(CompositionArea, composedTextLayout)},
	{"caret", "Ljava/awt/font/TextHitInfo;", nullptr, $PRIVATE, $field(CompositionArea, caret)},
	{"compositionWindow", "Ljavax/swing/JFrame;", nullptr, $PRIVATE, $field(CompositionArea, compositionWindow)},
	{"TEXT_ORIGIN_X", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CompositionArea, TEXT_ORIGIN_X)},
	{"TEXT_ORIGIN_Y", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CompositionArea, TEXT_ORIGIN_Y)},
	{"PASSIVE_WIDTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CompositionArea, PASSIVE_WIDTH)},
	{"WIDTH_MARGIN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CompositionArea, WIDTH_MARGIN)},
	{"HEIGHT_MARGIN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CompositionArea, HEIGHT_MARGIN)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CompositionArea, serialVersionUID)},
	{}
};

$MethodInfo _CompositionArea_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CompositionArea::*)()>(&CompositionArea::init$))},
	{"caretPositionChanged", "(Ljava/awt/event/InputMethodEvent;)V", nullptr, $PUBLIC},
	{"getCaretRectangle", "(Ljava/awt/font/TextHitInfo;)Ljava/awt/Rectangle;", nullptr, $PRIVATE, $method(static_cast<$Rectangle*(CompositionArea::*)($TextHitInfo*)>(&CompositionArea::getCaretRectangle))},
	{"getInputMethodRequests", "()Ljava/awt/im/InputMethodRequests;", nullptr, $PUBLIC},
	{"getLocationOffset", "(II)Ljava/awt/font/TextHitInfo;", nullptr, 0, $method(static_cast<$TextHitInfo*(CompositionArea::*)(int32_t,int32_t)>(&CompositionArea::getLocationOffset))},
	{"getTextLocation", "(Ljava/awt/font/TextHitInfo;)Ljava/awt/Rectangle;", nullptr, 0, $method(static_cast<$Rectangle*(CompositionArea::*)($TextHitInfo*)>(&CompositionArea::getTextLocation))},
	{"inputMethodTextChanged", "(Ljava/awt/event/InputMethodEvent;)V", nullptr, $PUBLIC},
	{"isCompositionAreaVisible", "()Z", nullptr, 0, $method(static_cast<bool(CompositionArea::*)()>(&CompositionArea::isCompositionAreaVisible))},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"setCaret", "(Ljava/awt/font/TextHitInfo;)V", nullptr, 0, $method(static_cast<void(CompositionArea::*)($TextHitInfo*)>(&CompositionArea::setCaret))},
	{"setCompositionAreaUndecorated", "(Z)V", nullptr, 0, $method(static_cast<void(CompositionArea::*)(bool)>(&CompositionArea::setCompositionAreaUndecorated))},
	{"setCompositionAreaVisible", "(Z)V", nullptr, 0, $method(static_cast<void(CompositionArea::*)(bool)>(&CompositionArea::setCompositionAreaVisible))},
	{"setHandlerInfo", "(Lsun/awt/im/CompositionAreaHandler;Lsun/awt/im/InputContext;)V", nullptr, $SYNCHRONIZED, $method(static_cast<void(CompositionArea::*)($CompositionAreaHandler*,$InputContext*)>(&CompositionArea::setHandlerInfo))},
	{"setText", "(Ljava/text/AttributedCharacterIterator;Ljava/awt/font/TextHitInfo;)V", nullptr, 0, $method(static_cast<void(CompositionArea::*)($AttributedCharacterIterator*,$TextHitInfo*)>(&CompositionArea::setText))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateWindowLocation", "()V", nullptr, 0, $method(static_cast<void(CompositionArea::*)()>(&CompositionArea::updateWindowLocation))},
	{}
};

$InnerClassInfo _CompositionArea_InnerClassesInfo_[] = {
	{"sun.awt.im.CompositionArea$FrameWindowAdapter", "sun.awt.im.CompositionArea", "FrameWindowAdapter", 0},
	{}
};

$ClassInfo _CompositionArea_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.im.CompositionArea",
	"javax.swing.JPanel",
	"java.awt.event.InputMethodListener",
	_CompositionArea_FieldInfo_,
	_CompositionArea_MethodInfo_,
	nullptr,
	nullptr,
	_CompositionArea_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.im.CompositionArea$FrameWindowAdapter"
};

$Object* allocate$CompositionArea($Class* clazz) {
	return $of($alloc(CompositionArea));
}

$String* CompositionArea::toString() {
	 return this->$JPanel::toString();
}

int32_t CompositionArea::hashCode() {
	 return this->$JPanel::hashCode();
}

bool CompositionArea::equals(Object$* arg0) {
	 return this->$JPanel::equals(arg0);
}

$Object* CompositionArea::clone() {
	 return this->$JPanel::clone();
}

void CompositionArea::finalize() {
	this->$JPanel::finalize();
}

void CompositionArea::init$() {
	$useLocalCurrentObjectStackCache();
	$JPanel::init$();
	$set(this, caret, nullptr);
	$var($String, windowTitle, $Toolkit::getProperty("AWT.CompositionWindowTitle"_s, "Input Window"_s));
	$set(this, compositionWindow, $cast($JFrame, $InputMethodContext::createInputMethodWindow(windowTitle, nullptr, true)));
	setOpaque(true);
	setBorder($($LineBorder::createGrayLineBorder()));
	$init($Color);
	setForeground($Color::black);
	setBackground($Color::white);
	enableInputMethods(true);
	enableEvents($AWTEvent::KEY_EVENT_MASK);
	$nc($($nc(this->compositionWindow)->getContentPane()))->add(static_cast<$Component*>(this));
	$nc(this->compositionWindow)->addWindowListener($$new($CompositionArea$FrameWindowAdapter, this));
	addInputMethodListener(this);
	$nc(this->compositionWindow)->enableInputMethods(false);
	$nc(this->compositionWindow)->pack();
	$var($Dimension, windowSize, $nc(this->compositionWindow)->getSize());
	$var($Dimension, screenSize, $nc(($(getToolkit())))->getScreenSize());
	$nc(this->compositionWindow)->setLocation($nc(screenSize)->width - $nc(windowSize)->width - 20, screenSize->height - windowSize->height - 100);
	$nc(this->compositionWindow)->setVisible(false);
}

void CompositionArea::setHandlerInfo($CompositionAreaHandler* handler, $InputContext* inputContext) {
	$synchronized(this) {
		$set(this, handler, handler);
		$nc(($cast($InputMethodWindow, this->compositionWindow)))->setInputContext(inputContext);
	}
}

$InputMethodRequests* CompositionArea::getInputMethodRequests() {
	return this->handler;
}

$Rectangle* CompositionArea::getCaretRectangle($TextHitInfo* caret) {
	$useLocalCurrentObjectStackCache();
	int32_t caretLocation = 0;
	$var($TextLayout, layout, this->composedTextLayout);
	if (layout != nullptr) {
		caretLocation = $Math::round($nc($(layout->getCaretInfo(caret)))->get(0));
	}
	$var($Graphics, g, getGraphics());
	$var($FontMetrics, metrics, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$assign(metrics, $nc(g)->getFontMetrics());
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(g)->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	int32_t var$2 = CompositionArea::TEXT_ORIGIN_X + caretLocation;
	int32_t var$3 = CompositionArea::TEXT_ORIGIN_Y - $nc(metrics)->getAscent();
	int32_t var$4 = metrics->getAscent();
	return $new($Rectangle, var$2, var$3, 0, var$4 + metrics->getDescent());
}

void CompositionArea::paint($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$JPanel::paint(g);
	$nc(g)->setColor($(getForeground()));
	$var($TextLayout, layout, this->composedTextLayout);
	if (layout != nullptr) {
		layout->draw($cast($Graphics2D, g), (float)CompositionArea::TEXT_ORIGIN_X, (float)CompositionArea::TEXT_ORIGIN_Y);
	}
	if (this->caret != nullptr) {
		$var($Rectangle, rectangle, getCaretRectangle(this->caret));
		g->setXORMode($(getBackground()));
		g->fillRect($nc(rectangle)->x, rectangle->y, 1, rectangle->height);
		g->setPaintMode();
	}
}

void CompositionArea::setCompositionAreaVisible(bool visible) {
	$nc(this->compositionWindow)->setVisible(visible);
}

bool CompositionArea::isCompositionAreaVisible() {
	return $nc(this->compositionWindow)->isVisible();
}

void CompositionArea::inputMethodTextChanged($InputMethodEvent* event) {
	$nc(this->handler)->inputMethodTextChanged(event);
}

void CompositionArea::caretPositionChanged($InputMethodEvent* event) {
	$nc(this->handler)->caretPositionChanged(event);
}

void CompositionArea::setText($AttributedCharacterIterator* composedText, $TextHitInfo* caret) {
	$useLocalCurrentObjectStackCache();
	$set(this, composedTextLayout, nullptr);
	if (composedText == nullptr) {
		$nc(this->compositionWindow)->setVisible(false);
		$set(this, caret, nullptr);
	} else {
		if (!$nc(this->compositionWindow)->isVisible()) {
			$nc(this->compositionWindow)->setVisible(true);
		}
		$var($Graphics, g, getGraphics());
		if (g == nullptr) {
			return;
		}
		{
			$var($Throwable, var$0, nullptr);
			try {
				updateWindowLocation();
				$var($FontRenderContext, context, $nc(($cast($Graphics2D, g)))->getFontRenderContext());
				$set(this, composedTextLayout, $new($TextLayout, composedText, context));
				$var($Rectangle2D, bounds, $nc(this->composedTextLayout)->getBounds());
				$set(this, caret, caret);
				$var($FontMetrics, metrics, $nc(g)->getFontMetrics());
				$var($Rectangle2D, maxCharBoundsRec, $nc(metrics)->getMaxCharBounds(g));
				int32_t newHeight = $cast(int32_t, $nc(maxCharBoundsRec)->getHeight()) + CompositionArea::HEIGHT_MARGIN;
				int32_t var$1 = newHeight + $nc($($nc(this->compositionWindow)->getInsets()))->top;
				int32_t newFrameHeight = var$1 + $nc($($nc(this->compositionWindow)->getInsets()))->bottom;
				$var($InputMethodRequests, req, $nc(this->handler)->getClientInputMethodRequests());
				int32_t newWidth = (req == nullptr) ? CompositionArea::PASSIVE_WIDTH : $cast(int32_t, $nc(bounds)->getWidth()) + CompositionArea::WIDTH_MARGIN;
				int32_t var$2 = newWidth + $nc($($nc(this->compositionWindow)->getInsets()))->left;
				int32_t newFrameWidth = var$2 + $nc($($nc(this->compositionWindow)->getInsets()))->right;
				setPreferredSize($$new($Dimension, newWidth, newHeight));
				$nc(this->compositionWindow)->setSize($$new($Dimension, newFrameWidth, newFrameHeight));
				paint(g);
			} catch ($Throwable& var$3) {
				$assign(var$0, var$3);
			} /*finally*/ {
				$nc(g)->dispose();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void CompositionArea::setCaret($TextHitInfo* caret) {
	$useLocalCurrentObjectStackCache();
	$set(this, caret, caret);
	if ($nc(this->compositionWindow)->isVisible()) {
		$var($Graphics, g, getGraphics());
		{
			$var($Throwable, var$0, nullptr);
			try {
				paint(g);
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$nc(g)->dispose();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void CompositionArea::updateWindowLocation() {
	$useLocalCurrentObjectStackCache();
	$var($InputMethodRequests, req, $nc(this->handler)->getClientInputMethodRequests());
	if (req == nullptr) {
		return;
	}
	$var($Point, windowLocation, $new($Point));
	$var($Rectangle, caretRect, $nc(req)->getTextLocation(nullptr));
	$var($Dimension, screenSize, $nc($($Toolkit::getDefaultToolkit()))->getScreenSize());
	$var($Dimension, windowSize, $nc(this->compositionWindow)->getSize());
	int32_t SPACING = 2;
	if ($nc(caretRect)->x + $nc(windowSize)->width > $nc(screenSize)->width) {
		windowLocation->x = screenSize->width - windowSize->width;
	} else {
		windowLocation->x = caretRect->x;
	}
	if ($nc(caretRect)->y + caretRect->height + SPACING + $nc(windowSize)->height > $nc(screenSize)->height) {
		windowLocation->y = caretRect->y - SPACING - windowSize->height;
	} else {
		windowLocation->y = caretRect->y + caretRect->height + SPACING;
	}
	$nc(this->compositionWindow)->setLocation(windowLocation);
}

$Rectangle* CompositionArea::getTextLocation($TextHitInfo* offset) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, rectangle, getCaretRectangle(offset));
	$var($Point, location, getLocationOnScreen());
	$nc(rectangle)->translate($nc(location)->x, location->y);
	return rectangle;
}

$TextHitInfo* CompositionArea::getLocationOffset(int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	$var($TextLayout, layout, this->composedTextLayout);
	if (layout == nullptr) {
		return nullptr;
	} else {
		$var($Point, location, getLocationOnScreen());
		x -= $nc(location)->x + CompositionArea::TEXT_ORIGIN_X;
		y -= location->y + CompositionArea::TEXT_ORIGIN_Y;
		if ($nc($($nc(layout)->getBounds()))->contains((double)x, (double)y)) {
			return layout->hitTestChar((float)x, (float)y);
		} else {
			return nullptr;
		}
	}
}

void CompositionArea::setCompositionAreaUndecorated(bool setUndecorated) {
	if ($nc(this->compositionWindow)->isDisplayable()) {
		$nc(this->compositionWindow)->removeNotify();
	}
	$nc(this->compositionWindow)->setUndecorated(setUndecorated);
	$nc(this->compositionWindow)->pack();
}

CompositionArea::CompositionArea() {
}

$Class* CompositionArea::load$($String* name, bool initialize) {
	$loadClass(CompositionArea, name, initialize, &_CompositionArea_ClassInfo_, allocate$CompositionArea);
	return class$;
}

$Class* CompositionArea::class$ = nullptr;

		} // im
	} // awt
} // sun