#include <javax/swing/text/html/parser/DocumentParser.h>

#include <java/io/Reader.h>
#include <javax/swing/text/ChangedCharSetException.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/SimpleAttributeSet.h>
#include <javax/swing/text/html/HTML$Attribute.h>
#include <javax/swing/text/html/HTML$Tag.h>
#include <javax/swing/text/html/HTMLEditorKit$ParserCallback.h>
#include <javax/swing/text/html/parser/DTD.h>
#include <javax/swing/text/html/parser/Element.h>
#include <javax/swing/text/html/parser/Parser.h>
#include <javax/swing/text/html/parser/TagElement.h>
#include <jcpp.h>

#undef CONTENT
#undef HTTPEQUIV
#undef IMPLIED
#undef TRUE

using $PrintStream = ::java::io::PrintStream;
using $Reader = ::java::io::Reader;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ChangedCharSetException = ::javax::swing::text::ChangedCharSetException;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $SimpleAttributeSet = ::javax::swing::text::SimpleAttributeSet;
using $HTML$Attribute = ::javax::swing::text::html::HTML$Attribute;
using $HTML$Tag = ::javax::swing::text::html::HTML$Tag;
using $HTMLEditorKit$ParserCallback = ::javax::swing::text::html::HTMLEditorKit$ParserCallback;
using $DTD = ::javax::swing::text::html::parser::DTD;
using $Element = ::javax::swing::text::html::parser::Element;
using $Parser = ::javax::swing::text::html::parser::Parser;
using $TagElement = ::javax::swing::text::html::parser::TagElement;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				namespace parser {

$FieldInfo _DocumentParser_FieldInfo_[] = {
	{"inbody", "I", nullptr, $PRIVATE, $field(DocumentParser, inbody)},
	{"intitle", "I", nullptr, $PRIVATE, $field(DocumentParser, intitle)},
	{"inhead", "I", nullptr, $PRIVATE, $field(DocumentParser, inhead)},
	{"instyle", "I", nullptr, $PRIVATE, $field(DocumentParser, instyle)},
	{"inscript", "I", nullptr, $PRIVATE, $field(DocumentParser, inscript)},
	{"seentitle", "Z", nullptr, $PRIVATE, $field(DocumentParser, seentitle)},
	{"callback", "Ljavax/swing/text/html/HTMLEditorKit$ParserCallback;", nullptr, $PRIVATE, $field(DocumentParser, callback)},
	{"ignoreCharSet", "Z", nullptr, $PRIVATE, $field(DocumentParser, ignoreCharSet)},
	{"debugFlag", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DocumentParser, debugFlag)},
	{}
};

$MethodInfo _DocumentParser_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/html/parser/DTD;)V", nullptr, $PUBLIC, $method(static_cast<void(DocumentParser::*)($DTD*)>(&DocumentParser::init$))},
	{"debug", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(DocumentParser::*)($String*)>(&DocumentParser::debug))},
	{"handleComment", "([C)V", nullptr, $PROTECTED},
	{"handleEmptyTag", "(Ljavax/swing/text/html/parser/TagElement;)V", nullptr, $PROTECTED, nullptr, "javax.swing.text.ChangedCharSetException"},
	{"handleEndTag", "(Ljavax/swing/text/html/parser/TagElement;)V", nullptr, $PROTECTED},
	{"handleError", "(ILjava/lang/String;)V", nullptr, $PROTECTED},
	{"handleStartTag", "(Ljavax/swing/text/html/parser/TagElement;)V", nullptr, $PROTECTED},
	{"handleText", "([C)V", nullptr, $PROTECTED},
	{"parse", "(Ljava/io/Reader;Ljavax/swing/text/html/HTMLEditorKit$ParserCallback;Z)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _DocumentParser_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.html.parser.DocumentParser",
	"javax.swing.text.html.parser.Parser",
	nullptr,
	_DocumentParser_FieldInfo_,
	_DocumentParser_MethodInfo_
};

$Object* allocate$DocumentParser($Class* clazz) {
	return $of($alloc(DocumentParser));
}

void DocumentParser::init$($DTD* dtd) {
	$Parser::init$(dtd);
	$set(this, callback, nullptr);
	this->ignoreCharSet = false;
}

void DocumentParser::parse($Reader* in, $HTMLEditorKit$ParserCallback* callback, bool ignoreCharSet) {
	this->ignoreCharSet = ignoreCharSet;
	$set(this, callback, callback);
	parse(in);
	$nc(callback)->handleEndOfLineString($(getEndOfLineString()));
}

void DocumentParser::handleStartTag($TagElement* tag) {
	$useLocalCurrentObjectStackCache();
	$var($Element, elem, $nc(tag)->getElement());
	if (elem == $nc(this->dtd)->body) {
		++this->inbody;
	} else if (elem == $nc(this->dtd)->html) {
	} else if (elem == $nc(this->dtd)->head) {
		++this->inhead;
	} else if (elem == $nc(this->dtd)->title) {
		++this->intitle;
	} else if (elem == $nc(this->dtd)->style) {
		++this->instyle;
	} else if (elem == $nc(this->dtd)->script) {
		++this->inscript;
	}
	if (tag->fictional()) {
		$var($SimpleAttributeSet, attrs, $new($SimpleAttributeSet));
		$init($HTMLEditorKit$ParserCallback);
		$init($Boolean);
		attrs->addAttribute($HTMLEditorKit$ParserCallback::IMPLIED, $Boolean::TRUE);
		$var($HTML$Tag, var$0, tag->getHTMLTag());
		$var($MutableAttributeSet, var$1, static_cast<$MutableAttributeSet*>(attrs));
		$nc(this->callback)->handleStartTag(var$0, var$1, getBlockStartPosition());
	} else {
		$var($HTML$Tag, var$2, tag->getHTMLTag());
		$var($MutableAttributeSet, var$3, static_cast<$MutableAttributeSet*>(getAttributes()));
		$nc(this->callback)->handleStartTag(var$2, var$3, getBlockStartPosition());
		flushAttributes();
	}
}

void DocumentParser::handleComment($chars* text) {
	$nc(this->callback)->handleComment(text, getBlockStartPosition());
}

void DocumentParser::handleEmptyTag($TagElement* tag) {
	$useLocalCurrentObjectStackCache();
	$var($Element, elem, $nc(tag)->getElement());
	if (elem == $nc(this->dtd)->meta && !this->ignoreCharSet) {
		$var($SimpleAttributeSet, atts, getAttributes());
		if (atts != nullptr) {
			$init($HTML$Attribute);
			$var($String, content, $cast($String, atts->getAttribute($HTML$Attribute::CONTENT)));
			if (content != nullptr) {
				if ("content-type"_s->equalsIgnoreCase($cast($String, $(atts->getAttribute($HTML$Attribute::HTTPEQUIV))))) {
					bool var$0 = !content->equalsIgnoreCase("text/html"_s);
					if (var$0 && !content->equalsIgnoreCase("text/plain"_s)) {
						$throwNew($ChangedCharSetException, content, false);
					}
				} else {
					if ("charset"_s->equalsIgnoreCase($cast($String, $(atts->getAttribute($HTML$Attribute::HTTPEQUIV))))) {
						$throwNew($ChangedCharSetException, content, true);
					}
				}
			}
		}
	}
	if (this->inbody != 0 || elem == $nc(this->dtd)->meta || elem == $nc(this->dtd)->base || elem == $nc(this->dtd)->isindex || elem == $nc(this->dtd)->style || elem == $nc(this->dtd)->link) {
		if (tag->fictional()) {
			$var($SimpleAttributeSet, attrs, $new($SimpleAttributeSet));
			$init($HTMLEditorKit$ParserCallback);
			$init($Boolean);
			attrs->addAttribute($HTMLEditorKit$ParserCallback::IMPLIED, $Boolean::TRUE);
			$var($HTML$Tag, var$1, tag->getHTMLTag());
			$var($MutableAttributeSet, var$2, static_cast<$MutableAttributeSet*>(attrs));
			$nc(this->callback)->handleSimpleTag(var$1, var$2, getBlockStartPosition());
		} else {
			$var($HTML$Tag, var$3, tag->getHTMLTag());
			$var($MutableAttributeSet, var$4, static_cast<$MutableAttributeSet*>(getAttributes()));
			$nc(this->callback)->handleSimpleTag(var$3, var$4, getBlockStartPosition());
			flushAttributes();
		}
	}
}

void DocumentParser::handleEndTag($TagElement* tag) {
	$useLocalCurrentObjectStackCache();
	$var($Element, elem, $nc(tag)->getElement());
	if (elem == $nc(this->dtd)->body) {
		--this->inbody;
	} else if (elem == $nc(this->dtd)->title) {
		--this->intitle;
		this->seentitle = true;
	} else if (elem == $nc(this->dtd)->head) {
		--this->inhead;
	} else if (elem == $nc(this->dtd)->style) {
		--this->instyle;
	} else if (elem == $nc(this->dtd)->script) {
		--this->inscript;
	}
	$var($HTML$Tag, var$0, tag->getHTMLTag());
	$nc(this->callback)->handleEndTag(var$0, getBlockStartPosition());
}

void DocumentParser::handleText($chars* data) {
	if (data != nullptr) {
		if (this->inscript != 0) {
			$nc(this->callback)->handleComment(data, getBlockStartPosition());
			return;
		}
		if (this->inbody != 0 || ((this->instyle != 0) || ((this->intitle != 0) && !this->seentitle))) {
			$nc(this->callback)->handleText(data, getBlockStartPosition());
		}
	}
}

void DocumentParser::handleError(int32_t ln, $String* errorMsg) {
	$nc(this->callback)->handleError(errorMsg, getCurrentPos());
}

void DocumentParser::debug($String* msg) {
	$nc($System::out)->println(msg);
}

DocumentParser::DocumentParser() {
}

$Class* DocumentParser::load$($String* name, bool initialize) {
	$loadClass(DocumentParser, name, initialize, &_DocumentParser_ClassInfo_, allocate$DocumentParser);
	return class$;
}

$Class* DocumentParser::class$ = nullptr;

				} // parser
			} // html
		} // text
	} // swing
} // javax