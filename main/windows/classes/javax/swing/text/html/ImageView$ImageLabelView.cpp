#include <javax/swing/text/html/ImageView$ImageLabelView.h>

#include <java/awt/Color.h>
#include <java/awt/Graphics.h>
#include <java/awt/Shape.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/GlyphView$GlyphPainter.h>
#include <javax/swing/text/GlyphView.h>
#include <javax/swing/text/LabelView.h>
#include <javax/swing/text/Segment.h>
#include <javax/swing/text/StyledDocument.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/html/ImageView.h>
#include <javax/swing/text/html/InlineView.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Graphics = ::java::awt::Graphics;
using $Shape = ::java::awt::Shape;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $GlyphView = ::javax::swing::text::GlyphView;
using $GlyphView$GlyphPainter = ::javax::swing::text::GlyphView$GlyphPainter;
using $LabelView = ::javax::swing::text::LabelView;
using $Segment = ::javax::swing::text::Segment;
using $StyledDocument = ::javax::swing::text::StyledDocument;
using $View = ::javax::swing::text::View;
using $ImageView = ::javax::swing::text::html::ImageView;
using $InlineView = ::javax::swing::text::html::InlineView;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _ImageView$ImageLabelView_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/html/ImageView;", nullptr, $FINAL | $SYNTHETIC, $field(ImageView$ImageLabelView, this$0)},
	{"segment", "Ljavax/swing/text/Segment;", nullptr, $PRIVATE, $field(ImageView$ImageLabelView, segment)},
	{"fg", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ImageView$ImageLabelView, fg)},
	{}
};

$MethodInfo _ImageView$ImageLabelView_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/html/ImageView;Ljavax/swing/text/Element;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(ImageView$ImageLabelView::*)($ImageView*,$Element*,$String*)>(&ImageView$ImageLabelView::init$))},
	{"breakView", "(IIFF)Ljavax/swing/text/View;", nullptr, $PUBLIC},
	{"getEndOffset", "()I", nullptr, $PUBLIC},
	{"getForeground", "()Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getStartOffset", "()I", nullptr, $PUBLIC},
	{"getText", "(II)Ljavax/swing/text/Segment;", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;Ljava/awt/Shape;)V", nullptr, $PUBLIC},
	{"reset", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ImageView$ImageLabelView_InnerClassesInfo_[] = {
	{"javax.swing.text.html.ImageView$ImageLabelView", "javax.swing.text.html.ImageView", "ImageLabelView", $PRIVATE},
	{}
};

$ClassInfo _ImageView$ImageLabelView_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.ImageView$ImageLabelView",
	"javax.swing.text.html.InlineView",
	nullptr,
	_ImageView$ImageLabelView_FieldInfo_,
	_ImageView$ImageLabelView_MethodInfo_,
	nullptr,
	nullptr,
	_ImageView$ImageLabelView_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.ImageView"
};

$Object* allocate$ImageView$ImageLabelView($Class* clazz) {
	return $of($alloc(ImageView$ImageLabelView));
}

void ImageView$ImageLabelView::init$($ImageView* this$0, $Element* e, $String* text) {
	$set(this, this$0, this$0);
	$InlineView::init$(e);
	reset(text);
}

void ImageView$ImageLabelView::reset($String* text) {
	$var($chars, var$0, $nc(text)->toCharArray());
	$set(this, segment, $new($Segment, var$0, 0, text->length()));
}

void ImageView$ImageLabelView::paint($Graphics* g, $Shape* a) {
	$useLocalCurrentObjectStackCache();
	$var($GlyphView$GlyphPainter, painter, getGlyphPainter());
	if (painter != nullptr) {
		$nc(g)->setColor($(getForeground()));
		$var($Graphics, var$0, g);
		$var($Shape, var$1, a);
		int32_t var$2 = getStartOffset();
		painter->paint(this, var$0, var$1, var$2, getEndOffset());
	}
}

$Segment* ImageView$ImageLabelView::getText(int32_t p0, int32_t p1) {
	if (p0 < 0 || p1 > $nc($nc(this->segment)->array)->length) {
		$throwNew($RuntimeException, "ImageLabelView: Stale view"_s);
	}
	$nc(this->segment)->offset = p0;
	$nc(this->segment)->count = p1 - p0;
	return this->segment;
}

int32_t ImageView$ImageLabelView::getStartOffset() {
	return 0;
}

int32_t ImageView$ImageLabelView::getEndOffset() {
	return $nc($nc(this->segment)->array)->length;
}

$View* ImageView$ImageLabelView::breakView(int32_t axis, int32_t p0, float pos, float len) {
	return this;
}

$Color* ImageView$ImageLabelView::getForeground() {
	$useLocalCurrentObjectStackCache();
	$var($View, parent, nullptr);
	if (this->fg == nullptr && ($assign(parent, getParent())) != nullptr) {
		$var($Document, doc, getDocument());
		$var($AttributeSet, attr, $nc(parent)->getAttributes());
		if (attr != nullptr && ($instanceOf($StyledDocument, doc))) {
			$set(this, fg, $nc(($cast($StyledDocument, doc)))->getForeground(attr));
		}
	}
	return this->fg;
}

ImageView$ImageLabelView::ImageView$ImageLabelView() {
}

$Class* ImageView$ImageLabelView::load$($String* name, bool initialize) {
	$loadClass(ImageView$ImageLabelView, name, initialize, &_ImageView$ImageLabelView_ClassInfo_, allocate$ImageView$ImageLabelView);
	return class$;
}

$Class* ImageView$ImageLabelView::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax