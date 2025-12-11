#include <javax/swing/text/html/StyleSheet$ListPainter.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Rectangle.h>
#include <java/awt/RenderingHints$Key.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/Shape.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/lang/Math.h>
#include <java/lang/NumberFormatException.h>
#include <java/net/MalformedURLException.h>
#include <java/net/URL.h>
#include <java/util/StringTokenizer.h>
#include <javax/swing/Icon.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/StyledDocument.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/html/CSS$Attribute.h>
#include <javax/swing/text/html/CSS$Value.h>
#include <javax/swing/text/html/HTML$Attribute.h>
#include <javax/swing/text/html/HTML$Tag.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <javax/swing/text/html/StyleSheet.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef CIRCLE
#undef DECIMAL
#undef DISC
#undef IMPLIED
#undef KEY_ANTIALIASING
#undef LI
#undef LIST_STYLE_IMAGE
#undef LIST_STYLE_TYPE
#undef LOWER_ALPHA
#undef LOWER_ROMAN
#undef OL
#undef P
#undef SQUARE
#undef START
#undef UPPER_ALPHA
#undef UPPER_ROMAN
#undef VALUE
#undef VALUE_ANTIALIAS_ON
#undef Y_AXIS

using $charArray2 = $Array<char16_t, 2>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Rectangle = ::java::awt::Rectangle;
using $RenderingHints = ::java::awt::RenderingHints;
using $Shape = ::java::awt::Shape;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $MalformedURLException = ::java::net::MalformedURLException;
using $URL = ::java::net::URL;
using $StringTokenizer = ::java::util::StringTokenizer;
using $Icon = ::javax::swing::Icon;
using $ImageIcon = ::javax::swing::ImageIcon;
using $JComponent = ::javax::swing::JComponent;
using $UIManager = ::javax::swing::UIManager;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $Element = ::javax::swing::text::Element;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $StyledDocument = ::javax::swing::text::StyledDocument;
using $View = ::javax::swing::text::View;
using $CSS$Attribute = ::javax::swing::text::html::CSS$Attribute;
using $CSS$Value = ::javax::swing::text::html::CSS$Value;
using $HTML$Attribute = ::javax::swing::text::html::HTML$Attribute;
using $HTML$Tag = ::javax::swing::text::html::HTML$Tag;
using $HTMLDocument = ::javax::swing::text::html::HTMLDocument;
using $StyleSheet = ::javax::swing::text::html::StyleSheet;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _StyleSheet$ListPainter_FieldInfo_[] = {
	{"romanChars", "[[C", nullptr, $STATIC | $FINAL, $staticField(StyleSheet$ListPainter, romanChars)},
	{"paintRect", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(StyleSheet$ListPainter, paintRect)},
	{"checkedForStart", "Z", nullptr, $PRIVATE, $field(StyleSheet$ListPainter, checkedForStart)},
	{"start", "I", nullptr, $PRIVATE, $field(StyleSheet$ListPainter, start)},
	{"type", "Ljavax/swing/text/html/CSS$Value;", nullptr, $PRIVATE, $field(StyleSheet$ListPainter, type)},
	{"imageurl", "Ljava/net/URL;", nullptr, 0, $field(StyleSheet$ListPainter, imageurl)},
	{"ss", "Ljavax/swing/text/html/StyleSheet;", nullptr, $PRIVATE, $field(StyleSheet$ListPainter, ss)},
	{"img", "Ljavax/swing/Icon;", nullptr, 0, $field(StyleSheet$ListPainter, img)},
	{"bulletgap", "I", nullptr, $PRIVATE, $field(StyleSheet$ListPainter, bulletgap)},
	{"isLeftToRight", "Z", nullptr, $PRIVATE, $field(StyleSheet$ListPainter, isLeftToRight)},
	{}
};

$MethodInfo _StyleSheet$ListPainter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/AttributeSet;Ljavax/swing/text/html/StyleSheet;)V", nullptr, 0, $method(static_cast<void(StyleSheet$ListPainter::*)($AttributeSet*,$StyleSheet*)>(&StyleSheet$ListPainter::init$))},
	{"drawIcon", "(Ljava/awt/Graphics;IIIIFLjava/awt/Component;)V", nullptr, 0},
	{"drawLetter", "(Ljava/awt/Graphics;CIIIIFI)V", nullptr, 0},
	{"drawShape", "(Ljava/awt/Graphics;Ljavax/swing/text/html/CSS$Value;IIIIF)V", nullptr, 0},
	{"formatAlphaNumerals", "(I)Ljava/lang/String;", nullptr, 0},
	{"formatItemNum", "(IC)Ljava/lang/String;", nullptr, 0},
	{"formatRomanDigit", "(II)Ljava/lang/String;", nullptr, 0},
	{"formatRomanNumerals", "(I)Ljava/lang/String;", nullptr, 0},
	{"formatRomanNumerals", "(II)Ljava/lang/String;", nullptr, 0},
	{"getChildType", "(Ljavax/swing/text/View;)Ljavax/swing/text/html/CSS$Value;", nullptr, $PRIVATE, $method(static_cast<$CSS$Value*(StyleSheet$ListPainter::*)($View*)>(&StyleSheet$ListPainter::getChildType))},
	{"getRenderIndex", "(Ljavax/swing/text/View;I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(StyleSheet$ListPainter::*)($View*,int32_t)>(&StyleSheet$ListPainter::getRenderIndex))},
	{"getStart", "(Ljavax/swing/text/View;)V", nullptr, $PRIVATE, $method(static_cast<void(StyleSheet$ListPainter::*)($View*)>(&StyleSheet$ListPainter::getStart))},
	{"paint", "(Ljava/awt/Graphics;FFFFLjavax/swing/text/View;I)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _StyleSheet$ListPainter_InnerClassesInfo_[] = {
	{"javax.swing.text.html.StyleSheet$ListPainter", "javax.swing.text.html.StyleSheet", "ListPainter", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _StyleSheet$ListPainter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.html.StyleSheet$ListPainter",
	"java.lang.Object",
	"java.io.Serializable",
	_StyleSheet$ListPainter_FieldInfo_,
	_StyleSheet$ListPainter_MethodInfo_,
	nullptr,
	nullptr,
	_StyleSheet$ListPainter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.StyleSheet"
};

$Object* allocate$StyleSheet$ListPainter($Class* clazz) {
	return $of($alloc(StyleSheet$ListPainter));
}

$charArray2* StyleSheet$ListPainter::romanChars = nullptr;

void StyleSheet$ListPainter::init$($AttributeSet* attr, $StyleSheet* ss) {
	$useLocalCurrentObjectStackCache();
	$set(this, ss, nullptr);
	$set(this, img, nullptr);
	this->bulletgap = 5;
	$set(this, ss, ss);
	$init($CSS$Attribute);
	$var($String, imgstr, $cast($String, $nc(attr)->getAttribute($CSS$Attribute::LIST_STYLE_IMAGE)));
	$set(this, type, nullptr);
	if (imgstr != nullptr && !imgstr->equals("none"_s)) {
		$var($String, tmpstr, nullptr);
		try {
			$var($StringTokenizer, st, $new($StringTokenizer, imgstr, "()"_s));
			if (st->hasMoreTokens()) {
				$assign(tmpstr, st->nextToken());
			}
			if (st->hasMoreTokens()) {
				$assign(tmpstr, st->nextToken());
			}
			$var($URL, u, $new($URL, tmpstr));
			$set(this, img, $new($ImageIcon, u));
		} catch ($MalformedURLException& e) {
			if (tmpstr != nullptr && ss != nullptr && ss->getBase() != nullptr) {
				try {
					$var($URL, u, $new($URL, $(ss->getBase()), tmpstr));
					$set(this, img, $new($ImageIcon, u));
				} catch ($MalformedURLException& murle) {
					$set(this, img, nullptr);
				}
			} else {
				$set(this, img, nullptr);
			}
		}
	}
	if (this->img == nullptr) {
		$set(this, type, $cast($CSS$Value, attr->getAttribute($CSS$Attribute::LIST_STYLE_TYPE)));
	}
	this->start = 1;
	$set(this, paintRect, $new($Rectangle));
}

$CSS$Value* StyleSheet$ListPainter::getChildType($View* childView) {
	$useLocalCurrentObjectStackCache();
	$init($CSS$Attribute);
	$var($CSS$Value, childtype, $cast($CSS$Value, $nc($($nc(childView)->getAttributes()))->getAttribute($CSS$Attribute::LIST_STYLE_TYPE)));
	if (childtype == nullptr) {
		if (this->type == nullptr) {
			$var($View, v, childView->getParent());
			$var($HTMLDocument, doc, $cast($HTMLDocument, $nc(v)->getDocument()));
			$init($HTML$Tag);
			if ($HTMLDocument::matchNameAttribute($($nc($(v->getElement()))->getAttributes()), $HTML$Tag::OL)) {
				$init($CSS$Value);
				$assign(childtype, $CSS$Value::DECIMAL);
			} else {
				$init($CSS$Value);
				$assign(childtype, $CSS$Value::DISC);
			}
		} else {
			$assign(childtype, this->type);
		}
	}
	return childtype;
}

void StyleSheet$ListPainter::getStart($View* parent) {
	$useLocalCurrentObjectStackCache();
	this->checkedForStart = true;
	$var($Element, element, $nc(parent)->getElement());
	if (element != nullptr) {
		$var($AttributeSet, attr, element->getAttributes());
		$var($Object, startValue, nullptr);
		$init($HTML$Attribute);
		bool var$0 = attr != nullptr && attr->isDefined($HTML$Attribute::START);
		if (var$0 && ($assign(startValue, attr->getAttribute($HTML$Attribute::START))) != nullptr && ($instanceOf($String, startValue))) {
			try {
				this->start = $Integer::parseInt($cast($String, startValue));
			} catch ($NumberFormatException& nfe) {
			}
		}
	}
}

int32_t StyleSheet$ListPainter::getRenderIndex($View* parentView, int32_t childIndex) {
	$useLocalCurrentObjectStackCache();
	if (!this->checkedForStart) {
		getStart(parentView);
	}
	int32_t retIndex = childIndex;
	for (int32_t counter = childIndex; counter >= 0; --counter) {
		$var($AttributeSet, as, $nc($($nc($($nc(parentView)->getElement()))->getElement(counter)))->getAttributes());
		$init($StyleConstants);
		$init($HTML$Tag);
		if (!$equals($nc(as)->getAttribute($StyleConstants::NameAttribute), $HTML$Tag::LI)) {
			--retIndex;
		} else {
			$init($HTML$Attribute);
			if (as->isDefined($HTML$Attribute::VALUE)) {
				$var($Object, value, as->getAttribute($HTML$Attribute::VALUE));
				if (value != nullptr && ($instanceOf($String, value))) {
					try {
						int32_t iValue = $Integer::parseInt($cast($String, value));
						return retIndex - counter + iValue;
					} catch ($NumberFormatException& nfe) {
					}
				}
			}
		}
	}
	return retIndex + this->start;
}

void StyleSheet$ListPainter::paint($Graphics* g, float x, float y, float w, float h, $View* v, int32_t item) {
	$useLocalCurrentObjectStackCache();
	$var($View, cv, $nc(v)->getView(item));
	$var($Container, host, v->getContainer());
	$init($StyleConstants);
	$var($Object, name, $nc($($nc($($nc(cv)->getElement()))->getAttributes()))->getAttribute($StyleConstants::NameAttribute));
	$init($HTML$Tag);
	if (!($instanceOf($HTML$Tag, name)) || !$equals(name, $HTML$Tag::LI)) {
		return;
	}
	this->isLeftToRight = $nc($($nc(host)->getComponentOrientation()))->isLeftToRight();
	float align = (float)0;
	if (cv->getViewCount() > 0) {
		$var($View, pView, cv->getView(0));
		$var($Object, cName, $nc($($nc($($nc(pView)->getElement()))->getAttributes()))->getAttribute($StyleConstants::NameAttribute));
		if (($equals(cName, $HTML$Tag::P) || $equals(cName, $HTML$Tag::IMPLIED)) && pView->getViewCount() > 0) {
			$nc(this->paintRect)->setBounds($cast(int32_t, x), $cast(int32_t, y), $cast(int32_t, w), $cast(int32_t, h));
			$var($Shape, shape, cv->getChildAllocation(0, this->paintRect));
			if (shape != nullptr && ($assign(shape, $nc($(pView->getView(0)))->getChildAllocation(0, shape))) != nullptr) {
				$var($Rectangle, rect, ($instanceOf($Rectangle, shape)) ? $cast($Rectangle, shape) : shape->getBounds());
				align = $nc($(pView->getView(0)))->getAlignment($View::Y_AXIS);
				y = (float)$nc(rect)->y;
				h = (float)rect->height;
			}
		}
	}
	$var($Color, c, host->isEnabled() ? (this->ss != nullptr ? $nc(this->ss)->getForeground($(cv->getAttributes())) : host->getForeground()) : $UIManager::getColor("textInactiveText"_s));
	$nc(g)->setColor(c);
	if (this->img != nullptr) {
		drawIcon(g, $cast(int32_t, x), $cast(int32_t, y), $cast(int32_t, w), $cast(int32_t, h), align, host);
		return;
	}
	$var($CSS$Value, childtype, getChildType(cv));
	$var($Font, font, $nc(($cast($StyledDocument, $(cv->getDocument()))))->getFont($(cv->getAttributes())));
	if (font != nullptr) {
		g->setFont(font);
	}
	$init($CSS$Value);
	if (childtype == $CSS$Value::SQUARE || childtype == $CSS$Value::CIRCLE || childtype == $CSS$Value::DISC) {
		drawShape(g, childtype, $cast(int32_t, x), $cast(int32_t, y), $cast(int32_t, w), $cast(int32_t, h), align);
	} else {
		if (childtype == $CSS$Value::DECIMAL) {
			drawLetter(g, u'1', $cast(int32_t, x), $cast(int32_t, y), $cast(int32_t, w), $cast(int32_t, h), align, getRenderIndex(v, item));
		} else {
			if (childtype == $CSS$Value::LOWER_ALPHA) {
				drawLetter(g, u'a', $cast(int32_t, x), $cast(int32_t, y), $cast(int32_t, w), $cast(int32_t, h), align, getRenderIndex(v, item));
			} else {
				if (childtype == $CSS$Value::UPPER_ALPHA) {
					drawLetter(g, u'A', $cast(int32_t, x), $cast(int32_t, y), $cast(int32_t, w), $cast(int32_t, h), align, getRenderIndex(v, item));
				} else {
					if (childtype == $CSS$Value::LOWER_ROMAN) {
						drawLetter(g, u'i', $cast(int32_t, x), $cast(int32_t, y), $cast(int32_t, w), $cast(int32_t, h), align, getRenderIndex(v, item));
					} else {
						if (childtype == $CSS$Value::UPPER_ROMAN) {
							drawLetter(g, u'I', $cast(int32_t, x), $cast(int32_t, y), $cast(int32_t, w), $cast(int32_t, h), align, getRenderIndex(v, item));
						}
					}
				}
			}
		}
	}
}

void StyleSheet$ListPainter::drawIcon($Graphics* g, int32_t ax, int32_t ay, int32_t aw, int32_t ah, float align, $Component* c) {
	int32_t gap = this->isLeftToRight ? -($nc(this->img)->getIconWidth() + this->bulletgap) : (aw + this->bulletgap);
	int32_t x = ax + gap;
	int32_t y = $Math::max(ay, ay + $cast(int32_t, (align * ah)) - $nc(this->img)->getIconHeight());
	$nc(this->img)->paintIcon(c, g, x, y);
}

void StyleSheet$ListPainter::drawShape($Graphics* g, $CSS$Value* type, int32_t ax, int32_t ay, int32_t aw, int32_t ah, float align) {
	$useLocalCurrentObjectStackCache();
	$init($RenderingHints);
	$var($Object, origAA, $nc(($cast($Graphics2D, g)))->getRenderingHint($RenderingHints::KEY_ANTIALIASING));
	($cast($Graphics2D, g))->setRenderingHint($RenderingHints::KEY_ANTIALIASING, $RenderingHints::VALUE_ANTIALIAS_ON);
	int32_t size = $nc($($nc(g)->getFont()))->getSize();
	int32_t gap = this->isLeftToRight ? -(this->bulletgap + size / 3) : (aw + this->bulletgap);
	int32_t x = ax + gap;
	int32_t y = $Math::max(ay, ay + $cast(int32_t, $Math::ceil((double)(ah / 2))));
	$init($CSS$Value);
	if (type == $CSS$Value::SQUARE) {
		g->drawRect(x, y, size / 3, size / 3);
	} else {
		if (type == $CSS$Value::CIRCLE) {
			g->drawOval(x, y, size / 3, size / 3);
		} else {
			g->fillOval(x, y, size / 3, size / 3);
		}
	}
	($cast($Graphics2D, g))->setRenderingHint($RenderingHints::KEY_ANTIALIASING, origAA);
}

void StyleSheet$ListPainter::drawLetter($Graphics* g, char16_t letter, int32_t ax, int32_t ay, int32_t aw, int32_t ah, float align, int32_t index) {
	$useLocalCurrentObjectStackCache();
	$var($String, str, formatItemNum(index, letter));
	$assign(str, this->isLeftToRight ? $str({str, "."_s}) : $str({"."_s, str}));
	$var($FontMetrics, fm, $SwingUtilities2::getFontMetrics(($JComponent*)nullptr, g));
	int32_t stringwidth = $SwingUtilities2::stringWidth(nullptr, fm, str);
	int32_t gap = this->isLeftToRight ? -(stringwidth + this->bulletgap) : (aw + this->bulletgap);
	int32_t x = ax + gap;
	int32_t y = $Math::max(ay + $nc(fm)->getAscent(), ay + $cast(int32_t, (ah * align)));
	$SwingUtilities2::drawString(($JComponent*)nullptr, g, str, x, y);
}

$String* StyleSheet$ListPainter::formatItemNum(int32_t itemNum, char16_t type) {
	$useLocalCurrentObjectStackCache();
	$var($String, numStyle, "1"_s);
	bool uppercase = false;
	$var($String, formattedNum, nullptr);
	switch (type) {
	case u'1':
		{}
	default:
		{
			$assign(formattedNum, $String::valueOf(itemNum));
			break;
		}
	case u'A':
		{
			uppercase = true;
		}
	case u'a':
		{
			$assign(formattedNum, formatAlphaNumerals(itemNum));
			break;
		}
	case u'I':
		{
			uppercase = true;
		}
	case u'i':
		{
			$assign(formattedNum, formatRomanNumerals(itemNum));
		}
	}
	if (uppercase) {
		$assign(formattedNum, $nc(formattedNum)->toUpperCase());
	}
	return formattedNum;
}

$String* StyleSheet$ListPainter::formatAlphaNumerals(int32_t itemNum) {
	$useLocalCurrentObjectStackCache();
	$var($String, result, nullptr);
	if (itemNum > 26) {
		$var($String, var$0, $(formatAlphaNumerals(itemNum / 26)));
		$assign(result, $concat(var$0, $(formatAlphaNumerals(itemNum % 26))));
	} else {
		$assign(result, $String::valueOf((char16_t)(u'a' + itemNum - 1)));
	}
	return result;
}

$String* StyleSheet$ListPainter::formatRomanNumerals(int32_t num) {
	return formatRomanNumerals(0, num);
}

$String* StyleSheet$ListPainter::formatRomanNumerals(int32_t level, int32_t num) {
	$useLocalCurrentObjectStackCache();
	if (num < 10) {
		return formatRomanDigit(level, num);
	} else {
		$var($String, var$0, $(formatRomanNumerals(level + 1, num / 10)));
		return $concat(var$0, $(formatRomanDigit(level, num % 10)));
	}
}

$String* StyleSheet$ListPainter::formatRomanDigit(int32_t level, int32_t digit) {
	$useLocalCurrentObjectStackCache();
	$var($String, result, ""_s);
	if (digit == 9) {
		$assign(result, $str({result, $$str($nc($nc(StyleSheet$ListPainter::romanChars)->get(level))->get(0))}));
		$assign(result, $str({result, $$str($nc($nc(StyleSheet$ListPainter::romanChars)->get(level + 1))->get(0))}));
		return result;
	} else if (digit == 4) {
		$assign(result, $str({result, $$str($nc($nc(StyleSheet$ListPainter::romanChars)->get(level))->get(0))}));
		$assign(result, $str({result, $$str($nc($nc(StyleSheet$ListPainter::romanChars)->get(level))->get(1))}));
		return result;
	} else if (digit >= 5) {
		$assign(result, $str({result, $$str($nc($nc(StyleSheet$ListPainter::romanChars)->get(level))->get(1))}));
		digit -= 5;
	}
	for (int32_t i = 0; i < digit; ++i) {
		$assign(result, $str({result, $$str($nc($nc(StyleSheet$ListPainter::romanChars)->get(level))->get(0))}));
	}
	return result;
}

void clinit$StyleSheet$ListPainter($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(StyleSheet$ListPainter::romanChars, $new($charArray2, {
		$$new($chars, {
			u'i',
			u'v'
		}),
		$$new($chars, {
			u'x',
			u'l'
		}),
		$$new($chars, {
			u'c',
			u'd'
		}),
		$$new($chars, {
			u'm',
			u'?'
		})
	}));
}

StyleSheet$ListPainter::StyleSheet$ListPainter() {
}

$Class* StyleSheet$ListPainter::load$($String* name, bool initialize) {
	$loadClass(StyleSheet$ListPainter, name, initialize, &_StyleSheet$ListPainter_ClassInfo_, clinit$StyleSheet$ListPainter, allocate$StyleSheet$ListPainter);
	return class$;
}

$Class* StyleSheet$ListPainter::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax