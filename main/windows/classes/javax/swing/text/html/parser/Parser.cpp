#include <javax/swing/text/html/parser/Parser.h>

#include <java/io/CharArrayReader.h>
#include <java/io/IOException.h>
#include <java/io/InterruptedIOException.h>
#include <java/io/Reader.h>
#include <java/lang/Array.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/ThreadDeath.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Iterator.h>
#include <java/util/Vector.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/SimpleAttributeSet.h>
#include <javax/swing/text/html/HTML$Attribute.h>
#include <javax/swing/text/html/HTML.h>
#include <javax/swing/text/html/parser/AttributeList.h>
#include <javax/swing/text/html/parser/ContentModel.h>
#include <javax/swing/text/html/parser/DTD.h>
#include <javax/swing/text/html/parser/DTDConstants.h>
#include <javax/swing/text/html/parser/Element.h>
#include <javax/swing/text/html/parser/Entity.h>
#include <javax/swing/text/html/parser/TagElement.h>
#include <javax/swing/text/html/parser/TagStack.h>
#include <jcpp.h>

#undef CDATA
#undef ENDTAG
#undef END_COMMENT
#undef NAME
#undef NOTATION
#undef NULL_ATTRIBUTE_VALUE
#undef RCDATA
#undef REQUIRED
#undef SCRIPT_END_TAG
#undef SCRIPT_END_TAG_UPPER_CASE
#undef START_COMMENT

using $CharArrayReader = ::java::io::CharArrayReader;
using $IOException = ::java::io::IOException;
using $InterruptedIOException = ::java::io::InterruptedIOException;
using $Reader = ::java::io::Reader;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $StringBuffer = ::java::lang::StringBuffer;
using $ThreadDeath = ::java::lang::ThreadDeath;
using $Iterator = ::java::util::Iterator;
using $Vector = ::java::util::Vector;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $SimpleAttributeSet = ::javax::swing::text::SimpleAttributeSet;
using $HTML = ::javax::swing::text::html::HTML;
using $HTML$Attribute = ::javax::swing::text::html::HTML$Attribute;
using $AttributeList = ::javax::swing::text::html::parser::AttributeList;
using $ContentModel = ::javax::swing::text::html::parser::ContentModel;
using $DTD = ::javax::swing::text::html::parser::DTD;
using $DTDConstants = ::javax::swing::text::html::parser::DTDConstants;
using $Element = ::javax::swing::text::html::parser::Element;
using $Entity = ::javax::swing::text::html::parser::Entity;
using $TagElement = ::javax::swing::text::html::parser::TagElement;
using $TagStack = ::javax::swing::text::html::parser::TagStack;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				namespace parser {

$FieldInfo _Parser_FieldInfo_[] = {
	{"text", "[C", nullptr, $PRIVATE, $field(Parser, text)},
	{"textpos", "I", nullptr, $PRIVATE, $field(Parser, textpos)},
	{"last", "Ljavax/swing/text/html/parser/TagElement;", nullptr, $PRIVATE, $field(Parser, last)},
	{"space", "Z", nullptr, $PRIVATE, $field(Parser, space)},
	{"str", "[C", nullptr, $PRIVATE, $field(Parser, str)},
	{"strpos", "I", nullptr, $PRIVATE, $field(Parser, strpos)},
	{"dtd", "Ljavax/swing/text/html/parser/DTD;", nullptr, $PROTECTED, $field(Parser, dtd)},
	{"ch", "I", nullptr, $PRIVATE, $field(Parser, ch)},
	{"ln", "I", nullptr, $PRIVATE, $field(Parser, ln)},
	{"in", "Ljava/io/Reader;", nullptr, $PRIVATE, $field(Parser, in)},
	{"recent", "Ljavax/swing/text/html/parser/Element;", nullptr, $PRIVATE, $field(Parser, recent)},
	{"stack", "Ljavax/swing/text/html/parser/TagStack;", nullptr, $PRIVATE, $field(Parser, stack)},
	{"skipTag", "Z", nullptr, $PRIVATE, $field(Parser, skipTag)},
	{"lastFormSent", "Ljavax/swing/text/html/parser/TagElement;", nullptr, $PRIVATE, $field(Parser, lastFormSent)},
	{"attributes", "Ljavax/swing/text/SimpleAttributeSet;", nullptr, $PRIVATE, $field(Parser, attributes)},
	{"seenHtml", "Z", nullptr, $PRIVATE, $field(Parser, seenHtml)},
	{"seenHead", "Z", nullptr, $PRIVATE, $field(Parser, seenHead)},
	{"seenBody", "Z", nullptr, $PRIVATE, $field(Parser, seenBody)},
	{"ignoreSpace", "Z", nullptr, $PRIVATE, $field(Parser, ignoreSpace)},
	{"strict", "Z", nullptr, $PROTECTED, $field(Parser, strict)},
	{"crlfCount", "I", nullptr, $PRIVATE, $field(Parser, crlfCount)},
	{"crCount", "I", nullptr, $PRIVATE, $field(Parser, crCount)},
	{"lfCount", "I", nullptr, $PRIVATE, $field(Parser, lfCount)},
	{"currentBlockStartPos", "I", nullptr, $PRIVATE, $field(Parser, currentBlockStartPos)},
	{"lastBlockStartPos", "I", nullptr, $PRIVATE, $field(Parser, lastBlockStartPos)},
	{"cp1252Map", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Parser, cp1252Map)},
	{"START_COMMENT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Parser, START_COMMENT)},
	{"END_COMMENT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Parser, END_COMMENT)},
	{"SCRIPT_END_TAG", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Parser, SCRIPT_END_TAG)},
	{"SCRIPT_END_TAG_UPPER_CASE", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Parser, SCRIPT_END_TAG_UPPER_CASE)},
	{"buf", "[C", nullptr, $PRIVATE, $field(Parser, buf)},
	{"pos", "I", nullptr, $PRIVATE, $field(Parser, pos)},
	{"len", "I", nullptr, $PRIVATE, $field(Parser, len)},
	{"currentPosition", "I", nullptr, $PRIVATE, $field(Parser, currentPosition)},
	{}
};

$MethodInfo _Parser_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/html/parser/DTD;)V", nullptr, $PUBLIC, $method(static_cast<void(Parser::*)($DTD*)>(&Parser::init$))},
	{"addString", "(I)V", nullptr, 0},
	{"endTag", "(Z)V", nullptr, $PROTECTED},
	{"error", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PROTECTED},
	{"error", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PROTECTED},
	{"error", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PROTECTED},
	{"error", "(Ljava/lang/String;)V", nullptr, $PROTECTED},
	{"errorContext", "()V", nullptr, 0, nullptr, "javax.swing.text.ChangedCharSetException"},
	{"flushAttributes", "()V", nullptr, $PROTECTED},
	{"getAttributes", "()Ljavax/swing/text/SimpleAttributeSet;", nullptr, $PROTECTED},
	{"getBlockStartPosition", "()I", nullptr, 0},
	{"getChars", "(I)[C", nullptr, 0},
	{"getChars", "(II)[C", nullptr, 0},
	{"getCurrentLine", "()I", nullptr, $PROTECTED},
	{"getCurrentPos", "()I", nullptr, $PROTECTED},
	{"getEndOfLineString", "()Ljava/lang/String;", nullptr, 0},
	{"getString", "(I)Ljava/lang/String;", nullptr, 0},
	{"handleComment", "([C)V", nullptr, $PROTECTED},
	{"handleEOFInComment", "()V", nullptr, $PROTECTED},
	{"handleEmptyTag", "(Ljavax/swing/text/html/parser/TagElement;)V", nullptr, $PROTECTED, nullptr, "javax.swing.text.ChangedCharSetException"},
	{"handleEndTag", "(Ljavax/swing/text/html/parser/TagElement;)V", nullptr, $PROTECTED},
	{"handleError", "(ILjava/lang/String;)V", nullptr, $PROTECTED},
	{"handleStartTag", "(Ljavax/swing/text/html/parser/TagElement;)V", nullptr, $PROTECTED},
	{"handleText", "([C)V", nullptr, $PROTECTED},
	{"handleText", "(Ljavax/swing/text/html/parser/TagElement;)V", nullptr, 0},
	{"handleTitle", "([C)V", nullptr, $PROTECTED},
	{"ignoreElement", "(Ljavax/swing/text/html/parser/Element;)Z", nullptr, 0},
	{"legalElementContext", "(Ljavax/swing/text/html/parser/Element;)Z", nullptr, 0, nullptr, "javax.swing.text.ChangedCharSetException"},
	{"legalTagContext", "(Ljavax/swing/text/html/parser/TagElement;)V", nullptr, 0, nullptr, "javax.swing.text.ChangedCharSetException"},
	{"makeTag", "(Ljavax/swing/text/html/parser/Element;Z)Ljavax/swing/text/html/parser/TagElement;", nullptr, $PROTECTED},
	{"makeTag", "(Ljavax/swing/text/html/parser/Element;)Ljavax/swing/text/html/parser/TagElement;", nullptr, $PROTECTED},
	{"mapNumericReference", "(I)[C", nullptr, $PRIVATE, $method(static_cast<$chars*(Parser::*)(int32_t)>(&Parser::mapNumericReference))},
	{"markFirstTime", "(Ljavax/swing/text/html/parser/Element;)V", nullptr, $PROTECTED},
	{"parse", "(Ljava/io/Reader;)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.io.IOException"},
	{"parseAttributeSpecificationList", "(Ljavax/swing/text/html/parser/Element;)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"parseAttributeValue", "(Z)Ljava/lang/String;", nullptr, 0, nullptr, "java.io.IOException"},
	{"parseComment", "()V", nullptr, 0, nullptr, "java.io.IOException"},
	{"parseContent", "()V", nullptr, 0, nullptr, "java.io.IOException"},
	{"parseDTDMarkup", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"parseEntityReference", "()[C", nullptr, $PRIVATE, $method(static_cast<$chars*(Parser::*)()>(&Parser::parseEntityReference)), "java.io.IOException"},
	{"parseIdentifier", "(Z)Z", nullptr, 0, nullptr, "java.io.IOException"},
	{"parseInvalidTag", "()V", nullptr, 0, nullptr, "java.io.IOException"},
	{"parseLiteral", "(Z)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"parseMarkupDeclarations", "(Ljava/lang/StringBuffer;)Z", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"parseScript", "()V", nullptr, 0, nullptr, "java.io.IOException"},
	{"parseTag", "()V", nullptr, 0, nullptr, "java.io.IOException"},
	{"readCh", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(Parser::*)()>(&Parser::readCh)), "java.io.IOException"},
	{"resetStrBuffer", "()V", nullptr, 0},
	{"skipSpace", "()V", nullptr, 0, nullptr, "java.io.IOException"},
	{"startTag", "(Ljavax/swing/text/html/parser/TagElement;)V", nullptr, $PROTECTED, nullptr, "javax.swing.text.ChangedCharSetException"},
	{"strIndexOf", "(C)I", nullptr, 0},
	{}
};

$ClassInfo _Parser_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.html.parser.Parser",
	"java.lang.Object",
	"javax.swing.text.html.parser.DTDConstants",
	_Parser_FieldInfo_,
	_Parser_MethodInfo_
};

$Object* allocate$Parser($Class* clazz) {
	return $of($alloc(Parser));
}


$chars* Parser::cp1252Map = nullptr;
$String* Parser::START_COMMENT = nullptr;
$String* Parser::END_COMMENT = nullptr;
$chars* Parser::SCRIPT_END_TAG = nullptr;
$chars* Parser::SCRIPT_END_TAG_UPPER_CASE = nullptr;

void Parser::init$($DTD* dtd) {
	$set(this, text, $new($chars, 1024));
	this->textpos = 0;
	$set(this, str, $new($chars, 128));
	this->strpos = 0;
	$set(this, dtd, nullptr);
	this->skipTag = false;
	$set(this, lastFormSent, nullptr);
	$set(this, attributes, $new($SimpleAttributeSet));
	this->seenHtml = false;
	this->seenHead = false;
	this->seenBody = false;
	this->strict = false;
	$set(this, buf, $new($chars, 1));
	$set(this, dtd, dtd);
}

int32_t Parser::getCurrentLine() {
	return this->ln;
}

int32_t Parser::getBlockStartPosition() {
	return $Math::max(0, this->lastBlockStartPos - 1);
}

$TagElement* Parser::makeTag($Element* elem, bool fictional) {
	return $new($TagElement, elem, fictional);
}

$TagElement* Parser::makeTag($Element* elem) {
	return makeTag(elem, false);
}

$SimpleAttributeSet* Parser::getAttributes() {
	return this->attributes;
}

void Parser::flushAttributes() {
	$nc(this->attributes)->removeAttributes(static_cast<$AttributeSet*>(this->attributes));
}

void Parser::handleText($chars* text) {
}

void Parser::handleTitle($chars* text) {
	handleText(text);
}

void Parser::handleComment($chars* text) {
}

void Parser::handleEOFInComment() {
	int32_t commentEndPos = strIndexOf(u'\n');
	if (commentEndPos >= 0) {
		handleComment($(getChars(0, commentEndPos)));
		try {
			$nc(this->in)->close();
			$set(this, in, $new($CharArrayReader, $(getChars(commentEndPos + 1))));
			this->ch = u'>';
		} catch ($IOException&) {
			$var($IOException, e, $catch());
			error("ioexception"_s);
		}
		resetStrBuffer();
	} else {
		error("eof.comment"_s);
	}
}

void Parser::handleEmptyTag($TagElement* tag) {
}

void Parser::handleStartTag($TagElement* tag) {
}

void Parser::handleEndTag($TagElement* tag) {
}

void Parser::handleError(int32_t ln, $String* msg) {
}

void Parser::handleText($TagElement* tag) {
	if ($nc(tag)->breaksFlow()) {
		this->space = false;
		if (!this->strict) {
			this->ignoreSpace = true;
		}
	}
	if (this->textpos == 0) {
		bool var$0 = (!this->space) || (this->stack == nullptr) || $nc(this->last)->breaksFlow();
		if (var$0 || !$nc(this->stack)->advance($nc(this->dtd)->pcdata)) {
			$set(this, last, tag);
			this->space = false;
			this->lastBlockStartPos = this->currentBlockStartPos;
			return;
		}
	}
	if (this->space) {
		if (!this->ignoreSpace) {
			if (this->textpos + 1 > $nc(this->text)->length) {
				$var($chars, newtext, $new($chars, $nc(this->text)->length + 200));
				$System::arraycopy(this->text, 0, newtext, 0, $nc(this->text)->length);
				$set(this, text, newtext);
			}
			$nc(this->text)->set(this->textpos++, u' ');
			if (!this->strict && !$nc($($nc(tag)->getElement()))->isEmpty()) {
				this->ignoreSpace = true;
			}
		}
		this->space = false;
	}
	$var($chars, newtext, $new($chars, this->textpos));
	$System::arraycopy(this->text, 0, newtext, 0, this->textpos);
	if ($nc($($nc($($nc(tag)->getElement()))->getName()))->equals("title"_s)) {
		handleTitle(newtext);
	} else {
		handleText(newtext);
	}
	this->lastBlockStartPos = this->currentBlockStartPos;
	this->textpos = 0;
	$set(this, last, tag);
	this->space = false;
}

void Parser::error($String* err, $String* arg1, $String* arg2, $String* arg3) {
	handleError(this->ln, $$str({err, " "_s, arg1, " "_s, arg2, " "_s, arg3}));
}

void Parser::error($String* err, $String* arg1, $String* arg2) {
	error(err, arg1, arg2, "?"_s);
}

void Parser::error($String* err, $String* arg1) {
	error(err, arg1, "?"_s, "?"_s);
}

void Parser::error($String* err) {
	error(err, "?"_s, "?"_s, "?"_s);
}

void Parser::startTag($TagElement* tag) {
	$var($Element, elem, $nc(tag)->getElement());
	bool var$0 = !$nc(elem)->isEmpty();
	if (var$0 || ((this->last != nullptr) && !$nc(this->last)->breaksFlow()) || (this->textpos != 0)) {
		handleText(tag);
	} else {
		$set(this, last, tag);
		this->space = false;
	}
	this->lastBlockStartPos = this->currentBlockStartPos;
	{
		$var($AttributeList, a, $nc(elem)->atts);
		for (; a != nullptr; $assign(a, $nc(a)->next)) {
			bool var$1 = (a->modifier == $DTDConstants::REQUIRED);
			if (var$1) {
				bool var$2 = ($nc(this->attributes)->isEmpty());
				if (!var$2) {
					bool var$3 = (!$nc(this->attributes)->isDefined(a->name));
					var$2 = (var$3 && (!$nc(this->attributes)->isDefined($($HTML::getAttributeKey(a->name)))));
				}
				var$1 = (var$2);
			}
			if (var$1) {
				$var($String, var$4, "req.att "_s);
				$var($String, var$5, a->getName());
				error(var$4, var$5, $(elem->getName()));
			}
		}
	}
	if (elem->isEmpty()) {
		handleEmptyTag(tag);
	} else {
		$set(this, recent, elem);
		$set(this, stack, $new($TagStack, tag, this->stack));
		handleStartTag(tag);
	}
}

void Parser::endTag(bool omitted) {
	handleText($nc(this->stack)->tag);
	if (omitted && !$nc($nc(this->stack)->elem)->omitEnd()) {
		error("end.missing"_s, $($nc($nc(this->stack)->elem)->getName()));
	} else if (!$nc(this->stack)->terminate()) {
		error("end.unexpected"_s, $($nc($nc(this->stack)->elem)->getName()));
	}
	handleEndTag($nc(this->stack)->tag);
	$set(this, stack, $nc(this->stack)->next);
	$set(this, recent, (this->stack != nullptr) ? $nc(this->stack)->elem : ($Element*)nullptr);
}

bool Parser::ignoreElement($Element* elem) {
	$var($String, stackElement, $nc($nc(this->stack)->elem)->getName());
	$var($String, elemName, $nc(elem)->getName());
	bool var$1 = ($nc(elemName)->equals("html"_s) && this->seenHtml);
	bool var$0 = var$1 || ($nc(elemName)->equals("head"_s) && this->seenHead);
	if (var$0 || ($nc(elemName)->equals("body"_s) && this->seenBody)) {
		return true;
	}
	bool var$2 = $nc(elemName)->equals("dt"_s);
	if (var$2 || $nc(elemName)->equals("dd"_s)) {
		$var($TagStack, s, this->stack);
		while (s != nullptr && !$nc($($nc(s->elem)->getName()))->equals("dl"_s)) {
			$assign(s, s->next);
		}
		if (s == nullptr) {
			return true;
		}
	}
	bool var$8 = ($nc(stackElement)->equals("table"_s));
	bool var$7 = var$8 && (!$nc(elemName)->equals("#pcdata"_s));
	bool var$6 = (var$7 && (!elemName->equals("input"_s)));
	if (!var$6) {
		bool var$9 = ($nc(elemName)->equals("font"_s));
		if (var$9) {
			bool var$10 = $nc(stackElement)->equals("ul"_s);
			var$9 = (var$10 || $nc(stackElement)->equals("ol"_s));
		}
		var$6 = (var$9);
	}
	bool var$5 = var$6;
	bool var$4 = var$5 || ($nc(elemName)->equals("meta"_s) && this->stack != nullptr);
	bool var$3 = var$4 || ($nc(elemName)->equals("style"_s) && this->seenBody);
	if (!var$3) {
		bool var$11 = $nc(stackElement)->equals("table"_s);
		var$3 = (var$11 && $nc(elemName)->equals("a"_s));
	}
	if (var$3) {
		return true;
	}
	return false;
}

void Parser::markFirstTime($Element* elem) {
	$var($String, elemName, $nc(elem)->getName());
	if ($nc(elemName)->equals("html"_s)) {
		this->seenHtml = true;
	} else if (elemName->equals("head"_s)) {
		this->seenHead = true;
	} else if (elemName->equals("body"_s)) {
		if ($nc(this->buf)->length == 1) {
			$var($chars, newBuf, $new($chars, 256));
			newBuf->set(0, $nc(this->buf)->get(0));
			$set(this, buf, newBuf);
		}
		this->seenBody = true;
	}
}

bool Parser::legalElementContext($Element* elem) {
	if (this->stack == nullptr) {
		if (elem != $nc(this->dtd)->html) {
			startTag($(makeTag($nc(this->dtd)->html, true)));
			return legalElementContext(elem);
		}
		return true;
	}
	if ($nc(this->stack)->advance(elem)) {
		markFirstTime(elem);
		return true;
	}
	bool insertTag = false;
	$var($String, stackElemName, $nc($nc(this->stack)->elem)->getName());
	$var($String, elemName, $nc(elem)->getName());
	bool var$0 = !this->strict;
	if (var$0) {
		bool var$3 = $nc(stackElemName)->equals("table"_s);
		bool var$2 = (var$3 && $nc(elemName)->equals("td"_s));
		if (!var$2) {
			bool var$4 = $nc(stackElemName)->equals("table"_s);
			var$2 = (var$4 && $nc(elemName)->equals("th"_s));
		}
		bool var$1 = var$2;
		if (!var$1) {
			bool var$5 = $nc(stackElemName)->equals("tr"_s);
			var$1 = (var$5 && !$nc(elemName)->equals("tr"_s));
		}
		var$0 = (var$1);
	}
	if (var$0) {
		insertTag = true;
	}
	bool var$6 = !this->strict && !insertTag;
	if (var$6) {
		bool var$7 = $nc($nc(this->stack)->elem)->getName() != elem->getName();
		var$6 = (var$7 || $nc($(elem->getName()))->equals("body"_s));
	}
	if (var$6) {
		if (this->skipTag = ignoreElement(elem)) {
			error("tag.ignore"_s, $(elem->getName()));
			return this->skipTag;
		}
	}
	bool var$11 = !this->strict && $nc(stackElemName)->equals("table"_s);
	bool var$10 = var$11 && !$nc(elemName)->equals("tr"_s);
	bool var$9 = var$10 && !elemName->equals("td"_s);
	bool var$8 = var$9 && !elemName->equals("th"_s);
	if (var$8 && !elemName->equals("caption"_s)) {
		$var($Element, e, $nc(this->dtd)->getElement("tr"_s));
		$var($TagElement, t, makeTag(e, true));
		legalTagContext(t);
		startTag(t);
		error("start.missing"_s, $(elem->getName()));
		return legalElementContext(elem);
	}
	bool var$12 = !insertTag && $nc(this->stack)->terminate();
	if (var$12 && (!this->strict || $nc($nc(this->stack)->elem)->omitEnd())) {
		{
			$var($TagStack, s, $nc(this->stack)->next);
			for (; s != nullptr; $assign(s, $nc(s)->next)) {
				if (s->advance(elem)) {
					while (this->stack != s) {
						endTag(true);
					}
					return true;
				}
				bool var$13 = !s->terminate();
				if (var$13 || (this->strict && !$nc(s->elem)->omitEnd())) {
					break;
				}
			}
		}
	}
	$var($Element, next, $nc(this->stack)->first());
	if (next != nullptr && (!this->strict || $nc(next)->omitStart()) && !(next == $nc(this->dtd)->head && elem == $nc(this->dtd)->pcdata)) {
		$var($TagElement, t, makeTag(next, true));
		legalTagContext(t);
		startTag(t);
		if (!next->omitStart()) {
			error("start.missing"_s, $(elem->getName()));
		}
		return legalElementContext(elem);
	}
	if (!this->strict) {
		$var($ContentModel, content, $nc(this->stack)->contentModel());
		$var($Vector, elemVec, $new($Vector));
		if (content != nullptr) {
			content->getElements(elemVec);
			{
				$var($Iterator, i$, elemVec->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Element, e, $cast($Element, i$->next()));
					{
						if ($nc(this->stack)->excluded($nc(e)->getIndex())) {
							continue;
						}
						bool reqAtts = false;
						{
							$var($AttributeList, a, $nc(e)->getAttributes());
							for (; a != nullptr; $assign(a, $nc(a)->next)) {
								if (a->modifier == $DTDConstants::REQUIRED) {
									reqAtts = true;
									break;
								}
							}
						}
						if (reqAtts) {
							continue;
						}
						$var($ContentModel, m, e->getContent());
						if (m != nullptr && m->first(elem)) {
							$var($TagElement, t, makeTag(e, true));
							legalTagContext(t);
							startTag(t);
							error("start.missing"_s, $(e->getName()));
							return legalElementContext(elem);
						}
					}
				}
			}
		}
	}
	bool var$14 = $nc(this->stack)->terminate() && ($nc(this->stack)->elem != $nc(this->dtd)->body);
	if (var$14 && (!this->strict || $nc($nc(this->stack)->elem)->omitEnd())) {
		if (!$nc($nc(this->stack)->elem)->omitEnd()) {
			error("end.missing"_s, $(elem->getName()));
		}
		endTag(true);
		return legalElementContext(elem);
	}
	return false;
}

void Parser::legalTagContext($TagElement* tag) {
	if (legalElementContext($($nc(tag)->getElement()))) {
		markFirstTime($($nc(tag)->getElement()));
		return;
	}
	bool var$0 = $nc(tag)->breaksFlow() && (this->stack != nullptr);
	if (var$0 && !$nc($nc(this->stack)->tag)->breaksFlow()) {
		endTag(true);
		legalTagContext(tag);
		return;
	}
	{
		$var($TagStack, s, this->stack);
		for (; s != nullptr; $assign(s, $nc(s)->next)) {
			if ($nc(s->tag)->getElement() == $nc(this->dtd)->head) {
				while (this->stack != s) {
					endTag(true);
				}
				endTag(true);
				legalTagContext(tag);
				return;
			}
		}
	}
	error("tag.unexpected"_s, $($nc($($nc(tag)->getElement()))->getName()));
}

void Parser::errorContext() {
	for (; (this->stack != nullptr) && ($nc($nc(this->stack)->tag)->getElement() != $nc(this->dtd)->body); $set(this, stack, $nc(this->stack)->next)) {
		handleEndTag($nc(this->stack)->tag);
	}
	if (this->stack == nullptr) {
		legalElementContext($nc(this->dtd)->body);
		startTag($(makeTag($nc(this->dtd)->body, true)));
	}
}

void Parser::addString(int32_t c) {
	if (this->strpos == $nc(this->str)->length) {
		$var($chars, newstr, $new($chars, $nc(this->str)->length + 128));
		$System::arraycopy(this->str, 0, newstr, 0, $nc(this->str)->length);
		$set(this, str, newstr);
	}
	$nc(this->str)->set(this->strpos++, (char16_t)c);
}

$String* Parser::getString(int32_t pos) {
	$var($chars, newStr, $new($chars, this->strpos - pos));
	$System::arraycopy(this->str, pos, newStr, 0, this->strpos - pos);
	this->strpos = pos;
	return $new($String, newStr);
}

$chars* Parser::getChars(int32_t pos) {
	$var($chars, newStr, $new($chars, this->strpos - pos));
	$System::arraycopy(this->str, pos, newStr, 0, this->strpos - pos);
	this->strpos = pos;
	return newStr;
}

$chars* Parser::getChars(int32_t pos, int32_t endPos) {
	$var($chars, newStr, $new($chars, endPos - pos));
	$System::arraycopy(this->str, pos, newStr, 0, endPos - pos);
	return newStr;
}

void Parser::resetStrBuffer() {
	this->strpos = 0;
}

int32_t Parser::strIndexOf(char16_t target) {
	for (int32_t i = 0; i < this->strpos; ++i) {
		if ($nc(this->str)->get(i) == target) {
			return i;
		}
	}
	return -1;
}

void Parser::skipSpace() {
	while (true) {
		switch (this->ch) {
		case u'\n':
			{
				++this->ln;
				this->ch = readCh();
				++this->lfCount;
				break;
			}
		case u'\r':
			{
				++this->ln;
				if ((this->ch = readCh()) == u'\n') {
					this->ch = readCh();
					++this->crlfCount;
				} else {
					++this->crCount;
				}
				break;
			}
		case u' ':
			{}
		case u'\t':
			{
				this->ch = readCh();
				break;
			}
		default:
			{
				return;
			}
		}
	}
}

bool Parser::parseIdentifier(bool lower) {
	switch (this->ch) {
	case u'A':
		{}
	case u'B':
		{}
	case u'C':
		{}
	case u'D':
		{}
	case u'E':
		{}
	case u'F':
		{}
	case u'G':
		{}
	case u'H':
		{}
	case u'I':
		{}
	case u'J':
		{}
	case u'K':
		{}
	case u'L':
		{}
	case u'M':
		{}
	case u'N':
		{}
	case u'O':
		{}
	case u'P':
		{}
	case u'Q':
		{}
	case u'R':
		{}
	case u'S':
		{}
	case u'T':
		{}
	case u'U':
		{}
	case u'V':
		{}
	case u'W':
		{}
	case u'X':
		{}
	case u'Y':
		{}
	case u'Z':
		{
			if (lower) {
				this->ch = u'a' + (this->ch - u'A');
			}
			break;
		}
	case u'a':
		{}
	case u'b':
		{}
	case u'c':
		{}
	case u'd':
		{}
	case u'e':
		{}
	case u'f':
		{}
	case u'g':
		{}
	case u'h':
		{}
	case u'i':
		{}
	case u'j':
		{}
	case u'k':
		{}
	case u'l':
		{}
	case u'm':
		{}
	case u'n':
		{}
	case u'o':
		{}
	case u'p':
		{}
	case u'q':
		{}
	case u'r':
		{}
	case u's':
		{}
	case u't':
		{}
	case u'u':
		{}
	case u'v':
		{}
	case u'w':
		{}
	case u'x':
		{}
	case u'y':
		{}
	case u'z':
		{
			break;
		}
	default:
		{
			return false;
		}
	}
	while (true) {
		addString(this->ch);
		switch (this->ch = readCh()) {
		case u'A':
			{}
		case u'B':
			{}
		case u'C':
			{}
		case u'D':
			{}
		case u'E':
			{}
		case u'F':
			{}
		case u'G':
			{}
		case u'H':
			{}
		case u'I':
			{}
		case u'J':
			{}
		case u'K':
			{}
		case u'L':
			{}
		case u'M':
			{}
		case u'N':
			{}
		case u'O':
			{}
		case u'P':
			{}
		case u'Q':
			{}
		case u'R':
			{}
		case u'S':
			{}
		case u'T':
			{}
		case u'U':
			{}
		case u'V':
			{}
		case u'W':
			{}
		case u'X':
			{}
		case u'Y':
			{}
		case u'Z':
			{
				if (lower) {
					this->ch = u'a' + (this->ch - u'A');
				}
				break;
			}
		case u'a':
			{}
		case u'b':
			{}
		case u'c':
			{}
		case u'd':
			{}
		case u'e':
			{}
		case u'f':
			{}
		case u'g':
			{}
		case u'h':
			{}
		case u'i':
			{}
		case u'j':
			{}
		case u'k':
			{}
		case u'l':
			{}
		case u'm':
			{}
		case u'n':
			{}
		case u'o':
			{}
		case u'p':
			{}
		case u'q':
			{}
		case u'r':
			{}
		case u's':
			{}
		case u't':
			{}
		case u'u':
			{}
		case u'v':
			{}
		case u'w':
			{}
		case u'x':
			{}
		case u'y':
			{}
		case u'z':
			{}
		case u'0':
			{}
		case u'1':
			{}
		case u'2':
			{}
		case u'3':
			{}
		case u'4':
			{}
		case u'5':
			{}
		case u'6':
			{}
		case u'7':
			{}
		case u'8':
			{}
		case u'9':
			{}
		case u'.':
			{}
		case u'-':
			{}
		case u'_':
			{
				break;
			}
		default:
			{
				return true;
			}
		}
	}
}

$chars* Parser::parseEntityReference() {
	int32_t pos = this->strpos;
	if ((this->ch = readCh()) == u'#') {
		int32_t n = 0;
		this->ch = readCh();
		if ((this->ch >= u'0') && (this->ch <= u'9') || this->ch == u'x' || this->ch == u'X') {
			if ((this->ch >= u'0') && (this->ch <= u'9')) {
				while ((this->ch >= u'0') && (this->ch <= u'9')) {
					n = (n * 10) + this->ch - u'0';
					this->ch = readCh();
				}
			} else {
				this->ch = readCh();
				char16_t lch = (char16_t)$Character::toLowerCase(this->ch);
				while ((lch >= u'0') && (lch <= u'9') || (lch >= u'a') && (lch <= u'f')) {
					if (lch >= u'0' && lch <= u'9') {
						n = (n * 16) + lch - u'0';
					} else {
						n = (n * 16) + lch - u'a' + 10;
					}
					this->ch = readCh();
					lch = (char16_t)$Character::toLowerCase(this->ch);
				}
			}
			switch (this->ch) {
			case u'\n':
				{
					++this->ln;
					this->ch = readCh();
					++this->lfCount;
					break;
				}
			case u'\r':
				{
					++this->ln;
					if ((this->ch = readCh()) == u'\n') {
						this->ch = readCh();
						++this->crlfCount;
					} else {
						++this->crCount;
					}
					break;
				}
			case u';':
				{
					this->ch = readCh();
					break;
				}
			}
			$var($chars, data, mapNumericReference(n));
			return data;
		}
		addString(u'#');
		if (!parseIdentifier(false)) {
			error("ident.expected"_s);
			this->strpos = pos;
			$var($chars, data, $new($chars, {
				u'&',
				u'#'
			}));
			return data;
		}
	} else if (!parseIdentifier(false)) {
		$var($chars, data, $new($chars, {u'&'}));
		return data;
	}
	bool semicolon = false;
	switch (this->ch) {
	case u'\n':
		{
			++this->ln;
			this->ch = readCh();
			++this->lfCount;
			break;
		}
	case u'\r':
		{
			++this->ln;
			if ((this->ch = readCh()) == u'\n') {
				this->ch = readCh();
				++this->crlfCount;
			} else {
				++this->crCount;
			}
			break;
		}
	case u';':
		{
			semicolon = true;
			this->ch = readCh();
			break;
		}
	}
	$var($String, nm, getString(pos));
	$var($Entity, ent, $nc(this->dtd)->getEntity(nm));
	if (!this->strict && (ent == nullptr)) {
		$assign(ent, $nc(this->dtd)->getEntity($($nc(nm)->toLowerCase())));
	}
	if ((ent == nullptr) || !$nc(ent)->isGeneral()) {
		if ($nc(nm)->length() == 0) {
			error("invalid.entref"_s, nm);
			return $new($chars, 0);
		}
		$var($String, str, $str({"&"_s, nm, (semicolon ? ";"_s : ""_s)}));
		$var($chars, b, $new($chars, $nc(str)->length()));
		str->getChars(0, b->length, b, 0);
		return b;
	}
	return $nc(ent)->getData();
}

$chars* Parser::mapNumericReference(int32_t c) {
	$var($chars, data, nullptr);
	if (c >= 0x0000FFFF) {
		try {
			$assign(data, $Character::toChars(c));
		} catch ($IllegalArgumentException&) {
			$var($IllegalArgumentException, e, $catch());
			$assign(data, $new($chars, 0));
		}
	} else {
		$assign(data, $new($chars, 1));
		data->set(0, (c < 130 || c > 159) ? (char16_t)c : $nc(Parser::cp1252Map)->get(c - 130));
	}
	return data;
}

void Parser::parseComment() {
	while (true) {
		int32_t c = this->ch;
		switch (c) {
		case u'-':
			{
				if (!this->strict && (this->strpos != 0) && ($nc(this->str)->get(this->strpos - 1) == u'-')) {
					if ((this->ch = readCh()) == u'>') {
						return;
					}
					if (this->ch == u'!') {
						if ((this->ch = readCh()) == u'>') {
							return;
						} else {
							addString(u'-');
							addString(u'!');
							continue;
						}
					}
					break;
				}
				if ((this->ch = readCh()) == u'-') {
					this->ch = readCh();
					if (this->strict || this->ch == u'>') {
						return;
					}
					if (this->ch == u'!') {
						if ((this->ch = readCh()) == u'>') {
							return;
						} else {
							addString(u'-');
							addString(u'!');
							continue;
						}
					}
					addString(u'-');
				}
				break;
			}
		case -1:
			{
				handleEOFInComment();
				return;
			}
		case u'\n':
			{
				++this->ln;
				this->ch = readCh();
				++this->lfCount;
				break;
			}
		case u'>':
			{
				this->ch = readCh();
				break;
			}
		case u'\r':
			{
				++this->ln;
				if ((this->ch = readCh()) == u'\n') {
					this->ch = readCh();
					++this->crlfCount;
				} else {
					++this->crCount;
				}
				c = u'\n';
				break;
			}
		default:
			{
				this->ch = readCh();
				break;
			}
		}
		addString(c);
	}
}

void Parser::parseLiteral(bool replace) {
	while (true) {
		int32_t c = this->ch;
		{
			int32_t i = 0;
			int32_t j = 0;
			$var($chars, data, nullptr)
			switch (c) {
			case -1:
				{
					error("eof.literal"_s, $($nc($nc(this->stack)->elem)->getName()));
					endTag(true);
					return;
				}
			case u'>':
				{
					this->ch = readCh();
					i = this->textpos - ($nc($nc($nc(this->stack)->elem)->name)->length() + 2);
					j = 0;
					bool var$1 = (i >= 0);
					bool var$0 = var$1 && ($nc(this->text)->get(i++) == u'<');
					if (var$0 && ($nc(this->text)->get(i) == u'/')) {
						while (true) {
							bool var$2 = (++i < this->textpos);
							if (var$2) {
								char16_t var$3 = $Character::toLowerCase($nc(this->text)->get(i));
								var$2 = (var$3 == $nc($nc($nc(this->stack)->elem)->name)->charAt(j++));
							}
							if (!(var$2)) {
								break;
							}
							{
							}
						}
						if (i == this->textpos) {
							this->textpos -= ($nc($nc($nc(this->stack)->elem)->name)->length() + 2);
							if ((this->textpos > 0) && ($nc(this->text)->get(this->textpos - 1) == u'\n')) {
								--this->textpos;
							}
							endTag(false);
							return;
						}
					}
					break;
				}
			case u'&':
				{
					$assign(data, parseEntityReference());
					if (this->textpos + $nc(data)->length > $nc(this->text)->length) {
						$var($chars, newtext, $new($chars, $Math::max(this->textpos + data->length + 128, $nc(this->text)->length * 2)));
						$System::arraycopy(this->text, 0, newtext, 0, $nc(this->text)->length);
						$set(this, text, newtext);
					}
					$System::arraycopy(data, 0, this->text, this->textpos, $nc(data)->length);
					this->textpos += $nc(data)->length;
					continue;
				}
			case u'\n':
				{
					++this->ln;
					this->ch = readCh();
					++this->lfCount;
					break;
				}
			case u'\r':
				{
					++this->ln;
					if ((this->ch = readCh()) == u'\n') {
						this->ch = readCh();
						++this->crlfCount;
					} else {
						++this->crCount;
					}
					c = u'\n';
					break;
				}
			default:
				{
					this->ch = readCh();
					break;
				}
			}
		}
		if (this->textpos == $nc(this->text)->length) {
			$var($chars, newtext, $new($chars, $nc(this->text)->length + 128));
			$System::arraycopy(this->text, 0, newtext, 0, $nc(this->text)->length);
			$set(this, text, newtext);
		}
		$nc(this->text)->set(this->textpos++, (char16_t)c);
	}
}

$String* Parser::parseAttributeValue(bool lower) {
	int32_t delim = -1;
	switch (this->ch) {
	case u'\'':
		{}
	case u'\"':
		{
			delim = this->ch;
			this->ch = readCh();
			break;
		}
	}
	while (true) {
		int32_t c = this->ch;
		{
			$var($chars, data, nullptr)
			switch (c) {
			case u'\n':
				{
					++this->ln;
					this->ch = readCh();
					++this->lfCount;
					if (delim < 0) {
						return getString(0);
					}
					break;
				}
			case u'\r':
				{
					++this->ln;
					if ((this->ch = readCh()) == u'\n') {
						this->ch = readCh();
						++this->crlfCount;
					} else {
						++this->crCount;
					}
					if (delim < 0) {
						return getString(0);
					}
					break;
				}
			case u'\t':
				{
					if (delim < 0) {
						c = u' ';
					}
				}
			case u' ':
				{
					this->ch = readCh();
					if (delim < 0) {
						return getString(0);
					}
					break;
				}
			case u'>':
				{}
			case u'<':
				{
					if (delim < 0) {
						return getString(0);
					}
					this->ch = readCh();
					break;
				}
			case u'\'':
				{}
			case u'\"':
				{
					this->ch = readCh();
					if (c == delim) {
						return getString(0);
					} else if (delim == -1) {
						error("attvalerr"_s);
						if (this->strict || this->ch == u' ') {
							return getString(0);
						} else {
							continue;
						}
					}
					break;
				}
			case u'=':
				{
					if (delim < 0) {
						error("attvalerr"_s);
						if (this->strict) {
							return getString(0);
						}
					}
					this->ch = readCh();
					break;
				}
			case u'&':
				{
					if (this->strict && delim < 0) {
						this->ch = readCh();
						break;
					}
					$assign(data, parseEntityReference());
					for (int32_t i = 0; i < $nc(data)->length; ++i) {
						c = data->get(i);
						addString((lower && (c >= u'A') && (c <= u'Z')) ? u'a' + c - u'A' : c);
					}
					continue;
				}
			case -1:
				{
					return getString(0);
				}
			default:
				{
					if (lower && (c >= u'A') && (c <= u'Z')) {
						c = u'a' + c - u'A';
					}
					this->ch = readCh();
					break;
				}
			}
		}
		addString(c);
	}
}

void Parser::parseAttributeSpecificationList($Element* elem) {
	while (true) {
		skipSpace();
		switch (this->ch) {
		case u'/':
			{}
		case u'>':
			{}
		case u'<':
			{}
		case -1:
			{
				return;
			}
		case u'-':
			{
				if ((this->ch = readCh()) == u'-') {
					this->ch = readCh();
					parseComment();
					this->strpos = 0;
				} else {
					error("invalid.tagchar"_s, "-"_s, $($nc(elem)->getName()));
					this->ch = readCh();
				}
				continue;
			}
		}
		$var($AttributeList, att, nullptr);
		$var($String, attname, nullptr);
		$var($String, attvalue, nullptr);
		if (parseIdentifier(true)) {
			$assign(attname, getString(0));
			skipSpace();
			if (this->ch == u'=') {
				this->ch = readCh();
				skipSpace();
				$assign(att, $nc(elem)->getAttribute(attname));
				$assign(attvalue, parseAttributeValue((att != nullptr) && (att->type != $DTDConstants::CDATA) && (att->type != $DTDConstants::NOTATION) && (att->type != $DTDConstants::NAME)));
			} else {
				$assign(attvalue, attname);
				$assign(att, $nc(elem)->getAttributeByValue(attvalue));
				if (att == nullptr) {
					$assign(att, elem->getAttribute(attname));
					if (att != nullptr) {
						$assign(attvalue, att->getValue());
					} else {
						$assign(attvalue, nullptr);
					}
				}
			}
		} else if (!this->strict && this->ch == u',') {
			this->ch = readCh();
			continue;
		} else if (!this->strict && this->ch == u'\"') {
			this->ch = readCh();
			skipSpace();
			if (parseIdentifier(true)) {
				$assign(attname, getString(0));
				if (this->ch == u'\"') {
					this->ch = readCh();
				}
				skipSpace();
				if (this->ch == u'=') {
					this->ch = readCh();
					skipSpace();
					$assign(att, $nc(elem)->getAttribute(attname));
					$assign(attvalue, parseAttributeValue((att != nullptr) && (att->type != $DTDConstants::CDATA) && (att->type != $DTDConstants::NOTATION)));
				} else {
					$assign(attvalue, attname);
					$assign(att, $nc(elem)->getAttributeByValue(attvalue));
					if (att == nullptr) {
						$assign(att, elem->getAttribute(attname));
						if (att != nullptr) {
							$assign(attvalue, att->getValue());
						}
					}
				}
			} else {
				$var($chars, str, $new($chars, {(char16_t)this->ch}));
				$var($String, var$0, "invalid.tagchar"_s);
				$var($String, var$1, $new($String, str));
				error(var$0, var$1, $($nc(elem)->getName()));
				this->ch = readCh();
				continue;
			}
		} else if (!this->strict && ($nc(this->attributes)->isEmpty()) && (this->ch == u'=')) {
			this->ch = readCh();
			skipSpace();
			$assign(attname, $nc(elem)->getName());
			$assign(att, elem->getAttribute(attname));
			$assign(attvalue, parseAttributeValue((att != nullptr) && (att->type != $DTDConstants::CDATA) && (att->type != $DTDConstants::NOTATION)));
		} else if (!this->strict && (this->ch == u'=')) {
			this->ch = readCh();
			skipSpace();
			$assign(attvalue, parseAttributeValue(true));
			error("attvalerr"_s);
			return;
		} else {
			$var($chars, str, $new($chars, {(char16_t)this->ch}));
			$var($String, var$2, "invalid.tagchar"_s);
			$var($String, var$3, $new($String, str));
			error(var$2, var$3, $($nc(elem)->getName()));
			if (!this->strict) {
				this->ch = readCh();
				continue;
			} else {
				return;
			}
		}
		if (att != nullptr) {
			$assign(attname, att->getName());
		} else {
			error("invalid.tagatt"_s, attname, $($nc(elem)->getName()));
		}
		if ($nc(this->attributes)->isDefined(attname)) {
			error("multi.tagatt"_s, attname, $($nc(elem)->getName()));
		}
		if (attvalue == nullptr) {
			$init($HTML);
			$assign(attvalue, ((att != nullptr) && (att->value != nullptr)) ? $nc(att)->value : $HTML::NULL_ATTRIBUTE_VALUE);
		} else if ((att != nullptr) && (att->values != nullptr) && !$nc(att->values)->contains(attvalue)) {
			error("invalid.tagattval"_s, attname, $($nc(elem)->getName()));
		}
		$var($HTML$Attribute, attkey, $HTML::getAttributeKey(attname));
		if (attkey == nullptr) {
			$nc(this->attributes)->addAttribute(attname, attvalue);
		} else {
			$nc(this->attributes)->addAttribute(attkey, attvalue);
		}
	}
}

$String* Parser::parseDTDMarkup() {
	$var($StringBuilder, strBuff, $new($StringBuilder));
	this->ch = readCh();
	while (true) {
		switch (this->ch) {
		case u'>':
			{
				this->ch = readCh();
				return strBuff->toString();
			}
		case -1:
			{
				error("invalid.markup"_s);
				return strBuff->toString();
			}
		case u'\n':
			{
				++this->ln;
				this->ch = readCh();
				++this->lfCount;
				break;
			}
		case u'\"':
			{
				this->ch = readCh();
				break;
			}
		case u'\r':
			{
				++this->ln;
				if ((this->ch = readCh()) == u'\n') {
					this->ch = readCh();
					++this->crlfCount;
				} else {
					++this->crCount;
				}
				break;
			}
		default:
			{
				strBuff->append((char16_t)((int32_t)(this->ch & (uint32_t)255)));
				this->ch = readCh();
				break;
			}
		}
	}
}

bool Parser::parseMarkupDeclarations($StringBuffer* strBuff) {
	int32_t var$1 = $nc(strBuff)->length();
	bool var$0 = (var$1 == "DOCTYPE"_s->length());
	if (var$0 && ($($nc($(strBuff->toString()))->toUpperCase())->equals("DOCTYPE"_s))) {
		parseDTDMarkup();
		return true;
	}
	return false;
}

void Parser::parseInvalidTag() {
	while (true) {
		skipSpace();
		switch (this->ch) {
		case u'>':
			{}
		case -1:
			{
				this->ch = readCh();
				return;
			}
		case u'<':
			{
				return;
			}
		default:
			{
				this->ch = readCh();
			}
		}
	}
}

void Parser::parseTag() {
	$var($Element, elem, nullptr);
	bool net = false;
	bool warned = false;
	bool unknown = false;
	{
		$var($TagStack, sp, nullptr)
		$var($String, elemName, nullptr)
		switch (this->ch = readCh()) {
		case u'!':
			{
				{
					$var($StringBuffer, strBuff, nullptr)
					switch (this->ch = readCh()) {
					case u'-':
						{
							while (true) {
								if (this->ch == u'-') {
									if (!this->strict || ((this->ch = readCh()) == u'-')) {
										this->ch = readCh();
										if (!this->strict && this->ch == u'-') {
											this->ch = readCh();
										}
										if (this->textpos != 0) {
											$var($chars, newtext, $new($chars, this->textpos));
											$System::arraycopy(this->text, 0, newtext, 0, this->textpos);
											handleText(newtext);
											this->lastBlockStartPos = this->currentBlockStartPos;
											this->textpos = 0;
										}
										parseComment();
										$set(this, last, makeTag($($nc(this->dtd)->getElement("comment"_s)), true));
										handleComment($(getChars(0)));
										continue;
									} else if (!warned) {
										warned = true;
										error("invalid.commentchar"_s, "-"_s);
									}
								}
								skipSpace();
								switch (this->ch) {
								case u'-':
									{
										continue;
									}
								case u'>':
									{
										this->ch = readCh();
										return;
									}
								case -1:
									{
										return;
									}
								default:
									{
										this->ch = readCh();
										if (!warned) {
											warned = true;
											error("invalid.commentchar"_s, $($String::valueOf((char16_t)this->ch)));
										}
										break;
									}
								}
							}
						}
					default:
						{
							$assign(strBuff, $new($StringBuffer));
							while (true) {
								$nc(strBuff)->append((char16_t)this->ch);
								if (parseMarkupDeclarations(strBuff)) {
									return;
								}
								switch (this->ch) {
								case u'>':
									{
										this->ch = readCh();
									}
								case -1:
									{
										error("invalid.markup"_s);
										return;
									}
								case u'\n':
									{
										++this->ln;
										this->ch = readCh();
										++this->lfCount;
										break;
									}
								case u'\r':
									{
										++this->ln;
										if ((this->ch = readCh()) == u'\n') {
											this->ch = readCh();
											++this->crlfCount;
										} else {
											++this->crCount;
										}
										break;
									}
								default:
									{
										this->ch = readCh();
										break;
									}
								}
							}
						}
					}
				}
			}
		case u'/':
			{
				{
					$var($String, elemStr, nullptr)
					switch (this->ch = readCh()) {
					case u'>':
						{
							this->ch = readCh();
						}
					case u'<':
						{
							if (this->recent == nullptr) {
								error("invalid.shortend"_s);
								return;
							}
							$assign(elem, this->recent);
							break;
						}
					default:
						{
							if (!parseIdentifier(true)) {
								error("expected.endtagname"_s);
								return;
							}
							skipSpace();
							switch (this->ch) {
							case u'>':
								{
									this->ch = readCh();
									break;
								}
							case u'<':
								{
									break;
								}
							default:
								{
									error("expected"_s, "\'>\'"_s);
									while ((this->ch != -1) && (this->ch != u'\n') && (this->ch != u'>')) {
										this->ch = readCh();
									}
									if (this->ch == u'>') {
										this->ch = readCh();
									}
									break;
								}
							}
							$assign(elemStr, getString(0));
							if (!$nc(this->dtd)->elementExists(elemStr)) {
								error("end.unrecognized"_s, elemStr);
								if ((this->textpos > 0) && ($nc(this->text)->get(this->textpos - 1) == u'\n')) {
									--this->textpos;
								}
								$assign(elem, $nc(this->dtd)->getElement("unknown"_s));
								$set($nc(elem), name, elemStr);
								unknown = true;
							} else {
								$assign(elem, $nc(this->dtd)->getElement(elemStr));
							}
							break;
						}
					}
				}
				if (this->stack == nullptr) {
					error("end.extra.tag"_s, $($nc(elem)->getName()));
					return;
				}
				if ((this->textpos > 0) && ($nc(this->text)->get(this->textpos - 1) == u'\n')) {
					if ($nc(this->stack)->pre) {
						if ((this->textpos > 1) && ($nc(this->text)->get(this->textpos - 2) != u'\n')) {
							--this->textpos;
						}
					} else {
						--this->textpos;
					}
				}
				if (unknown) {
					$var($TagElement, t, makeTag(elem));
					handleText(t);
					$init($HTML$Attribute);
					$nc(this->attributes)->addAttribute($HTML$Attribute::ENDTAG, "true"_s);
					handleEmptyTag($(makeTag(elem)));
					unknown = false;
					return;
				}
				if (!this->strict) {
					$var($String, stackElem, $nc($nc(this->stack)->elem)->getName());
					if ($nc(stackElem)->equals("table"_s)) {
						if (!$nc($($nc(elem)->getName()))->equals(stackElem)) {
							error("tag.ignore"_s, $(elem->getName()));
							return;
						}
					}
					bool var$0 = $nc(stackElem)->equals("tr"_s);
					if (var$0 || $nc(stackElem)->equals("td"_s)) {
						bool var$1 = (!$nc($($nc(elem)->getName()))->equals("table"_s));
						if (var$1 && (!$nc($(elem->getName()))->equals(stackElem))) {
							error("tag.ignore"_s, $(elem->getName()));
							return;
						}
					}
				}
				$assign(sp, this->stack);
				while ((sp != nullptr) && (elem != sp->elem)) {
					$assign(sp, sp->next);
				}
				if (sp == nullptr) {
					error("unmatched.endtag"_s, $($nc(elem)->getName()));
					return;
				}
				$assign(elemName, $nc(elem)->getName());
				bool var$2 = this->stack != sp;
				if (var$2) {
					bool var$3 = $nc(elemName)->equals("font"_s);
					var$2 = (var$3 || $nc(elemName)->equals("center"_s));
				}
				if (var$2) {
					if (elemName->equals("center"_s)) {
						while ($nc($nc(this->stack)->elem)->omitEnd() && this->stack != sp) {
							endTag(true);
						}
						if ($nc(this->stack)->elem == elem) {
							endTag(false);
						}
					}
					return;
				}
				while (this->stack != sp) {
					endTag(true);
				}
				endTag(false);
				return;
			}
		case -1:
			{
				error("eof"_s);
				return;
			}
		}
	}
	if (!parseIdentifier(true)) {
		$assign(elem, this->recent);
		if ((this->ch != u'>') || (elem == nullptr)) {
			error("expected.tagname"_s);
			return;
		}
	} else {
		$var($String, elemStr, getString(0));
		if ($nc(elemStr)->equals("image"_s)) {
			$assign(elemStr, "img"_s);
		}
		if (!$nc(this->dtd)->elementExists(elemStr)) {
			error("tag.unrecognized "_s, elemStr);
			$assign(elem, $nc(this->dtd)->getElement("unknown"_s));
			$set($nc(elem), name, elemStr);
			unknown = true;
		} else {
			$assign(elem, $nc(this->dtd)->getElement(elemStr));
		}
	}
	parseAttributeSpecificationList(elem);
	switch (this->ch) {
	case u'/':
		{
			net = true;
		}
	case u'>':
		{
			this->ch = readCh();
			if (this->ch == u'>' && net) {
				this->ch = readCh();
			}
		}
	case u'<':
		{
			break;
		}
	default:
		{
			error("expected"_s, "\'>\'"_s);
			break;
		}
	}
	if (!this->strict) {
		if ($nc($($nc(elem)->getName()))->equals("script"_s)) {
			error("javascript.unsupported"_s);
		}
	}
	if (!$nc(elem)->isEmpty()) {
		if (this->ch == u'\n') {
			++this->ln;
			++this->lfCount;
			this->ch = readCh();
		} else if (this->ch == u'\r') {
			++this->ln;
			if ((this->ch = readCh()) == u'\n') {
				this->ch = readCh();
				++this->crlfCount;
			} else {
				++this->crCount;
			}
		}
	}
	$var($TagElement, tag, makeTag(elem, false));
	if (!unknown) {
		legalTagContext(tag);
		if (!this->strict && this->skipTag) {
			this->skipTag = false;
			return;
		}
	}
	startTag(tag);
	if (!$nc(elem)->isEmpty()) {
		switch (elem->getType()) {
		case $DTDConstants::CDATA:
			{
				parseLiteral(false);
				break;
			}
		case $DTDConstants::RCDATA:
			{
				parseLiteral(true);
				break;
			}
		default:
			{
				if (this->stack != nullptr) {
					$nc(this->stack)->net = net;
				}
				break;
			}
		}
	}
}

void Parser::parseScript() {
	$var($chars, charsToAdd, $new($chars, $nc(Parser::SCRIPT_END_TAG)->length));
	bool insideComment = false;
	while (true) {
		int32_t i = 0;
		while (!insideComment && i < $nc(Parser::SCRIPT_END_TAG)->length && ($nc(Parser::SCRIPT_END_TAG)->get(i) == this->ch || $nc(Parser::SCRIPT_END_TAG_UPPER_CASE)->get(i) == this->ch)) {
			charsToAdd->set(i, (char16_t)this->ch);
			this->ch = readCh();
			++i;
		}
		if (i == $nc(Parser::SCRIPT_END_TAG)->length) {
			return;
		}
		if (!insideComment && i == 1 && charsToAdd->get(0) == $nc(Parser::START_COMMENT)->charAt(0)) {
			while (true) {
				bool var$0 = i < $nc(Parser::START_COMMENT)->length();
				if (!(var$0 && $nc(Parser::START_COMMENT)->charAt(i) == this->ch)) {
					break;
				}
				{
					charsToAdd->set(i, (char16_t)this->ch);
					this->ch = readCh();
					++i;
				}
			}
			if (i == $nc(Parser::START_COMMENT)->length()) {
				insideComment = true;
			}
		}
		if (insideComment) {
			while (true) {
				bool var$1 = i < $nc(Parser::END_COMMENT)->length();
				if (!(var$1 && $nc(Parser::END_COMMENT)->charAt(i) == this->ch)) {
					break;
				}
				{
					charsToAdd->set(i, (char16_t)this->ch);
					this->ch = readCh();
					++i;
				}
			}
			if (i == $nc(Parser::END_COMMENT)->length()) {
				insideComment = false;
			}
		}
		if (i > 0) {
			for (int32_t j = 0; j < i; ++j) {
				addString(charsToAdd->get(j));
			}
			continue;
		}
		switch (this->ch) {
		case -1:
			{
				error("eof.script"_s);
				return;
			}
		case u'\n':
			{
				++this->ln;
				this->ch = readCh();
				++this->lfCount;
				addString(u'\n');
				break;
			}
		case u'\r':
			{
				++this->ln;
				if ((this->ch = readCh()) == u'\n') {
					this->ch = readCh();
					++this->crlfCount;
				} else {
					++this->crCount;
				}
				addString(u'\n');
				break;
			}
		default:
			{
				addString(this->ch);
				this->ch = readCh();
				break;
			}
		}
	}
}

void Parser::parseContent() {
	$var($Thread, curThread, $Thread::currentThread());
	for (;;) {
		if (curThread->isInterrupted()) {
			curThread->interrupt();
			break;
		}
		int32_t c = this->ch;
		this->currentBlockStartPos = this->currentPosition;
		if (this->recent == $nc(this->dtd)->script) {
			parseScript();
			$set(this, last, makeTag($($nc(this->dtd)->getElement("comment"_s)), true));
			$var($String, str, $$new($String, $(getChars(0)))->trim());
			int32_t var$0 = $nc(Parser::START_COMMENT)->length();
			int32_t minLength = var$0 + $nc(Parser::END_COMMENT)->length();
			bool var$2 = str->startsWith(Parser::START_COMMENT);
			bool var$1 = var$2 && str->endsWith(Parser::END_COMMENT);
			if (var$1 && str->length() >= (minLength)) {
				int32_t var$3 = $nc(Parser::START_COMMENT)->length();
				int32_t var$4 = str->length();
				$assign(str, str->substring(var$3, var$4 - $nc(Parser::END_COMMENT)->length()));
			}
			handleComment($(str->toCharArray()));
			endTag(false);
			this->lastBlockStartPos = this->currentPosition;
			continue;
		} else {
			{
				$var($chars, data, nullptr)
				switch (c) {
				case u'<':
					{
						parseTag();
						this->lastBlockStartPos = this->currentPosition;
						continue;
					}
				case u'/':
					{
						this->ch = readCh();
						if ((this->stack != nullptr) && $nc(this->stack)->net) {
							endTag(false);
							continue;
						} else if (this->textpos == 0) {
							if (!legalElementContext($nc(this->dtd)->pcdata)) {
								error("unexpected.pcdata"_s);
							}
							if ($nc(this->last)->breaksFlow()) {
								this->space = false;
							}
						}
						break;
					}
				case -1:
					{
						return;
					}
				case u'&':
					{
						if (this->textpos == 0) {
							if (!legalElementContext($nc(this->dtd)->pcdata)) {
								error("unexpected.pcdata"_s);
							}
							if ($nc(this->last)->breaksFlow()) {
								this->space = false;
							}
						}
						$assign(data, parseEntityReference());
						if (this->textpos + $nc(data)->length + 1 > $nc(this->text)->length) {
							$var($chars, newtext, $new($chars, $Math::max(this->textpos + data->length + 128, $nc(this->text)->length * 2)));
							$System::arraycopy(this->text, 0, newtext, 0, $nc(this->text)->length);
							$set(this, text, newtext);
						}
						if (this->space) {
							this->space = false;
							$nc(this->text)->set(this->textpos++, u' ');
						}
						$System::arraycopy(data, 0, this->text, this->textpos, $nc(data)->length);
						this->textpos += $nc(data)->length;
						this->ignoreSpace = false;
						continue;
					}
				case u'\n':
					{
						++this->ln;
						++this->lfCount;
						this->ch = readCh();
						if ((this->stack != nullptr) && $nc(this->stack)->pre) {
							break;
						}
						if (this->textpos == 0) {
							this->lastBlockStartPos = this->currentPosition;
						}
						if (!this->ignoreSpace) {
							this->space = true;
						}
						continue;
					}
				case u'\r':
					{
						++this->ln;
						c = u'\n';
						if ((this->ch = readCh()) == u'\n') {
							this->ch = readCh();
							++this->crlfCount;
						} else {
							++this->crCount;
						}
						if ((this->stack != nullptr) && $nc(this->stack)->pre) {
							break;
						}
						if (this->textpos == 0) {
							this->lastBlockStartPos = this->currentPosition;
						}
						if (!this->ignoreSpace) {
							this->space = true;
						}
						continue;
					}
				case u'\t':
					{}
				case u' ':
					{
						this->ch = readCh();
						if ((this->stack != nullptr) && $nc(this->stack)->pre) {
							break;
						}
						if (this->textpos == 0) {
							this->lastBlockStartPos = this->currentPosition;
						}
						if (!this->ignoreSpace) {
							this->space = true;
						}
						continue;
					}
				default:
					{
						if (this->textpos == 0) {
							if (!legalElementContext($nc(this->dtd)->pcdata)) {
								error("unexpected.pcdata"_s);
							}
							if ($nc(this->last)->breaksFlow()) {
								this->space = false;
							}
						}
						this->ch = readCh();
						break;
					}
				}
			}
		}
		if (this->textpos + 2 > $nc(this->text)->length) {
			$var($chars, newtext, $new($chars, $nc(this->text)->length + 128));
			$System::arraycopy(this->text, 0, newtext, 0, $nc(this->text)->length);
			$set(this, text, newtext);
		}
		if (this->space) {
			if (this->textpos == 0) {
				--this->lastBlockStartPos;
			}
			$nc(this->text)->set(this->textpos++, u' ');
			this->space = false;
		}
		$nc(this->text)->set(this->textpos++, (char16_t)c);
		this->ignoreSpace = false;
	}
}

$String* Parser::getEndOfLineString() {
	if (this->crlfCount >= this->crCount) {
		if (this->lfCount >= this->crlfCount) {
			return "\n"_s;
		} else {
			return "\r\n"_s;
		}
	} else if (this->crCount > this->lfCount) {
		return "\r"_s;
	} else {
		return "\n"_s;
	}
}

void Parser::parse($Reader* in) {
	$synchronized(this) {
		$set(this, in, in);
		this->ln = 1;
		this->seenHtml = false;
		this->seenHead = false;
		this->seenBody = false;
		this->crCount = (this->lfCount = (this->crlfCount = 0));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					this->ch = readCh();
					$set(this, text, $new($chars, 1024));
					$set(this, str, $new($chars, 128));
					parseContent();
					while (this->stack != nullptr) {
						endTag(true);
					}
					$nc(in)->close();
				} catch ($IOException&) {
					$var($IOException, e, $catch());
					errorContext();
					error("ioexception"_s);
					$throw(e);
				} catch ($Exception&) {
					$var($Exception, e, $catch());
					errorContext();
					$var($String, var$1, "exception"_s);
					$var($String, var$2, $of(e)->getClass()->getName());
					error(var$1, var$2, $(e->getMessage()));
					e->printStackTrace();
				} catch ($ThreadDeath&) {
					$var($ThreadDeath, e, $catch());
					errorContext();
					error("terminated"_s);
					e->printStackTrace();
					$throw(e);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				for (; this->stack != nullptr; $set(this, stack, $nc(this->stack)->next)) {
					handleEndTag($nc(this->stack)->tag);
				}
				$set(this, text, nullptr);
				$set(this, str, nullptr);
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

int32_t Parser::readCh() {
	if (this->pos >= this->len) {
		for (;;) {
			try {
				this->len = $nc(this->in)->read(this->buf);
				break;
			} catch ($InterruptedIOException&) {
				$var($InterruptedIOException, ex, $catch());
				$throw(ex);
			}
		}
		if (this->len <= 0) {
			return -1;
		}
		this->pos = 0;
	}
	++this->currentPosition;
	return $nc(this->buf)->get(this->pos++);
}

int32_t Parser::getCurrentPos() {
	return this->currentPosition;
}

void clinit$Parser($Class* class$) {
	$assignStatic(Parser::START_COMMENT, "<!--"_s);
	$assignStatic(Parser::END_COMMENT, "-->"_s);
	$assignStatic(Parser::cp1252Map, $new($chars, {
		(char16_t)8218,
		(char16_t)402,
		(char16_t)8222,
		(char16_t)8230,
		(char16_t)8224,
		(char16_t)8225,
		(char16_t)710,
		(char16_t)8240,
		(char16_t)352,
		(char16_t)8249,
		(char16_t)338,
		(char16_t)141,
		(char16_t)142,
		(char16_t)143,
		(char16_t)144,
		(char16_t)8216,
		(char16_t)8217,
		(char16_t)8220,
		(char16_t)8221,
		(char16_t)8226,
		(char16_t)8211,
		(char16_t)8212,
		(char16_t)732,
		(char16_t)8482,
		(char16_t)353,
		(char16_t)8250,
		(char16_t)339,
		(char16_t)157,
		(char16_t)158,
		(char16_t)376
	}));
	$assignStatic(Parser::SCRIPT_END_TAG, "</script>"_s->toCharArray());
	$assignStatic(Parser::SCRIPT_END_TAG_UPPER_CASE, "</SCRIPT>"_s->toCharArray());
}

Parser::Parser() {
}

$Class* Parser::load$($String* name, bool initialize) {
	$loadClass(Parser, name, initialize, &_Parser_ClassInfo_, clinit$Parser, allocate$Parser);
	return class$;
}

$Class* Parser::class$ = nullptr;

				} // parser
			} // html
		} // text
	} // swing
} // javax