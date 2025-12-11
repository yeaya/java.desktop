#include <javax/swing/text/PasswordView.h>

#include <java/awt/Color.h>
#include <java/awt/Container.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/font/FontRenderContext.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPasswordField.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/FieldView.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/PlainView$FPMethodArgs.h>
#include <javax/swing/text/PlainView.h>
#include <javax/swing/text/Position$Bias.h>
#include <javax/swing/text/Utilities.h>
#include <javax/swing/text/View.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef GNNC
#undef MAX_VALUE
#undef ONE
#undef X_AXIS

using $Position$BiasArray = $Array<::javax::swing::text::Position$Bias>;
using $Container = ::java::awt::Container;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $FontRenderContext = ::java::awt::font::FontRenderContext;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $JPasswordField = ::javax::swing::JPasswordField;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $FieldView = ::javax::swing::text::FieldView;
using $PlainView = ::javax::swing::text::PlainView;
using $PlainView$FPMethodArgs = ::javax::swing::text::PlainView$FPMethodArgs;
using $Position$Bias = ::javax::swing::text::Position$Bias;
using $Utilities = ::javax::swing::text::Utilities;
using $View = ::javax::swing::text::View;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace text {

$NamedAttribute PasswordView_Attribute_var$0[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _PasswordView_MethodAnnotations_drawEchoCharacter1[] = {
	{"Ljava/lang/Deprecated;", PasswordView_Attribute_var$0},
	{}
};

$NamedAttribute PasswordView_Attribute_var$1[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _PasswordView_MethodAnnotations_drawSelectedText4[] = {
	{"Ljava/lang/Deprecated;", PasswordView_Attribute_var$1},
	{}
};

$NamedAttribute PasswordView_Attribute_var$2[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _PasswordView_MethodAnnotations_drawUnselectedText7[] = {
	{"Ljava/lang/Deprecated;", PasswordView_Attribute_var$2},
	{}
};

$FieldInfo _PasswordView_FieldInfo_[] = {
	{"ONE", "[C", nullptr, $STATIC, $staticField(PasswordView, ONE)},
	{"drawEchoCharacterOverridden", "Z", nullptr, $PRIVATE | $FINAL, $field(PasswordView, drawEchoCharacterOverridden)},
	{}
};

$MethodInfo _PasswordView_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/Element;)V", nullptr, $PUBLIC, $method(static_cast<void(PasswordView::*)($Element*)>(&PasswordView::init$))},
	{"drawEchoCharacter", "(Ljava/awt/Graphics;IIC)I", nullptr, $PROTECTED | $DEPRECATED, nullptr, nullptr, nullptr, _PasswordView_MethodAnnotations_drawEchoCharacter1},
	{"drawEchoCharacter", "(Ljava/awt/Graphics2D;FFC)F", nullptr, $PROTECTED},
	{"drawEchoCharacterImpl", "(Ljava/awt/Graphics;FFCZ)F", nullptr, $PRIVATE, $method(static_cast<float(PasswordView::*)($Graphics*,float,float,char16_t,bool)>(&PasswordView::drawEchoCharacterImpl))},
	{"drawSelectedText", "(Ljava/awt/Graphics;IIII)I", nullptr, $PROTECTED | $DEPRECATED, nullptr, "javax.swing.text.BadLocationException", nullptr, _PasswordView_MethodAnnotations_drawSelectedText4},
	{"drawSelectedText", "(Ljava/awt/Graphics2D;FFII)F", nullptr, $PROTECTED, nullptr, "javax.swing.text.BadLocationException"},
	{"drawSelectedTextImpl", "(Ljava/awt/Graphics;FFIIZ)F", nullptr, $PRIVATE, $method(static_cast<float(PasswordView::*)($Graphics*,float,float,int32_t,int32_t,bool)>(&PasswordView::drawSelectedTextImpl)), "javax.swing.text.BadLocationException"},
	{"drawUnselectedText", "(Ljava/awt/Graphics;IIII)I", nullptr, $PROTECTED | $DEPRECATED, nullptr, "javax.swing.text.BadLocationException", nullptr, _PasswordView_MethodAnnotations_drawUnselectedText7},
	{"drawUnselectedText", "(Ljava/awt/Graphics2D;FFII)F", nullptr, $PROTECTED, nullptr, "javax.swing.text.BadLocationException"},
	{"drawUnselectedTextImpl", "(Ljava/awt/Graphics;FFIIZ)F", nullptr, $PRIVATE, $method(static_cast<float(PasswordView::*)($Graphics*,float,float,int32_t,int32_t,bool)>(&PasswordView::drawUnselectedTextImpl)), "javax.swing.text.BadLocationException"},
	{"getPreferredSpan", "(I)F", nullptr, $PUBLIC},
	{"modelToView", "(ILjava/awt/Shape;Ljavax/swing/text/Position$Bias;)Ljava/awt/Shape;", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"viewToModel", "(FFLjava/awt/Shape;[Ljavax/swing/text/Position$Bias;)I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PasswordView_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.PasswordView",
	"javax.swing.text.FieldView",
	nullptr,
	_PasswordView_FieldInfo_,
	_PasswordView_MethodInfo_
};

$Object* allocate$PasswordView($Class* clazz) {
	return $of($alloc(PasswordView));
}

$chars* PasswordView::ONE = nullptr;

void PasswordView::init$($Element* elem) {
	$FieldView::init$(elem);
	$init($PlainView$FPMethodArgs);
	this->drawEchoCharacterOverridden = getFPMethodOverridden($of(this)->getClass(), "drawEchoCharacter"_s, $PlainView$FPMethodArgs::GNNC);
}

int32_t PasswordView::drawUnselectedText($Graphics* g, int32_t x, int32_t y, int32_t p0, int32_t p1) {
	return $cast(int32_t, drawUnselectedTextImpl(g, (float)x, (float)y, p0, p1, false));
}

float PasswordView::drawUnselectedText($Graphics2D* g, float x, float y, int32_t p0, int32_t p1) {
	return drawUnselectedTextImpl(g, x, y, p0, p1, true);
}

float PasswordView::drawUnselectedTextImpl($Graphics* g, float x, float y, int32_t p0, int32_t p1, bool useFPAPI) {
	$useLocalCurrentObjectStackCache();
	$var($Container, c, getContainer());
	if ($instanceOf($JPasswordField, c)) {
		$var($JPasswordField, f, $cast($JPasswordField, c));
		if (!$nc(f)->echoCharIsSet()) {
			bool useDrawUnselectedFPAPI = useFPAPI && this->drawUnselectedTextOverridden && $instanceOf($Graphics2D, g);
			return (useDrawUnselectedFPAPI) ? $FieldView::drawUnselectedText($cast($Graphics2D, g), x, y, p0, p1) : (float)$FieldView::drawUnselectedText(g, $cast(int32_t, x), $cast(int32_t, y), p0, p1);
		}
		if ($nc(f)->isEnabled()) {
			$nc(g)->setColor($(f->getForeground()));
		} else {
			$nc(g)->setColor($(f->getDisabledTextColor()));
		}
		char16_t echoChar = $nc(f)->getEchoChar();
		int32_t n = p1 - p0;
		bool useEchoCharFPAPI = useFPAPI && this->drawEchoCharacterOverridden && $instanceOf($Graphics2D, g);
		for (int32_t i = 0; i < n; ++i) {
			x = (useEchoCharFPAPI) ? drawEchoCharacter($cast($Graphics2D, g), x, y, echoChar) : (float)drawEchoCharacter(g, $cast(int32_t, x), $cast(int32_t, y), echoChar);
		}
	}
	return x;
}

int32_t PasswordView::drawSelectedText($Graphics* g, int32_t x, int32_t y, int32_t p0, int32_t p1) {
	return $cast(int32_t, drawSelectedTextImpl(g, (float)x, (float)y, p0, p1, false));
}

float PasswordView::drawSelectedText($Graphics2D* g, float x, float y, int32_t p0, int32_t p1) {
	return drawSelectedTextImpl(g, x, y, p0, p1, true);
}

float PasswordView::drawSelectedTextImpl($Graphics* g, float x, float y, int32_t p0, int32_t p1, bool useFPAPI) {
	$useLocalCurrentObjectStackCache();
	$nc(g)->setColor(this->selected);
	$var($Container, c, getContainer());
	if ($instanceOf($JPasswordField, c)) {
		$var($JPasswordField, f, $cast($JPasswordField, c));
		if (!$nc(f)->echoCharIsSet()) {
			bool useDrawUnselectedFPAPI = useFPAPI && this->drawSelectedTextOverridden && $instanceOf($Graphics2D, g);
			return (useFPAPI) ? $FieldView::drawSelectedText($cast($Graphics2D, g), x, y, p0, p1) : (float)$FieldView::drawSelectedText(g, $cast(int32_t, x), $cast(int32_t, y), p0, p1);
		}
		char16_t echoChar = $nc(f)->getEchoChar();
		int32_t n = p1 - p0;
		bool useEchoCharFPAPI = useFPAPI && this->drawEchoCharacterOverridden && $instanceOf($Graphics2D, g);
		for (int32_t i = 0; i < n; ++i) {
			x = (useEchoCharFPAPI) ? drawEchoCharacter($cast($Graphics2D, g), x, y, echoChar) : (float)drawEchoCharacter(g, $cast(int32_t, x), $cast(int32_t, y), echoChar);
		}
	}
	return x;
}

int32_t PasswordView::drawEchoCharacter($Graphics* g, int32_t x, int32_t y, char16_t c) {
	return $cast(int32_t, drawEchoCharacterImpl(g, (float)x, (float)y, c, false));
}

float PasswordView::drawEchoCharacter($Graphics2D* g, float x, float y, char16_t c) {
	return drawEchoCharacterImpl(g, x, y, c, true);
}

float PasswordView::drawEchoCharacterImpl($Graphics* g, float x, float y, char16_t c, bool useFPAPI) {
	$useLocalCurrentObjectStackCache();
	$nc(PasswordView::ONE)->set(0, c);
	$SwingUtilities2::drawChars($($Utilities::getJComponent(this)), g, PasswordView::ONE, 0, 1, x, y);
	if (useFPAPI) {
		return x + $nc($($nc(g)->getFontMetrics()))->charWidth(c);
	} else {
		$var($FontRenderContext, frc, $nc($($nc(g)->getFontMetrics()))->getFontRenderContext());
		return x + (float)$nc($($nc($(g->getFont()))->getStringBounds(PasswordView::ONE, 0, 1, frc)))->getWidth();
	}
}

$Shape* PasswordView::modelToView(int32_t pos, $Shape* a, $Position$Bias* b) {
	$useLocalCurrentObjectStackCache();
	$var($Container, c, getContainer());
	if ($instanceOf($JPasswordField, c)) {
		$var($JPasswordField, f, $cast($JPasswordField, c));
		if (!$nc(f)->echoCharIsSet()) {
			return $FieldView::modelToView(pos, a, b);
		}
		char16_t echoChar = $nc(f)->getEchoChar();
		$var($FontMetrics, m, f->getFontMetrics($(f->getFont())));
		$var($Rectangle, alloc, $nc($(adjustAllocation(a)))->getBounds());
		int32_t var$0 = (pos - getStartOffset());
		int32_t dx = var$0 * $nc(m)->charWidth(echoChar);
		$nc(alloc)->x += dx;
		alloc->width = 1;
		return alloc;
	}
	return nullptr;
}

int32_t PasswordView::viewToModel(float fx, float fy, $Shape* a$renamed, $Position$BiasArray* bias) {
	$useLocalCurrentObjectStackCache();
	$var($Shape, a, a$renamed);
	$init($Position$Bias);
	$nc(bias)->set(0, $Position$Bias::Forward);
	int32_t n = 0;
	$var($Container, c, getContainer());
	if ($instanceOf($JPasswordField, c)) {
		$var($JPasswordField, f, $cast($JPasswordField, c));
		if (!$nc(f)->echoCharIsSet()) {
			return $FieldView::viewToModel(fx, fy, a, bias);
		}
		char16_t echoChar = $nc(f)->getEchoChar();
		int32_t charWidth = $nc($(f->getFontMetrics($(f->getFont()))))->charWidth(echoChar);
		$assign(a, adjustAllocation(a));
		$var($Rectangle, alloc, ($instanceOf($Rectangle, a)) ? $cast($Rectangle, a) : $nc(a)->getBounds());
		n = (charWidth > 0 ? $div(($cast(int32_t, fx) - $nc(alloc)->x), charWidth) : $Integer::MAX_VALUE);
		if (n < 0) {
			n = 0;
		} else {
			int32_t var$3 = n;
			int32_t var$5 = getStartOffset();
			int32_t var$4 = (var$5 + $nc($(getDocument()))->getLength());
			if (var$3 > var$4) {
				int32_t var$6 = $nc($(getDocument()))->getLength();
				n = var$6 - getStartOffset();
			}
		}
	}
	return getStartOffset() + n;
}

float PasswordView::getPreferredSpan(int32_t axis) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Container, c, nullptr)
		switch (axis) {
		case $View::X_AXIS:
			{
				$assign(c, getContainer());
				if ($instanceOf($JPasswordField, c)) {
					$var($JPasswordField, f, $cast($JPasswordField, c));
					if ($nc(f)->echoCharIsSet()) {
						char16_t echoChar = f->getEchoChar();
						$var($FontMetrics, m, f->getFontMetrics($(f->getFont())));
						$var($Document, doc, getDocument());
						int32_t var$0 = $nc(m)->charWidth(echoChar);
						return (float)(var$0 * $nc($(getDocument()))->getLength());
					}
				}
			}
		}
	}
	return $FieldView::getPreferredSpan(axis);
}

void clinit$PasswordView($Class* class$) {
	$assignStatic(PasswordView::ONE, $new($chars, 1));
}

PasswordView::PasswordView() {
}

$Class* PasswordView::load$($String* name, bool initialize) {
	$loadClass(PasswordView, name, initialize, &_PasswordView_ClassInfo_, clinit$PasswordView, allocate$PasswordView);
	return class$;
}

$Class* PasswordView::class$ = nullptr;

		} // text
	} // swing
} // javax