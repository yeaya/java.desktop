#include <javax/swing/text/DefaultHighlighter.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Vector.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/DefaultHighlighter$DefaultHighlightPainter.h>
#include <javax/swing/text/DefaultHighlighter$HighlightInfo.h>
#include <javax/swing/text/DefaultHighlighter$LayeredHighlightInfo.h>
#include <javax/swing/text/DefaultHighlighter$SafeDamager.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Highlighter$Highlight.h>
#include <javax/swing/text/Highlighter$HighlightPainter.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/LayeredHighlighter$LayerPainter.h>
#include <javax/swing/text/LayeredHighlighter.h>
#include <javax/swing/text/Position.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

#undef MAX_VALUE

using $Highlighter$HighlightArray = $Array<::javax::swing::text::Highlighter$Highlight>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $JComponent = ::javax::swing::JComponent;
using $TextUI = ::javax::swing::plaf::TextUI;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $DefaultHighlighter$DefaultHighlightPainter = ::javax::swing::text::DefaultHighlighter$DefaultHighlightPainter;
using $DefaultHighlighter$HighlightInfo = ::javax::swing::text::DefaultHighlighter$HighlightInfo;
using $DefaultHighlighter$LayeredHighlightInfo = ::javax::swing::text::DefaultHighlighter$LayeredHighlightInfo;
using $DefaultHighlighter$SafeDamager = ::javax::swing::text::DefaultHighlighter$SafeDamager;
using $Document = ::javax::swing::text::Document;
using $Highlighter$Highlight = ::javax::swing::text::Highlighter$Highlight;
using $Highlighter$HighlightPainter = ::javax::swing::text::Highlighter$HighlightPainter;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $LayeredHighlighter = ::javax::swing::text::LayeredHighlighter;
using $LayeredHighlighter$LayerPainter = ::javax::swing::text::LayeredHighlighter$LayerPainter;
using $Position = ::javax::swing::text::Position;
using $View = ::javax::swing::text::View;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _DefaultHighlighter_FieldInfo_[] = {
	{"noHighlights", "[Ljavax/swing/text/Highlighter$Highlight;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DefaultHighlighter, noHighlights)},
	{"highlights", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/swing/text/DefaultHighlighter$HighlightInfo;>;", $PRIVATE, $field(DefaultHighlighter, highlights)},
	{"component", "Ljavax/swing/text/JTextComponent;", nullptr, $PRIVATE, $field(DefaultHighlighter, component)},
	{"drawsLayeredHighlights", "Z", nullptr, $PRIVATE, $field(DefaultHighlighter, drawsLayeredHighlights)},
	{"safeDamager", "Ljavax/swing/text/DefaultHighlighter$SafeDamager;", nullptr, $PRIVATE, $field(DefaultHighlighter, safeDamager)},
	{"DefaultPainter", "Ljavax/swing/text/LayeredHighlighter$LayerPainter;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DefaultHighlighter, DefaultPainter)},
	{}
};

$MethodInfo _DefaultHighlighter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultHighlighter::*)()>(&DefaultHighlighter::init$))},
	{"addHighlight", "(IILjavax/swing/text/Highlighter$HighlightPainter;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"changeHighlight", "(Ljava/lang/Object;II)V", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"deinstall", "(Ljavax/swing/text/JTextComponent;)V", nullptr, $PUBLIC},
	{"getDrawsLayeredHighlights", "()Z", nullptr, $PUBLIC},
	{"getHighlights", "()[Ljavax/swing/text/Highlighter$Highlight;", nullptr, $PUBLIC},
	{"install", "(Ljavax/swing/text/JTextComponent;)V", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"paintLayeredHighlights", "(Ljava/awt/Graphics;IILjava/awt/Shape;Ljavax/swing/text/JTextComponent;Ljavax/swing/text/View;)V", nullptr, $PUBLIC},
	{"removeAllHighlights", "()V", nullptr, $PUBLIC},
	{"removeHighlight", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"safeDamageRange", "(Ljavax/swing/text/Position;Ljavax/swing/text/Position;)V", nullptr, $PRIVATE, $method(static_cast<void(DefaultHighlighter::*)($Position*,$Position*)>(&DefaultHighlighter::safeDamageRange))},
	{"safeDamageRange", "(II)V", nullptr, $PRIVATE, $method(static_cast<void(DefaultHighlighter::*)(int32_t,int32_t)>(&DefaultHighlighter::safeDamageRange)), "javax.swing.text.BadLocationException"},
	{"setDrawsLayeredHighlights", "(Z)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultHighlighter_InnerClassesInfo_[] = {
	{"javax.swing.text.DefaultHighlighter$SafeDamager", "javax.swing.text.DefaultHighlighter", "SafeDamager", 0},
	{"javax.swing.text.DefaultHighlighter$LayeredHighlightInfo", "javax.swing.text.DefaultHighlighter", "LayeredHighlightInfo", 0},
	{"javax.swing.text.DefaultHighlighter$HighlightInfo", "javax.swing.text.DefaultHighlighter", "HighlightInfo", 0},
	{"javax.swing.text.DefaultHighlighter$DefaultHighlightPainter", "javax.swing.text.DefaultHighlighter", "DefaultHighlightPainter", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _DefaultHighlighter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.DefaultHighlighter",
	"javax.swing.text.LayeredHighlighter",
	nullptr,
	_DefaultHighlighter_FieldInfo_,
	_DefaultHighlighter_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultHighlighter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.text.DefaultHighlighter$SafeDamager,javax.swing.text.DefaultHighlighter$LayeredHighlightInfo,javax.swing.text.DefaultHighlighter$HighlightInfo,javax.swing.text.DefaultHighlighter$DefaultHighlightPainter"
};

$Object* allocate$DefaultHighlighter($Class* clazz) {
	return $of($alloc(DefaultHighlighter));
}

$Highlighter$HighlightArray* DefaultHighlighter::noHighlights = nullptr;

$LayeredHighlighter$LayerPainter* DefaultHighlighter::DefaultPainter = nullptr;

void DefaultHighlighter::init$() {
	$LayeredHighlighter::init$();
	$set(this, highlights, $new($Vector));
	$set(this, safeDamager, $new($DefaultHighlighter$SafeDamager, this));
	this->drawsLayeredHighlights = true;
}

void DefaultHighlighter::paint($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	int32_t len = $nc(this->highlights)->size();
	for (int32_t i = 0; i < len; ++i) {
		$var($DefaultHighlighter$HighlightInfo, info, $cast($DefaultHighlighter$HighlightInfo, $nc(this->highlights)->elementAt(i)));
		if (!($instanceOf($DefaultHighlighter$LayeredHighlightInfo, info))) {
			$var($Rectangle, a, $nc(this->component)->getBounds());
			$var($Insets, insets, $nc(this->component)->getInsets());
			$nc(a)->x = $nc(insets)->left;
			a->y = insets->top;
			a->width -= insets->left + insets->right;
			a->height -= insets->top + insets->bottom;
			for (; i < len; ++i) {
				$assign(info, $cast($DefaultHighlighter$HighlightInfo, $nc(this->highlights)->elementAt(i)));
				if (!($instanceOf($DefaultHighlighter$LayeredHighlightInfo, info))) {
					$var($Highlighter$HighlightPainter, p, $nc(info)->getPainter());
					$var($Graphics, var$0, g);
					int32_t var$1 = info->getStartOffset();
					$nc(p)->paint(var$0, var$1, info->getEndOffset(), a, this->component);
				}
			}
		}
	}
}

void DefaultHighlighter::install($JTextComponent* c) {
	$set(this, component, c);
	removeAllHighlights();
}

void DefaultHighlighter::deinstall($JTextComponent* c) {
	$set(this, component, nullptr);
}

$Object* DefaultHighlighter::addHighlight(int32_t p0, int32_t p1, $Highlighter$HighlightPainter* p) {
	$useLocalCurrentObjectStackCache();
	if (p0 < 0) {
		$throwNew($BadLocationException, "Invalid start offset"_s, p0);
	}
	if (p1 < p0) {
		$throwNew($BadLocationException, "Invalid end offset"_s, p1);
	}
	$var($Document, doc, $nc(this->component)->getDocument());
	$var($DefaultHighlighter$HighlightInfo, i, (getDrawsLayeredHighlights() && ($instanceOf($LayeredHighlighter$LayerPainter, p))) ? static_cast<$DefaultHighlighter$HighlightInfo*>($new($DefaultHighlighter$LayeredHighlightInfo, this)) : $new($DefaultHighlighter$HighlightInfo, this));
	$set($nc(i), painter, p);
	$set(i, p0, $nc(doc)->createPosition(p0));
	$set(i, p1, doc->createPosition(p1));
	$nc(this->highlights)->addElement(i);
	safeDamageRange(p0, p1);
	return $of(i);
}

void DefaultHighlighter::removeHighlight(Object$* tag) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($DefaultHighlighter$LayeredHighlightInfo, tag)) {
		$var($DefaultHighlighter$LayeredHighlightInfo, lhi, $cast($DefaultHighlighter$LayeredHighlightInfo, tag));
		if ($nc(lhi)->width > 0 && lhi->height > 0) {
			$nc(this->component)->repaint(lhi->x, lhi->y, lhi->width, lhi->height);
		}
	} else {
		$var($DefaultHighlighter$HighlightInfo, info, $cast($DefaultHighlighter$HighlightInfo, tag));
		safeDamageRange($nc(info)->p0, info->p1);
	}
	$nc(this->highlights)->removeElement(tag);
}

void DefaultHighlighter::removeAllHighlights() {
	$useLocalCurrentObjectStackCache();
	$var($TextUI, mapper, $cast($TextUI, $nc(this->component)->getUI()));
	if (getDrawsLayeredHighlights()) {
		int32_t len = $nc(this->highlights)->size();
		if (len != 0) {
			int32_t minX = 0;
			int32_t minY = 0;
			int32_t maxX = 0;
			int32_t maxY = 0;
			int32_t p0 = -1;
			int32_t p1 = -1;
			for (int32_t i = 0; i < len; ++i) {
				$var($DefaultHighlighter$HighlightInfo, hi, $cast($DefaultHighlighter$HighlightInfo, $nc(this->highlights)->elementAt(i)));
				if ($instanceOf($DefaultHighlighter$LayeredHighlightInfo, hi)) {
					$var($DefaultHighlighter$LayeredHighlightInfo, info, $cast($DefaultHighlighter$LayeredHighlightInfo, hi));
					minX = $Math::min(minX, $nc(info)->x);
					minY = $Math::min(minY, $nc(info)->y);
					maxX = $Math::max(maxX, $nc(info)->x + info->width);
					maxY = $Math::max(maxY, $nc(info)->y + info->height);
				} else if (p0 == -1) {
					p0 = $nc($nc(hi)->p0)->getOffset();
					p1 = $nc(hi->p1)->getOffset();
				} else {
					p0 = $Math::min(p0, $nc($nc(hi)->p0)->getOffset());
					p1 = $Math::max(p1, $nc($nc(hi)->p1)->getOffset());
				}
			}
			if (minX != maxX && minY != maxY) {
				$nc(this->component)->repaint(minX, minY, maxX - minX, maxY - minY);
			}
			if (p0 != -1) {
				try {
					safeDamageRange(p0, p1);
				} catch ($BadLocationException&) {
					$catch();
				}
			}
			$nc(this->highlights)->removeAllElements();
		}
	} else if (mapper != nullptr) {
		int32_t len = $nc(this->highlights)->size();
		if (len != 0) {
			int32_t p0 = $Integer::MAX_VALUE;
			int32_t p1 = 0;
			for (int32_t i = 0; i < len; ++i) {
				$var($DefaultHighlighter$HighlightInfo, info, $cast($DefaultHighlighter$HighlightInfo, $nc(this->highlights)->elementAt(i)));
				p0 = $Math::min(p0, $nc($nc(info)->p0)->getOffset());
				p1 = $Math::max(p1, $nc($nc(info)->p1)->getOffset());
			}
			try {
				safeDamageRange(p0, p1);
			} catch ($BadLocationException&) {
				$catch();
			}
			$nc(this->highlights)->removeAllElements();
		}
	}
}

void DefaultHighlighter::changeHighlight(Object$* tag, int32_t p0, int32_t p1) {
	$useLocalCurrentObjectStackCache();
	if (p0 < 0) {
		$throwNew($BadLocationException, "Invalid beginning of the range"_s, p0);
	}
	if (p1 < p0) {
		$throwNew($BadLocationException, "Invalid end of the range"_s, p1);
	}
	$var($Document, doc, $nc(this->component)->getDocument());
	if ($instanceOf($DefaultHighlighter$LayeredHighlightInfo, tag)) {
		$var($DefaultHighlighter$LayeredHighlightInfo, lhi, $cast($DefaultHighlighter$LayeredHighlightInfo, tag));
		if ($nc(lhi)->width > 0 && lhi->height > 0) {
			$nc(this->component)->repaint(lhi->x, lhi->y, lhi->width, lhi->height);
		}
		$nc(lhi)->width = (lhi->height = 0);
		$set(lhi, p0, $nc(doc)->createPosition(p0));
		$set(lhi, p1, doc->createPosition(p1));
		int32_t var$0 = $Math::min(p0, p1);
		safeDamageRange(var$0, $Math::max(p0, p1));
	} else {
		$var($DefaultHighlighter$HighlightInfo, info, $cast($DefaultHighlighter$HighlightInfo, tag));
		int32_t oldP0 = $nc($nc(info)->p0)->getOffset();
		int32_t oldP1 = $nc(info->p1)->getOffset();
		if (p0 == oldP0) {
			int32_t var$1 = $Math::min(oldP1, p1);
			safeDamageRange(var$1, $Math::max(oldP1, p1));
		} else if (p1 == oldP1) {
			int32_t var$2 = $Math::min(p0, oldP0);
			safeDamageRange(var$2, $Math::max(p0, oldP0));
		} else {
			safeDamageRange(oldP0, oldP1);
			safeDamageRange(p0, p1);
		}
		$set(info, p0, $nc(doc)->createPosition(p0));
		$set(info, p1, doc->createPosition(p1));
	}
}

$Highlighter$HighlightArray* DefaultHighlighter::getHighlights() {
	int32_t size = $nc(this->highlights)->size();
	if (size == 0) {
		return DefaultHighlighter::noHighlights;
	}
	$var($Highlighter$HighlightArray, h, $new($Highlighter$HighlightArray, size));
	$nc(this->highlights)->copyInto(h);
	return h;
}

void DefaultHighlighter::paintLayeredHighlights($Graphics* g, int32_t p0, int32_t p1, $Shape* viewBounds, $JTextComponent* editor, $View* view) {
	$useLocalCurrentObjectStackCache();
	for (int32_t counter = $nc(this->highlights)->size() - 1; counter >= 0; --counter) {
		$var($DefaultHighlighter$HighlightInfo, tag, $cast($DefaultHighlighter$HighlightInfo, $nc(this->highlights)->elementAt(counter)));
		if ($instanceOf($DefaultHighlighter$LayeredHighlightInfo, tag)) {
			$var($DefaultHighlighter$LayeredHighlightInfo, lhi, $cast($DefaultHighlighter$LayeredHighlightInfo, tag));
			int32_t start = $nc(lhi)->getStartOffset();
			int32_t end = lhi->getEndOffset();
			if ((p0 < start && p1 > start) || (p0 >= start && p0 < end)) {
				lhi->paintLayeredHighlights(g, p0, p1, viewBounds, editor, view);
			}
		}
	}
}

void DefaultHighlighter::safeDamageRange($Position* p0, $Position* p1) {
	$nc(this->safeDamager)->damageRange(p0, p1);
}

void DefaultHighlighter::safeDamageRange(int32_t a0, int32_t a1) {
	$useLocalCurrentObjectStackCache();
	$var($Document, doc, $nc(this->component)->getDocument());
	$var($Position, var$0, $nc(doc)->createPosition(a0));
	safeDamageRange(var$0, $(doc->createPosition(a1)));
}

void DefaultHighlighter::setDrawsLayeredHighlights(bool newValue) {
	this->drawsLayeredHighlights = newValue;
}

bool DefaultHighlighter::getDrawsLayeredHighlights() {
	return this->drawsLayeredHighlights;
}

void clinit$DefaultHighlighter($Class* class$) {
	$assignStatic(DefaultHighlighter::noHighlights, $new($Highlighter$HighlightArray, 0));
	$assignStatic(DefaultHighlighter::DefaultPainter, $new($DefaultHighlighter$DefaultHighlightPainter, nullptr));
}

DefaultHighlighter::DefaultHighlighter() {
}

$Class* DefaultHighlighter::load$($String* name, bool initialize) {
	$loadClass(DefaultHighlighter, name, initialize, &_DefaultHighlighter_ClassInfo_, clinit$DefaultHighlighter, allocate$DefaultHighlighter);
	return class$;
}

$Class* DefaultHighlighter::class$ = nullptr;

		} // text
	} // swing
} // javax