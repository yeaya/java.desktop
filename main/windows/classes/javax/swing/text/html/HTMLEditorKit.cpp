#include <javax/swing/text/html/HTMLEditorKit.h>

#include <java/awt/Component.h>
#include <java/awt/Cursor.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseListener.h>
#include <java/awt/event/MouseMotionListener.h>
#include <java/io/BufferedReader.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/io/Reader.h>
#include <java/io/StringReader.h>
#include <java/io/Writer.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URL.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Enumeration.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/Action.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/event/CaretListener.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/DefaultStyledDocument.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/Style.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/StyledDocument.h>
#include <javax/swing/text/StyledEditorKit$StyledTextAction.h>
#include <javax/swing/text/StyledEditorKit.h>
#include <javax/swing/text/TextAction.h>
#include <javax/swing/text/ViewFactory.h>
#include <javax/swing/text/html/AccessibleHTML.h>
#include <javax/swing/text/html/HTML$Attribute.h>
#include <javax/swing/text/html/HTML$Tag.h>
#include <javax/swing/text/html/HTML$UnknownTag.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <javax/swing/text/html/HTMLEditorKit$1.h>
#include <javax/swing/text/html/HTMLEditorKit$ActivateLinkAction.h>
#include <javax/swing/text/html/HTMLEditorKit$BeginAction.h>
#include <javax/swing/text/html/HTMLEditorKit$HTMLFactory.h>
#include <javax/swing/text/html/HTMLEditorKit$HTMLTextAction.h>
#include <javax/swing/text/html/HTMLEditorKit$InsertHRAction.h>
#include <javax/swing/text/html/HTMLEditorKit$InsertHTMLTextAction.h>
#include <javax/swing/text/html/HTMLEditorKit$LinkController.h>
#include <javax/swing/text/html/HTMLEditorKit$NavigateLinkAction.h>
#include <javax/swing/text/html/HTMLEditorKit$Parser.h>
#include <javax/swing/text/html/HTMLEditorKit$ParserCallback.h>
#include <javax/swing/text/html/HTMLWriter.h>
#include <javax/swing/text/html/MinimalHTMLWriter.h>
#include <javax/swing/text/html/StyleSheet.h>
#include <javax/swing/text/html/parser/ParserDelegator.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

#undef BODY
#undef BOLD_ACTION
#undef BR
#undef COLOR_ACTION
#undef COMMENT
#undef CONTENT
#undef DEFAULT_CSS
#undef DEFAULT_CURSOR
#undef DEFAULT_STYLES_KEY
#undef ENDTAG
#undef FONT_CHANGE_BIGGER
#undef FONT_CHANGE_SMALLER
#undef HAND_CURSOR
#undef HEIGHT
#undef HR
#undef IMG
#undef IMG_ALIGN_BOTTOM
#undef IMG_ALIGN_MIDDLE
#undef IMG_ALIGN_TOP
#undef IMG_BORDER
#undef INPUT
#undef INSERT_HR_HTML
#undef INSERT_OL_HTML
#undef INSERT_PRE_HTML
#undef INSERT_TABLE_HTML
#undef INSERT_UL_HTML
#undef ITALIC_ACTION
#undef LI
#undef LOGICAL_STYLE_ACTION
#undef OL
#undef PARA_INDENT_LEFT
#undef PARA_INDENT_RIGHT
#undef PRE
#undef SRC
#undef TABLE
#undef TD
#undef TR
#undef UL
#undef WIDTH

