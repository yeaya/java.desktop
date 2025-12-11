#include <javax/swing/text/html/MinimalHTMLWriter.h>

#include <java/awt/Color.h>
#include <java/io/Writer.h>
#include <java/util/Enumeration.h>
#include <java/util/Hashtable.h>
#include <javax/swing/text/AbstractDocument$BranchElement.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/AbstractWriter.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/DefaultStyledDocument.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/ElementIterator.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/Style.h>
#include <javax/swing/text/StyleConstants$CharacterConstants.h>
#include <javax/swing/text/StyleConstants$ColorConstants.h>
#include <javax/swing/text/StyleConstants$FontConstants.h>
#include <javax/swing/text/StyleConstants$ParagraphConstants.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/StyleContext$NamedStyle.h>
#include <javax/swing/text/StyledDocument.h>
#include <javax/swing/text/html/CSS.h>
#include <jcpp.h>

#undef BOLD
#undef ITALIC
#undef NEWLINE
#undef UNDERLINE

using $Color = ::java::awt::Color;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Hashtable = ::java::util::Hashtable;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $AbstractDocument$BranchElement = ::javax::swing::text::AbstractDocument$BranchElement;
using $AbstractWriter = ::javax::swing::text::AbstractWriter;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $DefaultStyledDocument = ::javax::swing::text::DefaultStyledDocument;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $ElementIterator = ::javax::swing::text::ElementIterator;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $Style = ::javax::swing::text::Style;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $StyleConstants$CharacterConstants = ::javax::swing::text::StyleConstants$CharacterConstants;
using $StyleConstants$ColorConstants = ::javax::swing::text::StyleConstants$ColorConstants;
using $StyleConstants$FontConstants = ::javax::swing::text::StyleConstants$FontConstants;
using $StyleConstants$ParagraphConstants = ::javax::swing::text::StyleConstants$ParagraphConstants;
using $StyleContext$NamedStyle = ::javax::swing::text::StyleContext$NamedStyle;
using $StyledDocument = ::javax::swing::text::StyledDocument;
using $CSS = ::javax::swing::text::html::CSS;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _MinimalHTMLWriter_FieldInfo_[] = {
	{"BOLD", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MinimalHTMLWriter, BOLD)},
	{"ITALIC", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MinimalHTMLWriter, ITALIC)},
	{"UNDERLINE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MinimalHTMLWriter, UNDERLINE)},
	{"css", "Ljavax/swing/text/html/CSS;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MinimalHTMLWriter, css)},
	{"fontMask", "I", nullptr, $PRIVATE, $field(MinimalHTMLWriter, fontMask)},
	{"startOffset", "I", nullptr, 0, $field(MinimalHTMLWriter, startOffset)},
	{"endOffset", "I", nullptr, 0, $field(MinimalHTMLWriter, endOffset)},
	{"fontAttributes", "Ljavax/swing/text/AttributeSet;", nullptr, $PRIVATE, $field(MinimalHTMLWriter, fontAttributes)},
	{"styleNameMapping", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE, $field(MinimalHTMLWriter, styleNameMapping)},
	{}
};

$MethodInfo _MinimalHTMLWriter_MethodInfo_[] = {
	{"<init>", "(Ljava/io/Writer;Ljavax/swing/text/StyledDocument;)V", nullptr, $PUBLIC, $method(static_cast<void(MinimalHTMLWriter::*)($Writer*,$StyledDocument*)>(&MinimalHTMLWriter::init$))},
	{"<init>", "(Ljava/io/Writer;Ljavax/swing/text/StyledDocument;II)V", nullptr, $PUBLIC, $method(static_cast<void(MinimalHTMLWriter::*)($Writer*,$StyledDocument*,int32_t,int32_t)>(&MinimalHTMLWriter::init$))},
	{"addStyleName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(MinimalHTMLWriter::*)($String*)>(&MinimalHTMLWriter::addStyleName))},
	{"endFontTag", "()V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"endSpanTag", "()V", nullptr, $PRIVATE, $method(static_cast<void(MinimalHTMLWriter::*)()>(&MinimalHTMLWriter::endSpanTag)), "java.io.IOException"},
	{"inFontTag", "()Z", nullptr, $PROTECTED},
	{"isText", "(Ljavax/swing/text/Element;)Z", nullptr, $PROTECTED},
	{"isValidCharacter", "(C)Z", nullptr, $PRIVATE, $method(static_cast<bool(MinimalHTMLWriter::*)(char16_t)>(&MinimalHTMLWriter::isValidCharacter))},
	{"mapStyleName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(MinimalHTMLWriter::*)($String*)>(&MinimalHTMLWriter::mapStyleName))},
	{"setFontMask", "(Ljavax/swing/text/AttributeSet;)V", nullptr, $PRIVATE, $method(static_cast<void(MinimalHTMLWriter::*)($AttributeSet*)>(&MinimalHTMLWriter::setFontMask))},
	{"startFontTag", "(Ljava/lang/String;)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"startSpanTag", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(MinimalHTMLWriter::*)($String*)>(&MinimalHTMLWriter::startSpanTag)), "java.io.IOException"},
	{"text", "(Ljavax/swing/text/Element;)V", nullptr, $PROTECTED, nullptr, "java.io.IOException,javax.swing.text.BadLocationException"},
	{"write", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException,javax.swing.text.BadLocationException"},
	{"writeAttributes", "(Ljavax/swing/text/AttributeSet;)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"writeBody", "()V", nullptr, $PROTECTED, nullptr, "java.io.IOException,javax.swing.text.BadLocationException"},
	{"writeComponent", "(Ljavax/swing/text/Element;)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"writeContent", "(Ljavax/swing/text/Element;Z)V", nullptr, $PROTECTED, nullptr, "java.io.IOException,javax.swing.text.BadLocationException"},
	{"writeEndMask", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(MinimalHTMLWriter::*)(int32_t)>(&MinimalHTMLWriter::writeEndMask)), "java.io.IOException"},
	{"writeEndParagraph", "()V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"writeEndTag", "(Ljava/lang/String;)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"writeHTMLTags", "(Ljavax/swing/text/AttributeSet;)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"writeHeader", "()V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"writeImage", "(Ljavax/swing/text/Element;)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"writeLeaf", "(Ljavax/swing/text/Element;)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"writeNonHTMLAttributes", "(Ljavax/swing/text/AttributeSet;)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"writeStartMask", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(MinimalHTMLWriter::*)(int32_t)>(&MinimalHTMLWriter::writeStartMask)), "java.io.IOException"},
	{"writeStartParagraph", "(Ljavax/swing/text/Element;)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"writeStartTag", "(Ljava/lang/String;)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"writeStyles", "()V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _MinimalHTMLWriter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.html.MinimalHTMLWriter",
	"javax.swing.text.AbstractWriter",
	nullptr,
	_MinimalHTMLWriter_FieldInfo_,
	_MinimalHTMLWriter_MethodInfo_
};

$Object* allocate$MinimalHTMLWriter($Class* clazz) {
	return $of($alloc(MinimalHTMLWriter));
}

$CSS* MinimalHTMLWriter::css = nullptr;

void MinimalHTMLWriter::init$($Writer* w, $StyledDocument* doc) {
	$AbstractWriter::init$(w, static_cast<$Document*>(doc));
	this->fontMask = 0;
	this->startOffset = 0;
	this->endOffset = 0;
}

void MinimalHTMLWriter::init$($Writer* w, $StyledDocument* doc, int32_t pos, int32_t len) {
	$AbstractWriter::init$(w, static_cast<$Document*>(doc), pos, len);
	this->fontMask = 0;
	this->startOffset = 0;
	this->endOffset = 0;
}

void MinimalHTMLWriter::write() {
	$set(this, styleNameMapping, $new($Hashtable));
	writeStartTag("<html>"_s);
	writeHeader();
	writeBody();
	writeEndTag("</html>"_s);
}

void MinimalHTMLWriter::writeAttributes($AttributeSet* attr) {
	$useLocalCurrentObjectStackCache();
	$var($Enumeration, attributeNames, $nc(attr)->getAttributeNames());
	while ($nc(attributeNames)->hasMoreElements()) {
		$var($Object, name, attributeNames->nextElement());
		if (($instanceOf($StyleConstants$ParagraphConstants, name)) || ($instanceOf($StyleConstants$CharacterConstants, name)) || ($instanceOf($StyleConstants$FontConstants, name)) || ($instanceOf($StyleConstants$ColorConstants, name))) {
			indent();
			write($($nc($of(name))->toString()));
			write(u':');
			write($($nc($of($($nc(MinimalHTMLWriter::css)->styleConstantsValueToCSSValue($cast($StyleConstants, name), $(attr->getAttribute(name))))))->toString()));
			write(u';');
			write($AbstractWriter::NEWLINE);
		}
	}
}

void MinimalHTMLWriter::text($Element* elem) {
	$var($String, contentStr, getText(elem));
	bool var$0 = ($nc(contentStr)->length() > 0);
	if (var$0 && (contentStr->charAt(contentStr->length() - 1) == $AbstractWriter::NEWLINE)) {
		$assign(contentStr, contentStr->substring(0, contentStr->length() - 1));
	}
	if ($nc(contentStr)->length() > 0) {
		write(contentStr);
	}
}

void MinimalHTMLWriter::writeStartTag($String* tag) {
	indent();
	write(tag);
	write($AbstractWriter::NEWLINE);
	incrIndent();
}

void MinimalHTMLWriter::writeEndTag($String* endTag) {
	decrIndent();
	indent();
	write(endTag);
	write($AbstractWriter::NEWLINE);
}

void MinimalHTMLWriter::writeHeader() {
	writeStartTag("<head>"_s);
	writeStartTag("<style>"_s);
	writeStartTag("<!--"_s);
	writeStyles();
	writeEndTag("-->"_s);
	writeEndTag("</style>"_s);
	writeEndTag("</head>"_s);
}

void MinimalHTMLWriter::writeStyles() {
	$useLocalCurrentObjectStackCache();
	$var($DefaultStyledDocument, styledDoc, $cast($DefaultStyledDocument, getDocument()));
	$var($Enumeration, styleNames, $nc(styledDoc)->getStyleNames());
	while ($nc(styleNames)->hasMoreElements()) {
		$var($Style, s, styledDoc->getStyle($cast($String, $(styleNames->nextElement()))));
		bool var$0 = $nc(s)->getAttributeCount() == 1;
		$init($StyleConstants);
		if (var$0 && s->isDefined($StyleConstants::NameAttribute)) {
			continue;
		}
		indent();
		write($$str({"p."_s, $(addStyleName($($nc(s)->getName())))}));
		write(" {\n"_s);
		incrIndent();
		writeAttributes(s);
		decrIndent();
		indent();
		write("}\n"_s);
	}
}

void MinimalHTMLWriter::writeBody() {
	$useLocalCurrentObjectStackCache();
	$var($ElementIterator, it, getElementIterator());
	$nc(it)->current();
	$var($Element, next, nullptr);
	writeStartTag("<body>"_s);
	bool inContent = false;
	while (($assign(next, it->next())) != nullptr) {
		if (!inRange(next)) {
			continue;
		}
		if ($instanceOf($AbstractDocument$BranchElement, next)) {
			if (inContent) {
				writeEndParagraph();
				inContent = false;
				this->fontMask = 0;
			}
			writeStartParagraph(next);
		} else if (isText(next)) {
			writeContent(next, !inContent);
			inContent = true;
		} else {
			writeLeaf(next);
			inContent = true;
		}
	}
	if (inContent) {
		writeEndParagraph();
	}
	writeEndTag("</body>"_s);
}

void MinimalHTMLWriter::writeEndParagraph() {
	writeEndMask(this->fontMask);
	if (inFontTag()) {
		endSpanTag();
	} else {
		write($AbstractWriter::NEWLINE);
	}
	writeEndTag("</p>"_s);
}

void MinimalHTMLWriter::writeStartParagraph($Element* elem) {
	$useLocalCurrentObjectStackCache();
	$var($AttributeSet, attr, $nc(elem)->getAttributes());
	$init($StyleConstants);
	$var($Object, resolveAttr, $nc(attr)->getAttribute($StyleConstants::ResolveAttribute));
	if ($instanceOf($StyleContext$NamedStyle, resolveAttr)) {
		writeStartTag($$str({"<p class="_s, $(mapStyleName($($nc(($cast($StyleContext$NamedStyle, resolveAttr)))->getName()))), ">"_s}));
	} else {
		writeStartTag("<p>"_s);
	}
}

void MinimalHTMLWriter::writeLeaf($Element* elem) {
	indent();
	$init($StyleConstants);
	if ($nc(elem)->getName() == $StyleConstants::IconElementName) {
		writeImage(elem);
	} else {
		if (elem->getName() == $StyleConstants::ComponentElementName) {
			writeComponent(elem);
		}
	}
}

void MinimalHTMLWriter::writeImage($Element* elem) {
}

void MinimalHTMLWriter::writeComponent($Element* elem) {
}

bool MinimalHTMLWriter::isText($Element* elem) {
	$init($AbstractDocument);
	return ($nc(elem)->getName() == $AbstractDocument::ContentElementName);
}

void MinimalHTMLWriter::writeContent($Element* elem, bool needsIndenting) {
	$var($AttributeSet, attr, $nc(elem)->getAttributes());
	writeNonHTMLAttributes(attr);
	if (needsIndenting) {
		indent();
	}
	writeHTMLTags(attr);
	text(elem);
}

void MinimalHTMLWriter::writeHTMLTags($AttributeSet* attr) {
	int32_t oldMask = this->fontMask;
	setFontMask(attr);
	int32_t endMask = 0;
	int32_t startMask = 0;
	if (((int32_t)(oldMask & (uint32_t)MinimalHTMLWriter::BOLD)) != 0) {
		if (((int32_t)(this->fontMask & (uint32_t)MinimalHTMLWriter::BOLD)) == 0) {
			endMask |= MinimalHTMLWriter::BOLD;
		}
	} else if (((int32_t)(this->fontMask & (uint32_t)MinimalHTMLWriter::BOLD)) != 0) {
		startMask |= MinimalHTMLWriter::BOLD;
	}
	if (((int32_t)(oldMask & (uint32_t)MinimalHTMLWriter::ITALIC)) != 0) {
		if (((int32_t)(this->fontMask & (uint32_t)MinimalHTMLWriter::ITALIC)) == 0) {
			endMask |= MinimalHTMLWriter::ITALIC;
		}
	} else if (((int32_t)(this->fontMask & (uint32_t)MinimalHTMLWriter::ITALIC)) != 0) {
		startMask |= MinimalHTMLWriter::ITALIC;
	}
	if (((int32_t)(oldMask & (uint32_t)MinimalHTMLWriter::UNDERLINE)) != 0) {
		if (((int32_t)(this->fontMask & (uint32_t)MinimalHTMLWriter::UNDERLINE)) == 0) {
			endMask |= MinimalHTMLWriter::UNDERLINE;
		}
	} else if (((int32_t)(this->fontMask & (uint32_t)MinimalHTMLWriter::UNDERLINE)) != 0) {
		startMask |= MinimalHTMLWriter::UNDERLINE;
	}
	writeEndMask(endMask);
	writeStartMask(startMask);
}

void MinimalHTMLWriter::setFontMask($AttributeSet* attr) {
	if ($StyleConstants::isBold(attr)) {
		this->fontMask |= MinimalHTMLWriter::BOLD;
	}
	if ($StyleConstants::isItalic(attr)) {
		this->fontMask |= MinimalHTMLWriter::ITALIC;
	}
	if ($StyleConstants::isUnderline(attr)) {
		this->fontMask |= MinimalHTMLWriter::UNDERLINE;
	}
}

void MinimalHTMLWriter::writeStartMask(int32_t mask) {
	if (mask != 0) {
		if (((int32_t)(mask & (uint32_t)MinimalHTMLWriter::UNDERLINE)) != 0) {
			write("<u>"_s);
		}
		if (((int32_t)(mask & (uint32_t)MinimalHTMLWriter::ITALIC)) != 0) {
			write("<i>"_s);
		}
		if (((int32_t)(mask & (uint32_t)MinimalHTMLWriter::BOLD)) != 0) {
			write("<b>"_s);
		}
	}
}

void MinimalHTMLWriter::writeEndMask(int32_t mask) {
	if (mask != 0) {
		if (((int32_t)(mask & (uint32_t)MinimalHTMLWriter::BOLD)) != 0) {
			write("</b>"_s);
		}
		if (((int32_t)(mask & (uint32_t)MinimalHTMLWriter::ITALIC)) != 0) {
			write("</i>"_s);
		}
		if (((int32_t)(mask & (uint32_t)MinimalHTMLWriter::UNDERLINE)) != 0) {
			write("</u>"_s);
		}
	}
}

void MinimalHTMLWriter::writeNonHTMLAttributes($AttributeSet* attr) {
	$useLocalCurrentObjectStackCache();
	$var($String, style, ""_s);
	$var($String, separator, "; "_s);
	bool var$0 = inFontTag();
	if (var$0 && $nc(this->fontAttributes)->isEqual(attr)) {
		return;
	}
	bool first = true;
	$init($StyleConstants);
	$var($Color, color, $cast($Color, $nc(attr)->getAttribute($StyleConstants::Foreground)));
	if (color != nullptr) {
		$plusAssign(style, $$str({"color: "_s, $($nc(MinimalHTMLWriter::css)->styleConstantsValueToCSSValue($cast($StyleConstants, $StyleConstants::Foreground), color))}));
		first = false;
	}
	$var($Integer, size, $cast($Integer, attr->getAttribute($StyleConstants::FontSize)));
	if (size != nullptr) {
		if (!first) {
			$plusAssign(style, separator);
		}
		$plusAssign(style, $$str({"font-size: "_s, $$str(size->intValue()), "pt"_s}));
		first = false;
	}
	$var($String, family, $cast($String, attr->getAttribute($StyleConstants::FontFamily)));
	if (family != nullptr) {
		if (!first) {
			$plusAssign(style, separator);
		}
		$plusAssign(style, $$str({"font-family: "_s, family}));
		first = false;
	}
	if (style->length() > 0) {
		if (this->fontMask != 0) {
			writeEndMask(this->fontMask);
			this->fontMask = 0;
		}
		startSpanTag(style);
		$set(this, fontAttributes, attr);
	} else if (this->fontAttributes != nullptr) {
		writeEndMask(this->fontMask);
		this->fontMask = 0;
		endSpanTag();
	}
}

bool MinimalHTMLWriter::inFontTag() {
	return (this->fontAttributes != nullptr);
}

void MinimalHTMLWriter::endFontTag() {
	write($AbstractWriter::NEWLINE);
	writeEndTag("</font>"_s);
	$set(this, fontAttributes, nullptr);
}

void MinimalHTMLWriter::startFontTag($String* style) {
	bool callIndent = false;
	if (inFontTag()) {
		endFontTag();
		callIndent = true;
	}
	writeStartTag($$str({"<font style=\""_s, style, "\">"_s}));
	if (callIndent) {
		indent();
	}
}

void MinimalHTMLWriter::startSpanTag($String* style) {
	bool callIndent = false;
	if (inFontTag()) {
		endSpanTag();
		callIndent = true;
	}
	writeStartTag($$str({"<span style=\""_s, style, "\">"_s}));
	if (callIndent) {
		indent();
	}
}

void MinimalHTMLWriter::endSpanTag() {
	write($AbstractWriter::NEWLINE);
	writeEndTag("</span>"_s);
	$set(this, fontAttributes, nullptr);
}

$String* MinimalHTMLWriter::addStyleName($String* style) {
	$useLocalCurrentObjectStackCache();
	if (this->styleNameMapping == nullptr) {
		return style;
	}
	$var($StringBuilder, sb, nullptr);
	for (int32_t counter = $nc(style)->length() - 1; counter >= 0; --counter) {
		if (!isValidCharacter(style->charAt(counter))) {
			if (sb == nullptr) {
				$assign(sb, $new($StringBuilder, style));
			}
			$nc(sb)->setCharAt(counter, u'a');
		}
	}
	$var($String, mappedName, (sb != nullptr) ? $nc(sb)->toString() : style);
	while ($nc(this->styleNameMapping)->get(mappedName) != nullptr) {
		$assign(mappedName, $str({mappedName, $$str(u'x')}));
	}
	$nc(this->styleNameMapping)->put(style, mappedName);
	return mappedName;
}

$String* MinimalHTMLWriter::mapStyleName($String* style) {
	if (this->styleNameMapping == nullptr) {
		return style;
	}
	$var($String, retValue, $cast($String, $nc(this->styleNameMapping)->get(style)));
	return (retValue == nullptr) ? style : retValue;
}

bool MinimalHTMLWriter::isValidCharacter(char16_t character) {
	return ((character >= u'a' && character <= u'z') || (character >= u'A' && character <= u'Z'));
}

void clinit$MinimalHTMLWriter($Class* class$) {
	$assignStatic(MinimalHTMLWriter::css, $new($CSS));
}

MinimalHTMLWriter::MinimalHTMLWriter() {
}

$Class* MinimalHTMLWriter::load$($String* name, bool initialize) {
	$loadClass(MinimalHTMLWriter, name, initialize, &_MinimalHTMLWriter_ClassInfo_, clinit$MinimalHTMLWriter, allocate$MinimalHTMLWriter);
	return class$;
}

$Class* MinimalHTMLWriter::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax