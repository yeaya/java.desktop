#include <javax/swing/text/DefaultHighlighter$DefaultHighlightPainter.h>

#include <java/awt/Color.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/DefaultHighlighter.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/LayeredHighlighter$LayerPainter.h>
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
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $TextUI = ::javax::swing::plaf::TextUI;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $DefaultHighlighter = ::javax::swing::text::DefaultHighlighter;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $LayeredHighlighter$LayerPainter = ::javax::swing::text::LayeredHighlighter$LayerPainter;
using $Position$Bias = ::javax::swing::text::Position$Bias;
using $View = ::javax::swing::text::View;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _DefaultHighlighter$DefaultHighlightPainter_FieldInfo_[] = {
	{"color", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(DefaultHighlighter$DefaultHighlightPainter, color)},
	{}
};

$MethodInfo _DefaultHighlighter$DefaultHighlightPainter_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(static_cast<void(DefaultHighlighter$DefaultHighlightPainter::*)($Color*)>(&DefaultHighlighter$DefaultHighlightPainter::init$))},
	{"getColor", "()Ljava/awt/Color;", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;IILjava/awt/Shape;Ljavax/swing/text/JTextComponent;)V", nullptr, $PUBLIC},
	{"paintLayer", "(Ljava/awt/Graphics;IILjava/awt/Shape;Ljavax/swing/text/JTextComponent;Ljavax/swing/text/View;)Ljava/awt/Shape;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultHighlighter$DefaultHighlightPainter_InnerClassesInfo_[] = {
	{"javax.swing.text.DefaultHighlighter$DefaultHighlightPainter", "javax.swing.text.DefaultHighlighter", "DefaultHighlightPainter", $PUBLIC | $STATIC},
	{"javax.swing.text.LayeredHighlighter$LayerPainter", "javax.swing.text.LayeredHighlighter", "LayerPainter", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DefaultHighlighter$DefaultHighlightPainter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.DefaultHighlighter$DefaultHighlightPainter",
	"javax.swing.text.LayeredHighlighter$LayerPainter",
	nullptr,
	_DefaultHighlighter$DefaultHighlightPainter_FieldInfo_,
	_DefaultHighlighter$DefaultHighlightPainter_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultHighlighter$DefaultHighlightPainter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.DefaultHighlighter"
};

$Object* allocate$DefaultHighlighter$DefaultHighlightPainter($Class* clazz) {
	return $of($alloc(DefaultHighlighter$DefaultHighlightPainter));
}

void DefaultHighlighter$DefaultHighlightPainter::init$($Color* c) {
	$LayeredHighlighter$LayerPainter::init$();
	$set(this, color, c);
}

$Color* DefaultHighlighter$DefaultHighlightPainter::getColor() {
	return this->color;
}

void DefaultHighlighter$DefaultHighlightPainter::paint($Graphics* g, int32_t offs0, int32_t offs1, $Shape* bounds, $JTextComponent* c) {
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
		if ($nc(p0)->y == $nc(p1)->y) {
			$var($Rectangle, r, p0->union$(p1));
			$nc(g)->fillRect($nc(r)->x, r->y, r->width, r->height);
		} else {
			int32_t p0ToMarginWidth = $nc(alloc)->x + alloc->width - p0->x;
			$nc(g)->fillRect(p0->x, p0->y, p0ToMarginWidth, p0->height);
			if ((p0->y + p0->height) != p1->y) {
				g->fillRect(alloc->x, p0->y + p0->height, alloc->width, p1->y - (p0->y + p0->height));
			}
			g->fillRect(alloc->x, p1->y, (p1->x - alloc->x), p1->height);
		}
	} catch ($BadLocationException&) {
		$catch();
	}
}

$Shape* DefaultHighlighter$DefaultHighlightPainter::paintLayer($Graphics* g, int32_t offs0, int32_t offs1, $Shape* bounds, $JTextComponent* c, $View* view) {
	$var($Color, color, getColor());
	if (color == nullptr) {
		$nc(g)->setColor($($nc(c)->getSelectionColor()));
	} else {
		$nc(g)->setColor(color);
	}
	$var($Rectangle, r, nullptr);
	bool var$0 = offs0 == $nc(view)->getStartOffset();
	if (var$0 && offs1 == view->getEndOffset()) {
		if ($instanceOf($Rectangle, bounds)) {
			$assign(r, $cast($Rectangle, bounds));
		} else {
			$assign(r, $nc(bounds)->getBounds());
		}
	} else {
		try {
			$init($Position$Bias);
			$var($Shape, shape, view->modelToView(offs0, $Position$Bias::Forward, offs1, $Position$Bias::Backward, bounds));
			$assign(r, ($instanceOf($Rectangle, shape)) ? $cast($Rectangle, shape) : $nc(shape)->getBounds());
		} catch ($BadLocationException&) {
			$var($BadLocationException, e, $catch());
			$assign(r, nullptr);
		}
	}
	if (r != nullptr) {
		r->width = $Math::max(r->width, 1);
		$nc(g)->fillRect(r->x, r->y, r->width, r->height);
	}
	return r;
}

DefaultHighlighter$DefaultHighlightPainter::DefaultHighlighter$DefaultHighlightPainter() {
}

$Class* DefaultHighlighter$DefaultHighlightPainter::load$($String* name, bool initialize) {
	$loadClass(DefaultHighlighter$DefaultHighlightPainter, name, initialize, &_DefaultHighlighter$DefaultHighlightPainter_ClassInfo_, allocate$DefaultHighlighter$DefaultHighlightPainter);
	return class$;
}

$Class* DefaultHighlighter$DefaultHighlightPainter::class$ = nullptr;

		} // text
	} // swing
} // javax