using $ActionArray = $Array<::javax::swing::Action>;
using $ElementArray = $Array<::javax::swing::text::Element>;
using $Component = ::java::awt::Component;
using $Cursor = ::java::awt::Cursor;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseListener = ::java::awt::event::MouseListener;
using $MouseMotionListener = ::java::awt::event::MouseMotionListener;
using $BufferedReader = ::java::io::BufferedReader;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $InputStreamReader = ::java::io::InputStreamReader;
using $Reader = ::java::io::Reader;
using $StringReader = ::java::io::StringReader;
using $Writer = ::java::io::Writer;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Enumeration = ::java::util::Enumeration;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AbstractAction = ::javax::swing::AbstractAction;
using $Action = ::javax::swing::Action;
using $JEditorPane = ::javax::swing::JEditorPane;
using $CaretListener = ::javax::swing::event::CaretListener;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $DefaultEditorKit = ::javax::swing::text::DefaultEditorKit;
using $DefaultStyledDocument = ::javax::swing::text::DefaultStyledDocument;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $Style = ::javax::swing::text::Style;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $StyleContext = ::javax::swing::text::StyleContext;
using $StyledDocument = ::javax::swing::text::StyledDocument;
using $StyledEditorKit = ::javax::swing::text::StyledEditorKit;
using $StyledEditorKit$StyledTextAction = ::javax::swing::text::StyledEditorKit$StyledTextAction;
using $TextAction = ::javax::swing::text::TextAction;
using $ViewFactory = ::javax::swing::text::ViewFactory;
using $AccessibleHTML = ::javax::swing::text::html::AccessibleHTML;
using $HTML$Attribute = ::javax::swing::text::html::HTML$Attribute;
using $HTML$Tag = ::javax::swing::text::html::HTML$Tag;
using $HTML$UnknownTag = ::javax::swing::text::html::HTML$UnknownTag;
using $HTMLDocument = ::javax::swing::text::html::HTMLDocument;
using $HTMLEditorKit$1 = ::javax::swing::text::html::HTMLEditorKit$1;
using $HTMLEditorKit$ActivateLinkAction = ::javax::swing::text::html::HTMLEditorKit$ActivateLinkAction;
using $HTMLEditorKit$BeginAction = ::javax::swing::text::html::HTMLEditorKit$BeginAction;
using $HTMLEditorKit$HTMLFactory = ::javax::swing::text::html::HTMLEditorKit$HTMLFactory;
using $HTMLEditorKit$HTMLTextAction = ::javax::swing::text::html::HTMLEditorKit$HTMLTextAction;
using $HTMLEditorKit$InsertHRAction = ::javax::swing::text::html::HTMLEditorKit$InsertHRAction;
using $HTMLEditorKit$InsertHTMLTextAction = ::javax::swing::text::html::HTMLEditorKit$InsertHTMLTextAction;
using $HTMLEditorKit$LinkController = ::javax::swing::text::html::HTMLEditorKit$LinkController;
using $HTMLEditorKit$NavigateLinkAction = ::javax::swing::text::html::HTMLEditorKit$NavigateLinkAction;
using $HTMLEditorKit$Parser = ::javax::swing::text::html::HTMLEditorKit$Parser;
using $HTMLEditorKit$ParserCallback = ::javax::swing::text::html::HTMLEditorKit$ParserCallback;
using $HTMLWriter = ::javax::swing::text::html::HTMLWriter;
using $MinimalHTMLWriter = ::javax::swing::text::html::MinimalHTMLWriter;
using $StyleSheet = ::javax::swing::text::html::StyleSheet;
using $ParserDelegator = ::javax::swing::text::html::parser::ParserDelegator;
using $AppContext = ::sun::awt::AppContext;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _HTMLEditorKit_FieldInfo_[] = {
	{"theEditor", "Ljavax/swing/JEditorPane;", nullptr, $PRIVATE, $field(HTMLEditorKit, theEditor)},
	{"DEFAULT_CSS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTMLEditorKit, DEFAULT_CSS)},
	{"accessibleContext", "Ljavax/accessibility/AccessibleContext;", nullptr, $PRIVATE, $field(HTMLEditorKit, accessibleContext)},
	{"MoveCursor", "Ljava/awt/Cursor;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HTMLEditorKit, MoveCursor)},
	{"DefaultCursor", "Ljava/awt/Cursor;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HTMLEditorKit, DefaultCursor)},
	{"defaultFactory", "Ljavax/swing/text/ViewFactory;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HTMLEditorKit, defaultFactory)},
	{"input", "Ljavax/swing/text/MutableAttributeSet;", nullptr, 0, $field(HTMLEditorKit, input)},
	{"DEFAULT_STYLES_KEY", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HTMLEditorKit, DEFAULT_STYLES_KEY)},
	{"linkHandler", "Ljavax/swing/text/html/HTMLEditorKit$LinkController;", nullptr, $PRIVATE, $field(HTMLEditorKit, linkHandler)},
	{"defaultParser", "Ljavax/swing/text/html/HTMLEditorKit$Parser;", nullptr, $PRIVATE | $STATIC, $staticField(HTMLEditorKit, defaultParser)},
	{"defaultCursor", "Ljava/awt/Cursor;", nullptr, $PRIVATE, $field(HTMLEditorKit, defaultCursor)},
	{"linkCursor", "Ljava/awt/Cursor;", nullptr, $PRIVATE, $field(HTMLEditorKit, linkCursor)},
	{"isAutoFormSubmission", "Z", nullptr, $PRIVATE, $field(HTMLEditorKit, isAutoFormSubmission$)},
	{"BOLD_ACTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTMLEditorKit, BOLD_ACTION)},
	{"ITALIC_ACTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTMLEditorKit, ITALIC_ACTION)},
	{"PARA_INDENT_LEFT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTMLEditorKit, PARA_INDENT_LEFT)},
	{"PARA_INDENT_RIGHT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTMLEditorKit, PARA_INDENT_RIGHT)},
	{"FONT_CHANGE_BIGGER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTMLEditorKit, FONT_CHANGE_BIGGER)},
	{"FONT_CHANGE_SMALLER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTMLEditorKit, FONT_CHANGE_SMALLER)},
	{"COLOR_ACTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTMLEditorKit, COLOR_ACTION)},
	{"LOGICAL_STYLE_ACTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTMLEditorKit, LOGICAL_STYLE_ACTION)},
	{"IMG_ALIGN_TOP", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTMLEditorKit, IMG_ALIGN_TOP)},
	{"IMG_ALIGN_MIDDLE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTMLEditorKit, IMG_ALIGN_MIDDLE)},
	{"IMG_ALIGN_BOTTOM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTMLEditorKit, IMG_ALIGN_BOTTOM)},
	{"IMG_BORDER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTMLEditorKit, IMG_BORDER)},
	{"INSERT_TABLE_HTML", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HTMLEditorKit, INSERT_TABLE_HTML)},
	{"INSERT_UL_HTML", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HTMLEditorKit, INSERT_UL_HTML)},
	{"INSERT_OL_HTML", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HTMLEditorKit, INSERT_OL_HTML)},
	{"INSERT_HR_HTML", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HTMLEditorKit, INSERT_HR_HTML)},
	{"INSERT_PRE_HTML", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HTMLEditorKit, INSERT_PRE_HTML)},
	{"nextLinkAction", "Ljavax/swing/text/html/HTMLEditorKit$NavigateLinkAction;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HTMLEditorKit, nextLinkAction)},
	{"previousLinkAction", "Ljavax/swing/text/html/HTMLEditorKit$NavigateLinkAction;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HTMLEditorKit, previousLinkAction)},
	{"activateLinkAction", "Ljavax/swing/text/html/HTMLEditorKit$ActivateLinkAction;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HTMLEditorKit, activateLinkAction)},
	{"defaultActions", "[Ljavax/swing/Action;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HTMLEditorKit, defaultActions)},
	{"foundLink", "Z", nullptr, $PRIVATE, $field(HTMLEditorKit, foundLink)},
	{"prevHypertextOffset", "I", nullptr, $PRIVATE, $field(HTMLEditorKit, prevHypertextOffset)},
	{"linkNavigationTag", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(HTMLEditorKit, linkNavigationTag)},
	{}
};

$MethodInfo _HTMLEditorKit_MethodInfo_[] = {
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HTMLEditorKit::*)()>(&HTMLEditorKit::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"createDefaultDocument", "()Ljavax/swing/text/Document;", nullptr, $PUBLIC},
	{"createInputAttributes", "(Ljavax/swing/text/Element;Ljavax/swing/text/MutableAttributeSet;)V", nullptr, $PROTECTED},
	{"deinstall", "(Ljavax/swing/JEditorPane;)V", nullptr, $PUBLIC},
	{"ensureParser", "(Ljavax/swing/text/html/HTMLDocument;)Ljavax/swing/text/html/HTMLEditorKit$Parser;", nullptr, $PRIVATE, $method(static_cast<$HTMLEditorKit$Parser*(HTMLEditorKit::*)($HTMLDocument*)>(&HTMLEditorKit::ensureParser)), "java.io.IOException"},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC},
	{"getActions", "()[Ljavax/swing/Action;", nullptr, $PUBLIC},
	{"getAttrValue", "(Ljavax/swing/text/AttributeSet;Ljavax/swing/text/html/HTML$Attribute;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Object*(*)($AttributeSet*,$HTML$Attribute*)>(&HTMLEditorKit::getAttrValue))},
	{"getBodyElementStart", "(Ljavax/swing/text/JTextComponent;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($JTextComponent*)>(&HTMLEditorKit::getBodyElementStart))},
	{"getContentType", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDefaultCursor", "()Ljava/awt/Cursor;", nullptr, $PUBLIC},
	{"getInputAttributes", "()Ljavax/swing/text/MutableAttributeSet;", nullptr, $PUBLIC},
	{"getLinkCursor", "()Ljava/awt/Cursor;", nullptr, $PUBLIC},
	{"getParser", "()Ljavax/swing/text/html/HTMLEditorKit$Parser;", nullptr, $PROTECTED},
	{"getResourceAsStream", "(Ljava/lang/String;)Ljava/io/InputStream;", nullptr, $STATIC, $method(static_cast<$InputStream*(*)($String*)>(&HTMLEditorKit::getResourceAsStream))},
	{"getStyleSheet", "()Ljavax/swing/text/html/StyleSheet;", nullptr, $PUBLIC},
	{"getViewFactory", "()Ljavax/swing/text/ViewFactory;", nullptr, $PUBLIC},
	{"insertHTML", "(Ljavax/swing/text/html/HTMLDocument;ILjava/lang/String;IILjavax/swing/text/html/HTML$Tag;)V", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException,java.io.IOException"},
	{"install", "(Ljavax/swing/JEditorPane;)V", nullptr, $PUBLIC},
	{"isAutoFormSubmission", "()Z", nullptr, $PUBLIC},
	{"read", "(Ljava/io/Reader;Ljavax/swing/text/Document;I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException,javax.swing.text.BadLocationException"},
	{"setAutoFormSubmission", "(Z)V", nullptr, $PUBLIC},
	{"setDefaultCursor", "(Ljava/awt/Cursor;)V", nullptr, $PUBLIC},
	{"setLinkCursor", "(Ljava/awt/Cursor;)V", nullptr, $PUBLIC},
	{"setStyleSheet", "(Ljavax/swing/text/html/StyleSheet;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"write", "(Ljava/io/Writer;Ljavax/swing/text/Document;II)V", nullptr, $PUBLIC, nullptr, "java.io.IOException,javax.swing.text.BadLocationException"},
	{}
};

$InnerClassInfo _HTMLEditorKit_InnerClassesInfo_[] = {
	{"javax.swing.text.html.HTMLEditorKit$BeginAction", "javax.swing.text.html.HTMLEditorKit", "BeginAction", $STATIC},
	{"javax.swing.text.html.HTMLEditorKit$ActivateLinkAction", "javax.swing.text.html.HTMLEditorKit", "ActivateLinkAction", $STATIC},
	{"javax.swing.text.html.HTMLEditorKit$NavigateLinkAction", "javax.swing.text.html.HTMLEditorKit", "NavigateLinkAction", $STATIC},
	{"javax.swing.text.html.HTMLEditorKit$InsertHRAction", "javax.swing.text.html.HTMLEditorKit", "InsertHRAction", $STATIC},
	{"javax.swing.text.html.HTMLEditorKit$InsertHTMLTextAction", "javax.swing.text.html.HTMLEditorKit", "InsertHTMLTextAction", $PUBLIC | $STATIC},
	{"javax.swing.text.html.HTMLEditorKit$HTMLTextAction", "javax.swing.text.html.HTMLEditorKit", "HTMLTextAction", $PUBLIC | $STATIC | $ABSTRACT},
	{"javax.swing.text.html.HTMLEditorKit$HTMLFactory", "javax.swing.text.html.HTMLEditorKit", "HTMLFactory", $PUBLIC | $STATIC},
	{"javax.swing.text.html.HTMLEditorKit$ParserCallback", "javax.swing.text.html.HTMLEditorKit", "ParserCallback", $PUBLIC | $STATIC},
	{"javax.swing.text.html.HTMLEditorKit$Parser", "javax.swing.text.html.HTMLEditorKit", "Parser", $PUBLIC | $STATIC | $ABSTRACT},
	{"javax.swing.text.html.HTMLEditorKit$LinkController", "javax.swing.text.html.HTMLEditorKit", "LinkController", $PUBLIC | $STATIC},
	{"javax.swing.text.html.HTMLEditorKit$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HTMLEditorKit_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.html.HTMLEditorKit",
	"javax.swing.text.StyledEditorKit",
	"javax.accessibility.Accessible",
	_HTMLEditorKit_FieldInfo_,
	_HTMLEditorKit_MethodInfo_,
	nullptr,
	nullptr,
	_HTMLEditorKit_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.text.html.HTMLEditorKit$BeginAction,javax.swing.text.html.HTMLEditorKit$ActivateLinkAction,javax.swing.text.html.HTMLEditorKit$NavigateLinkAction,javax.swing.text.html.HTMLEditorKit$NavigateLinkAction$FocusHighlightPainter,javax.swing.text.html.HTMLEditorKit$InsertHRAction,javax.swing.text.html.HTMLEditorKit$InsertHTMLTextAction,javax.swing.text.html.HTMLEditorKit$HTMLTextAction,javax.swing.text.html.HTMLEditorKit$HTMLFactory,javax.swing.text.html.HTMLEditorKit$HTMLFactory$BodyBlockView,javax.swing.text.html.HTMLEditorKit$HTMLFactory$1,javax.swing.text.html.HTMLEditorKit$ParserCallback,javax.swing.text.html.HTMLEditorKit$Parser,javax.swing.text.html.HTMLEditorKit$LinkController,javax.swing.text.html.HTMLEditorKit$1"
};

$Object* allocate$HTMLEditorKit($Class* clazz) {
	return $of($alloc(HTMLEditorKit));
}

int32_t HTMLEditorKit::hashCode() {
	 return this->$StyledEditorKit::hashCode();
}

bool HTMLEditorKit::equals(Object$* arg0) {
	 return this->$StyledEditorKit::equals(arg0);
}

$String* HTMLEditorKit::toString() {
	 return this->$StyledEditorKit::toString();
}

void HTMLEditorKit::finalize() {
	this->$StyledEditorKit::finalize();
}


$String* HTMLEditorKit::DEFAULT_CSS = nullptr;
$Cursor* HTMLEditorKit::MoveCursor = nullptr;
$Cursor* HTMLEditorKit::DefaultCursor = nullptr;

$ViewFactory* HTMLEditorKit::defaultFactory = nullptr;
$Object* HTMLEditorKit::DEFAULT_STYLES_KEY = nullptr;
$HTMLEditorKit$Parser* HTMLEditorKit::defaultParser = nullptr;

$String* HTMLEditorKit::BOLD_ACTION = nullptr;

$String* HTMLEditorKit::ITALIC_ACTION = nullptr;

$String* HTMLEditorKit::PARA_INDENT_LEFT = nullptr;

$String* HTMLEditorKit::PARA_INDENT_RIGHT = nullptr;

$String* HTMLEditorKit::FONT_CHANGE_BIGGER = nullptr;

$String* HTMLEditorKit::FONT_CHANGE_SMALLER = nullptr;

$String* HTMLEditorKit::COLOR_ACTION = nullptr;

$String* HTMLEditorKit::LOGICAL_STYLE_ACTION = nullptr;

$String* HTMLEditorKit::IMG_ALIGN_TOP = nullptr;

$String* HTMLEditorKit::IMG_ALIGN_MIDDLE = nullptr;

$String* HTMLEditorKit::IMG_ALIGN_BOTTOM = nullptr;

$String* HTMLEditorKit::IMG_BORDER = nullptr;

$String* HTMLEditorKit::INSERT_TABLE_HTML = nullptr;

$String* HTMLEditorKit::INSERT_UL_HTML = nullptr;

$String* HTMLEditorKit::INSERT_OL_HTML = nullptr;

$String* HTMLEditorKit::INSERT_HR_HTML = nullptr;

$String* HTMLEditorKit::INSERT_PRE_HTML = nullptr;
$HTMLEditorKit$NavigateLinkAction* HTMLEditorKit::nextLinkAction = nullptr;
$HTMLEditorKit$NavigateLinkAction* HTMLEditorKit::previousLinkAction = nullptr;
$HTMLEditorKit$ActivateLinkAction* HTMLEditorKit::activateLinkAction = nullptr;
$ActionArray* HTMLEditorKit::defaultActions = nullptr;

void HTMLEditorKit::init$() {
	$StyledEditorKit::init$();
	$set(this, linkHandler, $new($HTMLEditorKit$LinkController));
	$set(this, defaultCursor, HTMLEditorKit::DefaultCursor);
	$set(this, linkCursor, HTMLEditorKit::MoveCursor);
	this->isAutoFormSubmission$ = true;
	this->foundLink = false;
	this->prevHypertextOffset = -1;
}

$String* HTMLEditorKit::getContentType() {
	return "text/html"_s;
}

$ViewFactory* HTMLEditorKit::getViewFactory() {
	return HTMLEditorKit::defaultFactory;
}

$Document* HTMLEditorKit::createDefaultDocument() {
	$useLocalCurrentObjectStackCache();
	$var($StyleSheet, styles, getStyleSheet());
	$var($StyleSheet, ss, $new($StyleSheet));
	ss->addStyleSheet(styles);
	$var($HTMLDocument, doc, $new($HTMLDocument, ss));
	doc->setParser($(getParser()));
	doc->setAsynchronousLoadPriority(4);
	doc->setTokenThreshold(100);
	return static_cast<$Document*>(static_cast<$AbstractDocument*>(static_cast<$DefaultStyledDocument*>(doc)));
}

$HTMLEditorKit$Parser* HTMLEditorKit::ensureParser($HTMLDocument* doc) {
	$var($HTMLEditorKit$Parser, p, $nc(doc)->getParser());
	if (p == nullptr) {
		$assign(p, getParser());
	}
	if (p == nullptr) {
		$throwNew($IOException, "Can\'t load parser"_s);
	}
	return p;
}

void HTMLEditorKit::read($Reader* in, $Document* doc, int32_t pos) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($HTMLDocument, doc)) {
		$var($HTMLDocument, hdoc, $cast($HTMLDocument, doc));
		if (pos > $nc(doc)->getLength()) {
			$throwNew($BadLocationException, "Invalid location"_s, pos);
		}
		$var($HTMLEditorKit$Parser, p, ensureParser(hdoc));
		$var($HTMLEditorKit$ParserCallback, receiver, $nc(hdoc)->getReader(pos));
		$var($Boolean, ignoreCharset, $cast($Boolean, $nc(doc)->getProperty("IgnoreCharsetDirective"_s)));
		$nc(p)->parse(in, receiver, (ignoreCharset == nullptr) ? false : $nc(ignoreCharset)->booleanValue());
		$nc(receiver)->flush();
	} else {
		$StyledEditorKit::read(in, doc, pos);
	}
}

void HTMLEditorKit::insertHTML($HTMLDocument* doc, int32_t offset, $String* html, int32_t popDepth, int32_t pushDepth, $HTML$Tag* insertTag) {
	$useLocalCurrentObjectStackCache();
	if (offset > $nc(doc)->getLength()) {
		$throwNew($BadLocationException, "Invalid location"_s, offset);
	}
	$var($HTMLEditorKit$Parser, p, ensureParser(doc));
	$var($HTMLEditorKit$ParserCallback, receiver, $nc(doc)->getReader(offset, popDepth, pushDepth, insertTag));
	$var($Boolean, ignoreCharset, $cast($Boolean, doc->getProperty("IgnoreCharsetDirective"_s)));
	$var($Reader, var$0, static_cast<$Reader*>($new($StringReader, html)));
	$var($HTMLEditorKit$ParserCallback, var$1, receiver);
	$nc(p)->parse(var$0, var$1, (ignoreCharset == nullptr) ? false : $nc(ignoreCharset)->booleanValue());
	$nc(receiver)->flush();
}

void HTMLEditorKit::write($Writer* out, $Document* doc, int32_t pos, int32_t len) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($HTMLDocument, doc)) {
		$var($HTMLWriter, w, $new($HTMLWriter, out, $cast($HTMLDocument, doc), pos, len));
		w->write();
	} else if ($instanceOf($StyledDocument, doc)) {
		$var($MinimalHTMLWriter, w, $new($MinimalHTMLWriter, out, $cast($StyledDocument, doc), pos, len));
		w->write();
	} else {
		$StyledEditorKit::write(out, doc, pos, len);
	}
}

void HTMLEditorKit::install($JEditorPane* c) {
	$nc(c)->addMouseListener(this->linkHandler);
	c->addMouseMotionListener(this->linkHandler);
	c->addCaretListener(HTMLEditorKit::nextLinkAction);
	$StyledEditorKit::install(c);
	$set(this, theEditor, c);
}

void HTMLEditorKit::deinstall($JEditorPane* c) {
	$nc(c)->removeMouseListener(this->linkHandler);
	c->removeMouseMotionListener(this->linkHandler);
	c->removeCaretListener(HTMLEditorKit::nextLinkAction);
	$StyledEditorKit::deinstall(c);
	$set(this, theEditor, nullptr);
}

void HTMLEditorKit::setStyleSheet($StyleSheet* s) {
	$useLocalCurrentObjectStackCache();
	if (s == nullptr) {
		$nc($($AppContext::getAppContext()))->remove(HTMLEditorKit::DEFAULT_STYLES_KEY);
	} else {
		$nc($($AppContext::getAppContext()))->put(HTMLEditorKit::DEFAULT_STYLES_KEY, s);
	}
}

$StyleSheet* HTMLEditorKit::getStyleSheet() {
	$useLocalCurrentObjectStackCache();
	$var($AppContext, appContext, $AppContext::getAppContext());
	$var($StyleSheet, defaultStyles, $cast($StyleSheet, $nc(appContext)->get(HTMLEditorKit::DEFAULT_STYLES_KEY)));
	if (defaultStyles == nullptr) {
		$assign(defaultStyles, $new($StyleSheet));
		appContext->put(HTMLEditorKit::DEFAULT_STYLES_KEY, defaultStyles);
		try {
			$var($InputStream, is, HTMLEditorKit::getResourceAsStream(HTMLEditorKit::DEFAULT_CSS));
			$var($Reader, r, $new($BufferedReader, $$new($InputStreamReader, is, "ISO-8859-1"_s)));
			defaultStyles->loadRules(r, nullptr);
			r->close();
		} catch ($Throwable&) {
			$catch();
		}
	}
	return defaultStyles;
}

$InputStream* HTMLEditorKit::getResourceAsStream($String* name) {
	$init(HTMLEditorKit);
	$beforeCallerSensitive();
	return $cast($InputStream, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($HTMLEditorKit$1, name))));
}

$ActionArray* HTMLEditorKit::getActions() {
	return $TextAction::augmentList($($StyledEditorKit::getActions()), HTMLEditorKit::defaultActions);
}

void HTMLEditorKit::createInputAttributes($Element* element, $MutableAttributeSet* set) {
	$useLocalCurrentObjectStackCache();
	$nc(set)->removeAttributes(static_cast<$AttributeSet*>(set));
	set->addAttributes($($nc(element)->getAttributes()));
	$init($StyleConstants);
	set->removeAttribute($StyleConstants::ComposedTextAttribute);
	$var($Object, o, set->getAttribute($StyleConstants::NameAttribute));
	if ($instanceOf($HTML$Tag, o)) {
		$var($HTML$Tag, tag, $cast($HTML$Tag, o));
		$init($HTML$Tag);
		if (tag == $HTML$Tag::IMG) {
			$init($HTML$Attribute);
			set->removeAttribute($HTML$Attribute::SRC);
			set->removeAttribute($HTML$Attribute::HEIGHT);
			set->removeAttribute($HTML$Attribute::WIDTH);
			set->addAttribute($StyleConstants::NameAttribute, $HTML$Tag::CONTENT);
		} else {
			if (tag == $HTML$Tag::HR || tag == $HTML$Tag::BR) {
				set->addAttribute($StyleConstants::NameAttribute, $HTML$Tag::CONTENT);
			} else {
				if (tag == $HTML$Tag::COMMENT) {
					set->addAttribute($StyleConstants::NameAttribute, $HTML$Tag::CONTENT);
					$init($HTML$Attribute);
					set->removeAttribute($HTML$Attribute::COMMENT);
				} else {
					if (tag == $HTML$Tag::INPUT) {
						set->addAttribute($StyleConstants::NameAttribute, $HTML$Tag::CONTENT);
						set->removeAttribute($HTML$Tag::INPUT);
					} else if ($instanceOf($HTML$UnknownTag, tag)) {
						set->addAttribute($StyleConstants::NameAttribute, $HTML$Tag::CONTENT);
						$init($HTML$Attribute);
						set->removeAttribute($HTML$Attribute::ENDTAG);
					}
				}
			}
		}
	}
}

$MutableAttributeSet* HTMLEditorKit::getInputAttributes() {
	if (this->input == nullptr) {
		$set(this, input, $nc($(getStyleSheet()))->addStyle(nullptr, nullptr));
	}
	return this->input;
}

void HTMLEditorKit::setDefaultCursor($Cursor* cursor) {
	$set(this, defaultCursor, cursor);
}

$Cursor* HTMLEditorKit::getDefaultCursor() {
	return this->defaultCursor;
}

void HTMLEditorKit::setLinkCursor($Cursor* cursor) {
	$set(this, linkCursor, cursor);
}

$Cursor* HTMLEditorKit::getLinkCursor() {
	return this->linkCursor;
}

bool HTMLEditorKit::isAutoFormSubmission() {
	return this->isAutoFormSubmission$;
}

void HTMLEditorKit::setAutoFormSubmission(bool isAuto) {
	this->isAutoFormSubmission$ = isAuto;
}

$Object* HTMLEditorKit::clone() {
	$var(HTMLEditorKit, o, $cast(HTMLEditorKit, $StyledEditorKit::clone()));
	if (o != nullptr) {
		$set(o, input, nullptr);
		$set(o, linkHandler, $new($HTMLEditorKit$LinkController));
	}
	return $of(o);
}

$HTMLEditorKit$Parser* HTMLEditorKit::getParser() {
	if (HTMLEditorKit::defaultParser == nullptr) {
		$assignStatic(HTMLEditorKit::defaultParser, $new($ParserDelegator));
	}
	return HTMLEditorKit::defaultParser;
}

$AccessibleContext* HTMLEditorKit::getAccessibleContext() {
	if (this->theEditor == nullptr) {
		return nullptr;
	}
	if (this->accessibleContext == nullptr) {
		$var($AccessibleHTML, a, $new($AccessibleHTML, this->theEditor));
		$set(this, accessibleContext, a->getAccessibleContext());
	}
	return this->accessibleContext;
}

$Object* HTMLEditorKit::getAttrValue($AttributeSet* attr, $HTML$Attribute* key) {
	$init(HTMLEditorKit);
	$useLocalCurrentObjectStackCache();
	$var($Enumeration, names, $nc(attr)->getAttributeNames());
	while ($nc(names)->hasMoreElements()) {
		$var($Object, nextKey, names->nextElement());
		$var($Object, nextVal, attr->getAttribute(nextKey));
		if ($instanceOf($AttributeSet, nextVal)) {
			$var($Object, value, getAttrValue($cast($AttributeSet, nextVal), key));
			if (value != nullptr) {
				return $of(value);
			}
		} else if ($equals(nextKey, key)) {
			return $of(nextVal);
		}
	}
	return $of(nullptr);
}

int32_t HTMLEditorKit::getBodyElementStart($JTextComponent* comp) {
	$init(HTMLEditorKit);
	$useLocalCurrentObjectStackCache();
	$var($Element, rootElement, $nc($($nc($($nc(comp)->getDocument()))->getRootElements()))->get(0));
	for (int32_t i = 0; i < $nc(rootElement)->getElementCount(); ++i) {
		$var($Element, currElement, rootElement->getElement(i));
		if ("body"_s->equals($($nc(currElement)->getName()))) {
			return $nc(currElement)->getStartOffset();
		}
	}
	return 0;
}

void clinit$HTMLEditorKit($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(HTMLEditorKit::DEFAULT_CSS, "default.css"_s);
	$assignStatic(HTMLEditorKit::BOLD_ACTION, "html-bold-action"_s);
	$assignStatic(HTMLEditorKit::ITALIC_ACTION, "html-italic-action"_s);
	$assignStatic(HTMLEditorKit::PARA_INDENT_LEFT, "html-para-indent-left"_s);
	$assignStatic(HTMLEditorKit::PARA_INDENT_RIGHT, "html-para-indent-right"_s);
	$assignStatic(HTMLEditorKit::FONT_CHANGE_BIGGER, "html-font-bigger"_s);
	$assignStatic(HTMLEditorKit::FONT_CHANGE_SMALLER, "html-font-smaller"_s);
	$assignStatic(HTMLEditorKit::COLOR_ACTION, "html-color-action"_s);
	$assignStatic(HTMLEditorKit::LOGICAL_STYLE_ACTION, "html-logical-style-action"_s);
	$assignStatic(HTMLEditorKit::IMG_ALIGN_TOP, "html-image-align-top"_s);
	$assignStatic(HTMLEditorKit::IMG_ALIGN_MIDDLE, "html-image-align-middle"_s);
	$assignStatic(HTMLEditorKit::IMG_ALIGN_BOTTOM, "html-image-align-bottom"_s);
	$assignStatic(HTMLEditorKit::IMG_BORDER, "html-image-border"_s);
	$assignStatic(HTMLEditorKit::INSERT_TABLE_HTML, "<table border=1><tr><td></td></tr></table>"_s);
	$assignStatic(HTMLEditorKit::INSERT_UL_HTML, "<ul><li></li></ul>"_s);
	$assignStatic(HTMLEditorKit::INSERT_OL_HTML, "<ol><li></li></ol>"_s);
	$assignStatic(HTMLEditorKit::INSERT_HR_HTML, "<hr>"_s);
	$assignStatic(HTMLEditorKit::INSERT_PRE_HTML, "<pre></pre>"_s);
	$assignStatic(HTMLEditorKit::MoveCursor, $Cursor::getPredefinedCursor($Cursor::HAND_CURSOR));
	$assignStatic(HTMLEditorKit::DefaultCursor, $Cursor::getPredefinedCursor($Cursor::DEFAULT_CURSOR));
	$assignStatic(HTMLEditorKit::defaultFactory, $new($HTMLEditorKit$HTMLFactory));
	$assignStatic(HTMLEditorKit::DEFAULT_STYLES_KEY, $new($Object));
	$assignStatic(HTMLEditorKit::defaultParser, nullptr);
	$assignStatic(HTMLEditorKit::nextLinkAction, $new($HTMLEditorKit$NavigateLinkAction, "next-link-action"_s));
	$assignStatic(HTMLEditorKit::previousLinkAction, $new($HTMLEditorKit$NavigateLinkAction, "previous-link-action"_s));
	$assignStatic(HTMLEditorKit::activateLinkAction, $new($HTMLEditorKit$ActivateLinkAction, "activate-link-action"_s));
		$init($HTML$Tag);
		$init($DefaultEditorKit);
	$assignStatic(HTMLEditorKit::defaultActions, $new($ActionArray, {
		static_cast<$Action*>($$new($HTMLEditorKit$InsertHTMLTextAction, "InsertTable"_s, HTMLEditorKit::INSERT_TABLE_HTML, $HTML$Tag::BODY, $HTML$Tag::TABLE)),
		static_cast<$Action*>($$new($HTMLEditorKit$InsertHTMLTextAction, "InsertTableRow"_s, HTMLEditorKit::INSERT_TABLE_HTML, $HTML$Tag::TABLE, $HTML$Tag::TR, $HTML$Tag::BODY, $HTML$Tag::TABLE)),
		static_cast<$Action*>($$new($HTMLEditorKit$InsertHTMLTextAction, "InsertTableDataCell"_s, HTMLEditorKit::INSERT_TABLE_HTML, $HTML$Tag::TR, $HTML$Tag::TD, $HTML$Tag::BODY, $HTML$Tag::TABLE)),
		static_cast<$Action*>($$new($HTMLEditorKit$InsertHTMLTextAction, "InsertUnorderedList"_s, HTMLEditorKit::INSERT_UL_HTML, $HTML$Tag::BODY, $HTML$Tag::UL)),
		static_cast<$Action*>($$new($HTMLEditorKit$InsertHTMLTextAction, "InsertUnorderedListItem"_s, HTMLEditorKit::INSERT_UL_HTML, $HTML$Tag::UL, $HTML$Tag::LI, $HTML$Tag::BODY, $HTML$Tag::UL)),
		static_cast<$Action*>($$new($HTMLEditorKit$InsertHTMLTextAction, "InsertOrderedList"_s, HTMLEditorKit::INSERT_OL_HTML, $HTML$Tag::BODY, $HTML$Tag::OL)),
		static_cast<$Action*>($$new($HTMLEditorKit$InsertHTMLTextAction, "InsertOrderedListItem"_s, HTMLEditorKit::INSERT_OL_HTML, $HTML$Tag::OL, $HTML$Tag::LI, $HTML$Tag::BODY, $HTML$Tag::OL)),
		static_cast<$Action*>($$new($HTMLEditorKit$InsertHRAction)),
		static_cast<$Action*>($$new($HTMLEditorKit$InsertHTMLTextAction, "InsertPre"_s, HTMLEditorKit::INSERT_PRE_HTML, $HTML$Tag::BODY, $HTML$Tag::PRE)),
		static_cast<$Action*>(HTMLEditorKit::nextLinkAction),
		static_cast<$Action*>(HTMLEditorKit::previousLinkAction),
		static_cast<$Action*>(HTMLEditorKit::activateLinkAction),
		static_cast<$Action*>($$new($HTMLEditorKit$BeginAction, $DefaultEditorKit::beginAction, false)),
		static_cast<$Action*>($$new($HTMLEditorKit$BeginAction, $DefaultEditorKit::selectionBeginAction, true))
	}));
}

HTMLEditorKit::HTMLEditorKit() {
}

$Class* HTMLEditorKit::load$($String* name, bool initialize) {
	$loadClass(HTMLEditorKit, name, initialize, &_HTMLEditorKit_ClassInfo_, clinit$HTMLEditorKit, allocate$HTMLEditorKit);
	return class$;
}

$Class* HTMLEditorKit::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax