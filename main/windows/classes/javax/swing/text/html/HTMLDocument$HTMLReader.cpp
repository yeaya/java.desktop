#include <javax/swing/text/html/HTMLDocument$HTMLReader.h>

#include <java/awt/font/TextAttribute.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/MalformedURLException.h>
#include <java/net/URL.h>
#include <java/util/Hashtable.h>
#include <java/util/Stack.h>
#include <java/util/Vector.h>
#include <javax/swing/event/DocumentEvent$EventType.h>
#include <javax/swing/event/DocumentEvent.h>
#include <javax/swing/event/UndoableEditEvent.h>
#include <javax/swing/text/AbstractDocument$BranchElement.h>
#include <javax/swing/text/AbstractDocument$Content.h>
#include <javax/swing/text/AbstractDocument$DefaultDocumentEvent.h>
#include <javax/swing/text/AbstractDocument$ElementEdit.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/DefaultStyledDocument$ElementSpec.h>
#include <javax/swing/text/DefaultStyledDocument.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/SimpleAttributeSet.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/html/CSS$Attribute.h>
#include <javax/swing/text/html/HTML$Attribute.h>
#include <javax/swing/text/html/HTML$Tag.h>
#include <javax/swing/text/html/HTML$UnknownTag.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader$AnchorAction.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader$AreaAction.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader$BaseAction.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader$BlockAction.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader$CharacterAction.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader$ConvertAction.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader$FormAction.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader$FormTagAction.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader$HeadAction.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader$HiddenAction.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader$IsindexAction.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader$LinkAction.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader$MapAction.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader$MetaAction.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader$ObjectAction.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader$ParagraphAction.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader$PreAction.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader$SpecialAction.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader$StyleAction.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader$TagAction.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader$TitleAction.h>
#include <javax/swing/text/html/HTMLDocument$TaggedAttributeSet.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <javax/swing/text/html/HTMLEditorKit$ParserCallback.h>
#include <javax/swing/text/html/Map.h>
#include <javax/swing/text/html/Option.h>
#include <javax/swing/text/html/StyleSheet.h>
#include <javax/swing/text/html/TextAreaDocument.h>
#include <javax/swing/undo/AbstractUndoableEdit.h>
#include <javax/swing/undo/CompoundEdit.h>
#include <javax/swing/undo/UndoableEdit.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef A
#undef ADDRESS
#undef APPLET
#undef AREA
#undef B
#undef BASE
#undef BASEFONT
#undef BIG
#undef BLOCKQUOTE
#undef BODY
#undef BR
#undef CAPTION
#undef CENTER
#undef CHANGE
#undef CITE
#undef CODE
#undef COMMENT
#undef CONTENT
#undef DD
#undef DFN
#undef DIR
#undef DIV
#undef DL
#undef DT
#undef EM
#undef FALSE
#undef FONT
#undef FORM
#undef FRAME
#undef FRAMESET
#undef HEAD
#undef HR
#undef HTML
#undef I
#undef IMG
#undef IMPLIED
#undef INPUT
#undef ISINDEX
#undef KBD
#undef LI
#undef LINK
#undef MAP
#undef MENU
#undef META
#undef NEWLINE
#undef NOBR
#undef NOFRAMES
#undef OBJECT
#undef OL
#undef OPTION
#undef P
#undef PARAM
#undef PRE
#undef REMOVE
#undef RUN_DIRECTION
#undef RUN_DIRECTION_RTL
#undef S
#undef SAMP
#undef SCRIPT
#undef SELECT
#undef SMALL
#undef SPAN
#undef STRIKE
#undef STRONG
#undef STYLE
#undef SUB
#undef SUP
#undef TABLE
#undef TD
#undef TEXTAREA
#undef TH
#undef TITLE
#undef TR
#undef TRUE
#undef TT
#undef U
#undef UL
#undef VAR
#undef WHITE_SPACE

using $DefaultStyledDocument$ElementSpecArray = $Array<::javax::swing::text::DefaultStyledDocument$ElementSpec>;
using $ElementArray = $Array<::javax::swing::text::Element>;
using $TextAttribute = ::java::awt::font::TextAttribute;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $MalformedURLException = ::java::net::MalformedURLException;
using $URL = ::java::net::URL;
using $Hashtable = ::java::util::Hashtable;
using $Stack = ::java::util::Stack;
using $Vector = ::java::util::Vector;
using $DocumentEvent = ::javax::swing::event::DocumentEvent;
using $DocumentEvent$EventType = ::javax::swing::event::DocumentEvent$EventType;
using $UndoableEditEvent = ::javax::swing::event::UndoableEditEvent;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $AbstractDocument$BranchElement = ::javax::swing::text::AbstractDocument$BranchElement;
using $AbstractDocument$Content = ::javax::swing::text::AbstractDocument$Content;
using $AbstractDocument$DefaultDocumentEvent = ::javax::swing::text::AbstractDocument$DefaultDocumentEvent;
using $AbstractDocument$ElementEdit = ::javax::swing::text::AbstractDocument$ElementEdit;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $DefaultEditorKit = ::javax::swing::text::DefaultEditorKit;
using $DefaultStyledDocument = ::javax::swing::text::DefaultStyledDocument;
using $DefaultStyledDocument$ElementSpec = ::javax::swing::text::DefaultStyledDocument$ElementSpec;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $PlainDocument = ::javax::swing::text::PlainDocument;
using $SimpleAttributeSet = ::javax::swing::text::SimpleAttributeSet;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $CSS$Attribute = ::javax::swing::text::html::CSS$Attribute;
using $HTML$Attribute = ::javax::swing::text::html::HTML$Attribute;
using $HTML$Tag = ::javax::swing::text::html::HTML$Tag;
using $HTML$UnknownTag = ::javax::swing::text::html::HTML$UnknownTag;
using $HTMLDocument = ::javax::swing::text::html::HTMLDocument;
using $HTMLDocument$HTMLReader$AnchorAction = ::javax::swing::text::html::HTMLDocument$HTMLReader$AnchorAction;
using $HTMLDocument$HTMLReader$AreaAction = ::javax::swing::text::html::HTMLDocument$HTMLReader$AreaAction;
using $HTMLDocument$HTMLReader$BaseAction = ::javax::swing::text::html::HTMLDocument$HTMLReader$BaseAction;
using $HTMLDocument$HTMLReader$BlockAction = ::javax::swing::text::html::HTMLDocument$HTMLReader$BlockAction;
using $HTMLDocument$HTMLReader$CharacterAction = ::javax::swing::text::html::HTMLDocument$HTMLReader$CharacterAction;
using $HTMLDocument$HTMLReader$ConvertAction = ::javax::swing::text::html::HTMLDocument$HTMLReader$ConvertAction;
using $HTMLDocument$HTMLReader$FormAction = ::javax::swing::text::html::HTMLDocument$HTMLReader$FormAction;
using $HTMLDocument$HTMLReader$FormTagAction = ::javax::swing::text::html::HTMLDocument$HTMLReader$FormTagAction;
using $HTMLDocument$HTMLReader$HeadAction = ::javax::swing::text::html::HTMLDocument$HTMLReader$HeadAction;
using $HTMLDocument$HTMLReader$HiddenAction = ::javax::swing::text::html::HTMLDocument$HTMLReader$HiddenAction;
using $HTMLDocument$HTMLReader$IsindexAction = ::javax::swing::text::html::HTMLDocument$HTMLReader$IsindexAction;
using $HTMLDocument$HTMLReader$LinkAction = ::javax::swing::text::html::HTMLDocument$HTMLReader$LinkAction;
using $HTMLDocument$HTMLReader$MapAction = ::javax::swing::text::html::HTMLDocument$HTMLReader$MapAction;
using $HTMLDocument$HTMLReader$MetaAction = ::javax::swing::text::html::HTMLDocument$HTMLReader$MetaAction;
using $HTMLDocument$HTMLReader$ObjectAction = ::javax::swing::text::html::HTMLDocument$HTMLReader$ObjectAction;
using $HTMLDocument$HTMLReader$ParagraphAction = ::javax::swing::text::html::HTMLDocument$HTMLReader$ParagraphAction;
using $HTMLDocument$HTMLReader$PreAction = ::javax::swing::text::html::HTMLDocument$HTMLReader$PreAction;
using $HTMLDocument$HTMLReader$SpecialAction = ::javax::swing::text::html::HTMLDocument$HTMLReader$SpecialAction;
using $HTMLDocument$HTMLReader$StyleAction = ::javax::swing::text::html::HTMLDocument$HTMLReader$StyleAction;
using $HTMLDocument$HTMLReader$TagAction = ::javax::swing::text::html::HTMLDocument$HTMLReader$TagAction;
using $HTMLDocument$HTMLReader$TitleAction = ::javax::swing::text::html::HTMLDocument$HTMLReader$TitleAction;
using $HTMLDocument$TaggedAttributeSet = ::javax::swing::text::html::HTMLDocument$TaggedAttributeSet;
using $HTMLEditorKit$ParserCallback = ::javax::swing::text::html::HTMLEditorKit$ParserCallback;
using $Map = ::javax::swing::text::html::Map;
using $Option = ::javax::swing::text::html::Option;
using $StyleSheet = ::javax::swing::text::html::StyleSheet;
using $TextAreaDocument = ::javax::swing::text::html::TextAreaDocument;
using $AbstractUndoableEdit = ::javax::swing::undo::AbstractUndoableEdit;
using $CompoundEdit = ::javax::swing::undo::CompoundEdit;
using $UndoableEdit = ::javax::swing::undo::UndoableEdit;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _HTMLDocument$HTMLReader_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/html/HTMLDocument;", nullptr, $FINAL | $SYNTHETIC, $field(HTMLDocument$HTMLReader, this$0)},
	{"receivedEndHTML", "Z", nullptr, $PRIVATE, $field(HTMLDocument$HTMLReader, receivedEndHTML)},
	{"flushCount", "I", nullptr, $PRIVATE, $field(HTMLDocument$HTMLReader, flushCount)},
	{"insertAfterImplied", "Z", nullptr, $PRIVATE, $field(HTMLDocument$HTMLReader, insertAfterImplied)},
	{"wantsTrailingNewline", "Z", nullptr, $PRIVATE, $field(HTMLDocument$HTMLReader, wantsTrailingNewline)},
	{"threshold", "I", nullptr, 0, $field(HTMLDocument$HTMLReader, threshold)},
	{"offset", "I", nullptr, 0, $field(HTMLDocument$HTMLReader, offset)},
	{"inParagraph", "Z", nullptr, 0, $field(HTMLDocument$HTMLReader, inParagraph)},
	{"impliedP", "Z", nullptr, 0, $field(HTMLDocument$HTMLReader, impliedP)},
	{"inPre", "Z", nullptr, 0, $field(HTMLDocument$HTMLReader, inPre)},
	{"inTextArea", "Z", nullptr, 0, $field(HTMLDocument$HTMLReader, inTextArea)},
	{"textAreaDocument", "Ljavax/swing/text/html/TextAreaDocument;", nullptr, 0, $field(HTMLDocument$HTMLReader, textAreaDocument)},
	{"inTitle", "Z", nullptr, 0, $field(HTMLDocument$HTMLReader, inTitle)},
	{"lastWasNewline", "Z", nullptr, 0, $field(HTMLDocument$HTMLReader, lastWasNewline)},
	{"emptyAnchor", "Z", nullptr, 0, $field(HTMLDocument$HTMLReader, emptyAnchor)},
	{"midInsert", "Z", nullptr, 0, $field(HTMLDocument$HTMLReader, midInsert)},
	{"inBody", "Z", nullptr, 0, $field(HTMLDocument$HTMLReader, inBody)},
	{"insertTag", "Ljavax/swing/text/html/HTML$Tag;", nullptr, 0, $field(HTMLDocument$HTMLReader, insertTag)},
	{"insertInsertTag", "Z", nullptr, 0, $field(HTMLDocument$HTMLReader, insertInsertTag)},
	{"foundInsertTag", "Z", nullptr, 0, $field(HTMLDocument$HTMLReader, foundInsertTag$)},
	{"insertTagDepthDelta", "I", nullptr, 0, $field(HTMLDocument$HTMLReader, insertTagDepthDelta)},
	{"popDepth", "I", nullptr, 0, $field(HTMLDocument$HTMLReader, popDepth)},
	{"pushDepth", "I", nullptr, 0, $field(HTMLDocument$HTMLReader, pushDepth)},
	{"lastMap", "Ljavax/swing/text/html/Map;", nullptr, 0, $field(HTMLDocument$HTMLReader, lastMap)},
	{"inStyle", "Z", nullptr, 0, $field(HTMLDocument$HTMLReader, inStyle)},
	{"defaultStyle", "Ljava/lang/String;", nullptr, 0, $field(HTMLDocument$HTMLReader, defaultStyle)},
	{"styles", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/lang/Object;>;", 0, $field(HTMLDocument$HTMLReader, styles)},
	{"inHead", "Z", nullptr, 0, $field(HTMLDocument$HTMLReader, inHead)},
	{"isStyleCSS", "Z", nullptr, 0, $field(HTMLDocument$HTMLReader, isStyleCSS)},
	{"emptyDocument", "Z", nullptr, 0, $field(HTMLDocument$HTMLReader, emptyDocument)},
	{"styleAttributes", "Ljavax/swing/text/AttributeSet;", nullptr, 0, $field(HTMLDocument$HTMLReader, styleAttributes)},
	{"option", "Ljavax/swing/text/html/Option;", nullptr, 0, $field(HTMLDocument$HTMLReader, option)},
	{"parseBuffer", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/swing/text/DefaultStyledDocument$ElementSpec;>;", $PROTECTED, $field(HTMLDocument$HTMLReader, parseBuffer)},
	{"charAttr", "Ljavax/swing/text/MutableAttributeSet;", nullptr, $PROTECTED, $field(HTMLDocument$HTMLReader, charAttr)},
	{"charAttrStack", "Ljava/util/Stack;", "Ljava/util/Stack<Ljavax/swing/text/AttributeSet;>;", 0, $field(HTMLDocument$HTMLReader, charAttrStack)},
	{"tagMap", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljavax/swing/text/html/HTML$Tag;Ljavax/swing/text/html/HTMLDocument$HTMLReader$TagAction;>;", 0, $field(HTMLDocument$HTMLReader, tagMap)},
	{"inBlock", "I", nullptr, 0, $field(HTMLDocument$HTMLReader, inBlock)},
	{"nextTagAfterPImplied", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PRIVATE, $field(HTMLDocument$HTMLReader, nextTagAfterPImplied)},
	{}
};

$MethodInfo _HTMLDocument$HTMLReader_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/html/HTMLDocument;I)V", nullptr, $PUBLIC, $method(static_cast<void(HTMLDocument$HTMLReader::*)($HTMLDocument*,int32_t)>(&HTMLDocument$HTMLReader::init$))},
	{"<init>", "(Ljavax/swing/text/html/HTMLDocument;IIILjavax/swing/text/html/HTML$Tag;)V", nullptr, $PUBLIC, $method(static_cast<void(HTMLDocument$HTMLReader::*)($HTMLDocument*,int32_t,int32_t,int32_t,$HTML$Tag*)>(&HTMLDocument$HTMLReader::init$))},
	{"<init>", "(Ljavax/swing/text/html/HTMLDocument;IIILjavax/swing/text/html/HTML$Tag;ZZZ)V", nullptr, 0, $method(static_cast<void(HTMLDocument$HTMLReader::*)($HTMLDocument*,int32_t,int32_t,int32_t,$HTML$Tag*,bool,bool,bool)>(&HTMLDocument$HTMLReader::init$))},
	{"addCSSRules", "(Ljava/lang/String;)V", nullptr, 0},
	{"addContent", "([CII)V", nullptr, $PROTECTED},
	{"addContent", "([CIIZ)V", nullptr, $PROTECTED},
	{"addExternalComment", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(HTMLDocument$HTMLReader::*)($String*)>(&HTMLDocument$HTMLReader::addExternalComment))},
	{"addSpecialElement", "(Ljavax/swing/text/html/HTML$Tag;Ljavax/swing/text/MutableAttributeSet;)V", nullptr, $PROTECTED},
	{"adjustEndElement", "()V", nullptr, $PRIVATE, $method(static_cast<void(HTMLDocument$HTMLReader::*)()>(&HTMLDocument$HTMLReader::adjustEndElement))},
	{"adjustEndSpecsForPartialInsert", "()V", nullptr, $PRIVATE, $method(static_cast<void(HTMLDocument$HTMLReader::*)()>(&HTMLDocument$HTMLReader::adjustEndSpecsForPartialInsert))},
	{"blockClose", "(Ljavax/swing/text/html/HTML$Tag;)V", nullptr, $PROTECTED},
	{"blockOpen", "(Ljavax/swing/text/html/HTML$Tag;Ljavax/swing/text/MutableAttributeSet;)V", nullptr, $PROTECTED},
	{"canInsertTag", "(Ljavax/swing/text/html/HTML$Tag;Ljavax/swing/text/AttributeSet;Z)Z", nullptr, $PRIVATE, $method(static_cast<bool(HTMLDocument$HTMLReader::*)($HTML$Tag*,$AttributeSet*,bool)>(&HTMLDocument$HTMLReader::canInsertTag))},
	{"depthTo", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(HTMLDocument$HTMLReader::*)(int32_t)>(&HTMLDocument$HTMLReader::depthTo))},
	{"flush", "()V", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"flushBuffer", "(Z)V", nullptr, 0, nullptr, "javax.swing.text.BadLocationException"},
	{"foundInsertTag", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(HTMLDocument$HTMLReader::*)(bool)>(&HTMLDocument$HTMLReader::foundInsertTag))},
	{"generateEndsSpecsForMidInsert", "()V", nullptr, $PRIVATE, $method(static_cast<void(HTMLDocument$HTMLReader::*)()>(&HTMLDocument$HTMLReader::generateEndsSpecsForMidInsert))},
	{"getPathTo", "(I)[Ljavax/swing/text/Element;", nullptr, $PRIVATE, $method(static_cast<$ElementArray*(HTMLDocument$HTMLReader::*)(int32_t)>(&HTMLDocument$HTMLReader::getPathTo))},
	{"handleComment", "([CI)V", nullptr, $PUBLIC},
	{"handleEndOfLineString", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"handleEndTag", "(Ljavax/swing/text/html/HTML$Tag;I)V", nullptr, $PUBLIC},
	{"handleSimpleTag", "(Ljavax/swing/text/html/HTML$Tag;Ljavax/swing/text/MutableAttributeSet;I)V", nullptr, $PUBLIC},
	{"handleStartTag", "(Ljavax/swing/text/html/HTML$Tag;Ljavax/swing/text/MutableAttributeSet;I)V", nullptr, $PUBLIC},
	{"handleText", "([CI)V", nullptr, $PUBLIC},
	{"heightToElementWithName", "(Ljava/lang/Object;I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(HTMLDocument$HTMLReader::*)(Object$*,int32_t)>(&HTMLDocument$HTMLReader::heightToElementWithName))},
	{"isInsertTag", "(Ljavax/swing/text/html/HTML$Tag;)Z", nullptr, $PRIVATE, $method(static_cast<bool(HTMLDocument$HTMLReader::*)($HTML$Tag*)>(&HTMLDocument$HTMLReader::isInsertTag))},
	{"linkCSSStyleSheet", "(Ljava/lang/String;)V", nullptr, 0},
	{"popCharacterStyle", "()V", nullptr, $PROTECTED},
	{"preContent", "([C)V", nullptr, $PROTECTED},
	{"pushCharacterStyle", "()V", nullptr, $PROTECTED},
	{"registerTag", "(Ljavax/swing/text/html/HTML$Tag;Ljavax/swing/text/html/HTMLDocument$HTMLReader$TagAction;)V", nullptr, $PROTECTED},
	{"textAreaContent", "([C)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _HTMLDocument$HTMLReader_InnerClassesInfo_[] = {
	{"javax.swing.text.html.HTMLDocument$HTMLReader", "javax.swing.text.html.HTMLDocument", "HTMLReader", $PUBLIC},
	{"javax.swing.text.html.HTMLEditorKit$ParserCallback", "javax.swing.text.html.HTMLEditorKit", "ParserCallback", $PUBLIC | $STATIC},
	{"javax.swing.text.html.HTMLDocument$HTMLReader$FormAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "FormAction", $PUBLIC},
	{"javax.swing.text.html.HTMLDocument$HTMLReader$ObjectAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "ObjectAction", 0},
	{"javax.swing.text.html.HTMLDocument$HTMLReader$BaseAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "BaseAction", 0},
	{"javax.swing.text.html.HTMLDocument$HTMLReader$TitleAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "TitleAction", 0},
	{"javax.swing.text.html.HTMLDocument$HTMLReader$AnchorAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "AnchorAction", 0},
	{"javax.swing.text.html.HTMLDocument$HTMLReader$ConvertAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "ConvertAction", 0},
	{"javax.swing.text.html.HTMLDocument$HTMLReader$CharacterAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "CharacterAction", $PUBLIC},
	{"javax.swing.text.html.HTMLDocument$HTMLReader$PreAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "PreAction", $PUBLIC},
	{"javax.swing.text.html.HTMLDocument$HTMLReader$StyleAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "StyleAction", 0},
	{"javax.swing.text.html.HTMLDocument$HTMLReader$AreaAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "AreaAction", 0},
	{"javax.swing.text.html.HTMLDocument$HTMLReader$MapAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "MapAction", 0},
	{"javax.swing.text.html.HTMLDocument$HTMLReader$LinkAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "LinkAction", 0},
	{"javax.swing.text.html.HTMLDocument$HTMLReader$HeadAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "HeadAction", 0},
	{"javax.swing.text.html.HTMLDocument$HTMLReader$MetaAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "MetaAction", 0},
	{"javax.swing.text.html.HTMLDocument$HTMLReader$HiddenAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "HiddenAction", $PUBLIC},
	{"javax.swing.text.html.HTMLDocument$HTMLReader$IsindexAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "IsindexAction", $PUBLIC},
	{"javax.swing.text.html.HTMLDocument$HTMLReader$SpecialAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "SpecialAction", $PUBLIC},
	{"javax.swing.text.html.HTMLDocument$HTMLReader$ParagraphAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "ParagraphAction", $PUBLIC},
	{"javax.swing.text.html.HTMLDocument$HTMLReader$FormTagAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "FormTagAction", $PRIVATE},
	{"javax.swing.text.html.HTMLDocument$HTMLReader$BlockAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "BlockAction", $PUBLIC},
	{"javax.swing.text.html.HTMLDocument$HTMLReader$TagAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "TagAction", $PUBLIC},
	{}
};

$ClassInfo _HTMLDocument$HTMLReader_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.html.HTMLDocument$HTMLReader",
	"javax.swing.text.html.HTMLEditorKit$ParserCallback",
	nullptr,
	_HTMLDocument$HTMLReader_FieldInfo_,
	_HTMLDocument$HTMLReader_MethodInfo_,
	nullptr,
	nullptr,
	_HTMLDocument$HTMLReader_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.HTMLDocument"
};

$Object* allocate$HTMLDocument$HTMLReader($Class* clazz) {
	return $of($alloc(HTMLDocument$HTMLReader));
}

void HTMLDocument$HTMLReader::init$($HTMLDocument* this$0, int32_t offset) {
	HTMLDocument$HTMLReader::init$(this$0, offset, 0, 0, nullptr);
}

void HTMLDocument$HTMLReader::init$($HTMLDocument* this$0, int32_t offset, int32_t popDepth, int32_t pushDepth, $HTML$Tag* insertTag) {
	HTMLDocument$HTMLReader::init$(this$0, offset, popDepth, pushDepth, insertTag, true, false, true);
}

void HTMLDocument$HTMLReader::init$($HTMLDocument* this$0, int32_t offset, int32_t popDepth, int32_t pushDepth, $HTML$Tag* insertTag, bool insertInsertTag, bool insertAfterImplied, bool wantsTrailingNewline) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$HTMLEditorKit$ParserCallback::init$();
	this->inParagraph = false;
	this->impliedP = false;
	this->inPre = false;
	this->inTextArea = false;
	$set(this, textAreaDocument, nullptr);
	this->inTitle = false;
	this->lastWasNewline = true;
	this->inStyle = false;
	this->inHead = false;
	$set(this, parseBuffer, $new($Vector));
	$set(this, charAttr, $new($HTMLDocument$TaggedAttributeSet));
	$set(this, charAttrStack, $new($Stack));
	this->inBlock = 0;
	$set(this, nextTagAfterPImplied, nullptr);
	this->emptyDocument = (this$0->getLength() == 0);
	this->isStyleCSS = "text/css"_s->equals($(this$0->getDefaultStyleSheetType()));
	this->offset = offset;
	this->threshold = this$0->getTokenThreshold();
	$set(this, tagMap, $new($Hashtable, 57));
	$var($HTMLDocument$HTMLReader$TagAction, na, $new($HTMLDocument$HTMLReader$TagAction, this));
	$var($HTMLDocument$HTMLReader$TagAction, ba, $new($HTMLDocument$HTMLReader$BlockAction, this));
	$var($HTMLDocument$HTMLReader$TagAction, pa, $new($HTMLDocument$HTMLReader$ParagraphAction, this));
	$var($HTMLDocument$HTMLReader$TagAction, ca, $new($HTMLDocument$HTMLReader$CharacterAction, this));
	$var($HTMLDocument$HTMLReader$TagAction, sa, $new($HTMLDocument$HTMLReader$SpecialAction, this));
	$var($HTMLDocument$HTMLReader$TagAction, fa, $new($HTMLDocument$HTMLReader$FormAction, this));
	$var($HTMLDocument$HTMLReader$TagAction, ha, $new($HTMLDocument$HTMLReader$HiddenAction, this));
	$var($HTMLDocument$HTMLReader$TagAction, conv, $new($HTMLDocument$HTMLReader$ConvertAction, this));
	$init($HTML$Tag);
	$nc(this->tagMap)->put($HTML$Tag::A, $$new($HTMLDocument$HTMLReader$AnchorAction, this));
	$nc(this->tagMap)->put($HTML$Tag::ADDRESS, ca);
	$nc(this->tagMap)->put($HTML$Tag::APPLET, ha);
	$nc(this->tagMap)->put($HTML$Tag::AREA, $$new($HTMLDocument$HTMLReader$AreaAction, this));
	$nc(this->tagMap)->put($HTML$Tag::B, conv);
	$nc(this->tagMap)->put($HTML$Tag::BASE, $$new($HTMLDocument$HTMLReader$BaseAction, this));
	$nc(this->tagMap)->put($HTML$Tag::BASEFONT, ca);
	$nc(this->tagMap)->put($HTML$Tag::BIG, ca);
	$nc(this->tagMap)->put($HTML$Tag::BLOCKQUOTE, ba);
	$nc(this->tagMap)->put($HTML$Tag::BODY, ba);
	$nc(this->tagMap)->put($HTML$Tag::BR, sa);
	$nc(this->tagMap)->put($HTML$Tag::CAPTION, ba);
	$nc(this->tagMap)->put($HTML$Tag::CENTER, ba);
	$nc(this->tagMap)->put($HTML$Tag::CITE, ca);
	$nc(this->tagMap)->put($HTML$Tag::CODE, ca);
	$nc(this->tagMap)->put($HTML$Tag::DD, ba);
	$nc(this->tagMap)->put($HTML$Tag::DFN, ca);
	$nc(this->tagMap)->put($HTML$Tag::DIR, ba);
	$nc(this->tagMap)->put($HTML$Tag::DIV, ba);
	$nc(this->tagMap)->put($HTML$Tag::DL, ba);
	$nc(this->tagMap)->put($HTML$Tag::DT, pa);
	$nc(this->tagMap)->put($HTML$Tag::EM, ca);
	$nc(this->tagMap)->put($HTML$Tag::FONT, conv);
	$nc(this->tagMap)->put($HTML$Tag::FORM, $$new($HTMLDocument$HTMLReader$FormTagAction, this));
	$nc(this->tagMap)->put($HTML$Tag::FRAME, sa);
	$nc(this->tagMap)->put($HTML$Tag::FRAMESET, ba);
	$nc(this->tagMap)->put($HTML$Tag::H1, pa);
	$nc(this->tagMap)->put($HTML$Tag::H2, pa);
	$nc(this->tagMap)->put($HTML$Tag::H3, pa);
	$nc(this->tagMap)->put($HTML$Tag::H4, pa);
	$nc(this->tagMap)->put($HTML$Tag::H5, pa);
	$nc(this->tagMap)->put($HTML$Tag::H6, pa);
	$nc(this->tagMap)->put($HTML$Tag::HEAD, $$new($HTMLDocument$HTMLReader$HeadAction, this));
	$nc(this->tagMap)->put($HTML$Tag::HR, sa);
	$nc(this->tagMap)->put($HTML$Tag::HTML, ba);
	$nc(this->tagMap)->put($HTML$Tag::I, conv);
	$nc(this->tagMap)->put($HTML$Tag::IMG, sa);
	$nc(this->tagMap)->put($HTML$Tag::INPUT, fa);
	$nc(this->tagMap)->put($HTML$Tag::ISINDEX, $$new($HTMLDocument$HTMLReader$IsindexAction, this));
	$nc(this->tagMap)->put($HTML$Tag::KBD, ca);
	$nc(this->tagMap)->put($HTML$Tag::LI, ba);
	$nc(this->tagMap)->put($HTML$Tag::LINK, $$new($HTMLDocument$HTMLReader$LinkAction, this));
	$nc(this->tagMap)->put($HTML$Tag::MAP, $$new($HTMLDocument$HTMLReader$MapAction, this));
	$nc(this->tagMap)->put($HTML$Tag::MENU, ba);
	$nc(this->tagMap)->put($HTML$Tag::META, $$new($HTMLDocument$HTMLReader$MetaAction, this));
	$nc(this->tagMap)->put($HTML$Tag::NOBR, ca);
	$nc(this->tagMap)->put($HTML$Tag::NOFRAMES, ba);
	$nc(this->tagMap)->put($HTML$Tag::OBJECT, sa);
	$nc(this->tagMap)->put($HTML$Tag::OL, ba);
	$nc(this->tagMap)->put($HTML$Tag::OPTION, fa);
	$nc(this->tagMap)->put($HTML$Tag::P, pa);
	$nc(this->tagMap)->put($HTML$Tag::PARAM, $$new($HTMLDocument$HTMLReader$ObjectAction, this));
	$nc(this->tagMap)->put($HTML$Tag::PRE, $$new($HTMLDocument$HTMLReader$PreAction, this));
	$nc(this->tagMap)->put($HTML$Tag::SAMP, ca);
	$nc(this->tagMap)->put($HTML$Tag::SCRIPT, ha);
	$nc(this->tagMap)->put($HTML$Tag::SELECT, fa);
	$nc(this->tagMap)->put($HTML$Tag::SMALL, ca);
	$nc(this->tagMap)->put($HTML$Tag::SPAN, ca);
	$nc(this->tagMap)->put($HTML$Tag::STRIKE, conv);
	$nc(this->tagMap)->put($HTML$Tag::S, ca);
	$nc(this->tagMap)->put($HTML$Tag::STRONG, ca);
	$nc(this->tagMap)->put($HTML$Tag::STYLE, $$new($HTMLDocument$HTMLReader$StyleAction, this));
	$nc(this->tagMap)->put($HTML$Tag::SUB, conv);
	$nc(this->tagMap)->put($HTML$Tag::SUP, conv);
	$nc(this->tagMap)->put($HTML$Tag::TABLE, ba);
	$nc(this->tagMap)->put($HTML$Tag::TD, ba);
	$nc(this->tagMap)->put($HTML$Tag::TEXTAREA, fa);
	$nc(this->tagMap)->put($HTML$Tag::TH, ba);
	$nc(this->tagMap)->put($HTML$Tag::TITLE, $$new($HTMLDocument$HTMLReader$TitleAction, this));
	$nc(this->tagMap)->put($HTML$Tag::TR, ba);
	$nc(this->tagMap)->put($HTML$Tag::TT, ca);
	$nc(this->tagMap)->put($HTML$Tag::U, conv);
	$nc(this->tagMap)->put($HTML$Tag::UL, ba);
	$nc(this->tagMap)->put($HTML$Tag::VAR, ca);
	if (insertTag != nullptr) {
		$set(this, insertTag, insertTag);
		this->popDepth = popDepth;
		this->pushDepth = pushDepth;
		this->insertInsertTag = insertInsertTag;
		this->foundInsertTag$ = false;
	} else {
		this->foundInsertTag$ = true;
	}
	if (insertAfterImplied) {
		this->popDepth = popDepth;
		this->pushDepth = pushDepth;
		this->insertAfterImplied = true;
		this->foundInsertTag$ = false;
		this->midInsert = false;
		this->insertInsertTag = true;
		this->wantsTrailingNewline = wantsTrailingNewline;
	} else {
		this->midInsert = (!this->emptyDocument && insertTag == nullptr);
		if (this->midInsert) {
			generateEndsSpecsForMidInsert();
		}
	}
	if (!this->emptyDocument && !this->midInsert) {
		int32_t targetOffset = $Math::max(this->offset - 1, 0);
		$var($Element, elem, this$0->getCharacterElement(targetOffset));
		for (int32_t i = 0; i <= this->popDepth; ++i) {
			$assign(elem, $nc(elem)->getParentElement());
		}
		for (int32_t i = 0; i < this->pushDepth; ++i) {
			int32_t index = $nc(elem)->getElementIndex(this->offset);
			$assign(elem, elem->getElement(index));
		}
		$var($AttributeSet, attrs, $nc(elem)->getAttributes());
		if (attrs != nullptr) {
			$init($StyleConstants);
			$var($HTML$Tag, tagToInsertInto, $cast($HTML$Tag, attrs->getAttribute($StyleConstants::NameAttribute)));
			if (tagToInsertInto != nullptr) {
				this->inParagraph = tagToInsertInto->isParagraph();
			}
		}
	}
}

void HTMLDocument$HTMLReader::generateEndsSpecsForMidInsert() {
	$useLocalCurrentObjectStackCache();
	$init($HTML$Tag);
	int32_t count = heightToElementWithName($HTML$Tag::BODY, $Math::max(0, this->offset - 1));
	bool joinNext = false;
	if (count == -1 && this->offset > 0) {
		count = heightToElementWithName($HTML$Tag::BODY, this->offset);
		if (count != -1) {
			count = depthTo(this->offset - 1) - 1;
			joinNext = true;
		}
	}
	if (count == -1) {
		$throwNew($RuntimeException, "Must insert new content into body element-"_s);
	}
	if (count != -1) {
		try {
			if (!joinNext && this->offset > 0 && !$nc($(this->this$0->getText(this->offset - 1, 1)))->equals("\n"_s)) {
				$var($SimpleAttributeSet, newAttrs, $new($SimpleAttributeSet));
				$init($StyleConstants);
				newAttrs->addAttribute($StyleConstants::NameAttribute, $HTML$Tag::CONTENT);
				$init($HTMLDocument);
				$var($DefaultStyledDocument$ElementSpec, spec, $new($DefaultStyledDocument$ElementSpec, newAttrs, $DefaultStyledDocument$ElementSpec::ContentType, $HTMLDocument::NEWLINE, 0, 1));
				$nc(this->parseBuffer)->addElement(spec);
			}
		} catch ($BadLocationException&) {
			$catch();
		}
		while (count-- > 0) {
			$nc(this->parseBuffer)->addElement($$new($DefaultStyledDocument$ElementSpec, nullptr, $DefaultStyledDocument$ElementSpec::EndTagType));
		}
		if (joinNext) {
			$var($DefaultStyledDocument$ElementSpec, spec, $new($DefaultStyledDocument$ElementSpec, nullptr, $DefaultStyledDocument$ElementSpec::StartTagType));
			spec->setDirection($DefaultStyledDocument$ElementSpec::JoinNextDirection);
			$nc(this->parseBuffer)->addElement(spec);
		}
	}
}

int32_t HTMLDocument$HTMLReader::depthTo(int32_t offset) {
	$var($Element, e, this->this$0->getDefaultRootElement());
	int32_t count = 0;
	while (!$nc(e)->isLeaf()) {
		++count;
		$assign(e, e->getElement(e->getElementIndex(offset)));
	}
	return count;
}

int32_t HTMLDocument$HTMLReader::heightToElementWithName(Object$* name, int32_t offset) {
	$useLocalCurrentObjectStackCache();
	$var($Element, e, $nc($(this->this$0->getCharacterElement(offset)))->getParentElement());
	int32_t count = 0;
	$init($StyleConstants);
	while (e != nullptr && !$equals($nc($(e->getAttributes()))->getAttribute($StyleConstants::NameAttribute), name)) {
		++count;
		$assign(e, e->getParentElement());
	}
	return (e == nullptr) ? -1 : count;
}

void HTMLDocument$HTMLReader::adjustEndElement() {
	$useLocalCurrentObjectStackCache();
	int32_t length = this->this$0->getLength();
	if (length == 0) {
		return;
	}
	this->this$0->obtainLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$var($ElementArray, pPath, getPathTo(length - 1));
				int32_t pLength = $nc(pPath)->length;
				$init($StyleConstants);
				$init($HTML$Tag);
				bool var$1 = pLength > 1 && $equals($nc($($nc(pPath->get(1))->getAttributes()))->getAttribute($StyleConstants::NameAttribute), $HTML$Tag::BODY);
				if (var$1 && $nc(pPath->get(1))->getEndOffset() == length) {
					$var($String, lastText, this->this$0->getText(length - 1, 1));
					$var($AbstractDocument$DefaultDocumentEvent, event, nullptr);
					$var($ElementArray, added, nullptr);
					$var($ElementArray, removed, nullptr);
					int32_t index = 0;
					$assign(added, $new($ElementArray, 0));
					$assign(removed, $new($ElementArray, 1));
					index = $nc(pPath->get(0))->getElementIndex(length);
					removed->set(0, $($nc(pPath->get(0))->getElement(index)));
					$nc(($cast($AbstractDocument$BranchElement, pPath->get(0))))->replace(index, 1, added);
					$var($AbstractDocument$ElementEdit, firstEdit, $new($AbstractDocument$ElementEdit, pPath->get(0), index, removed, added));
					$var($SimpleAttributeSet, sas, $new($SimpleAttributeSet));
					sas->addAttribute($StyleConstants::NameAttribute, $HTML$Tag::CONTENT);
					$init($Boolean);
					sas->addAttribute("CR"_s, $Boolean::TRUE);
					$assign(added, $new($ElementArray, 1));
					added->set(0, $(this->this$0->createLeafElement(pPath->get(pLength - 1), sas, length, length + 1)));
					index = $nc(pPath->get(pLength - 1))->getElementCount();
					$nc(($cast($AbstractDocument$BranchElement, pPath->get(pLength - 1))))->replace(index, 0, added);
					$init($DocumentEvent$EventType);
					$assign(event, $new($AbstractDocument$DefaultDocumentEvent, this->this$0, length, 1, $DocumentEvent$EventType::CHANGE));
					event->addEdit($$new($AbstractDocument$ElementEdit, pPath->get(pLength - 1), index, $$new($ElementArray, 0), added));
					event->addEdit(firstEdit);
					event->end();
					this->this$0->fireChangedUpdate(event);
					this->this$0->fireUndoableEditUpdate($$new($UndoableEditEvent, this, event));
					if ($nc(lastText)->equals("\n"_s)) {
						$assign(event, $new($AbstractDocument$DefaultDocumentEvent, this->this$0, length - 1, 1, $DocumentEvent$EventType::REMOVE));
						$HTMLDocument::access$000(this->this$0, event);
						$var($UndoableEdit, u, $nc($($HTMLDocument::access$100(this->this$0)))->remove(length - 1, 1));
						if (u != nullptr) {
							event->addEdit(u);
						}
						$HTMLDocument::access$200(this->this$0, event);
						event->end();
						$HTMLDocument::access$300(this->this$0, event);
						this->this$0->fireUndoableEditUpdate($$new($UndoableEditEvent, this, event));
					}
				}
			} catch ($BadLocationException&) {
				$catch();
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			this->this$0->releaseLock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$ElementArray* HTMLDocument$HTMLReader::getPathTo(int32_t offset) {
	$useLocalCurrentObjectStackCache();
	$var($Stack, elements, $new($Stack));
	$var($Element, e, this->this$0->getDefaultRootElement());
	int32_t index = 0;
	while (!$nc(e)->isLeaf()) {
		elements->push(e);
		$assign(e, e->getElement(e->getElementIndex(offset)));
	}
	$var($ElementArray, retValue, $new($ElementArray, elements->size()));
	elements->copyInto(retValue);
	return retValue;
}

void HTMLDocument$HTMLReader::flush() {
	if (this->emptyDocument && !this->insertAfterImplied) {
		bool var$0 = this->this$0->getLength() > 0;
		if (var$0 || $nc(this->parseBuffer)->size() > 0) {
			flushBuffer(true);
			adjustEndElement();
		}
	} else {
		flushBuffer(true);
	}
}

void HTMLDocument$HTMLReader::handleText($chars* data, int32_t pos) {
	$useLocalCurrentObjectStackCache();
	if (this->receivedEndHTML || (this->midInsert && !this->inBody)) {
		return;
	}
	$init($Boolean);
	if ($nc($of($(this->this$0->getProperty("i18n"_s))))->equals($Boolean::FALSE)) {
		$init($TextAttribute);
		$var($Object, d, this->this$0->getProperty($TextAttribute::RUN_DIRECTION));
		if ((d != nullptr) && ($of(d)->equals($TextAttribute::RUN_DIRECTION_RTL))) {
			this->this$0->putProperty("i18n"_s, $Boolean::TRUE);
		} else if ($SwingUtilities2::isComplexLayout(data, 0, $nc(data)->length)) {
			this->this$0->putProperty("i18n"_s, $Boolean::TRUE);
		}
	}
	if (this->inTextArea) {
		textAreaContent(data);
	} else if (this->inPre) {
		preContent(data);
	} else if (this->inTitle) {
		$init($Document);
		this->this$0->putProperty($Document::TitleProperty, $$new($String, data));
	} else if (this->option != nullptr) {
		$nc(this->option)->setLabel($$new($String, data));
	} else if (this->inStyle) {
		if (this->styles != nullptr) {
			$nc(this->styles)->addElement($$new($String, data));
		}
	} else if (this->inBlock > 0) {
		if (!this->foundInsertTag$ && this->insertAfterImplied) {
			foundInsertTag(false);
			this->foundInsertTag$ = true;
			this->inParagraph = (this->impliedP = !this->this$0->insertInBody);
		}
		if ($nc(data)->length >= 1) {
			addContent(data, 0, data->length);
		}
	}
}

void HTMLDocument$HTMLReader::handleStartTag($HTML$Tag* t, $MutableAttributeSet* a, int32_t pos) {
	$useLocalCurrentObjectStackCache();
	if (this->receivedEndHTML) {
		return;
	}
	if (this->midInsert && !this->inBody) {
		$init($HTML$Tag);
		if (t == $HTML$Tag::BODY) {
			this->inBody = true;
			++this->inBlock;
		}
		return;
	}
	$init($HTML$Tag);
	if (!this->inBody && t == $HTML$Tag::BODY) {
		this->inBody = true;
	}
	$init($HTML$Attribute);
	if (this->isStyleCSS && $nc(a)->isDefined($HTML$Attribute::STYLE)) {
		$var($String, decl, $cast($String, a->getAttribute($HTML$Attribute::STYLE)));
		a->removeAttribute($HTML$Attribute::STYLE);
		$set(this, styleAttributes, $nc($(this->this$0->getStyleSheet()))->getDeclaration(decl));
		a->addAttributes(this->styleAttributes);
	} else {
		$set(this, styleAttributes, nullptr);
	}
	$var($HTMLDocument$HTMLReader$TagAction, action, $cast($HTMLDocument$HTMLReader$TagAction, $nc(this->tagMap)->get(t)));
	if (action != nullptr) {
		action->start(t, a);
	}
}

void HTMLDocument$HTMLReader::handleComment($chars* data, int32_t pos) {
	$useLocalCurrentObjectStackCache();
	if (this->receivedEndHTML) {
		addExternalComment($$new($String, data));
		return;
	}
	if (this->inStyle) {
		if (this->styles != nullptr) {
			$nc(this->styles)->addElement($$new($String, data));
		}
	} else if (this->this$0->getPreservesUnknownTags()) {
		$init($HTML$Tag);
		if (this->inBlock == 0 && (this->foundInsertTag$ || this->insertTag != $HTML$Tag::COMMENT)) {
			addExternalComment($$new($String, data));
			return;
		}
		$var($SimpleAttributeSet, sas, $new($SimpleAttributeSet));
		$init($HTML$Attribute);
		sas->addAttribute($HTML$Attribute::COMMENT, $$new($String, data));
		addSpecialElement($HTML$Tag::COMMENT, sas);
	}
	$init($HTML$Tag);
	$var($HTMLDocument$HTMLReader$TagAction, action, $cast($HTMLDocument$HTMLReader$TagAction, $nc(this->tagMap)->get($HTML$Tag::COMMENT)));
	if (action != nullptr) {
		action->start($HTML$Tag::COMMENT, $$new($SimpleAttributeSet));
		action->end($HTML$Tag::COMMENT);
	}
}

void HTMLDocument$HTMLReader::addExternalComment($String* comment) {
	$useLocalCurrentObjectStackCache();
	$var($Object, comments, this->this$0->getProperty("AdditionalComments"_s));
	if (comments != nullptr && !($instanceOf($Vector, comments))) {
		return;
	}
	if (comments == nullptr) {
		$assign(comments, $new($Vector));
		this->this$0->putProperty("AdditionalComments"_s, comments);
	}
	$var($Vector, v, $cast($Vector, comments));
	$nc(v)->addElement(comment);
}

void HTMLDocument$HTMLReader::handleEndTag($HTML$Tag* t, int32_t pos) {
	if (this->receivedEndHTML || (this->midInsert && !this->inBody)) {
		return;
	}
	$init($HTML$Tag);
	if (t == $HTML$Tag::HTML) {
		this->receivedEndHTML = true;
	}
	if (t == $HTML$Tag::BODY) {
		this->inBody = false;
		if (this->midInsert) {
			--this->inBlock;
		}
	}
	$var($HTMLDocument$HTMLReader$TagAction, action, $cast($HTMLDocument$HTMLReader$TagAction, $nc(this->tagMap)->get(t)));
	if (action != nullptr) {
		action->end(t);
	}
}

void HTMLDocument$HTMLReader::handleSimpleTag($HTML$Tag* t, $MutableAttributeSet* a, int32_t pos) {
	$useLocalCurrentObjectStackCache();
	if (this->receivedEndHTML || (this->midInsert && !this->inBody)) {
		return;
	}
	$init($HTML$Attribute);
	if (this->isStyleCSS && $nc(a)->isDefined($HTML$Attribute::STYLE)) {
		$var($String, decl, $cast($String, a->getAttribute($HTML$Attribute::STYLE)));
		a->removeAttribute($HTML$Attribute::STYLE);
		$set(this, styleAttributes, $nc($(this->this$0->getStyleSheet()))->getDeclaration(decl));
		a->addAttributes(this->styleAttributes);
	} else {
		$set(this, styleAttributes, nullptr);
	}
	$var($HTMLDocument$HTMLReader$TagAction, action, $cast($HTMLDocument$HTMLReader$TagAction, $nc(this->tagMap)->get(t)));
	if (action != nullptr) {
		action->start(t, a);
		action->end(t);
	} else if (this->this$0->getPreservesUnknownTags()) {
		addSpecialElement(t, a);
	}
}

void HTMLDocument$HTMLReader::handleEndOfLineString($String* eol) {
	if (this->emptyDocument && eol != nullptr) {
		$init($DefaultEditorKit);
		this->this$0->putProperty($DefaultEditorKit::EndOfLineStringProperty, eol);
	}
}

void HTMLDocument$HTMLReader::registerTag($HTML$Tag* t, $HTMLDocument$HTMLReader$TagAction* a) {
	$nc(this->tagMap)->put(t, a);
}

void HTMLDocument$HTMLReader::pushCharacterStyle() {
	$nc(this->charAttrStack)->push($($nc(this->charAttr)->copyAttributes()));
}

void HTMLDocument$HTMLReader::popCharacterStyle() {
	if (!$nc(this->charAttrStack)->empty()) {
		$set(this, charAttr, $cast($MutableAttributeSet, $nc(this->charAttrStack)->peek()));
		$nc(this->charAttrStack)->pop();
	}
}

void HTMLDocument$HTMLReader::textAreaContent($chars* data) {
	try {
		int32_t var$0 = $nc(this->textAreaDocument)->getLength();
		$nc(this->textAreaDocument)->insertString(var$0, $$new($String, data), nullptr);
	} catch ($BadLocationException&) {
		$catch();
	}
}

void HTMLDocument$HTMLReader::preContent($chars* data) {
	$useLocalCurrentObjectStackCache();
	int32_t last = 0;
	for (int32_t i = 0; i < $nc(data)->length; ++i) {
		if (data->get(i) == u'\n') {
			addContent(data, last, i - last + 1);
			$init($HTML$Tag);
			blockClose($HTML$Tag::IMPLIED);
			$var($MutableAttributeSet, a, $new($SimpleAttributeSet));
			$init($CSS$Attribute);
			a->addAttribute($CSS$Attribute::WHITE_SPACE, "pre"_s);
			blockOpen($HTML$Tag::IMPLIED, a);
			last = i + 1;
		}
	}
	if (last < $nc(data)->length) {
		addContent(data, last, data->length - last);
	}
}

void HTMLDocument$HTMLReader::blockOpen($HTML$Tag* t, $MutableAttributeSet* attr) {
	$useLocalCurrentObjectStackCache();
	if (this->impliedP) {
		$init($HTML$Tag);
		blockClose($HTML$Tag::IMPLIED);
	}
	++this->inBlock;
	if (!canInsertTag(t, attr, true)) {
		return;
	}
	$init($HTMLEditorKit$ParserCallback);
	if ($nc(attr)->isDefined($HTMLEditorKit$ParserCallback::IMPLIED)) {
		attr->removeAttribute($HTMLEditorKit$ParserCallback::IMPLIED);
	}
	this->lastWasNewline = false;
	$init($StyleConstants);
	$nc(attr)->addAttribute($StyleConstants::NameAttribute, t);
	$var($DefaultStyledDocument$ElementSpec, es, $new($DefaultStyledDocument$ElementSpec, $(attr->copyAttributes()), $DefaultStyledDocument$ElementSpec::StartTagType));
	$nc(this->parseBuffer)->addElement(es);
}

void HTMLDocument$HTMLReader::blockClose($HTML$Tag* t) {
	$useLocalCurrentObjectStackCache();
	--this->inBlock;
	if (!this->foundInsertTag$) {
		return;
	}
	if (!this->lastWasNewline) {
		pushCharacterStyle();
		$init($Boolean);
		$nc(this->charAttr)->addAttribute("CR"_s, $Boolean::TRUE);
		$init($HTMLDocument);
		addContent($HTMLDocument::NEWLINE, 0, 1, true);
		popCharacterStyle();
		this->lastWasNewline = true;
	}
	if (this->impliedP) {
		this->impliedP = false;
		this->inParagraph = false;
		$init($HTML$Tag);
		if (t != $HTML$Tag::IMPLIED) {
			blockClose($HTML$Tag::IMPLIED);
		}
	}
	$var($DefaultStyledDocument$ElementSpec, prev, ($nc(this->parseBuffer)->size() > 0) ? $cast($DefaultStyledDocument$ElementSpec, $nc(this->parseBuffer)->lastElement()) : ($DefaultStyledDocument$ElementSpec*)nullptr);
	if (prev != nullptr && prev->getType() == $DefaultStyledDocument$ElementSpec::StartTagType) {
		$var($chars, one, $new($chars, 1));
		one->set(0, u' ');
		addContent(one, 0, 1);
	}
	$var($DefaultStyledDocument$ElementSpec, es, $new($DefaultStyledDocument$ElementSpec, nullptr, $DefaultStyledDocument$ElementSpec::EndTagType));
	$nc(this->parseBuffer)->addElement(es);
}

void HTMLDocument$HTMLReader::addContent($chars* data, int32_t offs, int32_t length) {
	addContent(data, offs, length, true);
}

void HTMLDocument$HTMLReader::addContent($chars* data, int32_t offs, int32_t length, bool generateImpliedPIfNecessary) {
	$useLocalCurrentObjectStackCache();
	if (!this->foundInsertTag$) {
		return;
	}
	if (generateImpliedPIfNecessary && (!this->inParagraph) && (!this->inPre)) {
		$init($HTML$Tag);
		blockOpen($HTML$Tag::IMPLIED, $$new($SimpleAttributeSet));
		this->inParagraph = true;
		this->impliedP = true;
	}
	this->emptyAnchor = false;
	$init($StyleConstants);
	$init($HTML$Tag);
	$nc(this->charAttr)->addAttribute($StyleConstants::NameAttribute, $HTML$Tag::CONTENT);
	$var($AttributeSet, a, $nc(this->charAttr)->copyAttributes());
	$var($DefaultStyledDocument$ElementSpec, es, $new($DefaultStyledDocument$ElementSpec, a, $DefaultStyledDocument$ElementSpec::ContentType, data, offs, length));
	$nc(this->parseBuffer)->addElement(es);
	if ($nc(this->parseBuffer)->size() > this->threshold) {
		if (this->threshold <= 10000) {
			this->threshold *= 5;
		}
		try {
			flushBuffer(false);
		} catch ($BadLocationException&) {
			$catch();
		}
	}
	if (length > 0) {
		this->lastWasNewline = ($nc(data)->get(offs + length - 1) == u'\n');
	}
}

void HTMLDocument$HTMLReader::addSpecialElement($HTML$Tag* t, $MutableAttributeSet* a) {
	$useLocalCurrentObjectStackCache();
	$init($HTML$Tag);
	if ((t != $HTML$Tag::FRAME) && (!this->inParagraph) && (!this->inPre)) {
		$set(this, nextTagAfterPImplied, t);
		blockOpen($HTML$Tag::IMPLIED, $$new($SimpleAttributeSet));
		$set(this, nextTagAfterPImplied, nullptr);
		this->inParagraph = true;
		this->impliedP = true;
	}
	if (!canInsertTag(t, a, $nc(t)->isBlock())) {
		return;
	}
	$init($HTMLEditorKit$ParserCallback);
	if ($nc(a)->isDefined($HTMLEditorKit$ParserCallback::IMPLIED)) {
		a->removeAttribute($HTMLEditorKit$ParserCallback::IMPLIED);
	}
	this->emptyAnchor = false;
	$nc(a)->addAttributes(this->charAttr);
	$init($StyleConstants);
	a->addAttribute($StyleConstants::NameAttribute, t);
	$var($chars, one, $new($chars, 1));
	one->set(0, u' ');
	$var($DefaultStyledDocument$ElementSpec, es, $new($DefaultStyledDocument$ElementSpec, $(a->copyAttributes()), $DefaultStyledDocument$ElementSpec::ContentType, one, 0, 1));
	$nc(this->parseBuffer)->addElement(es);
	if (t == $HTML$Tag::FRAME) {
		this->lastWasNewline = true;
	}
}

void HTMLDocument$HTMLReader::flushBuffer(bool endOfStream) {
	int32_t oldLength = this->this$0->getLength();
	int32_t size = $nc(this->parseBuffer)->size();
	if (endOfStream && (this->insertTag != nullptr || this->insertAfterImplied) && size > 0) {
		adjustEndSpecsForPartialInsert();
		size = $nc(this->parseBuffer)->size();
	}
	$var($DefaultStyledDocument$ElementSpecArray, spec, $new($DefaultStyledDocument$ElementSpecArray, size));
	$nc(this->parseBuffer)->copyInto(spec);
	if (oldLength == 0 && (this->insertTag == nullptr && !this->insertAfterImplied)) {
		this->this$0->create(spec);
	} else {
		this->this$0->insert(this->offset, spec);
	}
	$nc(this->parseBuffer)->removeAllElements();
	this->offset += this->this$0->getLength() - oldLength;
	++this->flushCount;
}

void HTMLDocument$HTMLReader::adjustEndSpecsForPartialInsert() {
	$useLocalCurrentObjectStackCache();
	int32_t size = $nc(this->parseBuffer)->size();
	if (this->insertTagDepthDelta < 0) {
		int32_t removeCounter = this->insertTagDepthDelta;
		while (removeCounter < 0 && size >= 0 && $nc(($cast($DefaultStyledDocument$ElementSpec, $($nc(this->parseBuffer)->elementAt(size - 1)))))->getType() == $DefaultStyledDocument$ElementSpec::EndTagType) {
			$nc(this->parseBuffer)->removeElementAt(--size);
			++removeCounter;
		}
	}
	if (this->flushCount == 0 && (!this->insertAfterImplied || !this->wantsTrailingNewline)) {
		int32_t index = 0;
		if (this->pushDepth > 0) {
			if ($nc(($cast($DefaultStyledDocument$ElementSpec, $($nc(this->parseBuffer)->elementAt(0)))))->getType() == $DefaultStyledDocument$ElementSpec::ContentType) {
				++index;
			}
		}
		index += (this->popDepth + this->pushDepth);
		int32_t cCount = 0;
		int32_t cStart = index;
		while (index < size && $nc(($cast($DefaultStyledDocument$ElementSpec, $($nc(this->parseBuffer)->elementAt(index)))))->getType() == $DefaultStyledDocument$ElementSpec::ContentType) {
			++index;
			++cCount;
		}
		if (cCount > 1) {
			while (index < size && $nc(($cast($DefaultStyledDocument$ElementSpec, $($nc(this->parseBuffer)->elementAt(index)))))->getType() == $DefaultStyledDocument$ElementSpec::EndTagType) {
				++index;
			}
			if (index == size) {
				$var($chars, lastText, $nc(($cast($DefaultStyledDocument$ElementSpec, $($nc(this->parseBuffer)->elementAt(cStart + cCount - 1)))))->getArray());
				$init($HTMLDocument);
				if ($nc(lastText)->length == 1 && lastText->get(0) == $nc($HTMLDocument::NEWLINE)->get(0)) {
					index = cStart + cCount - 1;
					while (size > index) {
						$nc(this->parseBuffer)->removeElementAt(--size);
					}
				}
			}
		}
	}
	if (this->wantsTrailingNewline) {
		for (int32_t counter = $nc(this->parseBuffer)->size() - 1; counter >= 0; --counter) {
			$var($DefaultStyledDocument$ElementSpec, spec, $cast($DefaultStyledDocument$ElementSpec, $nc(this->parseBuffer)->elementAt(counter)));
			if ($nc(spec)->getType() == $DefaultStyledDocument$ElementSpec::ContentType) {
				if ($nc($(spec->getArray()))->get(spec->getLength() - 1) != u'\n') {
					$var($SimpleAttributeSet, attrs, $new($SimpleAttributeSet));
					$init($StyleConstants);
					$init($HTML$Tag);
					attrs->addAttribute($StyleConstants::NameAttribute, $HTML$Tag::CONTENT);
					$init($HTMLDocument);
					$nc(this->parseBuffer)->insertElementAt($$new($DefaultStyledDocument$ElementSpec, attrs, $DefaultStyledDocument$ElementSpec::ContentType, $HTMLDocument::NEWLINE, 0, 1), counter + 1);
				}
				break;
			}
		}
	}
}

void HTMLDocument$HTMLReader::addCSSRules($String* rules) {
	$var($StyleSheet, ss, this->this$0->getStyleSheet());
	$nc(ss)->addRule(rules);
}

void HTMLDocument$HTMLReader::linkCSSStyleSheet($String* href) {
	$useLocalCurrentObjectStackCache();
	$var($URL, url, nullptr);
	try {
		$assign(url, $new($URL, this->this$0->base, href));
	} catch ($MalformedURLException&) {
		$var($MalformedURLException, mfe, $catch());
		try {
			$assign(url, $new($URL, href));
		} catch ($MalformedURLException&) {
			$var($MalformedURLException, mfe2, $catch());
			$assign(url, nullptr);
		}
	}
	if (url != nullptr) {
		$nc($(this->this$0->getStyleSheet()))->importStyleSheet(url);
	}
}

bool HTMLDocument$HTMLReader::canInsertTag($HTML$Tag* t, $AttributeSet* attr, bool isBlockTag) {
	if (!this->foundInsertTag$) {
		$init($HTML$Tag);
		bool needPImplied = ((t == $HTML$Tag::IMPLIED) && (!this->inParagraph) && (!this->inPre));
		if (needPImplied && (this->nextTagAfterPImplied != nullptr)) {
			if (this->insertTag != nullptr) {
				bool nextTagIsInsertTag = isInsertTag(this->nextTagAfterPImplied);
				if ((!nextTagIsInsertTag) || (!this->insertInsertTag)) {
					return false;
				}
			}
		} else {
			bool var$1 = (this->insertTag != nullptr && !isInsertTag(t));
			$init($HTMLEditorKit$ParserCallback);
			if (var$1 || (this->insertAfterImplied && (attr == nullptr || $nc(attr)->isDefined($HTMLEditorKit$ParserCallback::IMPLIED) || t == $HTML$Tag::IMPLIED))) {
				return false;
			}
		}
		foundInsertTag(isBlockTag);
		if (!this->insertInsertTag) {
			return false;
		}
	}
	return true;
}

bool HTMLDocument$HTMLReader::isInsertTag($HTML$Tag* tag) {
	return (this->insertTag == tag);
}

void HTMLDocument$HTMLReader::foundInsertTag(bool isBlockTag) {
	$useLocalCurrentObjectStackCache();
	this->foundInsertTag$ = true;
	if (!this->insertAfterImplied && (this->popDepth > 0 || this->pushDepth > 0)) {
		try {
			if (this->offset == 0 || !$nc($(this->this$0->getText(this->offset - 1, 1)))->equals("\n"_s)) {
				$var($AttributeSet, newAttrs, nullptr);
				bool joinP = true;
				if (this->offset != 0) {
					$var($Element, charElement, this->this$0->getCharacterElement(this->offset - 1));
					$var($AttributeSet, attrs, $nc(charElement)->getAttributes());
					$init($StyleConstants);
					if ($nc(attrs)->isDefined($StyleConstants::ComposedTextAttribute)) {
						joinP = false;
					} else {
						$var($Object, name, attrs->getAttribute($StyleConstants::NameAttribute));
						if ($instanceOf($HTML$Tag, name)) {
							$var($HTML$Tag, tag, $cast($HTML$Tag, name));
							$init($HTML$Tag);
							if (tag == $HTML$Tag::IMG || tag == $HTML$Tag::HR || tag == $HTML$Tag::COMMENT || ($instanceOf($HTML$UnknownTag, tag))) {
								joinP = false;
							}
						}
					}
				}
				if (!joinP) {
					$assign(newAttrs, $new($SimpleAttributeSet));
					$init($StyleConstants);
					$init($HTML$Tag);
					$nc(($cast($SimpleAttributeSet, newAttrs)))->addAttribute($StyleConstants::NameAttribute, $HTML$Tag::CONTENT);
				}
				$init($HTMLDocument);
				$var($DefaultStyledDocument$ElementSpec, es, $new($DefaultStyledDocument$ElementSpec, newAttrs, $DefaultStyledDocument$ElementSpec::ContentType, $HTMLDocument::NEWLINE, 0, $nc($HTMLDocument::NEWLINE)->length));
				if (joinP) {
					es->setDirection($DefaultStyledDocument$ElementSpec::JoinPreviousDirection);
				}
				$nc(this->parseBuffer)->addElement(es);
			}
		} catch ($BadLocationException&) {
			$catch();
		}
	}
	for (int32_t counter = 0; counter < this->popDepth; ++counter) {
		$nc(this->parseBuffer)->addElement($$new($DefaultStyledDocument$ElementSpec, nullptr, $DefaultStyledDocument$ElementSpec::EndTagType));
	}
	for (int32_t counter = 0; counter < this->pushDepth; ++counter) {
		$var($DefaultStyledDocument$ElementSpec, es, $new($DefaultStyledDocument$ElementSpec, nullptr, $DefaultStyledDocument$ElementSpec::StartTagType));
		es->setDirection($DefaultStyledDocument$ElementSpec::JoinNextDirection);
		$nc(this->parseBuffer)->addElement(es);
	}
	this->insertTagDepthDelta = depthTo($Math::max(0, this->offset - 1)) - this->popDepth + this->pushDepth - this->inBlock;
	if (isBlockTag) {
		++this->insertTagDepthDelta;
	} else {
		--this->insertTagDepthDelta;
		this->inParagraph = true;
		this->lastWasNewline = false;
	}
}

HTMLDocument$HTMLReader::HTMLDocument$HTMLReader() {
}

$Class* HTMLDocument$HTMLReader::load$($String* name, bool initialize) {
	$loadClass(HTMLDocument$HTMLReader, name, initialize, &_HTMLDocument$HTMLReader_ClassInfo_, allocate$HTMLDocument$HTMLReader);
	return class$;
}

$Class* HTMLDocument$HTMLReader::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax