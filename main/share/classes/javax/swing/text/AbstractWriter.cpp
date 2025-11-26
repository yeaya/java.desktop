#include <javax/swing/text/AbstractWriter.h>

#include <java/io/Writer.h>
#include <java/lang/Math.h>
#include <java/util/Enumeration.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/ElementIterator.h>
#include <javax/swing/text/Segment.h>
#include <jcpp.h>

#undef NEWLINE

using $Writer = ::java::io::Writer;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $DefaultEditorKit = ::javax::swing::text::DefaultEditorKit;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $ElementIterator = ::javax::swing::text::ElementIterator;
using $Segment = ::javax::swing::text::Segment;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _AbstractWriter_FieldInfo_[] = {
	{"it", "Ljavax/swing/text/ElementIterator;", nullptr, $PRIVATE, $field(AbstractWriter, it)},
	{"out", "Ljava/io/Writer;", nullptr, $PRIVATE, $field(AbstractWriter, out)},
	{"indentLevel", "I", nullptr, $PRIVATE, $field(AbstractWriter, indentLevel)},
	{"indentSpace", "I", nullptr, $PRIVATE, $field(AbstractWriter, indentSpace)},
	{"doc", "Ljavax/swing/text/Document;", nullptr, $PRIVATE, $field(AbstractWriter, doc)},
	{"maxLineLength", "I", nullptr, $PRIVATE, $field(AbstractWriter, maxLineLength)},
	{"currLength", "I", nullptr, $PRIVATE, $field(AbstractWriter, currLength)},
	{"startOffset", "I", nullptr, $PRIVATE, $field(AbstractWriter, startOffset)},
	{"endOffset", "I", nullptr, $PRIVATE, $field(AbstractWriter, endOffset)},
	{"offsetIndent", "I", nullptr, $PRIVATE, $field(AbstractWriter, offsetIndent)},
	{"lineSeparator", "Ljava/lang/String;", nullptr, $PRIVATE, $field(AbstractWriter, lineSeparator)},
	{"canWrapLines", "Z", nullptr, $PRIVATE, $field(AbstractWriter, canWrapLines)},
	{"isLineEmpty", "Z", nullptr, $PRIVATE, $field(AbstractWriter, isLineEmpty$)},
	{"indentChars", "[C", nullptr, $PRIVATE, $field(AbstractWriter, indentChars)},
	{"tempChars", "[C", nullptr, $PRIVATE, $field(AbstractWriter, tempChars)},
	{"newlineChars", "[C", nullptr, $PRIVATE, $field(AbstractWriter, newlineChars)},
	{"segment", "Ljavax/swing/text/Segment;", nullptr, $PRIVATE, $field(AbstractWriter, segment)},
	{"NEWLINE", "C", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(AbstractWriter, NEWLINE)},
	{}
};

$MethodInfo _AbstractWriter_MethodInfo_[] = {
	{"<init>", "(Ljava/io/Writer;Ljavax/swing/text/Document;)V", nullptr, $PROTECTED, $method(static_cast<void(AbstractWriter::*)($Writer*,$Document*)>(&AbstractWriter::init$))},
	{"<init>", "(Ljava/io/Writer;Ljavax/swing/text/Document;II)V", nullptr, $PROTECTED, $method(static_cast<void(AbstractWriter::*)($Writer*,$Document*,int32_t,int32_t)>(&AbstractWriter::init$))},
	{"<init>", "(Ljava/io/Writer;Ljavax/swing/text/Element;)V", nullptr, $PROTECTED, $method(static_cast<void(AbstractWriter::*)($Writer*,$Element*)>(&AbstractWriter::init$))},
	{"<init>", "(Ljava/io/Writer;Ljavax/swing/text/Element;II)V", nullptr, $PROTECTED, $method(static_cast<void(AbstractWriter::*)($Writer*,$Element*,int32_t,int32_t)>(&AbstractWriter::init$))},
	{"decrIndent", "()V", nullptr, $PROTECTED},
	{"getCanWrapLines", "()Z", nullptr, $PROTECTED},
	{"getCurrentLineLength", "()I", nullptr, $PROTECTED},
	{"getDocument", "()Ljavax/swing/text/Document;", nullptr, $PROTECTED},
	{"getElementIterator", "()Ljavax/swing/text/ElementIterator;", nullptr, $PROTECTED},
	{"getEndOffset", "()I", nullptr, $PUBLIC},
	{"getIndentLevel", "()I", nullptr, $PROTECTED},
	{"getIndentSpace", "()I", nullptr, $PROTECTED},
	{"getLineLength", "()I", nullptr, $PROTECTED},
	{"getLineSeparator", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getStartOffset", "()I", nullptr, $PUBLIC},
	{"getText", "(Ljavax/swing/text/Element;)Ljava/lang/String;", nullptr, $PROTECTED, nullptr, "javax.swing.text.BadLocationException"},
	{"getWriter", "()Ljava/io/Writer;", nullptr, $PROTECTED},
	{"inRange", "(Ljavax/swing/text/Element;)Z", nullptr, $PROTECTED},
	{"incrIndent", "()V", nullptr, $PROTECTED},
	{"indent", "()V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"indexOf", "([CCII)I", nullptr, $PRIVATE, $method(static_cast<int32_t(AbstractWriter::*)($chars*,char16_t,int32_t,int32_t)>(&AbstractWriter::indexOf))},
	{"isLineEmpty", "()Z", nullptr, $PROTECTED},
	{"output", "([CII)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"setCanWrapLines", "(Z)V", nullptr, $PROTECTED},
	{"setCurrentLineLength", "(I)V", nullptr, $PROTECTED},
	{"setIndentSpace", "(I)V", nullptr, $PROTECTED},
	{"setLineLength", "(I)V", nullptr, $PROTECTED},
	{"setLineSeparator", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"text", "(Ljavax/swing/text/Element;)V", nullptr, $PROTECTED, nullptr, "javax.swing.text.BadLocationException,java.io.IOException"},
	{"write", "()V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.io.IOException,javax.swing.text.BadLocationException"},
	{"write", "(C)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"write", "(Ljava/lang/String;)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"write", "([CII)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"writeAttributes", "(Ljavax/swing/text/AttributeSet;)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"writeLineSeparator", "()V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _AbstractWriter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.text.AbstractWriter",
	"java.lang.Object",
	nullptr,
	_AbstractWriter_FieldInfo_,
	_AbstractWriter_MethodInfo_
};

$Object* allocate$AbstractWriter($Class* clazz) {
	return $of($alloc(AbstractWriter));
}

void AbstractWriter::init$($Writer* w, $Document* doc) {
	AbstractWriter::init$(w, doc, 0, $nc(doc)->getLength());
}

void AbstractWriter::init$($Writer* w, $Document* doc, int32_t pos, int32_t len) {
	$useLocalCurrentObjectStackCache();
	this->indentLevel = 0;
	this->indentSpace = 2;
	$set(this, doc, nullptr);
	this->maxLineLength = 100;
	this->currLength = 0;
	this->startOffset = 0;
	this->endOffset = 0;
	this->offsetIndent = 0;
	$set(this, doc, doc);
	$set(this, it, $new($ElementIterator, $($nc(doc)->getDefaultRootElement())));
	$set(this, out, w);
	this->startOffset = pos;
	this->endOffset = pos + len;
	$init($DefaultEditorKit);
	$var($Object, docNewline, $nc(doc)->getProperty($DefaultEditorKit::EndOfLineStringProperty));
	if ($instanceOf($String, docNewline)) {
		setLineSeparator($cast($String, docNewline));
	} else {
		$var($String, newline, $System::lineSeparator());
		if (newline == nullptr) {
			$assign(newline, "\n"_s);
		}
		setLineSeparator(newline);
	}
	this->canWrapLines = true;
}

void AbstractWriter::init$($Writer* w, $Element* root) {
	AbstractWriter::init$(w, root, 0, $nc(root)->getEndOffset());
}

void AbstractWriter::init$($Writer* w, $Element* root, int32_t pos, int32_t len) {
	this->indentLevel = 0;
	this->indentSpace = 2;
	$set(this, doc, nullptr);
	this->maxLineLength = 100;
	this->currLength = 0;
	this->startOffset = 0;
	this->endOffset = 0;
	this->offsetIndent = 0;
	$set(this, doc, $nc(root)->getDocument());
	$set(this, it, $new($ElementIterator, root));
	$set(this, out, w);
	this->startOffset = pos;
	this->endOffset = pos + len;
	this->canWrapLines = true;
}

int32_t AbstractWriter::getStartOffset() {
	return this->startOffset;
}

int32_t AbstractWriter::getEndOffset() {
	return this->endOffset;
}

$ElementIterator* AbstractWriter::getElementIterator() {
	return this->it;
}

$Writer* AbstractWriter::getWriter() {
	return this->out;
}

$Document* AbstractWriter::getDocument() {
	return this->doc;
}

bool AbstractWriter::inRange($Element* next) {
	int32_t startOffset = getStartOffset();
	int32_t endOffset = getEndOffset();
	bool var$1 = $nc(next)->getStartOffset() >= startOffset;
	bool var$0 = (var$1 && next->getStartOffset() < endOffset);
	if (!var$0) {
		bool var$2 = startOffset >= $nc(next)->getStartOffset();
		var$0 = (var$2 && startOffset < next->getEndOffset());
	}
	if (var$0) {
		return true;
	}
	return false;
}

$String* AbstractWriter::getText($Element* elem) {
	int32_t var$0 = $nc(elem)->getStartOffset();
	int32_t var$1 = elem->getEndOffset();
	return $nc(this->doc)->getText(var$0, var$1 - elem->getStartOffset());
}

void AbstractWriter::text($Element* elem) {
	int32_t var$0 = getStartOffset();
	int32_t start = $Math::max(var$0, $nc(elem)->getStartOffset());
	int32_t var$1 = getEndOffset();
	int32_t end = $Math::min(var$1, $nc(elem)->getEndOffset());
	if (start < end) {
		if (this->segment == nullptr) {
			$set(this, segment, $new($Segment));
		}
		$nc($(getDocument()))->getText(start, end - start, this->segment);
		if ($nc(this->segment)->count > 0) {
			write($nc(this->segment)->array, $nc(this->segment)->offset, $nc(this->segment)->count);
		}
	}
}

void AbstractWriter::setLineLength(int32_t l) {
	this->maxLineLength = l;
}

int32_t AbstractWriter::getLineLength() {
	return this->maxLineLength;
}

void AbstractWriter::setCurrentLineLength(int32_t length) {
	this->currLength = length;
	this->isLineEmpty$ = (this->currLength == 0);
}

int32_t AbstractWriter::getCurrentLineLength() {
	return this->currLength;
}

bool AbstractWriter::isLineEmpty() {
	return this->isLineEmpty$;
}

void AbstractWriter::setCanWrapLines(bool newValue) {
	this->canWrapLines = newValue;
}

bool AbstractWriter::getCanWrapLines() {
	return this->canWrapLines;
}

void AbstractWriter::setIndentSpace(int32_t space) {
	this->indentSpace = space;
}

int32_t AbstractWriter::getIndentSpace() {
	return this->indentSpace;
}

void AbstractWriter::setLineSeparator($String* value) {
	$set(this, lineSeparator, value);
}

$String* AbstractWriter::getLineSeparator() {
	return this->lineSeparator;
}

void AbstractWriter::incrIndent() {
	if (this->offsetIndent > 0) {
		++this->offsetIndent;
	} else {
		int32_t var$1 = ++this->indentLevel * getIndentSpace();
		if (var$1 >= getLineLength()) {
			++this->offsetIndent;
			--this->indentLevel;
		}
	}
}

void AbstractWriter::decrIndent() {
	if (this->offsetIndent > 0) {
		--this->offsetIndent;
	} else {
		--this->indentLevel;
	}
}

int32_t AbstractWriter::getIndentLevel() {
	return this->indentLevel;
}

void AbstractWriter::indent() {
	int32_t var$0 = getIndentLevel();
	int32_t max = var$0 * getIndentSpace();
	if (this->indentChars == nullptr || max > $nc(this->indentChars)->length) {
		$set(this, indentChars, $new($chars, max));
		for (int32_t counter = 0; counter < max; ++counter) {
			$nc(this->indentChars)->set(counter, u' ');
		}
	}
	int32_t length = getCurrentLineLength();
	bool wasEmpty = isLineEmpty();
	output(this->indentChars, 0, max);
	if (wasEmpty && length == 0) {
		this->isLineEmpty$ = true;
	}
}

void AbstractWriter::write(char16_t ch) {
	if (this->tempChars == nullptr) {
		$set(this, tempChars, $new($chars, 128));
	}
	$nc(this->tempChars)->set(0, ch);
	write(this->tempChars, 0, 1);
}

void AbstractWriter::write($String* content) {
	if (content == nullptr) {
		return;
	}
	int32_t size = $nc(content)->length();
	if (this->tempChars == nullptr || $nc(this->tempChars)->length < size) {
		$set(this, tempChars, $new($chars, size));
	}
	content->getChars(0, size, this->tempChars, 0);
	write(this->tempChars, 0, size);
}

void AbstractWriter::writeLineSeparator() {
	$var($String, newline, getLineSeparator());
	int32_t length = $nc(newline)->length();
	if (this->newlineChars == nullptr || $nc(this->newlineChars)->length < length) {
		$set(this, newlineChars, $new($chars, length));
	}
	newline->getChars(0, length, this->newlineChars, 0);
	output(this->newlineChars, 0, length);
	setCurrentLineLength(0);
}

void AbstractWriter::write($chars* chars, int32_t startIndex, int32_t length) {
	if (!getCanWrapLines()) {
		int32_t lastIndex = startIndex;
		int32_t endIndex = startIndex + length;
		int32_t newlineIndex = indexOf(chars, AbstractWriter::NEWLINE, startIndex, endIndex);
		while (newlineIndex != -1) {
			if (newlineIndex > lastIndex) {
				output(chars, lastIndex, newlineIndex - lastIndex);
			}
			writeLineSeparator();
			lastIndex = newlineIndex + 1;
			newlineIndex = indexOf(chars, u'\n', lastIndex, endIndex);
		}
		if (lastIndex < endIndex) {
			output(chars, lastIndex, endIndex - lastIndex);
		}
	} else {
		int32_t lastIndex = startIndex;
		int32_t endIndex = startIndex + length;
		int32_t lineLength = getCurrentLineLength();
		int32_t maxLength = getLineLength();
		while (lastIndex < endIndex) {
			int32_t newlineIndex = indexOf(chars, AbstractWriter::NEWLINE, lastIndex, endIndex);
			bool needsNewline = false;
			bool forceNewLine = false;
			lineLength = getCurrentLineLength();
			if (newlineIndex != -1 && (lineLength + (newlineIndex - lastIndex)) < maxLength) {
				if (newlineIndex > lastIndex) {
					output(chars, lastIndex, newlineIndex - lastIndex);
				}
				lastIndex = newlineIndex + 1;
				forceNewLine = true;
			} else if (newlineIndex == -1 && (lineLength + (endIndex - lastIndex)) < maxLength) {
				if (endIndex > lastIndex) {
					output(chars, lastIndex, endIndex - lastIndex);
				}
				lastIndex = endIndex;
			} else {
				int32_t breakPoint = -1;
				int32_t maxBreak = $Math::min(endIndex - lastIndex, maxLength - lineLength - 1);
				int32_t counter = 0;
				while (counter < maxBreak) {
					if ($Character::isWhitespace($nc(chars)->get(counter + lastIndex))) {
						breakPoint = counter;
					}
					++counter;
				}
				if (breakPoint != -1) {
					breakPoint += lastIndex + 1;
					output(chars, lastIndex, breakPoint - lastIndex);
					lastIndex = breakPoint;
					needsNewline = true;
				} else {
					counter = $Math::max(0, maxBreak);
					maxBreak = endIndex - lastIndex;
					while (counter < maxBreak) {
						if ($Character::isWhitespace($nc(chars)->get(counter + lastIndex))) {
							breakPoint = counter;
							break;
						}
						++counter;
					}
					if (breakPoint == -1) {
						output(chars, lastIndex, endIndex - lastIndex);
						breakPoint = endIndex;
					} else {
						breakPoint += lastIndex;
						if ($nc(chars)->get(breakPoint) == AbstractWriter::NEWLINE) {
							output(chars, lastIndex, breakPoint++ - lastIndex);
							forceNewLine = true;
						} else {
							output(chars, lastIndex, ++breakPoint - lastIndex);
							needsNewline = true;
						}
					}
					lastIndex = breakPoint;
				}
			}
			if (forceNewLine || needsNewline || lastIndex < endIndex) {
				writeLineSeparator();
				if (lastIndex < endIndex || !forceNewLine) {
					indent();
				}
			}
		}
	}
}

void AbstractWriter::writeAttributes($AttributeSet* attr) {
	$useLocalCurrentObjectStackCache();
	$var($Enumeration, names, $nc(attr)->getAttributeNames());
	while ($nc(names)->hasMoreElements()) {
		$var($Object, name, names->nextElement());
		$var($String, var$0, $$str({" "_s, name, "="_s}));
		write($$concat(var$0, $(attr->getAttribute(name))));
	}
}

void AbstractWriter::output($chars* content, int32_t start, int32_t length) {
	$nc($(getWriter()))->write(content, start, length);
	setCurrentLineLength(getCurrentLineLength() + length);
}

int32_t AbstractWriter::indexOf($chars* chars, char16_t sChar, int32_t startIndex, int32_t endIndex) {
	while (startIndex < endIndex) {
		if ($nc(chars)->get(startIndex) == sChar) {
			return startIndex;
		}
		++startIndex;
	}
	return -1;
}

AbstractWriter::AbstractWriter() {
}

$Class* AbstractWriter::load$($String* name, bool initialize) {
	$loadClass(AbstractWriter, name, initialize, &_AbstractWriter_ClassInfo_, allocate$AbstractWriter);
	return class$;
}

$Class* AbstractWriter::class$ = nullptr;

		} // text
	} // swing
} // javax