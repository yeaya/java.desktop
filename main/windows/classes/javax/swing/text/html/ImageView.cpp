#include <javax/swing/text/html/ImageView.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Image.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/Toolkit.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/awt/image/ImageObserver.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/MalformedURLException.h>
#include <java/net/URL.h>
#include <java/util/Dictionary.h>
#include <javax/swing/GrayFilter.h>
#include <javax/swing/Icon.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/DocumentEvent.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/GlyphView.h>
#include <javax/swing/text/Highlighter.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/LabelView.h>
#include <javax/swing/text/LayeredHighlighter.h>
#include <javax/swing/text/Position$Bias.h>
#include <javax/swing/text/StyledDocument.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/ViewFactory.h>
#include <javax/swing/text/html/HTML$Attribute.h>
#include <javax/swing/text/html/HTML$Tag.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <javax/swing/text/html/ImageView$1.h>
#include <javax/swing/text/html/ImageView$ImageHandler.h>
#include <javax/swing/text/html/ImageView$ImageLabelView.h>
#include <javax/swing/text/html/InlineView.h>
#include <javax/swing/text/html/StyleSheet.h>
#include <jcpp.h>

#undef A
#undef ALIGN
#undef ALT
#undef BORDER
#undef DEFAULT_BORDER
#undef DEFAULT_HEIGHT
#undef DEFAULT_WIDTH
#undef HEIGHT
#undef HEIGHT_FLAG
#undef HREF
#undef HSPACE
#undef IMAGE_CACHE_PROPERTY
#undef LINK_FLAG
#undef LOADING_FLAG
#undef MISSING_IMAGE
#undef PENDING_IMAGE
#undef RELOAD_FLAG
#undef RELOAD_IMAGE_FLAG
#undef SRC
#undef SYNC_LOAD_FLAG
#undef VSPACE
#undef WIDTH
#undef WIDTH_FLAG
#undef X_AXIS
#undef Y_AXIS

using $Position$BiasArray = $Array<::javax::swing::text::Position$Bias>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Image = ::java::awt::Image;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $Toolkit = ::java::awt::Toolkit;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $Runnable = ::java::lang::Runnable;
using $MalformedURLException = ::java::net::MalformedURLException;
using $URL = ::java::net::URL;
using $Dictionary = ::java::util::Dictionary;
using $GrayFilter = ::javax::swing::GrayFilter;
using $Icon = ::javax::swing::Icon;
using $ImageIcon = ::javax::swing::ImageIcon;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIManager = ::javax::swing::UIManager;
using $DocumentEvent = ::javax::swing::event::DocumentEvent;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $GlyphView = ::javax::swing::text::GlyphView;
using $Highlighter = ::javax::swing::text::Highlighter;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $LabelView = ::javax::swing::text::LabelView;
using $LayeredHighlighter = ::javax::swing::text::LayeredHighlighter;
using $Position$Bias = ::javax::swing::text::Position$Bias;
using $StyledDocument = ::javax::swing::text::StyledDocument;
using $View = ::javax::swing::text::View;
using $ViewFactory = ::javax::swing::text::ViewFactory;
using $HTML$Attribute = ::javax::swing::text::html::HTML$Attribute;
using $HTML$Tag = ::javax::swing::text::html::HTML$Tag;
using $HTMLDocument = ::javax::swing::text::html::HTMLDocument;
using $ImageView$1 = ::javax::swing::text::html::ImageView$1;
using $ImageView$ImageHandler = ::javax::swing::text::html::ImageView$ImageHandler;
using $ImageView$ImageLabelView = ::javax::swing::text::html::ImageView$ImageLabelView;
using $InlineView = ::javax::swing::text::html::InlineView;
using $StyleSheet = ::javax::swing::text::html::StyleSheet;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _ImageView_FieldInfo_[] = {
	{"sIsInc", "Z", nullptr, $PRIVATE | $STATIC, $staticField(ImageView, sIsInc)},
	{"sIncRate", "I", nullptr, $PRIVATE | $STATIC, $staticField(ImageView, sIncRate)},
	{"PENDING_IMAGE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ImageView, PENDING_IMAGE)},
	{"MISSING_IMAGE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ImageView, MISSING_IMAGE)},
	{"IMAGE_CACHE_PROPERTY", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ImageView, IMAGE_CACHE_PROPERTY)},
	{"DEFAULT_WIDTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ImageView, DEFAULT_WIDTH)},
	{"DEFAULT_HEIGHT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ImageView, DEFAULT_HEIGHT)},
	{"DEFAULT_BORDER", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ImageView, DEFAULT_BORDER)},
	{"LOADING_FLAG", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ImageView, LOADING_FLAG)},
	{"LINK_FLAG", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ImageView, LINK_FLAG)},
	{"WIDTH_FLAG", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ImageView, WIDTH_FLAG)},
	{"HEIGHT_FLAG", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ImageView, HEIGHT_FLAG)},
	{"RELOAD_FLAG", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ImageView, RELOAD_FLAG)},
	{"RELOAD_IMAGE_FLAG", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ImageView, RELOAD_IMAGE_FLAG)},
	{"SYNC_LOAD_FLAG", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ImageView, SYNC_LOAD_FLAG)},
	{"attr", "Ljavax/swing/text/AttributeSet;", nullptr, $PRIVATE, $field(ImageView, attr)},
	{"image", "Ljava/awt/Image;", nullptr, $PRIVATE, $field(ImageView, image)},
	{"disabledImage", "Ljava/awt/Image;", nullptr, $PRIVATE, $field(ImageView, disabledImage)},
	{"width", "I", nullptr, $PRIVATE, $field(ImageView, width)},
	{"height", "I", nullptr, $PRIVATE, $field(ImageView, height)},
	{"state", "I", nullptr, $PRIVATE, $field(ImageView, state)},
	{"container", "Ljava/awt/Container;", nullptr, $PRIVATE, $field(ImageView, container)},
	{"fBounds", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(ImageView, fBounds)},
	{"borderColor", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ImageView, borderColor)},
	{"borderSize", "S", nullptr, $PRIVATE, $field(ImageView, borderSize)},
	{"leftInset", "S", nullptr, $PRIVATE, $field(ImageView, leftInset)},
	{"rightInset", "S", nullptr, $PRIVATE, $field(ImageView, rightInset)},
	{"topInset", "S", nullptr, $PRIVATE, $field(ImageView, topInset)},
	{"bottomInset", "S", nullptr, $PRIVATE, $field(ImageView, bottomInset)},
	{"imageObserver", "Ljava/awt/image/ImageObserver;", nullptr, $PRIVATE, $field(ImageView, imageObserver)},
	{"altView", "Ljavax/swing/text/View;", nullptr, $PRIVATE, $field(ImageView, altView)},
	{"vAlign", "F", nullptr, $PRIVATE, $field(ImageView, vAlign)},
	{}
};

