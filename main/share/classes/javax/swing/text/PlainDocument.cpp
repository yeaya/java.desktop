#include <javax/swing/text/PlainDocument.h>

#include <java/lang/Error.h>
#include <java/util/Vector.h>
#include <javax/swing/text/AbstractDocument$AbstractElement.h>
#include <javax/swing/text/AbstractDocument$BranchElement.h>
#include <javax/swing/text/AbstractDocument$Content.h>
#include <javax/swing/text/AbstractDocument$DefaultDocumentEvent.h>
#include <javax/swing/text/AbstractDocument$ElementEdit.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/GapContent.h>
#include <javax/swing/text/Segment.h>
#include <javax/swing/text/Utilities.h>
#include <javax/swing/undo/AbstractUndoableEdit.h>
#include <javax/swing/undo/UndoableEdit.h>
#include <jcpp.h>

#undef TRUE

using $AbstractDocument$BranchElementArray = $Array<::javax::swing::text::AbstractDocument$BranchElement>;
using $ElementArray = $Array<::javax::swing::text::Element>;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $AbstractDocument$AbstractElement = ::javax::swing::text::AbstractDocument$AbstractElement;
using $AbstractDocument$BranchElement = ::javax::swing::text::AbstractDocument$BranchElement;
using $AbstractDocument$Content = ::javax::swing::text::AbstractDocument$Content;
using $AbstractDocument$DefaultDocumentEvent = ::javax::swing::text::AbstractDocument$DefaultDocumentEvent;
using $AbstractDocument$ElementEdit = ::javax::swing::text::AbstractDocument$ElementEdit;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Element = ::javax::swing::text::Element;
using $GapContent = ::javax::swing::text::GapContent;
using $Segment = ::javax::swing::text::Segment;
using $Utilities = ::javax::swing::text::Utilities;
using $AbstractUndoableEdit = ::javax::swing::undo::AbstractUndoableEdit;
using $UndoableEdit = ::javax::swing::undo::UndoableEdit;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _PlainDocument_FieldInfo_[] = {
	{"tabSizeAttribute", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PlainDocument, tabSizeAttribute)},
	{"lineLimitAttribute", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PlainDocument, lineLimitAttribute)},
	{"defaultRoot", "Ljavax/swing/text/AbstractDocument$AbstractElement;", nullptr, $PRIVATE, $field(PlainDocument, defaultRoot)},
	{"added", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/swing/text/Element;>;", $PRIVATE, $field(PlainDocument, added)},
	{"removed", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/swing/text/Element;>;", $PRIVATE, $field(PlainDocument, removed)},
	{"s", "Ljavax/swing/text/Segment;", nullptr, $PRIVATE | $TRANSIENT, $field(PlainDocument, s)},
	{}
};

$MethodInfo _PlainDocument_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PlainDocument::*)()>(&PlainDocument::init$))},
	{"<init>", "(Ljavax/swing/text/AbstractDocument$Content;)V", nullptr, $PUBLIC, $method(static_cast<void(PlainDocument::*)($AbstractDocument$Content*)>(&PlainDocument::init$))},
	{"createDefaultRoot", "()Ljavax/swing/text/AbstractDocument$AbstractElement;", nullptr, $PROTECTED},
	{"getDefaultRootElement", "()Ljavax/swing/text/Element;", nullptr, $PUBLIC},
	{"getParagraphElement", "(I)Ljavax/swing/text/Element;", nullptr, $PUBLIC},
	{"insertComposedTextUpdate", "(Ljavax/swing/text/AbstractDocument$DefaultDocumentEvent;Ljavax/swing/text/AttributeSet;)V", nullptr, $PRIVATE, $method(static_cast<void(PlainDocument::*)($AbstractDocument$DefaultDocumentEvent*,$AttributeSet*)>(&PlainDocument::insertComposedTextUpdate))},
	{"insertString", "(ILjava/lang/String;Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"insertUpdate", "(Ljavax/swing/text/AbstractDocument$DefaultDocumentEvent;Ljavax/swing/text/AttributeSet;)V", nullptr, $PROTECTED},
	{"removeUpdate", "(Ljavax/swing/text/AbstractDocument$DefaultDocumentEvent;)V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _PlainDocument_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.PlainDocument",
	"javax.swing.text.AbstractDocument",
	nullptr,
	_PlainDocument_FieldInfo_,
	_PlainDocument_MethodInfo_
};

$Object* allocate$PlainDocument($Class* clazz) {
	return $of($alloc(PlainDocument));
}

$String* PlainDocument::tabSizeAttribute = nullptr;
$String* PlainDocument::lineLimitAttribute = nullptr;

void PlainDocument::init$() {
	PlainDocument::init$($$new($GapContent));
}

void PlainDocument::init$($AbstractDocument$Content* c) {
	$AbstractDocument::init$(c);
	$set(this, added, $new($Vector));
	$set(this, removed, $new($Vector));
	putProperty(PlainDocument::tabSizeAttribute, $($Integer::valueOf(8)));
	$set(this, defaultRoot, createDefaultRoot());
}

void PlainDocument::insertString(int32_t offs, $String* str$renamed, $AttributeSet* a) {
	$useLocalCurrentObjectStackCache();
	$var($String, str, str$renamed);
	$var($Object, filterNewlines, getProperty("filterNewlines"_s));
	$init($Boolean);
	if (($instanceOf($Boolean, filterNewlines)) && $nc($of(filterNewlines))->equals($Boolean::TRUE)) {
		if ((str != nullptr) && (str->indexOf((int32_t)u'\n') >= 0)) {
			$var($StringBuilder, filtered, $new($StringBuilder, str));
			int32_t n = filtered->length();
			for (int32_t i = 0; i < n; ++i) {
				if (filtered->charAt(i) == u'\n') {
					filtered->setCharAt(i, u' ');
				}
			}
			$assign(str, filtered->toString());
		}
	}
	$AbstractDocument::insertString(offs, str, a);
}

$Element* PlainDocument::getDefaultRootElement() {
	return this->defaultRoot;
}

$AbstractDocument$AbstractElement* PlainDocument::createDefaultRoot() {
	$useLocalCurrentObjectStackCache();
	$var($AbstractDocument$BranchElement, map, $cast($AbstractDocument$BranchElement, createBranchElement(nullptr, nullptr)));
	$var($Element, line, createLeafElement(map, nullptr, 0, 1));
	$var($ElementArray, lines, $new($ElementArray, 1));
	lines->set(0, line);
	$nc(map)->replace(0, 0, lines);
	return map;
}

$Element* PlainDocument::getParagraphElement(int32_t pos) {
	$var($Element, lineMap, getDefaultRootElement());
	return $nc(lineMap)->getElement(lineMap->getElementIndex(pos));
}

void PlainDocument::insertUpdate($AbstractDocument$DefaultDocumentEvent* chng, $AttributeSet* attr) {
	$useLocalCurrentObjectStackCache();
	$nc(this->removed)->removeAllElements();
	$nc(this->added)->removeAllElements();
	$var($AbstractDocument$BranchElement, lineMap, $cast($AbstractDocument$BranchElement, getDefaultRootElement()));
	int32_t offset = $nc(chng)->getOffset();
	int32_t length = chng->getLength();
	if (offset > 0) {
		offset -= 1;
		length += 1;
	}
	int32_t index = $nc(lineMap)->getElementIndex(offset);
	$var($Element, rmCandidate, lineMap->getElement(index));
	int32_t rmOffs0 = $nc(rmCandidate)->getStartOffset();
	int32_t rmOffs1 = rmCandidate->getEndOffset();
	int32_t lastOffset = rmOffs0;
	try {
		if (this->s == nullptr) {
			$set(this, s, $new($Segment));
		}
		$nc($(getContent()))->getChars(offset, length, this->s);
		bool hasBreaks = false;
		for (int32_t i = 0; i < length; ++i) {
			char16_t c = $nc($nc(this->s)->array)->get($nc(this->s)->offset + i);
			if (c == u'\n') {
				int32_t breakOffset = offset + i + 1;
				$nc(this->added)->addElement($(createLeafElement(lineMap, nullptr, lastOffset, breakOffset)));
				lastOffset = breakOffset;
				hasBreaks = true;
			}
		}
		if (hasBreaks) {
			$nc(this->removed)->addElement(rmCandidate);
			if ((offset + length == rmOffs1) && (lastOffset != rmOffs1) && ((index + 1) < lineMap->getElementCount())) {
				$var($Element, e, lineMap->getElement(index + 1));
				$nc(this->removed)->addElement(e);
				rmOffs1 = $nc(e)->getEndOffset();
			}
			if (lastOffset < rmOffs1) {
				$nc(this->added)->addElement($(createLeafElement(lineMap, nullptr, lastOffset, rmOffs1)));
			}
			$var($ElementArray, aelems, $new($ElementArray, $nc(this->added)->size()));
			$nc(this->added)->copyInto(aelems);
			$var($ElementArray, relems, $new($ElementArray, $nc(this->removed)->size()));
			$nc(this->removed)->copyInto(relems);
			$var($AbstractDocument$ElementEdit, ee, $new($AbstractDocument$ElementEdit, lineMap, index, relems, aelems));
			chng->addEdit(ee);
			lineMap->replace(index, relems->length, aelems);
		}
		if ($Utilities::isComposedTextAttributeDefined(attr)) {
			insertComposedTextUpdate(chng, attr);
		}
	} catch ($BadLocationException& e) {
		$throwNew($Error, $$str({"Internal error: "_s, $(e->toString())}));
	}
	$AbstractDocument::insertUpdate(chng, attr);
}

void PlainDocument::removeUpdate($AbstractDocument$DefaultDocumentEvent* chng) {
	$useLocalCurrentObjectStackCache();
	$nc(this->removed)->removeAllElements();
	$var($AbstractDocument$BranchElement, map, $cast($AbstractDocument$BranchElement, getDefaultRootElement()));
	int32_t offset = $nc(chng)->getOffset();
	int32_t length = chng->getLength();
	int32_t line0 = $nc(map)->getElementIndex(offset);
	int32_t line1 = map->getElementIndex(offset + length);
	if (line0 != line1) {
		for (int32_t i = line0; i <= line1; ++i) {
			$nc(this->removed)->addElement($(map->getElement(i)));
		}
		int32_t p0 = $nc($(map->getElement(line0)))->getStartOffset();
		int32_t p1 = $nc($(map->getElement(line1)))->getEndOffset();
		$var($ElementArray, aelems, $new($ElementArray, 1));
		aelems->set(0, $(createLeafElement(map, nullptr, p0, p1)));
		$var($ElementArray, relems, $new($ElementArray, $nc(this->removed)->size()));
		$nc(this->removed)->copyInto(relems);
		$var($AbstractDocument$ElementEdit, ee, $new($AbstractDocument$ElementEdit, map, line0, relems, aelems));
		chng->addEdit(ee);
		map->replace(line0, relems->length, aelems);
	} else {
		$var($Element, line, map->getElement(line0));
		if (!$nc(line)->isLeaf()) {
			$var($Element, leaf, line->getElement(line->getElementIndex(offset)));
			if ($Utilities::isComposedTextElement(leaf)) {
				$var($ElementArray, aelem, $new($ElementArray, 1));
				$var($Element, var$0, static_cast<$Element*>(map));
				int32_t var$1 = line->getStartOffset();
				aelem->set(0, $(createLeafElement(var$0, nullptr, var$1, line->getEndOffset())));
				$var($ElementArray, relem, $new($ElementArray, 1));
				relem->set(0, line);
				$var($AbstractDocument$ElementEdit, ee, $new($AbstractDocument$ElementEdit, map, line0, relem, aelem));
				chng->addEdit(ee);
				map->replace(line0, 1, aelem);
			}
		}
	}
	$AbstractDocument::removeUpdate(chng);
}

void PlainDocument::insertComposedTextUpdate($AbstractDocument$DefaultDocumentEvent* chng, $AttributeSet* attr) {
	$useLocalCurrentObjectStackCache();
	$nc(this->added)->removeAllElements();
	$var($AbstractDocument$BranchElement, lineMap, $cast($AbstractDocument$BranchElement, getDefaultRootElement()));
	int32_t offset = $nc(chng)->getOffset();
	int32_t length = chng->getLength();
	int32_t index = $nc(lineMap)->getElementIndex(offset);
	$var($Element, elem, lineMap->getElement(index));
	int32_t elemStart = $nc(elem)->getStartOffset();
	int32_t elemEnd = elem->getEndOffset();
	$var($AbstractDocument$BranchElementArray, abelem, $new($AbstractDocument$BranchElementArray, 1));
	abelem->set(0, $cast($AbstractDocument$BranchElement, $(createBranchElement(lineMap, nullptr))));
	$var($ElementArray, relem, $new($ElementArray, 1));
	relem->set(0, elem);
	if (elemStart != offset) {
		$nc(this->added)->addElement($(createLeafElement(abelem->get(0), nullptr, elemStart, offset)));
	}
	$nc(this->added)->addElement($(createLeafElement(abelem->get(0), attr, offset, offset + length)));
	if (elemEnd != offset + length) {
		$nc(this->added)->addElement($(createLeafElement(abelem->get(0), nullptr, offset + length, elemEnd)));
	}
	$var($ElementArray, alelem, $new($ElementArray, $nc(this->added)->size()));
	$nc(this->added)->copyInto(alelem);
	$var($AbstractDocument$ElementEdit, ee, $new($AbstractDocument$ElementEdit, lineMap, index, relem, $fcast($ElementArray, abelem)));
	chng->addEdit(ee);
	$nc(abelem->get(0))->replace(0, 0, alelem);
	lineMap->replace(index, 1, $fcast($ElementArray, abelem));
}

PlainDocument::PlainDocument() {
}

void clinit$PlainDocument($Class* class$) {
	$assignStatic(PlainDocument::tabSizeAttribute, "tabSize"_s);
	$assignStatic(PlainDocument::lineLimitAttribute, "lineLimit"_s);
}

$Class* PlainDocument::load$($String* name, bool initialize) {
	$loadClass(PlainDocument, name, initialize, &_PlainDocument_ClassInfo_, clinit$PlainDocument, allocate$PlainDocument);
	return class$;
}

$Class* PlainDocument::class$ = nullptr;

		} // text
	} // swing
} // javax