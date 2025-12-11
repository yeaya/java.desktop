#include <javax/swing/text/html/HTMLDocument.h>

#include <java/io/IOException.h>
#include <java/io/Reader.h>
#include <java/io/StringReader.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/Math.h>
#include <java/net/URL.h>
#include <java/util/Enumeration.h>
#include <java/util/HashMap.h>
#include <java/util/Hashtable.h>
#include <javax/swing/event/DocumentEvent$EventType.h>
#include <javax/swing/event/DocumentEvent.h>
#include <javax/swing/event/UndoableEditEvent.h>
#include <javax/swing/text/AbstractDocument$AbstractElement.h>
#include <javax/swing/text/AbstractDocument$AttributeContext.h>
#include <javax/swing/text/AbstractDocument$BranchElement.h>
#include <javax/swing/text/AbstractDocument$Content.h>
#include <javax/swing/text/AbstractDocument$DefaultDocumentEvent.h>
#include <javax/swing/text/AbstractDocument$ElementEdit.h>
#include <javax/swing/text/AbstractDocument$LeafElement.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/DefaultStyledDocument$AttributeUndoableEdit.h>
#include <javax/swing/text/DefaultStyledDocument$ElementSpec.h>
#include <javax/swing/text/DefaultStyledDocument.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/ElementIterator.h>
#include <javax/swing/text/GapContent.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/SimpleAttributeSet.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/StyleContext.h>
#include <javax/swing/text/html/CSS$Attribute.h>
#include <javax/swing/text/html/HTML$Attribute.h>
#include <javax/swing/text/html/HTML$Tag.h>
#include <javax/swing/text/html/HTMLDocument$BlockElement.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader.h>
#include <javax/swing/text/html/HTMLDocument$Iterator.h>
#include <javax/swing/text/html/HTMLDocument$LeafIterator.h>
#include <javax/swing/text/html/HTMLDocument$RunElement.h>
#include <javax/swing/text/html/HTMLEditorKit$Parser.h>
#include <javax/swing/text/html/HTMLEditorKit$ParserCallback.h>
#include <javax/swing/text/html/HTMLEditorKit.h>
#include <javax/swing/text/html/HTMLFrameHyperlinkEvent.h>
#include <javax/swing/text/html/Map.h>
#include <javax/swing/text/html/StyleSheet.h>
#include <javax/swing/undo/AbstractUndoableEdit.h>
#include <javax/swing/undo/CompoundEdit.h>
#include <javax/swing/undo/UndoableEdit.h>
#include <jcpp.h>

#undef BODY
#undef BUFFER_SIZE_DEFAULT
#undef CHANGE
#undef CONTENT
#undef FRAME
#undef HTML
#undef ID
#undef MAP_PROPERTY
#undef MARGIN_TOP
#undef MAX_VALUE
#undef NAME
#undef NEWLINE
#undef P
#undef REMOVE
#undef SRC

using $DefaultStyledDocument$ElementSpecArray = $Array<::javax::swing::text::DefaultStyledDocument$ElementSpec>;
using $ElementArray = $Array<::javax::swing::text::Element>;
using $IOException = ::java::io::IOException;
using $Reader = ::java::io::Reader;
using $StringReader = ::java::io::StringReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $Enumeration = ::java::util::Enumeration;
using $Hashtable = ::java::util::Hashtable;
using $DocumentEvent = ::javax::swing::event::DocumentEvent;
using $DocumentEvent$EventType = ::javax::swing::event::DocumentEvent$EventType;
using $UndoableEditEvent = ::javax::swing::event::UndoableEditEvent;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $AbstractDocument$AbstractElement = ::javax::swing::text::AbstractDocument$AbstractElement;
using $AbstractDocument$BranchElement = ::javax::swing::text::AbstractDocument$BranchElement;
using $AbstractDocument$Content = ::javax::swing::text::AbstractDocument$Content;
using $AbstractDocument$DefaultDocumentEvent = ::javax::swing::text::AbstractDocument$DefaultDocumentEvent;
using $AbstractDocument$ElementEdit = ::javax::swing::text::AbstractDocument$ElementEdit;
using $AbstractDocument$LeafElement = ::javax::swing::text::AbstractDocument$LeafElement;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $DefaultStyledDocument = ::javax::swing::text::DefaultStyledDocument;
using $DefaultStyledDocument$AttributeUndoableEdit = ::javax::swing::text::DefaultStyledDocument$AttributeUndoableEdit;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $ElementIterator = ::javax::swing::text::ElementIterator;
using $GapContent = ::javax::swing::text::GapContent;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $SimpleAttributeSet = ::javax::swing::text::SimpleAttributeSet;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $StyleContext = ::javax::swing::text::StyleContext;
using $CSS$Attribute = ::javax::swing::text::html::CSS$Attribute;
using $HTML$Attribute = ::javax::swing::text::html::HTML$Attribute;
using $HTML$Tag = ::javax::swing::text::html::HTML$Tag;
using $HTMLDocument$BlockElement = ::javax::swing::text::html::HTMLDocument$BlockElement;
using $HTMLDocument$HTMLReader = ::javax::swing::text::html::HTMLDocument$HTMLReader;
using $HTMLDocument$Iterator = ::javax::swing::text::html::HTMLDocument$Iterator;
using $HTMLDocument$LeafIterator = ::javax::swing::text::html::HTMLDocument$LeafIterator;
using $HTMLDocument$RunElement = ::javax::swing::text::html::HTMLDocument$RunElement;
using $HTMLEditorKit = ::javax::swing::text::html::HTMLEditorKit;
using $HTMLEditorKit$Parser = ::javax::swing::text::html::HTMLEditorKit$Parser;
using $HTMLEditorKit$ParserCallback = ::javax::swing::text::html::HTMLEditorKit$ParserCallback;
using $HTMLFrameHyperlinkEvent = ::javax::swing::text::html::HTMLFrameHyperlinkEvent;
using $Map = ::javax::swing::text::html::Map;
using $StyleSheet = ::javax::swing::text::html::StyleSheet;
using $AbstractUndoableEdit = ::javax::swing::undo::AbstractUndoableEdit;
using $CompoundEdit = ::javax::swing::undo::CompoundEdit;
using $UndoableEdit = ::javax::swing::undo::UndoableEdit;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _HTMLDocument_FieldInfo_[] = {
	{"frameDocument", "Z", nullptr, $PRIVATE, $field(HTMLDocument, frameDocument)},
	{"preservesUnknownTags", "Z", nullptr, $PRIVATE, $field(HTMLDocument, preservesUnknownTags)},
	{"radioButtonGroupsMap", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljavax/swing/ButtonGroup;>;", $PRIVATE, $field(HTMLDocument, radioButtonGroupsMap)},
	{"TokenThreshold", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(HTMLDocument, TokenThreshold)},
	{"MaxThreshold", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(HTMLDocument, MaxThreshold)},
	{"StepThreshold", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(HTMLDocument, StepThreshold)},
	{"AdditionalComments", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTMLDocument, AdditionalComments)},
	{"StyleType", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(HTMLDocument, StyleType)},
	{"base", "Ljava/net/URL;", nullptr, 0, $field(HTMLDocument, base)},
	{"hasBaseTag", "Z", nullptr, 0, $field(HTMLDocument, hasBaseTag$)},
	{"baseTarget", "Ljava/lang/String;", nullptr, $PRIVATE, $field(HTMLDocument, baseTarget)},
	{"parser", "Ljavax/swing/text/html/HTMLEditorKit$Parser;", nullptr, $PRIVATE, $field(HTMLDocument, parser)},
	{"contentAttributeSet", "Ljavax/swing/text/AttributeSet;", nullptr, $PRIVATE | $STATIC, $staticField(HTMLDocument, contentAttributeSet)},
	{"MAP_PROPERTY", "Ljava/lang/String;", nullptr, $STATIC, $staticField(HTMLDocument, MAP_PROPERTY)},
	{"NEWLINE", "[C", nullptr, $PRIVATE | $STATIC, $staticField(HTMLDocument, NEWLINE)},
	{"insertInBody", "Z", nullptr, $PRIVATE, $field(HTMLDocument, insertInBody)},
	{"I18NProperty", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HTMLDocument, I18NProperty)},
	{}
};

$MethodInfo _HTMLDocument_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HTMLDocument::*)()>(&HTMLDocument::init$))},
	{"<init>", "(Ljavax/swing/text/html/StyleSheet;)V", nullptr, $PUBLIC, $method(static_cast<void(HTMLDocument::*)($StyleSheet*)>(&HTMLDocument::init$))},
	{"<init>", "(Ljavax/swing/text/AbstractDocument$Content;Ljavax/swing/text/html/StyleSheet;)V", nullptr, $PUBLIC, $method(static_cast<void(HTMLDocument::*)($AbstractDocument$Content*,$StyleSheet*)>(&HTMLDocument::init$))},
	{"access$000", "(Ljavax/swing/text/html/HTMLDocument;Ljavax/swing/text/AbstractDocument$DefaultDocumentEvent;)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(HTMLDocument*,$AbstractDocument$DefaultDocumentEvent*)>(&HTMLDocument::access$000))},
	{"access$100", "(Ljavax/swing/text/html/HTMLDocument;)Ljavax/swing/text/AbstractDocument$Content;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$AbstractDocument$Content*(*)(HTMLDocument*)>(&HTMLDocument::access$100))},
	{"access$200", "(Ljavax/swing/text/html/HTMLDocument;Ljavax/swing/text/AbstractDocument$DefaultDocumentEvent;)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(HTMLDocument*,$AbstractDocument$DefaultDocumentEvent*)>(&HTMLDocument::access$200))},
	{"access$300", "(Ljavax/swing/text/html/HTMLDocument;Ljavax/swing/event/DocumentEvent;)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(HTMLDocument*,$DocumentEvent*)>(&HTMLDocument::access$300))},
	{"addMap", "(Ljavax/swing/text/html/Map;)V", nullptr, 0},
	{"create", "([Ljavax/swing/text/DefaultStyledDocument$ElementSpec;)V", nullptr, $PROTECTED},
	{"createBranchElement", "(Ljavax/swing/text/Element;Ljavax/swing/text/AttributeSet;)Ljavax/swing/text/Element;", nullptr, $PROTECTED},
	{"createDefaultRoot", "()Ljavax/swing/text/AbstractDocument$AbstractElement;", nullptr, $PROTECTED},
	{"createLeafElement", "(Ljavax/swing/text/Element;Ljavax/swing/text/AttributeSet;II)Ljavax/swing/text/Element;", nullptr, $PROTECTED},
	{"findFrame", "(Ljava/lang/String;)Ljavax/swing/text/Element;", nullptr, $PRIVATE, $method(static_cast<$Element*(HTMLDocument::*)($String*)>(&HTMLDocument::findFrame))},
	{"fireChangedUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PROTECTED},
	{"fireUndoableEditUpdate", "(Ljavax/swing/event/UndoableEditEvent;)V", nullptr, $PROTECTED},
	{"getBase", "()Ljava/net/URL;", nullptr, $PUBLIC},
	{"getBaseTarget", "()Ljava/lang/String;", nullptr, 0},
	{"getDefaultStyleSheetType", "()Ljava/lang/String;", nullptr, 0},
	{"getElement", "(Ljava/lang/String;)Ljavax/swing/text/Element;", nullptr, $PUBLIC},
	{"getElement", "(Ljavax/swing/text/Element;Ljava/lang/Object;Ljava/lang/Object;)Ljavax/swing/text/Element;", nullptr, $PUBLIC},
	{"getElement", "(Ljavax/swing/text/Element;Ljava/lang/Object;Ljava/lang/Object;Z)Ljavax/swing/text/Element;", nullptr, $PRIVATE, $method(static_cast<$Element*(HTMLDocument::*)($Element*,Object$*,Object$*,bool)>(&HTMLDocument::getElement))},
	{"getIterator", "(Ljavax/swing/text/html/HTML$Tag;)Ljavax/swing/text/html/HTMLDocument$Iterator;", nullptr, $PUBLIC},
	{"getMap", "(Ljava/lang/String;)Ljavax/swing/text/html/Map;", nullptr, 0},
	{"getMaps", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/Object;>;", 0},
	{"getParser", "()Ljavax/swing/text/html/HTMLEditorKit$Parser;", nullptr, $PUBLIC},
	{"getPreservesUnknownTags", "()Z", nullptr, $PUBLIC},
	{"getReader", "(I)Ljavax/swing/text/html/HTMLEditorKit$ParserCallback;", nullptr, $PUBLIC},
	{"getReader", "(IIILjavax/swing/text/html/HTML$Tag;)Ljavax/swing/text/html/HTMLEditorKit$ParserCallback;", nullptr, $PUBLIC},
	{"getReader", "(IIILjavax/swing/text/html/HTML$Tag;Z)Ljavax/swing/text/html/HTMLEditorKit$ParserCallback;", nullptr, 0},
	{"getStyleSheet", "()Ljavax/swing/text/html/StyleSheet;", nullptr, $PUBLIC},
	{"getTokenThreshold", "()I", nullptr, $PUBLIC},
	{"hasBaseTag", "()Z", nullptr, 0},
	{"insert", "(I[Ljavax/swing/text/DefaultStyledDocument$ElementSpec;)V", nullptr, $PROTECTED, nullptr, "javax.swing.text.BadLocationException"},
	{"insertAfterEnd", "(Ljavax/swing/text/Element;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException,java.io.IOException"},
	{"insertAfterStart", "(Ljavax/swing/text/Element;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException,java.io.IOException"},
	{"insertBeforeEnd", "(Ljavax/swing/text/Element;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException,java.io.IOException"},
	{"insertBeforeStart", "(Ljavax/swing/text/Element;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException,java.io.IOException"},
	{"insertHTML", "(Ljavax/swing/text/Element;ILjava/lang/String;Z)V", nullptr, $PRIVATE, $method(static_cast<void(HTMLDocument::*)($Element*,int32_t,$String*,bool)>(&HTMLDocument::insertHTML)), "javax.swing.text.BadLocationException,java.io.IOException"},
	{"insertUpdate", "(Ljavax/swing/text/AbstractDocument$DefaultDocumentEvent;Ljavax/swing/text/AttributeSet;)V", nullptr, $PROTECTED},
	{"installParserIfNecessary", "()V", nullptr, $PRIVATE, $method(static_cast<void(HTMLDocument::*)()>(&HTMLDocument::installParserIfNecessary))},
	{"isFrameDocument", "()Z", nullptr, 0},
	{"matchNameAttribute", "(Ljavax/swing/text/AttributeSet;Ljavax/swing/text/html/HTML$Tag;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($AttributeSet*,$HTML$Tag*)>(&HTMLDocument::matchNameAttribute))},
	{"obtainLock", "()V", nullptr, 0},
	{"processHTMLFrameHyperlinkEvent", "(Ljavax/swing/text/html/HTMLFrameHyperlinkEvent;)V", nullptr, $PUBLIC},
	{"releaseLock", "()V", nullptr, 0},
	{"removeElements", "(Ljavax/swing/text/Element;II)V", nullptr, $PRIVATE, $method(static_cast<void(HTMLDocument::*)($Element*,int32_t,int32_t)>(&HTMLDocument::removeElements)), "javax.swing.text.BadLocationException"},
	{"removeElements", "(Ljavax/swing/text/Element;IIII)V", nullptr, $PRIVATE, $method(static_cast<void(HTMLDocument::*)($Element*,int32_t,int32_t,int32_t,int32_t)>(&HTMLDocument::removeElements)), "javax.swing.text.BadLocationException"},
	{"removeElementsAtEnd", "(Ljavax/swing/text/Element;IIII)V", nullptr, $PRIVATE, $method(static_cast<void(HTMLDocument::*)($Element*,int32_t,int32_t,int32_t,int32_t)>(&HTMLDocument::removeElementsAtEnd)), "javax.swing.text.BadLocationException"},
	{"removeMap", "(Ljavax/swing/text/html/Map;)V", nullptr, 0},
	{"replace", "(Ljavax/swing/text/AbstractDocument$DefaultDocumentEvent;Ljavax/swing/text/Element;IIIIZZ)V", nullptr, $PRIVATE, $method(static_cast<void(HTMLDocument::*)($AbstractDocument$DefaultDocumentEvent*,$Element*,int32_t,int32_t,int32_t,int32_t,bool,bool)>(&HTMLDocument::replace)), "javax.swing.text.BadLocationException"},
	{"setBase", "(Ljava/net/URL;)V", nullptr, $PUBLIC},
	{"setDefaultStyleSheetType", "(Ljava/lang/String;)V", nullptr, 0},
	{"setFrameDocumentState", "(Z)V", nullptr, 0},
	{"setInnerHTML", "(Ljavax/swing/text/Element;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException,java.io.IOException"},
	{"setOuterHTML", "(Ljavax/swing/text/Element;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException,java.io.IOException"},
	{"setParagraphAttributes", "(IILjavax/swing/text/AttributeSet;Z)V", nullptr, $PUBLIC},
	{"setParser", "(Ljavax/swing/text/html/HTMLEditorKit$Parser;)V", nullptr, $PUBLIC},
	{"setPreservesUnknownTags", "(Z)V", nullptr, $PUBLIC},
	{"setTokenThreshold", "(I)V", nullptr, $PUBLIC},
	{"updateFrame", "(Ljavax/swing/text/Element;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(HTMLDocument::*)($Element*,$String*)>(&HTMLDocument::updateFrame))},
	{"updateFrameSet", "(Ljavax/swing/text/Element;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(HTMLDocument::*)($Element*,$String*)>(&HTMLDocument::updateFrameSet))},
	{"verifyParser", "()V", nullptr, $PRIVATE, $method(static_cast<void(HTMLDocument::*)()>(&HTMLDocument::verifyParser))},
	{}
};

$InnerClassInfo _HTMLDocument_InnerClassesInfo_[] = {
	{"javax.swing.text.html.HTMLDocument$FixedLengthDocument", "javax.swing.text.html.HTMLDocument", "FixedLengthDocument", $PRIVATE | $STATIC},
	{"javax.swing.text.html.HTMLDocument$BlockElement", "javax.swing.text.html.HTMLDocument", "BlockElement", $PUBLIC},
	{"javax.swing.text.html.HTMLDocument$RunElement", "javax.swing.text.html.HTMLDocument", "RunElement", $PUBLIC},
	{"javax.swing.text.html.HTMLDocument$TaggedAttributeSet", "javax.swing.text.html.HTMLDocument", "TaggedAttributeSet", $STATIC},
	{"javax.swing.text.html.HTMLDocument$HTMLReader", "javax.swing.text.html.HTMLDocument", "HTMLReader", $PUBLIC},
	{"javax.swing.text.html.HTMLDocument$LeafIterator", "javax.swing.text.html.HTMLDocument", "LeafIterator", $STATIC},
	{"javax.swing.text.html.HTMLDocument$Iterator", "javax.swing.text.html.HTMLDocument", "Iterator", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _HTMLDocument_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.html.HTMLDocument",
	"javax.swing.text.DefaultStyledDocument",
	nullptr,
	_HTMLDocument_FieldInfo_,
	_HTMLDocument_MethodInfo_,
	nullptr,
	nullptr,
	_HTMLDocument_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.text.html.HTMLDocument$FixedLengthDocument,javax.swing.text.html.HTMLDocument$BlockElement,javax.swing.text.html.HTMLDocument$RunElement,javax.swing.text.html.HTMLDocument$TaggedAttributeSet,javax.swing.text.html.HTMLDocument$HTMLReader,javax.swing.text.html.HTMLDocument$HTMLReader$FormAction,javax.swing.text.html.HTMLDocument$HTMLReader$ObjectAction,javax.swing.text.html.HTMLDocument$HTMLReader$BaseAction,javax.swing.text.html.HTMLDocument$HTMLReader$TitleAction,javax.swing.text.html.HTMLDocument$HTMLReader$AnchorAction,javax.swing.text.html.HTMLDocument$HTMLReader$ConvertAction,javax.swing.text.html.HTMLDocument$HTMLReader$CharacterAction,javax.swing.text.html.HTMLDocument$HTMLReader$PreAction,javax.swing.text.html.HTMLDocument$HTMLReader$StyleAction,javax.swing.text.html.HTMLDocument$HTMLReader$AreaAction,javax.swing.text.html.HTMLDocument$HTMLReader$MapAction,javax.swing.text.html.HTMLDocument$HTMLReader$LinkAction,javax.swing.text.html.HTMLDocument$HTMLReader$HeadAction,javax.swing.text.html.HTMLDocument$HTMLReader$MetaAction,javax.swing.text.html.HTMLDocument$HTMLReader$HiddenAction,javax.swing.text.html.HTMLDocument$HTMLReader$IsindexAction,javax.swing.text.html.HTMLDocument$HTMLReader$SpecialAction,javax.swing.text.html.HTMLDocument$HTMLReader$ParagraphAction,javax.swing.text.html.HTMLDocument$HTMLReader$FormTagAction,javax.swing.text.html.HTMLDocument$HTMLReader$BlockAction,javax.swing.text.html.HTMLDocument$HTMLReader$TagAction,javax.swing.text.html.HTMLDocument$LeafIterator,javax.swing.text.html.HTMLDocument$Iterator"
};

$Object* allocate$HTMLDocument($Class* clazz) {
	return $of($alloc(HTMLDocument));
}

$String* HTMLDocument::TokenThreshold = nullptr;
$String* HTMLDocument::AdditionalComments = nullptr;
$String* HTMLDocument::StyleType = nullptr;
$AttributeSet* HTMLDocument::contentAttributeSet = nullptr;
$String* HTMLDocument::MAP_PROPERTY = nullptr;
$chars* HTMLDocument::NEWLINE = nullptr;
$String* HTMLDocument::I18NProperty = nullptr;

void HTMLDocument::access$300(HTMLDocument* x0, $DocumentEvent* x1) {
	$init(HTMLDocument);
	$nc(x0)->fireRemoveUpdate(x1);
}

void HTMLDocument::access$200(HTMLDocument* x0, $AbstractDocument$DefaultDocumentEvent* x1) {
	$init(HTMLDocument);
	$nc(x0)->postRemoveUpdate(x1);
}

$AbstractDocument$Content* HTMLDocument::access$100(HTMLDocument* x0) {
	$init(HTMLDocument);
	return $nc(x0)->getContent();
}

void HTMLDocument::access$000(HTMLDocument* x0, $AbstractDocument$DefaultDocumentEvent* x1) {
	$init(HTMLDocument);
	$nc(x0)->removeUpdate(x1);
}

void HTMLDocument::init$() {
	$useLocalCurrentObjectStackCache();
	$var($AbstractDocument$Content, var$0, static_cast<$AbstractDocument$Content*>($new($GapContent, $DefaultStyledDocument::BUFFER_SIZE_DEFAULT)));
	HTMLDocument::init$(var$0, $$new($StyleSheet));
}

void HTMLDocument::init$($StyleSheet* styles) {
	HTMLDocument::init$($$new($GapContent, $DefaultStyledDocument::BUFFER_SIZE_DEFAULT), styles);
}

void HTMLDocument::init$($AbstractDocument$Content* c, $StyleSheet* styles) {
	$DefaultStyledDocument::init$(c, styles);
	this->frameDocument = false;
	this->preservesUnknownTags = true;
	this->hasBaseTag$ = false;
	$set(this, baseTarget, nullptr);
	this->insertInBody = false;
}

$HTMLEditorKit$ParserCallback* HTMLDocument::getReader(int32_t pos) {
	$useLocalCurrentObjectStackCache();
	$init($Document);
	$var($Object, desc, getProperty($Document::StreamDescriptionProperty));
	if ($instanceOf($URL, desc)) {
		setBase($cast($URL, desc));
	}
	$var($HTMLDocument$HTMLReader, reader, $new($HTMLDocument$HTMLReader, this, pos));
	return reader;
}

$HTMLEditorKit$ParserCallback* HTMLDocument::getReader(int32_t pos, int32_t popDepth, int32_t pushDepth, $HTML$Tag* insertTag) {
	return getReader(pos, popDepth, pushDepth, insertTag, true);
}

$HTMLEditorKit$ParserCallback* HTMLDocument::getReader(int32_t pos, int32_t popDepth, int32_t pushDepth, $HTML$Tag* insertTag, bool insertInsertTag) {
	$useLocalCurrentObjectStackCache();
	$init($Document);
	$var($Object, desc, getProperty($Document::StreamDescriptionProperty));
	if ($instanceOf($URL, desc)) {
		setBase($cast($URL, desc));
	}
	$var($HTMLDocument$HTMLReader, reader, $new($HTMLDocument$HTMLReader, this, pos, popDepth, pushDepth, insertTag, insertInsertTag, false, true));
	return reader;
}

$URL* HTMLDocument::getBase() {
	return this->base;
}

void HTMLDocument::setBase($URL* u) {
	$set(this, base, u);
	$nc($(getStyleSheet()))->setBase(u);
}

void HTMLDocument::insert(int32_t offset, $DefaultStyledDocument$ElementSpecArray* data) {
	$DefaultStyledDocument::insert(offset, data);
}

void HTMLDocument::insertUpdate($AbstractDocument$DefaultDocumentEvent* chng, $AttributeSet* attr$renamed) {
	$var($AttributeSet, attr, attr$renamed);
	if (attr == nullptr) {
		$assign(attr, HTMLDocument::contentAttributeSet);
	} else {
		$init($StyleConstants);
		if ($nc(attr)->isDefined($StyleConstants::ComposedTextAttribute)) {
			$nc(($cast($MutableAttributeSet, attr)))->addAttributes(HTMLDocument::contentAttributeSet);
		}
	}
	if ($nc(attr)->isDefined("CR"_s)) {
		$nc(($cast($MutableAttributeSet, attr)))->removeAttribute("CR"_s);
	}
	$DefaultStyledDocument::insertUpdate(chng, attr);
}

void HTMLDocument::create($DefaultStyledDocument$ElementSpecArray* data) {
	$DefaultStyledDocument::create(data);
}

void HTMLDocument::setParagraphAttributes(int32_t offset, int32_t length, $AttributeSet* s, bool replace) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			writeLock();
			int32_t end = $Math::min(offset + length, getLength());
			$var($Element, e, getParagraphElement(offset));
			offset = $nc(e)->getStartOffset();
			$assign(e, getParagraphElement(end));
			length = $Math::max(0, e->getEndOffset() - offset);
			$init($DocumentEvent$EventType);
			$var($AbstractDocument$DefaultDocumentEvent, changes, $new($AbstractDocument$DefaultDocumentEvent, this, offset, length, $DocumentEvent$EventType::CHANGE));
			$var($AttributeSet, sCopy, $nc(s)->copyAttributes());
			int32_t lastEnd = $Integer::MAX_VALUE;
			for (int32_t pos = offset; pos <= end; pos = lastEnd) {
				$var($Element, paragraph, getParagraphElement(pos));
				if (lastEnd == $nc(paragraph)->getEndOffset()) {
					++lastEnd;
				} else {
					lastEnd = paragraph->getEndOffset();
				}
				$var($MutableAttributeSet, attr, $cast($MutableAttributeSet, $nc(paragraph)->getAttributes()));
				changes->addEdit($$new($DefaultStyledDocument$AttributeUndoableEdit, paragraph, sCopy, replace));
				if (replace) {
					$nc(attr)->removeAttributes(static_cast<$AttributeSet*>(attr));
				}
				$nc(attr)->addAttributes(s);
			}
			changes->end();
			fireChangedUpdate(changes);
			fireUndoableEditUpdate($$new($UndoableEditEvent, this, changes));
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			writeUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$StyleSheet* HTMLDocument::getStyleSheet() {
	return $cast($StyleSheet, getAttributeContext());
}

$HTMLDocument$Iterator* HTMLDocument::getIterator($HTML$Tag* t) {
	if ($nc(t)->isBlock()) {
		return nullptr;
	}
	return $new($HTMLDocument$LeafIterator, t, static_cast<$Document*>(static_cast<$AbstractDocument*>(static_cast<$DefaultStyledDocument*>(this))));
}

$Element* HTMLDocument::createLeafElement($Element* parent, $AttributeSet* a, int32_t p0, int32_t p1) {
	return $new($HTMLDocument$RunElement, this, parent, a, p0, p1);
}

$Element* HTMLDocument::createBranchElement($Element* parent, $AttributeSet* a) {
	return $new($HTMLDocument$BlockElement, this, parent, a);
}

$AbstractDocument$AbstractElement* HTMLDocument::createDefaultRoot() {
	$useLocalCurrentObjectStackCache();
	writeLock();
	$var($MutableAttributeSet, a, $new($SimpleAttributeSet));
	$init($StyleConstants);
	$init($HTML$Tag);
	a->addAttribute($StyleConstants::NameAttribute, $HTML$Tag::HTML);
	$var($HTMLDocument$BlockElement, html, $new($HTMLDocument$BlockElement, this, nullptr, $(a->copyAttributes())));
	a->removeAttributes(static_cast<$AttributeSet*>(a));
	a->addAttribute($StyleConstants::NameAttribute, $HTML$Tag::BODY);
	$var($HTMLDocument$BlockElement, body, $new($HTMLDocument$BlockElement, this, html, $(a->copyAttributes())));
	a->removeAttributes(static_cast<$AttributeSet*>(a));
	a->addAttribute($StyleConstants::NameAttribute, $HTML$Tag::P);
	$init($CSS$Attribute);
	$nc($(getStyleSheet()))->addCSSAttributeFromHTML(a, $CSS$Attribute::MARGIN_TOP, "0"_s);
	$var($HTMLDocument$BlockElement, paragraph, $new($HTMLDocument$BlockElement, this, body, $(a->copyAttributes())));
	a->removeAttributes(static_cast<$AttributeSet*>(a));
	a->addAttribute($StyleConstants::NameAttribute, $HTML$Tag::CONTENT);
	$var($HTMLDocument$RunElement, brk, $new($HTMLDocument$RunElement, this, paragraph, a, 0, 1));
	$var($ElementArray, buff, $new($ElementArray, 1));
	buff->set(0, brk);
	paragraph->replace(0, 0, buff);
	buff->set(0, paragraph);
	body->replace(0, 0, buff);
	buff->set(0, body);
	html->replace(0, 0, buff);
	writeUnlock();
	return html;
}

void HTMLDocument::setTokenThreshold(int32_t n) {
	putProperty(HTMLDocument::TokenThreshold, $($Integer::valueOf(n)));
}

int32_t HTMLDocument::getTokenThreshold() {
	$var($Integer, i, $cast($Integer, getProperty(HTMLDocument::TokenThreshold)));
	if (i != nullptr) {
		return i->intValue();
	}
	return $Integer::MAX_VALUE;
}

void HTMLDocument::setPreservesUnknownTags(bool preservesTags) {
	this->preservesUnknownTags = preservesTags;
}

bool HTMLDocument::getPreservesUnknownTags() {
	return this->preservesUnknownTags;
}

void HTMLDocument::processHTMLFrameHyperlinkEvent($HTMLFrameHyperlinkEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($String, frameName, $nc(e)->getTarget());
	$var($Element, element, e->getSourceElement());
	$var($String, urlStr, $nc($(e->getURL()))->toString());
	if ($nc(frameName)->equals("_self"_s)) {
		updateFrame(element, urlStr);
	} else if (frameName->equals("_parent"_s)) {
		updateFrameSet($($nc(element)->getParentElement()), urlStr);
	} else {
		$var($Element, targetElement, findFrame(frameName));
		if (targetElement != nullptr) {
			updateFrame(targetElement, urlStr);
		}
	}
}

$Element* HTMLDocument::findFrame($String* frameName) {
	$useLocalCurrentObjectStackCache();
	$var($ElementIterator, it, $new($ElementIterator, static_cast<$Document*>(static_cast<$AbstractDocument*>(static_cast<$DefaultStyledDocument*>(this)))));
	$var($Element, next, nullptr);
	while (($assign(next, it->next())) != nullptr) {
		$var($AttributeSet, attr, $nc(next)->getAttributes());
		$init($HTML$Tag);
		if (matchNameAttribute(attr, $HTML$Tag::FRAME)) {
			$init($HTML$Attribute);
			$var($String, frameTarget, $cast($String, $nc(attr)->getAttribute($HTML$Attribute::NAME)));
			if (frameTarget != nullptr && frameTarget->equals(frameName)) {
				break;
			}
		}
	}
	return next;
}

bool HTMLDocument::matchNameAttribute($AttributeSet* attr, $HTML$Tag* tag) {
	$init(HTMLDocument);
	$useLocalCurrentObjectStackCache();
	$init($StyleConstants);
	$var($Object, o, $nc(attr)->getAttribute($StyleConstants::NameAttribute));
	if ($instanceOf($HTML$Tag, o)) {
		$var($HTML$Tag, name, $cast($HTML$Tag, o));
		if (name == tag) {
			return true;
		}
	}
	return false;
}

void HTMLDocument::updateFrameSet($Element* element, $String* url) {
	$useLocalCurrentObjectStackCache();
	try {
		int32_t startOffset = $nc(element)->getStartOffset();
		int32_t var$0 = getLength();
		int32_t endOffset = $Math::min(var$0, element->getEndOffset());
		$var($String, html, "<frame"_s);
		if (url != nullptr) {
			$plusAssign(html, $$str({" src=\""_s, url, "\""_s}));
		}
		$plusAssign(html, ">"_s);
		installParserIfNecessary();
		setOuterHTML(element, html);
	} catch ($BadLocationException& e1) {
	} catch ($IOException& ioe) {
	}
}

void HTMLDocument::updateFrame($Element* element, $String* url) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			writeLock();
			$init($DocumentEvent$EventType);
			$var($AbstractDocument$DefaultDocumentEvent, changes, $new($AbstractDocument$DefaultDocumentEvent, this, $nc(element)->getStartOffset(), 1, $DocumentEvent$EventType::CHANGE));
			$var($AttributeSet, sCopy, $nc($($nc(element)->getAttributes()))->copyAttributes());
			$var($MutableAttributeSet, attr, $cast($MutableAttributeSet, element->getAttributes()));
			changes->addEdit($$new($DefaultStyledDocument$AttributeUndoableEdit, element, sCopy, false));
			$init($HTML$Attribute);
			$nc(attr)->removeAttribute($HTML$Attribute::SRC);
			attr->addAttribute($HTML$Attribute::SRC, url);
			changes->end();
			fireChangedUpdate(changes);
			fireUndoableEditUpdate($$new($UndoableEditEvent, this, changes));
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			writeUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

bool HTMLDocument::isFrameDocument() {
	return this->frameDocument;
}

void HTMLDocument::setFrameDocumentState(bool frameDoc) {
	this->frameDocument = frameDoc;
}

void HTMLDocument::addMap($Map* map) {
	$useLocalCurrentObjectStackCache();
	$var($String, name, $nc(map)->getName());
	if (name != nullptr) {
		$var($Object, maps, getProperty(HTMLDocument::MAP_PROPERTY));
		if (maps == nullptr) {
			$assign(maps, $new($Hashtable, 11));
			putProperty(HTMLDocument::MAP_PROPERTY, maps);
		}
		if ($instanceOf($Hashtable, maps)) {
			$var($Hashtable, tmp, $cast($Hashtable, maps));
			$nc(tmp)->put($$str({"#"_s, name}), map);
		}
	}
}

void HTMLDocument::removeMap($Map* map) {
	$useLocalCurrentObjectStackCache();
	$var($String, name, $nc(map)->getName());
	if (name != nullptr) {
		$var($Object, maps, getProperty(HTMLDocument::MAP_PROPERTY));
		if ($instanceOf($Hashtable, maps)) {
			$nc(($cast($Hashtable, maps)))->remove($$str({"#"_s, name}));
		}
	}
}

$Map* HTMLDocument::getMap($String* name) {
	if (name != nullptr) {
		$var($Object, maps, getProperty(HTMLDocument::MAP_PROPERTY));
		if (maps != nullptr && ($instanceOf($Hashtable, maps))) {
			return $cast($Map, $nc(($cast($Hashtable, maps)))->get(name));
		}
	}
	return nullptr;
}

$Enumeration* HTMLDocument::getMaps() {
	$useLocalCurrentObjectStackCache();
	$var($Object, maps, getProperty(HTMLDocument::MAP_PROPERTY));
	if ($instanceOf($Hashtable, maps)) {
		$var($Hashtable, tmp, $cast($Hashtable, maps));
		return $nc(tmp)->elements();
	}
	return nullptr;
}

void HTMLDocument::setDefaultStyleSheetType($String* contentType) {
	putProperty(HTMLDocument::StyleType, contentType);
}

$String* HTMLDocument::getDefaultStyleSheetType() {
	$var($String, retValue, $cast($String, getProperty(HTMLDocument::StyleType)));
	if (retValue == nullptr) {
		return "text/css"_s;
	}
	return retValue;
}

void HTMLDocument::setParser($HTMLEditorKit$Parser* parser) {
	$set(this, parser, parser);
	putProperty("__PARSER__"_s, nullptr);
}

$HTMLEditorKit$Parser* HTMLDocument::getParser() {
	$var($Object, p, getProperty("__PARSER__"_s));
	if ($instanceOf($HTMLEditorKit$Parser, p)) {
		return $cast($HTMLEditorKit$Parser, p);
	}
	return this->parser;
}

void HTMLDocument::setInnerHTML($Element* elem, $String* htmlText) {
	verifyParser();
	if (elem != nullptr && elem->isLeaf()) {
		$throwNew($IllegalArgumentException, "Can not set inner HTML of a leaf"_s);
	}
	if (elem != nullptr && htmlText != nullptr) {
		int32_t oldCount = elem->getElementCount();
		int32_t insertPosition = elem->getStartOffset();
		insertHTML(elem, elem->getStartOffset(), htmlText, true);
		if (elem->getElementCount() > oldCount) {
			removeElements(elem, elem->getElementCount() - oldCount, oldCount);
		}
	}
}

void HTMLDocument::setOuterHTML($Element* elem, $String* htmlText) {
	$useLocalCurrentObjectStackCache();
	verifyParser();
	if (elem != nullptr && elem->getParentElement() != nullptr && htmlText != nullptr) {
		int32_t start = elem->getStartOffset();
		int32_t end = elem->getEndOffset();
		int32_t startLength = getLength();
		bool wantsNewline = !elem->isLeaf();
		if (!wantsNewline && (end > startLength || $nc($(getText(end - 1, 1)))->charAt(0) == $nc(HTMLDocument::NEWLINE)->get(0))) {
			wantsNewline = true;
		}
		$var($Element, parent, elem->getParentElement());
		int32_t oldCount = $nc(parent)->getElementCount();
		insertHTML(parent, start, htmlText, wantsNewline);
		int32_t newLength = getLength();
		if (oldCount != parent->getElementCount()) {
			int32_t removeIndex = parent->getElementIndex(start + newLength - startLength);
			removeElements(parent, removeIndex, 1);
		}
	}
}

void HTMLDocument::insertAfterStart($Element* elem, $String* htmlText) {
	verifyParser();
	if (elem == nullptr || htmlText == nullptr) {
		return;
	}
	if ($nc(elem)->isLeaf()) {
		$throwNew($IllegalArgumentException, "Can not insert HTML after start of a leaf"_s);
	}
	insertHTML(elem, $nc(elem)->getStartOffset(), htmlText, false);
}

void HTMLDocument::insertBeforeEnd($Element* elem, $String* htmlText) {
	$useLocalCurrentObjectStackCache();
	verifyParser();
	if (elem != nullptr && elem->isLeaf()) {
		$throwNew($IllegalArgumentException, "Can not set inner HTML before end of leaf"_s);
	}
	if (elem != nullptr) {
		int32_t offset = elem->getEndOffset();
		bool var$0 = $nc($(elem->getElement(elem->getElementIndex(offset - 1))))->isLeaf();
		if (var$0 && $nc($(getText(offset - 1, 1)))->charAt(0) == $nc(HTMLDocument::NEWLINE)->get(0)) {
			--offset;
		}
		insertHTML(elem, offset, htmlText, false);
	}
}

void HTMLDocument::insertBeforeStart($Element* elem, $String* htmlText) {
	verifyParser();
	if (elem != nullptr) {
		$var($Element, parent, elem->getParentElement());
		if (parent != nullptr) {
			insertHTML(parent, elem->getStartOffset(), htmlText, false);
		}
	}
}

void HTMLDocument::insertAfterEnd($Element* elem, $String* htmlText) {
	$useLocalCurrentObjectStackCache();
	verifyParser();
	if (elem != nullptr) {
		$var($Element, parent, elem->getParentElement());
		if (parent != nullptr) {
			$init($HTML$Tag);
			if ($nc($nc($HTML$Tag::BODY)->name)->equals($(parent->getName()))) {
				this->insertInBody = true;
			}
			int32_t offset = elem->getEndOffset();
			if (offset > (getLength() + 1)) {
				--offset;
			} else {
				bool var$1 = elem->isLeaf();
				if (var$1 && $nc($(getText(offset - 1, 1)))->charAt(0) == $nc(HTMLDocument::NEWLINE)->get(0)) {
					--offset;
				}
			}
			insertHTML(parent, offset, htmlText, false);
			if (this->insertInBody) {
				this->insertInBody = false;
			}
		}
	}
}

$Element* HTMLDocument::getElement($String* id) {
	if (id == nullptr) {
		return nullptr;
	}
	$init($HTML$Attribute);
	return getElement($(getDefaultRootElement()), $HTML$Attribute::ID, id, true);
}

$Element* HTMLDocument::getElement($Element* e, Object$* attribute, Object$* value) {
	return getElement(e, attribute, value, true);
}

$Element* HTMLDocument::getElement($Element* e, Object$* attribute, Object$* value, bool searchLeafAttributes) {
	$useLocalCurrentObjectStackCache();
	$var($AttributeSet, attr, $nc(e)->getAttributes());
	if (attr != nullptr && attr->isDefined(attribute)) {
		if ($nc($of(value))->equals($(attr->getAttribute(attribute)))) {
			return e;
		}
	}
	if (!e->isLeaf()) {
		{
			int32_t counter = 0;
			int32_t maxCounter = e->getElementCount();
			for (; counter < maxCounter; ++counter) {
				$var($Element, retValue, getElement($(e->getElement(counter)), attribute, value, searchLeafAttributes));
				if (retValue != nullptr) {
					return retValue;
				}
			}
		}
	} else if (searchLeafAttributes && attr != nullptr) {
		$var($Enumeration, names, attr->getAttributeNames());
		if (names != nullptr) {
			while (names->hasMoreElements()) {
				$var($Object, name, names->nextElement());
				if (($instanceOf($HTML$Tag, name)) && ($instanceOf($AttributeSet, $(attr->getAttribute(name))))) {
					$var($AttributeSet, check, $cast($AttributeSet, attr->getAttribute(name)));
					bool var$0 = $nc(check)->isDefined(attribute);
					if (var$0 && $nc($of(value))->equals($(check->getAttribute(attribute)))) {
						return e;
					}
				}
			}
		}
	}
	return nullptr;
}

void HTMLDocument::verifyParser() {
	if (getParser() == nullptr) {
		$throwNew($IllegalStateException, "No HTMLEditorKit.Parser"_s);
	}
}

void HTMLDocument::installParserIfNecessary() {
	$useLocalCurrentObjectStackCache();
	if (getParser() == nullptr) {
		setParser($($$new($HTMLEditorKit)->getParser()));
	}
}

void HTMLDocument::insertHTML($Element* parent, int32_t offset, $String* html, bool wantsTrailingNewline) {
	$useLocalCurrentObjectStackCache();
	if (parent != nullptr && html != nullptr) {
		$var($HTMLEditorKit$Parser, parser, getParser());
		if (parser != nullptr) {
			int32_t lastOffset = $Math::max(0, offset - 1);
			$var($Element, charElement, getCharacterElement(lastOffset));
			$var($Element, commonParent, parent);
			int32_t pop = 0;
			int32_t push = 0;
			if (parent->getStartOffset() > lastOffset) {
				while (commonParent != nullptr && commonParent->getStartOffset() > lastOffset) {
					$assign(commonParent, commonParent->getParentElement());
					++push;
				}
				if (commonParent == nullptr) {
					$throwNew($BadLocationException, "No common parent"_s, offset);
				}
			}
			while (charElement != nullptr && charElement != commonParent) {
				++pop;
				$assign(charElement, charElement->getParentElement());
			}
			if (charElement != nullptr) {
				$var($HTMLDocument$HTMLReader, reader, $new($HTMLDocument$HTMLReader, this, offset, pop - 1, push, nullptr, false, true, wantsTrailingNewline));
				parser->parse($$new($StringReader, html), reader, true);
				reader->flush();
			}
		}
	}
}

void HTMLDocument::removeElements($Element* e, int32_t index, int32_t count) {
	$useLocalCurrentObjectStackCache();
	writeLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			int32_t start = $nc($($nc(e)->getElement(index)))->getStartOffset();
			int32_t end = $nc($(e->getElement(index + count - 1)))->getEndOffset();
			if (end > getLength()) {
				removeElementsAtEnd(e, index, count, start, end);
			} else {
				removeElements(e, index, count, start, end);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			writeUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void HTMLDocument::removeElementsAtEnd($Element* e, int32_t index, int32_t count, int32_t start, int32_t end) {
	$useLocalCurrentObjectStackCache();
	bool isLeaf = ($nc($($nc(e)->getElement(index - 1)))->isLeaf());
	$init($DocumentEvent$EventType);
	$var($AbstractDocument$DefaultDocumentEvent, dde, $new($AbstractDocument$DefaultDocumentEvent, this, start - 1, end - start + 1, $DocumentEvent$EventType::REMOVE));
	if (isLeaf) {
		$var($Element, endE, getCharacterElement(getLength()));
		--index;
		if ($nc(endE)->getParentElement() != e) {
			replace(dde, e, index, ++count, start, end, true, true);
		} else {
			replace(dde, e, index, count, start, end, true, false);
		}
	} else {
		$var($Element, newLineE, e->getElement(index - 1));
		while (!$nc(newLineE)->isLeaf()) {
			$assign(newLineE, newLineE->getElement(newLineE->getElementCount() - 1));
		}
		$assign(newLineE, $nc(newLineE)->getParentElement());
		replace(dde, e, index, count, start, end, false, false);
		replace(dde, newLineE, newLineE->getElementCount() - 1, 1, start, end, true, true);
	}
	postRemoveUpdate(dde);
	dde->end();
	fireRemoveUpdate(dde);
	fireUndoableEditUpdate($$new($UndoableEditEvent, this, dde));
}

void HTMLDocument::replace($AbstractDocument$DefaultDocumentEvent* dde, $Element* e, int32_t index, int32_t count, int32_t start, int32_t end, bool remove, bool create) {
	$useLocalCurrentObjectStackCache();
	$var($ElementArray, added, nullptr);
	$var($AttributeSet, attrs, $nc($($nc(e)->getElement(index)))->getAttributes());
	$var($ElementArray, removed, $new($ElementArray, count));
	for (int32_t counter = 0; counter < count; ++counter) {
		removed->set(counter, $(e->getElement(counter + index)));
	}
	if (remove) {
		$var($UndoableEdit, u, $nc($(getContent()))->remove(start - 1, end - start));
		if (u != nullptr) {
			$nc(dde)->addEdit(u);
		}
	}
	if (create) {
		$assign(added, $new($ElementArray, 1));
		added->set(0, $(createLeafElement(e, attrs, start - 1, start)));
	} else {
		$assign(added, $new($ElementArray, 0));
	}
	$nc(dde)->addEdit($$new($AbstractDocument$ElementEdit, e, index, removed, added));
	$nc(($cast($AbstractDocument$BranchElement, e)))->replace(index, removed->length, added);
}

void HTMLDocument::removeElements($Element* e, int32_t index, int32_t count, int32_t start, int32_t end) {
	$useLocalCurrentObjectStackCache();
	$var($ElementArray, removed, $new($ElementArray, count));
	$var($ElementArray, added, $new($ElementArray, 0));
	for (int32_t counter = 0; counter < count; ++counter) {
		removed->set(counter, $($nc(e)->getElement(counter + index)));
	}
	$init($DocumentEvent$EventType);
	$var($AbstractDocument$DefaultDocumentEvent, dde, $new($AbstractDocument$DefaultDocumentEvent, this, start, end - start, $DocumentEvent$EventType::REMOVE));
	$nc(($cast($AbstractDocument$BranchElement, e)))->replace(index, removed->length, added);
	dde->addEdit($$new($AbstractDocument$ElementEdit, e, index, removed, added));
	$var($UndoableEdit, u, $nc($(getContent()))->remove(start, end - start));
	if (u != nullptr) {
		dde->addEdit(u);
	}
	postRemoveUpdate(dde);
	dde->end();
	fireRemoveUpdate(dde);
	if (u != nullptr) {
		fireUndoableEditUpdate($$new($UndoableEditEvent, this, dde));
	}
}

void HTMLDocument::obtainLock() {
	writeLock();
}

void HTMLDocument::releaseLock() {
	writeUnlock();
}

void HTMLDocument::fireChangedUpdate($DocumentEvent* e) {
	$DefaultStyledDocument::fireChangedUpdate(e);
}

void HTMLDocument::fireUndoableEditUpdate($UndoableEditEvent* e) {
	$DefaultStyledDocument::fireUndoableEditUpdate(e);
}

bool HTMLDocument::hasBaseTag() {
	return this->hasBaseTag$;
}

$String* HTMLDocument::getBaseTarget() {
	return this->baseTarget;
}

void clinit$HTMLDocument($Class* class$) {
	$assignStatic(HTMLDocument::TokenThreshold, "token threshold"_s);
	$assignStatic(HTMLDocument::AdditionalComments, "AdditionalComments"_s);
	$assignStatic(HTMLDocument::StyleType, "StyleType"_s);
	$assignStatic(HTMLDocument::I18NProperty, "i18n"_s);
	$assignStatic(HTMLDocument::MAP_PROPERTY, "__MAP__"_s);
	{
		$assignStatic(HTMLDocument::contentAttributeSet, $new($SimpleAttributeSet));
		$init($StyleConstants);
		$init($HTML$Tag);
		$nc(($cast($MutableAttributeSet, HTMLDocument::contentAttributeSet)))->addAttribute($StyleConstants::NameAttribute, $HTML$Tag::CONTENT);
		$assignStatic(HTMLDocument::NEWLINE, $new($chars, 1));
		$nc(HTMLDocument::NEWLINE)->set(0, u'\n');
	}
}

HTMLDocument::HTMLDocument() {
}

$Class* HTMLDocument::load$($String* name, bool initialize) {
	$loadClass(HTMLDocument, name, initialize, &_HTMLDocument_ClassInfo_, clinit$HTMLDocument, allocate$HTMLDocument);
	return class$;
}

$Class* HTMLDocument::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax