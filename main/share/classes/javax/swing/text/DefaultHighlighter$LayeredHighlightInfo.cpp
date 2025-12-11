#include <javax/swing/text/DefaultHighlighter$LayeredHighlightInfo.h>

#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/lang/Math.h>
#include <javax/swing/text/DefaultHighlighter$HighlightInfo.h>
#include <javax/swing/text/DefaultHighlighter.h>
#include <javax/swing/text/Highlighter$HighlightPainter.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/LayeredHighlighter$LayerPainter.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultHighlighter = ::javax::swing::text::DefaultHighlighter;
using $DefaultHighlighter$HighlightInfo = ::javax::swing::text::DefaultHighlighter$HighlightInfo;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $LayeredHighlighter$LayerPainter = ::javax::swing::text::LayeredHighlighter$LayerPainter;
using $View = ::javax::swing::text::View;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _DefaultHighlighter$LayeredHighlightInfo_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/DefaultHighlighter;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultHighlighter$LayeredHighlightInfo, this$0)},
	{"x", "I", nullptr, 0, $field(DefaultHighlighter$LayeredHighlightInfo, x)},
	{"y", "I", nullptr, 0, $field(DefaultHighlighter$LayeredHighlightInfo, y)},
	{"width", "I", nullptr, 0, $field(DefaultHighlighter$LayeredHighlightInfo, width)},
	{"height", "I", nullptr, 0, $field(DefaultHighlighter$LayeredHighlightInfo, height)},
	{}
};

$MethodInfo _DefaultHighlighter$LayeredHighlightInfo_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/DefaultHighlighter;)V", nullptr, 0, $method(static_cast<void(DefaultHighlighter$LayeredHighlightInfo::*)($DefaultHighlighter*)>(&DefaultHighlighter$LayeredHighlightInfo::init$))},
	{"paintLayeredHighlights", "(Ljava/awt/Graphics;IILjava/awt/Shape;Ljavax/swing/text/JTextComponent;Ljavax/swing/text/View;)V", nullptr, 0},
	{"union", "(Ljava/awt/Shape;)V", nullptr, 0},
	{}
};

$InnerClassInfo _DefaultHighlighter$LayeredHighlightInfo_InnerClassesInfo_[] = {
	{"javax.swing.text.DefaultHighlighter$LayeredHighlightInfo", "javax.swing.text.DefaultHighlighter", "LayeredHighlightInfo", 0},
	{"javax.swing.text.DefaultHighlighter$HighlightInfo", "javax.swing.text.DefaultHighlighter", "HighlightInfo", 0},
	{}
};

$ClassInfo _DefaultHighlighter$LayeredHighlightInfo_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.DefaultHighlighter$LayeredHighlightInfo",
	"javax.swing.text.DefaultHighlighter$HighlightInfo",
	nullptr,
	_DefaultHighlighter$LayeredHighlightInfo_FieldInfo_,
	_DefaultHighlighter$LayeredHighlightInfo_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultHighlighter$LayeredHighlightInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.DefaultHighlighter"
};

$Object* allocate$DefaultHighlighter$LayeredHighlightInfo($Class* clazz) {
	return $of($alloc(DefaultHighlighter$LayeredHighlightInfo));
}

void DefaultHighlighter$LayeredHighlightInfo::init$($DefaultHighlighter* this$0) {
	$set(this, this$0, this$0);
	$DefaultHighlighter$HighlightInfo::init$(this$0);
}

void DefaultHighlighter$LayeredHighlightInfo::union$($Shape* bounds) {
	if (bounds == nullptr) {
		return;
	}
	$var($Rectangle, alloc, nullptr);
	if ($instanceOf($Rectangle, bounds)) {
		$assign(alloc, $cast($Rectangle, bounds));
	} else {
		$assign(alloc, $nc(bounds)->getBounds());
	}
	if (this->width == 0 || this->height == 0) {
		this->x = $nc(alloc)->x;
		this->y = alloc->y;
		this->width = alloc->width;
		this->height = alloc->height;
	} else {
		this->width = $Math::max(this->x + this->width, $nc(alloc)->x + alloc->width);
		this->height = $Math::max(this->y + this->height, $nc(alloc)->y + alloc->height);
		this->x = $Math::min(this->x, $nc(alloc)->x);
		this->width -= this->x;
		this->y = $Math::min(this->y, $nc(alloc)->y);
		this->height -= this->y;
	}
}

void DefaultHighlighter$LayeredHighlightInfo::paintLayeredHighlights($Graphics* g, int32_t p0, int32_t p1, $Shape* viewBounds, $JTextComponent* editor, $View* view) {
	int32_t start = getStartOffset();
	int32_t end = getEndOffset();
	p0 = $Math::max(start, p0);
	p1 = $Math::min(end, p1);
	union$($($nc(($cast($LayeredHighlighter$LayerPainter, this->painter)))->paintLayer(g, p0, p1, viewBounds, editor, view)));
}

DefaultHighlighter$LayeredHighlightInfo::DefaultHighlighter$LayeredHighlightInfo() {
}

$Class* DefaultHighlighter$LayeredHighlightInfo::load$($String* name, bool initialize) {
	$loadClass(DefaultHighlighter$LayeredHighlightInfo, name, initialize, &_DefaultHighlighter$LayeredHighlightInfo_ClassInfo_, allocate$DefaultHighlighter$LayeredHighlightInfo);
	return class$;
}

$Class* DefaultHighlighter$LayeredHighlightInfo::class$ = nullptr;

		} // text
	} // swing
} // javax