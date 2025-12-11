#include <com/sun/java/swing/plaf/windows/WindowsTextUI$WindowsHighlightPainter.h>

#include <com/sun/java/swing/plaf/windows/WindowsTextUI.h>
#include <java/awt/Color.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/DefaultHighlighter$DefaultHighlightPainter.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/Position$Bias.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TextUI = ::javax::swing::plaf::TextUI;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $DefaultHighlighter$DefaultHighlightPainter = ::javax::swing::text::DefaultHighlighter$DefaultHighlightPainter;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $Position$Bias = ::javax::swing::text::Position$Bias;
using $View = ::javax::swing::text::View;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$MethodInfo _WindowsTextUI$WindowsHighlightPainter_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Color;)V", nullptr, 0, $method(static_cast<void(WindowsTextUI$WindowsHighlightPainter::*)($Color*)>(&WindowsTextUI$WindowsHighlightPainter::init$))},
	{"paint", "(Ljava/awt/Graphics;IILjava/awt/Shape;Ljavax/swing/text/JTextComponent;)V", nullptr, $PUBLIC},
	{"paintLayer", "(Ljava/awt/Graphics;IILjava/awt/Shape;Ljavax/swing/text/JTextComponent;Ljavax/swing/text/View;)Ljava/awt/Shape;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsTextUI$WindowsHighlightPainter_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsTextUI$WindowsHighlightPainter", "com.sun.java.swing.plaf.windows.WindowsTextUI", "WindowsHighlightPainter", $STATIC},
	{"javax.swing.text.DefaultHighlighter$DefaultHighlightPainter", "javax.swing.text.DefaultHighlighter", "DefaultHighlightPainter", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _WindowsTextUI$WindowsHighlightPainter_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsTextUI$WindowsHighlightPainter",
	"javax.swing.text.DefaultHighlighter$DefaultHighlightPainter",
	nullptr,
	nullptr,
	_WindowsTextUI$WindowsHighlightPainter_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsTextUI$WindowsHighlightPainter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsTextUI"
};

$Object* allocate$WindowsTextUI$WindowsHighlightPainter($Class* clazz) {
	return $of($alloc(WindowsTextUI$WindowsHighlightPainter));
}

void WindowsTextUI$WindowsHighlightPainter::init$($Color* c) {
	$DefaultHighlighter$DefaultHighlightPainter::init$(c);
}

void WindowsTextUI$WindowsHighlightPainter::paint($Graphics* g, int32_t offs0, int32_t offs1, $Shape* bounds, $JTextComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, alloc, $nc(bounds)->getBounds());
	try {
		$var($TextUI, mapper, $cast($TextUI, $nc(c)->getUI()));
		$var($Rectangle, p0, $nc(mapper)->modelToView(c, offs0));
		$var($Rectangle, p1, mapper->modelToView(c, offs1));
		$var($Color, color, getColor());
		if (color == nullptr) {
			$nc(g)->setColor($(c->getSelectionColor()));
		} else {
			$nc(g)->setColor(color);
		}
		bool firstIsDot = false;
		bool secondIsDot = false;
		if (c->isEditable()) {
			int32_t dot = c->getCaretPosition();
			firstIsDot = (offs0 == dot);
			secondIsDot = (offs1 == dot);
		}
		if ($nc(p0)->y == $nc(p1)->y) {
			$var($Rectangle, r, p0->union$(p1));
			if ($nc(r)->width > 0) {
				if (firstIsDot) {
					++r->x;
					--r->width;
				} else if (secondIsDot) {
					--r->width;
				}
			}
			$nc(g)->fillRect($nc(r)->x, r->y, r->width, r->height);
		} else {
			int32_t p0ToMarginWidth = $nc(alloc)->x + alloc->width - p0->x;
			if (firstIsDot && p0ToMarginWidth > 0) {
				++p0->x;
				--p0ToMarginWidth;
			}
			$nc(g)->fillRect(p0->x, p0->y, p0ToMarginWidth, p0->height);
			if ((p0->y + p0->height) != p1->y) {
				g->fillRect(alloc->x, p0->y + p0->height, alloc->width, p1->y - (p0->y + p0->height));
			}
			if (secondIsDot && p1->x > alloc->x) {
				--p1->x;
			}
			g->fillRect(alloc->x, p1->y, (p1->x - alloc->x), p1->height);
		}
	} catch ($BadLocationException& e) {
	}
}

$Shape* WindowsTextUI$WindowsHighlightPainter::paintLayer($Graphics* g, int32_t offs0, int32_t offs1, $Shape* bounds, $JTextComponent* c, $View* view) {
	$useLocalCurrentObjectStackCache();
	$var($Color, color, getColor());
	if (color == nullptr) {
		$nc(g)->setColor($($nc(c)->getSelectionColor()));
	} else {
		$nc(g)->setColor(color);
	}
	bool firstIsDot = false;
	bool secondIsDot = false;
	if ($nc(c)->isEditable()) {
		int32_t dot = c->getCaretPosition();
		firstIsDot = (offs0 == dot);
		secondIsDot = (offs1 == dot);
	}
	bool var$0 = offs0 == $nc(view)->getStartOffset();
	if (var$0 && offs1 == view->getEndOffset()) {
		$var($Rectangle, alloc, nullptr);
		if ($instanceOf($Rectangle, bounds)) {
			$assign(alloc, $cast($Rectangle, bounds));
		} else {
			$assign(alloc, $nc(bounds)->getBounds());
		}
		if (firstIsDot && $nc(alloc)->width > 0) {
			$nc(g)->fillRect(alloc->x + 1, alloc->y, alloc->width - 1, alloc->height);
		} else if (secondIsDot && alloc->width > 0) {
			$nc(g)->fillRect(alloc->x, alloc->y, alloc->width - 1, alloc->height);
		} else {
			$nc(g)->fillRect(alloc->x, alloc->y, alloc->width, alloc->height);
		}
		return alloc;
	} else {
		try {
			$init($Position$Bias);
			$var($Shape, shape, view->modelToView(offs0, $Position$Bias::Forward, offs1, $Position$Bias::Backward, bounds));
			$var($Rectangle, r, ($instanceOf($Rectangle, shape)) ? $cast($Rectangle, shape) : $nc(shape)->getBounds());
			if (firstIsDot && $nc(r)->width > 0) {
				$nc(g)->fillRect(r->x + 1, r->y, r->width - 1, r->height);
			} else if (secondIsDot && r->width > 0) {
				$nc(g)->fillRect(r->x, r->y, r->width - 1, r->height);
			} else {
				$nc(g)->fillRect(r->x, r->y, r->width, r->height);
			}
			return r;
		} catch ($BadLocationException& e) {
		}
	}
	return nullptr;
}

WindowsTextUI$WindowsHighlightPainter::WindowsTextUI$WindowsHighlightPainter() {
}

$Class* WindowsTextUI$WindowsHighlightPainter::load$($String* name, bool initialize) {
	$loadClass(WindowsTextUI$WindowsHighlightPainter, name, initialize, &_WindowsTextUI$WindowsHighlightPainter_ClassInfo_, allocate$WindowsTextUI$WindowsHighlightPainter);
	return class$;
}

$Class* WindowsTextUI$WindowsHighlightPainter::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com