$MethodInfo _ImageView_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/Element;)V", nullptr, $PUBLIC, $method(static_cast<void(ImageView::*)($Element*)>(&ImageView::init$))},
	{"adjustWidthHeight", "(II)Ljava/awt/Dimension;", nullptr, $PRIVATE, $method(static_cast<$Dimension*(ImageView::*)(int32_t,int32_t)>(&ImageView::adjustWidthHeight))},
	{"changedUpdate", "(Ljavax/swing/event/DocumentEvent;Ljava/awt/Shape;Ljavax/swing/text/ViewFactory;)V", nullptr, $PUBLIC},
	{"getAlignment", "(I)F", nullptr, $PUBLIC},
	{"getAltText", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAltView", "()Ljavax/swing/text/View;", nullptr, $PRIVATE, $method(static_cast<$View*(ImageView::*)()>(&ImageView::getAltView))},
	{"getAttributes", "()Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC},
	{"getImage", "()Ljava/awt/Image;", nullptr, $PUBLIC},
	{"getImage", "(Z)Ljava/awt/Image;", nullptr, $PRIVATE, $method(static_cast<$Image*(ImageView::*)(bool)>(&ImageView::getImage))},
	{"getImageURL", "()Ljava/net/URL;", nullptr, $PUBLIC},
	{"getIntAttr", "(Ljavax/swing/text/html/HTML$Attribute;I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ImageView::*)($HTML$Attribute*,int32_t)>(&ImageView::getIntAttr))},
	{"getLoadingImageIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC},
	{"getLoadsSynchronously", "()Z", nullptr, $PUBLIC},
	{"getNoImageIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC},
	{"getPreferredSpan", "(I)F", nullptr, $PUBLIC},
	{"getPreferredSpanFromAltView", "(I)F", nullptr, $PRIVATE, $method(static_cast<float(ImageView::*)(int32_t)>(&ImageView::getPreferredSpanFromAltView))},
	{"getStyleSheet", "()Ljavax/swing/text/html/StyleSheet;", nullptr, $PROTECTED},
	{"getToolTipText", "(FFLjava/awt/Shape;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"hasPixels", "(Ljava/awt/Image;)Z", nullptr, $PRIVATE, $method(static_cast<bool(ImageView::*)($Image*)>(&ImageView::hasPixels))},
	{"isLink", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(ImageView::*)()>(&ImageView::isLink))},
	{"loadImage", "()V", nullptr, $PRIVATE, $method(static_cast<void(ImageView::*)()>(&ImageView::loadImage))},
	{"modelToView", "(ILjava/awt/Shape;Ljavax/swing/text/Position$Bias;)Ljava/awt/Shape;", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"paint", "(Ljava/awt/Graphics;Ljava/awt/Shape;)V", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;)V", nullptr, $PRIVATE, $method(static_cast<void(ImageView::*)($Graphics*,$Rectangle*)>(&ImageView::paintBorder))},
	{"paintHighlights", "(Ljava/awt/Graphics;Ljava/awt/Shape;)V", nullptr, $PRIVATE, $method(static_cast<void(ImageView::*)($Graphics*,$Shape*)>(&ImageView::paintHighlights))},
	{"refreshImage", "()V", nullptr, $PRIVATE, $method(static_cast<void(ImageView::*)()>(&ImageView::refreshImage))},
	{"repaint", "(J)V", nullptr, $PRIVATE, $method(static_cast<void(ImageView::*)(int64_t)>(&ImageView::repaint))},
	{"safePreferenceChanged", "()V", nullptr, $PRIVATE, $method(static_cast<void(ImageView::*)()>(&ImageView::safePreferenceChanged))},
	{"setLoadsSynchronously", "(Z)V", nullptr, $PUBLIC},
	{"setParent", "(Ljavax/swing/text/View;)V", nullptr, $PUBLIC},
	{"setPropertiesFromAttributes", "()V", nullptr, $PROTECTED},
	{"setSize", "(FF)V", nullptr, $PUBLIC},
	{"sync", "()V", nullptr, $PRIVATE, $method(static_cast<void(ImageView::*)()>(&ImageView::sync))},
	{"updateAltTextView", "()V", nullptr, $PRIVATE, $method(static_cast<void(ImageView::*)()>(&ImageView::updateAltTextView))},
	{"updateImageSize", "()V", nullptr, $PRIVATE, $method(static_cast<void(ImageView::*)()>(&ImageView::updateImageSize))},
	{"viewToModel", "(FFLjava/awt/Shape;[Ljavax/swing/text/Position$Bias;)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ImageView_InnerClassesInfo_[] = {
	{"javax.swing.text.html.ImageView$ImageLabelView", "javax.swing.text.html.ImageView", "ImageLabelView", $PRIVATE},
	{"javax.swing.text.html.ImageView$ImageHandler", "javax.swing.text.html.ImageView", "ImageHandler", $PRIVATE},
	{"javax.swing.text.html.ImageView$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ImageView_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.html.ImageView",
	"javax.swing.text.View",
	nullptr,
	_ImageView_FieldInfo_,
	_ImageView_MethodInfo_,
	nullptr,
	nullptr,
	_ImageView_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.text.html.ImageView$ImageLabelView,javax.swing.text.html.ImageView$ImageHandler,javax.swing.text.html.ImageView$1"
};

$Object* allocate$ImageView($Class* clazz) {
	return $of($alloc(ImageView));
}


bool ImageView::sIsInc = false;

int32_t ImageView::sIncRate = 0;

$String* ImageView::PENDING_IMAGE = nullptr;

$String* ImageView::MISSING_IMAGE = nullptr;

$String* ImageView::IMAGE_CACHE_PROPERTY = nullptr;

void ImageView::init$($Element* elem) {
	$View::init$(elem);
	$set(this, fBounds, $new($Rectangle));
	$set(this, imageObserver, $new($ImageView$ImageHandler, this));
	this->state = ImageView::RELOAD_FLAG | ImageView::RELOAD_IMAGE_FLAG;
}

$String* ImageView::getAltText() {
	$useLocalCurrentObjectStackCache();
	$init($HTML$Attribute);
	return $cast($String, $nc($($nc($(getElement()))->getAttributes()))->getAttribute($HTML$Attribute::ALT));
}

$URL* ImageView::getImageURL() {
	$useLocalCurrentObjectStackCache();
	$init($HTML$Attribute);
	$var($String, src, $cast($String, $nc($($nc($(getElement()))->getAttributes()))->getAttribute($HTML$Attribute::SRC)));
	if (src == nullptr) {
		return nullptr;
	}
	$var($URL, reference, $nc(($cast($HTMLDocument, $(getDocument()))))->getBase());
	try {
		$var($URL, u, $new($URL, reference, src));
		return u;
	} catch ($MalformedURLException&) {
		$var($MalformedURLException, e, $catch());
		return nullptr;
	}
	$shouldNotReachHere();
}

$Icon* ImageView::getNoImageIcon() {
	return $cast($Icon, $nc($($UIManager::getLookAndFeelDefaults()))->get(ImageView::MISSING_IMAGE));
}

$Icon* ImageView::getLoadingImageIcon() {
	return $cast($Icon, $nc($($UIManager::getLookAndFeelDefaults()))->get(ImageView::PENDING_IMAGE));
}

$Image* ImageView::getImage() {
	sync();
	return this->image;
}

$Image* ImageView::getImage(bool enabled) {
	$var($Image, img, getImage());
	if (!enabled) {
		if (this->disabledImage == nullptr) {
			$set(this, disabledImage, $GrayFilter::createDisabledImage(img));
		}
		$assign(img, this->disabledImage);
	}
	return img;
}

void ImageView::setLoadsSynchronously(bool newValue) {
	$synchronized(this) {
		if (newValue) {
			this->state |= ImageView::SYNC_LOAD_FLAG;
		} else {
			this->state = (this->state | ImageView::SYNC_LOAD_FLAG) ^ ImageView::SYNC_LOAD_FLAG;
		}
	}
}

bool ImageView::getLoadsSynchronously() {
	return (((int32_t)(this->state & (uint32_t)ImageView::SYNC_LOAD_FLAG)) != 0);
}

$StyleSheet* ImageView::getStyleSheet() {
	$var($HTMLDocument, doc, $cast($HTMLDocument, getDocument()));
	return $nc(doc)->getStyleSheet();
}

$AttributeSet* ImageView::getAttributes() {
	sync();
	return this->attr;
}

$String* ImageView::getToolTipText(float x, float y, $Shape* allocation) {
	return getAltText();
}

void ImageView::setPropertiesFromAttributes() {
	$useLocalCurrentObjectStackCache();
	$var($StyleSheet, sheet, getStyleSheet());
	$set(this, attr, $nc(sheet)->getViewAttributes(this));
	$init($HTML$Attribute);
	this->borderSize = (int16_t)getIntAttr($HTML$Attribute::BORDER, isLink() ? ImageView::DEFAULT_BORDER : 0);
	this->leftInset = (this->rightInset = (int16_t)(getIntAttr($HTML$Attribute::HSPACE, 0) + this->borderSize));
	this->topInset = (this->bottomInset = (int16_t)(getIntAttr($HTML$Attribute::VSPACE, 0) + this->borderSize));
	$set(this, borderColor, $nc(($cast($StyledDocument, $(getDocument()))))->getForeground($(getAttributes())));
	$var($AttributeSet, attr, $nc($(getElement()))->getAttributes());
	$var($Object, alignment, $nc(attr)->getAttribute($HTML$Attribute::ALIGN));
	this->vAlign = 1.0f;
	if (alignment != nullptr) {
		$assign(alignment, $of(alignment)->toString());
		if ("top"_s->equals(alignment)) {
			this->vAlign = 0.0f;
		} else if ("middle"_s->equals(alignment)) {
			this->vAlign = 0.5f;
		}
	}
	$init($HTML$Tag);
	$var($AttributeSet, anchorAttr, $cast($AttributeSet, attr->getAttribute($HTML$Tag::A)));
	if (anchorAttr != nullptr && anchorAttr->isDefined($HTML$Attribute::HREF)) {
		$synchronized(this) {
			this->state |= ImageView::LINK_FLAG;
		}
	} else {
		$synchronized(this) {
			this->state = (this->state | ImageView::LINK_FLAG) ^ ImageView::LINK_FLAG;
		}
	}
}

void ImageView::setParent($View* parent) {
	$var($View, oldParent, getParent());
	$View::setParent(parent);
	$set(this, container, (parent != nullptr) ? getContainer() : ($Container*)nullptr);
	if (oldParent != parent) {
		$synchronized(this) {
			this->state |= ImageView::RELOAD_FLAG;
		}
	}
}

void ImageView::changedUpdate($DocumentEvent* e, $Shape* a, $ViewFactory* f) {
	$View::changedUpdate(e, a, f);
	$synchronized(this) {
		this->state |= ImageView::RELOAD_FLAG | ImageView::RELOAD_IMAGE_FLAG;
	}
	preferenceChanged(nullptr, true, true);
}

void ImageView::paint($Graphics* g, $Shape* a) {
	$useLocalCurrentObjectStackCache();
	sync();
	$var($Rectangle, rect, ($instanceOf($Rectangle, a)) ? $cast($Rectangle, a) : $nc(a)->getBounds());
	$var($Rectangle, clip, $nc(g)->getClipBounds());
	$nc(this->fBounds)->setBounds(rect);
	paintHighlights(g, a);
	paintBorder(g, rect);
	if (clip != nullptr) {
		g->clipRect($nc(rect)->x + this->leftInset, rect->y + this->topInset, rect->width - this->leftInset - this->rightInset, rect->height - this->topInset - this->bottomInset);
	}
	$var($Container, host, getContainer());
	$var($Image, img, getImage(host == nullptr || $nc(host)->isEnabled()));
	if (img != nullptr) {
		if (!hasPixels(img)) {
			$var($Icon, icon, getLoadingImageIcon());
			if (icon != nullptr) {
				icon->paintIcon(host, g, $nc(rect)->x + this->leftInset, rect->y + this->topInset);
			}
		} else {
			g->drawImage(img, $nc(rect)->x + this->leftInset, rect->y + this->topInset, this->width, this->height, this->imageObserver);
		}
	} else {
		$var($Icon, icon, getNoImageIcon());
		if (icon != nullptr) {
			icon->paintIcon(host, g, $nc(rect)->x + this->leftInset, rect->y + this->topInset);
		}
		$var($View, view, getAltView());
		if (view != nullptr && (((int32_t)(this->state & (uint32_t)ImageView::WIDTH_FLAG)) == 0 || this->width > ImageView::DEFAULT_WIDTH)) {
			$var($Rectangle, altRect, $new($Rectangle, $nc(rect)->x + this->leftInset + ImageView::DEFAULT_WIDTH, rect->y + this->topInset, rect->width - this->leftInset - this->rightInset - ImageView::DEFAULT_WIDTH, rect->height - this->topInset - this->bottomInset));
			$nc(view)->paint(g, altRect);
		}
	}
	if (clip != nullptr) {
		g->setClip(clip->x, clip->y, clip->width, clip->height);
	}
}

void ImageView::paintHighlights($Graphics* g, $Shape* shape) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($JTextComponent, this->container)) {
		$var($JTextComponent, tc, $cast($JTextComponent, this->container));
		$var($Highlighter, h, $nc(tc)->getHighlighter());
		if ($instanceOf($LayeredHighlighter, h)) {
			$var($Graphics, var$0, g);
			int32_t var$1 = getStartOffset();
			$nc(($cast($LayeredHighlighter, h)))->paintLayeredHighlights(var$0, var$1, getEndOffset(), shape, tc, this);
		}
	}
}

void ImageView::paintBorder($Graphics* g, $Rectangle* rect) {
	$var($Color, color, this->borderColor);
	if ((this->borderSize > 0 || this->image == nullptr) && color != nullptr) {
		int32_t xOffset = this->leftInset - this->borderSize;
		int32_t yOffset = this->topInset - this->borderSize;
		$nc(g)->setColor(color);
		int32_t n = (this->image == nullptr) ? (int16_t)1 : this->borderSize;
		for (int32_t counter = 0; counter < n; ++counter) {
			g->drawRect($nc(rect)->x + xOffset + counter, rect->y + yOffset + counter, rect->width - counter - counter - xOffset - xOffset - 1, rect->height - counter - counter - yOffset - yOffset - 1);
		}
	}
}

float ImageView::getPreferredSpan(int32_t axis) {
	$useLocalCurrentObjectStackCache();
	sync();
	if (axis == $View::X_AXIS && ((int32_t)(this->state & (uint32_t)ImageView::WIDTH_FLAG)) == ImageView::WIDTH_FLAG) {
		getPreferredSpanFromAltView(axis);
		return (float)(this->width + this->leftInset + this->rightInset);
	}
	if (axis == $View::Y_AXIS && ((int32_t)(this->state & (uint32_t)ImageView::HEIGHT_FLAG)) == ImageView::HEIGHT_FLAG) {
		getPreferredSpanFromAltView(axis);
		return (float)(this->height + this->topInset + this->bottomInset);
	}
	$var($Image, image, getImage());
	if (image != nullptr) {
		switch (axis) {
		case $View::X_AXIS:
			{
				return (float)(this->width + this->leftInset + this->rightInset);
			}
		case $View::Y_AXIS:
			{
				return (float)(this->height + this->topInset + this->bottomInset);
			}
		default:
			{
				$throwNew($IllegalArgumentException, $$str({"Invalid axis: "_s, $$str(axis)}));
			}
		}
	} else {
		$var($View, view, getAltView());
		float retValue = 0.0f;
		if (view != nullptr) {
			retValue = view->getPreferredSpan(axis);
		}
		switch (axis) {
		case $View::X_AXIS:
			{
				return retValue + (float)(this->width + this->leftInset + this->rightInset);
			}
		case $View::Y_AXIS:
			{
				return retValue + (float)(this->height + this->topInset + this->bottomInset);
			}
		default:
			{
				$throwNew($IllegalArgumentException, $$str({"Invalid axis: "_s, $$str(axis)}));
			}
		}
	}
}

float ImageView::getAlignment(int32_t axis) {
	switch (axis) {
	case $View::Y_AXIS:
		{
			return this->vAlign;
		}
	default:
		{
			return $View::getAlignment(axis);
		}
	}
}

$Shape* ImageView::modelToView(int32_t pos, $Shape* a, $Position$Bias* b) {
	int32_t p0 = getStartOffset();
	int32_t p1 = getEndOffset();
	if ((pos >= p0) && (pos <= p1)) {
		$var($Rectangle, r, $nc(a)->getBounds());
		if (pos == p1) {
			$nc(r)->x += r->width;
		}
		$nc(r)->width = 0;
		return r;
	}
	return nullptr;
}

int32_t ImageView::viewToModel(float x, float y, $Shape* a, $Position$BiasArray* bias) {
	$var($Rectangle, alloc, $cast($Rectangle, a));
	if (x < $nc(alloc)->x + alloc->width) {
		$init($Position$Bias);
		$nc(bias)->set(0, $Position$Bias::Forward);
		return getStartOffset();
	}
	$init($Position$Bias);
	$nc(bias)->set(0, $Position$Bias::Backward);
	return getEndOffset();
}

void ImageView::setSize(float width, float height) {
	sync();
	if (getImage() == nullptr) {
		$var($View, view, getAltView());
		if (view != nullptr) {
			float var$0 = $Math::max(0.0f, width - (float)(ImageView::DEFAULT_WIDTH + this->leftInset + this->rightInset));
			view->setSize(var$0, $Math::max(0.0f, height - (float)(this->topInset + this->bottomInset)));
		}
	}
}

bool ImageView::isLink() {
	return (((int32_t)(this->state & (uint32_t)ImageView::LINK_FLAG)) == ImageView::LINK_FLAG);
}

bool ImageView::hasPixels($Image* image) {
	bool var$0 = image != nullptr && (image->getHeight(this->imageObserver) > 0);
	return var$0 && (image->getWidth(this->imageObserver) > 0);
}

float ImageView::getPreferredSpanFromAltView(int32_t axis) {
	if (getImage() == nullptr) {
		$var($View, view, getAltView());
		if (view != nullptr) {
			return view->getPreferredSpan(axis);
		}
	}
	return 0.0f;
}

void ImageView::repaint(int64_t delay) {
	if (this->container != nullptr && this->fBounds != nullptr) {
		$nc(this->container)->repaint(delay, $nc(this->fBounds)->x, $nc(this->fBounds)->y, $nc(this->fBounds)->width, $nc(this->fBounds)->height);
	}
}

int32_t ImageView::getIntAttr($HTML$Attribute* name, int32_t deflt) {
	$useLocalCurrentObjectStackCache();
	$var($AttributeSet, attr, $nc($(getElement()))->getAttributes());
	if ($nc(attr)->isDefined(name)) {
		int32_t i = 0;
		$var($String, val, $cast($String, attr->getAttribute(name)));
		if (val == nullptr) {
			i = deflt;
		} else {
			try {
				i = $Math::max(0, $Integer::parseInt(val));
			} catch ($NumberFormatException&) {
				$var($NumberFormatException, x, $catch());
				i = deflt;
			}
		}
		return i;
	} else {
		return deflt;
	}
}

void ImageView::sync() {
	int32_t s = this->state;
	if (((int32_t)(s & (uint32_t)ImageView::RELOAD_IMAGE_FLAG)) != 0) {
		refreshImage();
	}
	s = this->state;
	if (((int32_t)(s & (uint32_t)ImageView::RELOAD_FLAG)) != 0) {
		$synchronized(this) {
			this->state = (this->state | ImageView::RELOAD_FLAG) ^ ImageView::RELOAD_FLAG;
		}
		setPropertiesFromAttributes();
	}
}

void ImageView::refreshImage() {
	$synchronized(this) {
		this->state = ((((this->state | ImageView::LOADING_FLAG) | ImageView::RELOAD_IMAGE_FLAG) | ImageView::WIDTH_FLAG) | ImageView::HEIGHT_FLAG) ^ ((ImageView::WIDTH_FLAG | ImageView::HEIGHT_FLAG) | ImageView::RELOAD_IMAGE_FLAG);
		$set(this, image, nullptr);
		this->width = (this->height = 0);
	}
	{
		$var($Throwable, var$0, nullptr);
		try {
			loadImage();
			updateImageSize();
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$synchronized(this) {
				this->state = (this->state | ImageView::LOADING_FLAG) ^ ImageView::LOADING_FLAG;
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void ImageView::loadImage() {
	$useLocalCurrentObjectStackCache();
	$var($URL, src, getImageURL());
	$var($Image, newImage, nullptr);
	if (src != nullptr) {
		$var($Dictionary, cache, $cast($Dictionary, $nc($(getDocument()))->getProperty(ImageView::IMAGE_CACHE_PROPERTY)));
		if (cache != nullptr) {
			$assign(newImage, $cast($Image, cache->get(src)));
		} else {
			$assign(newImage, $nc($($Toolkit::getDefaultToolkit()))->createImage(src));
			if (newImage != nullptr && getLoadsSynchronously()) {
				$var($ImageIcon, ii, $new($ImageIcon));
				ii->setImage(newImage);
			}
		}
	}
	$set(this, image, newImage);
}

void ImageView::updateImageSize() {
	$useLocalCurrentObjectStackCache();
	int32_t newWidth = 0;
	int32_t newHeight = 0;
	int32_t newState = 0;
	$var($Image, newImage, getImage());
	if (newImage != nullptr) {
		$var($Element, elem, getElement());
		$var($AttributeSet, attr, $nc(elem)->getAttributes());
		$init($HTML$Attribute);
		newWidth = getIntAttr($HTML$Attribute::WIDTH, -1);
		newHeight = getIntAttr($HTML$Attribute::HEIGHT, -1);
		if (newWidth > 0) {
			newState |= ImageView::WIDTH_FLAG;
		}
		if (newHeight > 0) {
			newState |= ImageView::HEIGHT_FLAG;
		}
		$var($Image, img, nullptr);
		$synchronized(this) {
			$assign(img, this->image);
		}
		if (newWidth <= 0) {
			newWidth = $nc(img)->getWidth(this->imageObserver);
			if (newWidth <= 0) {
				newWidth = ImageView::DEFAULT_WIDTH;
			}
		}
		if (newHeight <= 0) {
			newHeight = $nc(img)->getHeight(this->imageObserver);
			if (newHeight <= 0) {
				newHeight = ImageView::DEFAULT_HEIGHT;
			}
		}
		if (getLoadsSynchronously()) {
			$var($Dimension, d, adjustWidthHeight(newWidth, newHeight));
			newWidth = $nc(d)->width;
			newHeight = d->height;
			newState |= (ImageView::WIDTH_FLAG | ImageView::HEIGHT_FLAG);
		}
		if (((int32_t)(newState & (uint32_t)(ImageView::WIDTH_FLAG | ImageView::HEIGHT_FLAG))) != 0) {
			$nc($($Toolkit::getDefaultToolkit()))->prepareImage(newImage, newWidth, newHeight, this->imageObserver);
		} else {
			$nc($($Toolkit::getDefaultToolkit()))->prepareImage(newImage, -1, -1, this->imageObserver);
		}
		bool createText = false;
		$synchronized(this) {
			if (this->image != nullptr) {
				if (((int32_t)(newState & (uint32_t)ImageView::WIDTH_FLAG)) == ImageView::WIDTH_FLAG || this->width == 0) {
					this->width = newWidth;
				}
				if (((int32_t)(newState & (uint32_t)ImageView::HEIGHT_FLAG)) == ImageView::HEIGHT_FLAG || this->height == 0) {
					this->height = newHeight;
				}
			} else {
				createText = true;
				if (((int32_t)(newState & (uint32_t)ImageView::WIDTH_FLAG)) == ImageView::WIDTH_FLAG) {
					this->width = newWidth;
				}
				if (((int32_t)(newState & (uint32_t)ImageView::HEIGHT_FLAG)) == ImageView::HEIGHT_FLAG) {
					this->height = newHeight;
				}
			}
			this->state = this->state | newState;
			this->state = (this->state | ImageView::LOADING_FLAG) ^ ImageView::LOADING_FLAG;
		}
		if (createText) {
			updateAltTextView();
		}
	} else {
		this->width = (this->height = ImageView::DEFAULT_HEIGHT);
		updateAltTextView();
	}
}

void ImageView::updateAltTextView() {
	$useLocalCurrentObjectStackCache();
	$var($String, text, getAltText());
	if (text != nullptr) {
		$var($ImageView$ImageLabelView, newView, nullptr);
		$assign(newView, $new($ImageView$ImageLabelView, this, $(getElement()), text));
		$synchronized(this) {
			$set(this, altView, newView);
		}
	}
}

$View* ImageView::getAltView() {
	$useLocalCurrentObjectStackCache();
	$var($View, view, nullptr);
	$synchronized(this) {
		$assign(view, this->altView);
	}
	if (view != nullptr && view->getParent() == nullptr) {
		view->setParent($(getParent()));
	}
	return view;
}

void ImageView::safePreferenceChanged() {
	$useLocalCurrentObjectStackCache();
	if ($SwingUtilities::isEventDispatchThread()) {
		$var($Document, doc, getDocument());
		if ($instanceOf($AbstractDocument, doc)) {
			$nc(($cast($AbstractDocument, doc)))->readLock();
		}
		preferenceChanged(nullptr, true, true);
		if ($instanceOf($AbstractDocument, doc)) {
			$nc(($cast($AbstractDocument, doc)))->readUnlock();
		}
	} else {
		$SwingUtilities::invokeLater($$new($ImageView$1, this));
	}
}

$Dimension* ImageView::adjustWidthHeight(int32_t newWidth, int32_t newHeight) {
	$var($Dimension, d, $new($Dimension));
	double proportion = 0.0;
	$init($HTML$Attribute);
	int32_t specifiedWidth = getIntAttr($HTML$Attribute::WIDTH, -1);
	int32_t specifiedHeight = getIntAttr($HTML$Attribute::HEIGHT, -1);
	if (specifiedWidth != -1 && specifiedHeight != -1) {
		newWidth = specifiedWidth;
		newHeight = specifiedHeight;
	} else if ((specifiedWidth != -1) ^ (specifiedHeight != -1)) {
		if (specifiedWidth <= 0) {
			proportion = specifiedHeight / ((double)newHeight);
			newWidth = $cast(int32_t, (proportion * newWidth));
			newHeight = specifiedHeight;
		}
		if (specifiedHeight <= 0) {
			proportion = specifiedWidth / ((double)newWidth);
			newHeight = $cast(int32_t, (proportion * newHeight));
			newWidth = specifiedWidth;
		}
	}
	d->width = newWidth;
	d->height = newHeight;
	return d;
}

void clinit$ImageView($Class* class$) {
	$assignStatic(ImageView::PENDING_IMAGE, "html.pendingImage"_s);
	$assignStatic(ImageView::MISSING_IMAGE, "html.missingImage"_s);
	$assignStatic(ImageView::IMAGE_CACHE_PROPERTY, "imageCache"_s);
	ImageView::sIsInc = false;
	ImageView::sIncRate = 100;
}

ImageView::ImageView() {
}

$Class* ImageView::load$($String* name, bool initialize) {
	$loadClass(ImageView, name, initialize, &_ImageView_ClassInfo_, clinit$ImageView, allocate$ImageView);
	return class$;
}

$Class* ImageView::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax