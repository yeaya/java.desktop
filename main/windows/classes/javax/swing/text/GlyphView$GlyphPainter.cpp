#include <javax/swing/text/GlyphView$GlyphPainter.h>

#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/Point.h>
#include <java/awt/Shape.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Float.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/Caret.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/GlyphView.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/Position$Bias.h>
#include <javax/swing/text/Segment.h>
#include <javax/swing/text/TabExpander.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

#undef EAST
#undef NORTH
#undef SOUTH
#undef WEST

using $Position$BiasArray = $Array<::javax::swing::text::Position$Bias>;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $Point = ::java::awt::Point;
using $Shape = ::java::awt::Shape;
using $ClassInfo = ::java::lang::ClassInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Caret = ::javax::swing::text::Caret;
using $Document = ::javax::swing::text::Document;
using $GlyphView = ::javax::swing::text::GlyphView;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $Position$Bias = ::javax::swing::text::Position$Bias;
using $Segment = ::javax::swing::text::Segment;
using $TabExpander = ::javax::swing::text::TabExpander;
using $View = ::javax::swing::text::View;

namespace javax {
	namespace swing {
		namespace text {

$MethodInfo _GlyphView$GlyphPainter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(GlyphView$GlyphPainter::*)()>(&GlyphView$GlyphPainter::init$))},
	{"getAscent", "(Ljavax/swing/text/GlyphView;)F", nullptr, $PUBLIC | $ABSTRACT},
	{"getBoundedPosition", "(Ljavax/swing/text/GlyphView;IFF)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getDescent", "(Ljavax/swing/text/GlyphView;)F", nullptr, $PUBLIC | $ABSTRACT},
	{"getHeight", "(Ljavax/swing/text/GlyphView;)F", nullptr, $PUBLIC | $ABSTRACT},
	{"getNextVisualPositionFrom", "(Ljavax/swing/text/GlyphView;ILjavax/swing/text/Position$Bias;Ljava/awt/Shape;I[Ljavax/swing/text/Position$Bias;)I", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"getPainter", "(Ljavax/swing/text/GlyphView;II)Ljavax/swing/text/GlyphView$GlyphPainter;", nullptr, $PUBLIC},
	{"getSpan", "(Ljavax/swing/text/GlyphView;IILjavax/swing/text/TabExpander;F)F", nullptr, $PUBLIC | $ABSTRACT},
	{"modelToView", "(Ljavax/swing/text/GlyphView;ILjavax/swing/text/Position$Bias;Ljava/awt/Shape;)Ljava/awt/Shape;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.swing.text.BadLocationException"},
	{"paint", "(Ljavax/swing/text/GlyphView;Ljava/awt/Graphics;Ljava/awt/Shape;II)V", nullptr, $PUBLIC | $ABSTRACT},
	{"viewToModel", "(Ljavax/swing/text/GlyphView;FFLjava/awt/Shape;[Ljavax/swing/text/Position$Bias;)I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _GlyphView$GlyphPainter_InnerClassesInfo_[] = {
	{"javax.swing.text.GlyphView$GlyphPainter", "javax.swing.text.GlyphView", "GlyphPainter", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _GlyphView$GlyphPainter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.text.GlyphView$GlyphPainter",
	"java.lang.Object",
	nullptr,
	nullptr,
	_GlyphView$GlyphPainter_MethodInfo_,
	nullptr,
	nullptr,
	_GlyphView$GlyphPainter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.GlyphView"
};

$Object* allocate$GlyphView$GlyphPainter($Class* clazz) {
	return $of($alloc(GlyphView$GlyphPainter));
}

void GlyphView$GlyphPainter::init$() {
}

GlyphView$GlyphPainter* GlyphView$GlyphPainter::getPainter($GlyphView* v, int32_t p0, int32_t p1) {
	return this;
}

int32_t GlyphView$GlyphPainter::getNextVisualPositionFrom($GlyphView* v, int32_t pos, $Position$Bias* b, $Shape* a, int32_t direction, $Position$BiasArray* biasRet) {
	$useLocalCurrentObjectStackCache();
	int32_t startOffset = $nc(v)->getStartOffset();
	int32_t endOffset = v->getEndOffset();
	$var($Segment, text, nullptr);
	{
		$var($Container, container, nullptr)
		switch (direction) {
		case $View::NORTH:
			{}
		case $View::SOUTH:
			{
				if (pos != -1) {
					return -1;
				}
				$assign(container, v->getContainer());
				if ($instanceOf($JTextComponent, container)) {
					$var($Caret, c, $nc(($cast($JTextComponent, container)))->getCaret());
					$var($Point, magicPoint, nullptr);
					$assign(magicPoint, (c != nullptr) ? $nc(c)->getMagicCaretPosition() : ($Point*)nullptr);
					if (magicPoint == nullptr) {
						$init($Position$Bias);
						$nc(biasRet)->set(0, $Position$Bias::Forward);
						return startOffset;
					}
					int32_t value = v->viewToModel((float)$nc(magicPoint)->x, 0.0f, a, biasRet);
					return value;
				}
				break;
			}
		case $View::EAST:
			{
				if (startOffset == $nc($(v->getDocument()))->getLength()) {
					if (pos == -1) {
						$init($Position$Bias);
						$nc(biasRet)->set(0, $Position$Bias::Forward);
						return startOffset;
					}
					return -1;
				}
				if (pos == -1) {
					$init($Position$Bias);
					$nc(biasRet)->set(0, $Position$Bias::Forward);
					return startOffset;
				}
				if (pos == endOffset) {
					return -1;
				}
				if (++pos == endOffset) {
					return -1;
				} else {
					$init($Position$Bias);
					$nc(biasRet)->set(0, $Position$Bias::Forward);
				}
				return pos;
			}
		case $View::WEST:
			{
				if (startOffset == $nc($(v->getDocument()))->getLength()) {
					if (pos == -1) {
						$init($Position$Bias);
						$nc(biasRet)->set(0, $Position$Bias::Forward);
						return startOffset;
					}
					return -1;
				}
				if (pos == -1) {
					$init($Position$Bias);
					$nc(biasRet)->set(0, $Position$Bias::Forward);
					return endOffset - 1;
				}
				if (pos == startOffset) {
					return -1;
				}
				$init($Position$Bias);
				$nc(biasRet)->set(0, $Position$Bias::Forward);
				return (pos - 1);
			}
		default:
			{
				$throwNew($IllegalArgumentException, $$str({"Bad direction: "_s, $$str(direction)}));
			}
		}
	}
	return pos;
}

GlyphView$GlyphPainter::GlyphView$GlyphPainter() {
}

$Class* GlyphView$GlyphPainter::load$($String* name, bool initialize) {
	$loadClass(GlyphView$GlyphPainter, name, initialize, &_GlyphView$GlyphPainter_ClassInfo_, allocate$GlyphView$GlyphPainter);
	return class$;
}

$Class* GlyphView$GlyphPainter::class$ = nullptr;

		} // text
	} // swing
} // javax