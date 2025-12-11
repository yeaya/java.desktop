#include <javax/swing/plaf/basic/BasicHTML.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Font.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/io/Reader.h>
#include <java/io/StringReader.h>
#include <java/net/URL.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/basic/BasicHTML$BasicEditorKit.h>
#include <javax/swing/plaf/basic/BasicHTML$BasicHTMLViewFactory.h>
#include <javax/swing/plaf/basic/BasicHTML$Renderer.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/ParagraphView.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/ViewFactory.h>
#include <javax/swing/text/html/HTML$Tag.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <javax/swing/text/html/HTMLEditorKit$HTMLFactory.h>
#include <jcpp.h>

#undef ACCESSIBLE_NAME_PROPERTY
#undef HTML
#undef TRUE
#undef Y_AXIS

using $Font = ::java::awt::Font;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $Reader = ::java::io::Reader;
using $StringReader = ::java::io::StringReader;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $JComponent = ::javax::swing::JComponent;
using $BasicHTML$BasicEditorKit = ::javax::swing::plaf::basic::BasicHTML$BasicEditorKit;
using $BasicHTML$BasicHTMLViewFactory = ::javax::swing::plaf::basic::BasicHTML$BasicHTMLViewFactory;
using $BasicHTML$Renderer = ::javax::swing::plaf::basic::BasicHTML$Renderer;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $ParagraphView = ::javax::swing::text::ParagraphView;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $View = ::javax::swing::text::View;
using $ViewFactory = ::javax::swing::text::ViewFactory;
using $HTML$Tag = ::javax::swing::text::html::HTML$Tag;
using $HTMLDocument = ::javax::swing::text::html::HTMLDocument;
using $HTMLEditorKit$HTMLFactory = ::javax::swing::text::html::HTMLEditorKit$HTMLFactory;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicHTML_FieldInfo_[] = {
	{"htmlDisable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicHTML, htmlDisable)},
	{"propertyKey", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BasicHTML, propertyKey)},
	{"documentBaseKey", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BasicHTML, documentBaseKey)},
	{"basicHTMLFactory", "Ljavax/swing/plaf/basic/BasicHTML$BasicEditorKit;", nullptr, $PRIVATE | $STATIC, $staticField(BasicHTML, basicHTMLFactory)},
	{"basicHTMLViewFactory", "Ljavax/swing/text/ViewFactory;", nullptr, $PRIVATE | $STATIC, $staticField(BasicHTML, basicHTMLViewFactory)},
	{"styleChanges", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicHTML, styleChanges)},
	{}
};

$MethodInfo _BasicHTML_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicHTML::*)()>(&BasicHTML::init$))},
	{"createHTMLView", "(Ljavax/swing/JComponent;Ljava/lang/String;)Ljavax/swing/text/View;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$View*(*)($JComponent*,$String*)>(&BasicHTML::createHTMLView))},
	{"getBaseline", "(Ljavax/swing/JComponent;IIII)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($JComponent*,int32_t,int32_t,int32_t,int32_t)>(&BasicHTML::getBaseline))},
	{"getBaseline", "(Ljavax/swing/text/View;II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($View*,int32_t,int32_t)>(&BasicHTML::getBaseline))},
	{"getBaseline", "(Ljavax/swing/text/View;Ljava/awt/Shape;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($View*,$Shape*)>(&BasicHTML::getBaseline))},
	{"getFactory", "()Ljavax/swing/plaf/basic/BasicHTML$BasicEditorKit;", nullptr, $STATIC, $method(static_cast<$BasicHTML$BasicEditorKit*(*)()>(&BasicHTML::getFactory))},
	{"getHTMLBaseline", "(Ljavax/swing/text/View;II)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($View*,int32_t,int32_t)>(&BasicHTML::getHTMLBaseline))},
	{"hasParagraph", "(Ljavax/swing/text/View;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($View*)>(&BasicHTML::hasParagraph))},
	{"isHTMLString", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($String*)>(&BasicHTML::isHTMLString))},
	{"updateRenderer", "(Ljavax/swing/JComponent;Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($JComponent*,$String*)>(&BasicHTML::updateRenderer))},
	{}
};

$InnerClassInfo _BasicHTML_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicHTML$Renderer", "javax.swing.plaf.basic.BasicHTML", "Renderer", $STATIC},
	{"javax.swing.plaf.basic.BasicHTML$BasicDocument", "javax.swing.plaf.basic.BasicHTML", "BasicDocument", $STATIC},
	{"javax.swing.plaf.basic.BasicHTML$BasicHTMLViewFactory", "javax.swing.plaf.basic.BasicHTML", "BasicHTMLViewFactory", $STATIC},
	{"javax.swing.plaf.basic.BasicHTML$BasicEditorKit", "javax.swing.plaf.basic.BasicHTML", "BasicEditorKit", $STATIC},
	{}
};

$ClassInfo _BasicHTML_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicHTML",
	"java.lang.Object",
	nullptr,
	_BasicHTML_FieldInfo_,
	_BasicHTML_MethodInfo_,
	nullptr,
	nullptr,
	_BasicHTML_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicHTML$Renderer,javax.swing.plaf.basic.BasicHTML$BasicDocument,javax.swing.plaf.basic.BasicHTML$BasicHTMLViewFactory,javax.swing.plaf.basic.BasicHTML$BasicEditorKit"
};

$Object* allocate$BasicHTML($Class* clazz) {
	return $of($alloc(BasicHTML));
}

$String* BasicHTML::htmlDisable = nullptr;
$String* BasicHTML::propertyKey = nullptr;
$String* BasicHTML::documentBaseKey = nullptr;
$BasicHTML$BasicEditorKit* BasicHTML::basicHTMLFactory = nullptr;
$ViewFactory* BasicHTML::basicHTMLViewFactory = nullptr;
$String* BasicHTML::styleChanges = nullptr;

void BasicHTML::init$() {
}

$View* BasicHTML::createHTMLView($JComponent* c, $String* html) {
	$init(BasicHTML);
	$useLocalCurrentObjectStackCache();
	$var($BasicHTML$BasicEditorKit, kit, getFactory());
	$var($Font, var$0, $nc(c)->getFont());
	$var($Document, doc, $nc(kit)->createDefaultDocument(var$0, $(c->getForeground())));
	$var($Object, base, $nc(c)->getClientProperty(BasicHTML::documentBaseKey));
	if ($instanceOf($URL, base)) {
		$nc(($cast($HTMLDocument, doc)))->setBase($cast($URL, base));
	}
	$var($Reader, r, $new($StringReader, html));
	try {
		kit->read(r, doc, 0);
	} catch ($Throwable& e) {
	}
	$var($ViewFactory, f, kit->getViewFactory());
	$var($View, hview, $nc(f)->create($($nc(doc)->getDefaultRootElement())));
	$var($View, v, $new($BasicHTML$Renderer, c, f, hview));
	return v;
}

int32_t BasicHTML::getHTMLBaseline($View* view, int32_t w, int32_t h) {
	$init(BasicHTML);
	if (w < 0 || h < 0) {
		$throwNew($IllegalArgumentException, "Width and height must be >= 0"_s);
	}
	if ($instanceOf($BasicHTML$Renderer, view)) {
		return getBaseline($($nc(view)->getView(0)), w, h);
	}
	return -1;
}

int32_t BasicHTML::getBaseline($JComponent* c, int32_t y, int32_t ascent, int32_t w, int32_t h) {
	$init(BasicHTML);
	$var($View, view, $cast($View, $nc(c)->getClientProperty(BasicHTML::propertyKey)));
	if (view != nullptr) {
		int32_t baseline = getHTMLBaseline(view, w, h);
		if (baseline < 0) {
			return baseline;
		}
		return y + baseline;
	}
	return y + ascent;
}

int32_t BasicHTML::getBaseline($View* view, int32_t w, int32_t h) {
	$init(BasicHTML);
	if (hasParagraph(view)) {
		$nc(view)->setSize((float)w, (float)h);
		return getBaseline(view, $$new($Rectangle, 0, 0, w, h));
	}
	return -1;
}

int32_t BasicHTML::getBaseline($View* view, $Shape* bounds$renamed) {
	$init(BasicHTML);
	$useLocalCurrentObjectStackCache();
	$var($Shape, bounds, bounds$renamed);
	if ($nc(view)->getViewCount() == 0) {
		return -1;
	}
	$var($AttributeSet, attributes, $nc($($nc(view)->getElement()))->getAttributes());
	$var($Object, name, nullptr);
	if (attributes != nullptr) {
		$init($StyleConstants);
		$assign(name, attributes->getAttribute($StyleConstants::NameAttribute));
	}
	int32_t index = 0;
	$init($HTML$Tag);
	if ($equals(name, $HTML$Tag::HTML) && view->getViewCount() > 1) {
		++index;
	}
	$assign(bounds, view->getChildAllocation(index, bounds));
	if (bounds == nullptr) {
		return -1;
	}
	$var($View, child, view->getView(index));
	if ($instanceOf($ParagraphView, view)) {
		$var($Rectangle, rect, nullptr);
		if ($instanceOf($Rectangle, bounds)) {
			$assign(rect, $cast($Rectangle, bounds));
		} else {
			$assign(rect, $nc(bounds)->getBounds());
		}
		return $nc(rect)->y + $cast(int32_t, (rect->height * $nc(child)->getAlignment($View::Y_AXIS)));
	}
	return getBaseline(child, bounds);
}

bool BasicHTML::hasParagraph($View* view) {
	$init(BasicHTML);
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($ParagraphView, view)) {
		return true;
	}
	if ($nc(view)->getViewCount() == 0) {
		return false;
	}
	$var($AttributeSet, attributes, $nc($($nc(view)->getElement()))->getAttributes());
	$var($Object, name, nullptr);
	if (attributes != nullptr) {
		$init($StyleConstants);
		$assign(name, attributes->getAttribute($StyleConstants::NameAttribute));
	}
	int32_t index = 0;
	$init($HTML$Tag);
	if ($equals(name, $HTML$Tag::HTML) && view->getViewCount() > 1) {
		index = 1;
	}
	return hasParagraph($(view->getView(index)));
}

bool BasicHTML::isHTMLString($String* s) {
	$init(BasicHTML);
	if (s != nullptr) {
		bool var$1 = (s->length() >= 6);
		bool var$0 = var$1 && (s->charAt(0) == u'<');
		if (var$0 && (s->charAt(5) == u'>')) {
			$var($String, tag, s->substring(1, 5));
			return tag->equalsIgnoreCase(BasicHTML::propertyKey);
		}
	}
	return false;
}

void BasicHTML::updateRenderer($JComponent* c, $String* text) {
	$init(BasicHTML);
	$useLocalCurrentObjectStackCache();
	$var($View, value, nullptr);
	$var($View, oldValue, $cast($View, $nc(c)->getClientProperty(BasicHTML::propertyKey)));
	$var($Boolean, htmlDisabled, $cast($Boolean, c->getClientProperty(BasicHTML::htmlDisable)));
	$init($Boolean);
	if (htmlDisabled != $Boolean::TRUE && BasicHTML::isHTMLString(text)) {
		$assign(value, BasicHTML::createHTMLView(c, text));
	}
	if (value != oldValue && oldValue != nullptr) {
		for (int32_t i = 0; i < oldValue->getViewCount(); ++i) {
			$nc($(oldValue->getView(i)))->setParent(nullptr);
		}
	}
	c->putClientProperty(BasicHTML::propertyKey, value);
	$init($AccessibleContext);
	$var($String, currentAccessibleNameProperty, $cast($String, c->getClientProperty($AccessibleContext::ACCESSIBLE_NAME_PROPERTY)));
	$var($String, previousParsedText, nullptr);
	if (currentAccessibleNameProperty != nullptr && oldValue != nullptr) {
		try {
			$assign(previousParsedText, $nc(($($nc($(oldValue->getDocument()))->getText(0, $nc($(oldValue->getDocument()))->getLength()))))->strip());
		} catch ($BadLocationException& e) {
		}
	}
	if (currentAccessibleNameProperty == nullptr || $nc(currentAccessibleNameProperty)->equals(previousParsedText)) {
		$var($String, parsedText, nullptr);
		if (value != nullptr) {
			try {
				$assign(parsedText, $nc(($($nc($(value->getDocument()))->getText(0, $nc($(value->getDocument()))->getLength()))))->strip());
			} catch ($BadLocationException& e) {
			}
		}
		c->putClientProperty($AccessibleContext::ACCESSIBLE_NAME_PROPERTY, parsedText);
	}
}

$BasicHTML$BasicEditorKit* BasicHTML::getFactory() {
	$init(BasicHTML);
	if (BasicHTML::basicHTMLFactory == nullptr) {
		$assignStatic(BasicHTML::basicHTMLViewFactory, $new($BasicHTML$BasicHTMLViewFactory));
		$assignStatic(BasicHTML::basicHTMLFactory, $new($BasicHTML$BasicEditorKit));
	}
	return BasicHTML::basicHTMLFactory;
}

BasicHTML::BasicHTML() {
}

void clinit$BasicHTML($Class* class$) {
	$assignStatic(BasicHTML::htmlDisable, "html.disable"_s);
	$assignStatic(BasicHTML::propertyKey, "html"_s);
	$assignStatic(BasicHTML::documentBaseKey, "html.base"_s);
	$assignStatic(BasicHTML::styleChanges, "p { margin-top: 0; margin-bottom: 0; margin-left: 0; margin-right: 0 }body { margin-top: 0; margin-bottom: 0; margin-left: 0; margin-right: 0 }"_s);
}

$Class* BasicHTML::load$($String* name, bool initialize) {
	$loadClass(BasicHTML, name, initialize, &_BasicHTML_ClassInfo_, clinit$BasicHTML, allocate$BasicHTML);
	return class$;
}

$Class* BasicHTML::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax