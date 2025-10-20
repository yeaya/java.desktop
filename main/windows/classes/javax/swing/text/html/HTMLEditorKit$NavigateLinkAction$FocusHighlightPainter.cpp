#include <javax/swing/text/html/HTMLEditorKit$NavigateLinkAction$FocusHighlightPainter.h>

#include <java/awt/Color.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/DefaultHighlighter$DefaultHighlightPainter.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/Position$Bias.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/html/HTMLEditorKit$NavigateLinkAction.h>
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
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $DefaultHighlighter$DefaultHighlightPainter = ::javax::swing::text::DefaultHighlighter$DefaultHighlightPainter;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $Position$Bias = ::javax::swing::text::Position$Bias;
using $View = ::javax::swing::text::View;
using $HTMLEditorKit$NavigateLinkAction = ::javax::swing::text::html::HTMLEditorKit$NavigateLinkAction;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$MethodInfo _HTMLEditorKit$NavigateLinkAction$FocusHighlightPainter_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Color;)V", nullptr, 0, $method(static_cast<void(HTMLEditorKit$NavigateLinkAction$FocusHighlightPainter::*)($Color*)>(&HTMLEditorKit$NavigateLinkAction$FocusHighlightPainter::init$))},
	{"paintLayer", "(Ljava/awt/Graphics;IILjava/awt/Shape;Ljavax/swing/text/JTextComponent;Ljavax/swing/text/View;)Ljava/awt/Shape;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _HTMLEditorKit$NavigateLinkAction$FocusHighlightPainter_InnerClassesInfo_[] = {
	{"javax.swing.text.html.HTMLEditorKit$NavigateLinkAction", "javax.swing.text.html.HTMLEditorKit", "NavigateLinkAction", $STATIC},
	{"javax.swing.text.html.HTMLEditorKit$NavigateLinkAction$FocusHighlightPainter", "javax.swing.text.html.HTMLEditorKit$NavigateLinkAction", "FocusHighlightPainter", $STATIC},
	{"javax.swing.text.DefaultHighlighter$DefaultHighlightPainter", "javax.swing.text.DefaultHighlighter", "DefaultHighlightPainter", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _HTMLEditorKit$NavigateLinkAction$FocusHighlightPainter_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.HTMLEditorKit$NavigateLinkAction$FocusHighlightPainter",
	"javax.swing.text.DefaultHighlighter$DefaultHighlightPainter",
	nullptr,
	nullptr,
	_HTMLEditorKit$NavigateLinkAction$FocusHighlightPainter_MethodInfo_,
	nullptr,
	nullptr,
	_HTMLEditorKit$NavigateLinkAction$FocusHighlightPainter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.HTMLEditorKit"
};

$Object* allocate$HTMLEditorKit$NavigateLinkAction$FocusHighlightPainter($Class* clazz) {
	return $of($alloc(HTMLEditorKit$NavigateLinkAction$FocusHighlightPainter));
}

void HTMLEditorKit$NavigateLinkAction$FocusHighlightPainter::init$($Color* color) {
	$DefaultHighlighter$DefaultHighlightPainter::init$(color);
}

$Shape* HTMLEditorKit$NavigateLinkAction$FocusHighlightPainter::paintLayer($Graphics* g, int32_t offs0, int32_t offs1, $Shape* bounds, $JTextComponent* c, $View* view) {
	$useLocalCurrentObjectStackCache();
	$var($Color, color, getColor());
	if (color == nullptr) {
		$nc(g)->setColor($($nc(c)->getSelectionColor()));
	} else {
		$nc(g)->setColor(color);
	}
	bool var$0 = offs0 == $nc(view)->getStartOffset();
	if (var$0 && offs1 == view->getEndOffset()) {
		$var($Rectangle, alloc, nullptr);
		if ($instanceOf($Rectangle, bounds)) {
			$assign(alloc, $cast($Rectangle, bounds));
		} else {
			$assign(alloc, $nc(bounds)->getBounds());
		}
		$nc(g)->drawRect($nc(alloc)->x, alloc->y, alloc->width - 1, alloc->height);
		return alloc;
	} else {
		try {
			$init($Position$Bias);
			$var($Shape, shape, view->modelToView(offs0, $Position$Bias::Forward, offs1, $Position$Bias::Backward, bounds));
			$var($Rectangle, r, ($instanceOf($Rectangle, shape)) ? $cast($Rectangle, shape) : $nc(shape)->getBounds());
			$nc(g)->drawRect($nc(r)->x, r->y, r->width - 1, r->height);
			return r;
		} catch ($BadLocationException&) {
			$catch();
		}
	}
	return nullptr;
}

HTMLEditorKit$NavigateLinkAction$FocusHighlightPainter::HTMLEditorKit$NavigateLinkAction$FocusHighlightPainter() {
}

$Class* HTMLEditorKit$NavigateLinkAction$FocusHighlightPainter::load$($String* name, bool initialize) {
	$loadClass(HTMLEditorKit$NavigateLinkAction$FocusHighlightPainter, name, initialize, &_HTMLEditorKit$NavigateLinkAction$FocusHighlightPainter_ClassInfo_, allocate$HTMLEditorKit$NavigateLinkAction$FocusHighlightPainter);
	return class$;
}

$Class* HTMLEditorKit$NavigateLinkAction$FocusHighlightPainter::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax