#include <javax/swing/text/GapContent.h>

#include <java/io/ObjectInputStream.h>
#include <java/lang/Math.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/util/Arrays.h>
#include <java/util/Vector.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/GapContent$InsertUndo.h>
#include <javax/swing/text/GapContent$MarkData.h>
#include <javax/swing/text/GapContent$MarkVector.h>
#include <javax/swing/text/GapContent$RemoveUndo.h>
#include <javax/swing/text/GapContent$StickyPosition.h>
#include <javax/swing/text/GapContent$UndoPosRef.h>
#include <javax/swing/text/GapVector.h>
#include <javax/swing/text/Position.h>
#include <javax/swing/text/Segment.h>
#include <javax/swing/undo/AbstractUndoableEdit.h>
#include <javax/swing/undo/UndoableEdit.h>
#include <jcpp.h>

#undef GROWTH_SIZE

using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $Arrays = ::java::util::Arrays;
using $Vector = ::java::util::Vector;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $GapContent$InsertUndo = ::javax::swing::text::GapContent$InsertUndo;
using $GapContent$MarkData = ::javax::swing::text::GapContent$MarkData;
using $GapContent$MarkVector = ::javax::swing::text::GapContent$MarkVector;
using $GapContent$RemoveUndo = ::javax::swing::text::GapContent$RemoveUndo;
using $GapContent$StickyPosition = ::javax::swing::text::GapContent$StickyPosition;
using $GapContent$UndoPosRef = ::javax::swing::text::GapContent$UndoPosRef;
using $GapVector = ::javax::swing::text::GapVector;
using $Position = ::javax::swing::text::Position;
using $Segment = ::javax::swing::text::Segment;
using $AbstractUndoableEdit = ::javax::swing::undo::AbstractUndoableEdit;
using $UndoableEdit = ::javax::swing::undo::UndoableEdit;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _GapContent_FieldInfo_[] = {
	{"empty", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(GapContent, empty)},
	{"marks", "Ljavax/swing/text/GapContent$MarkVector;", nullptr, $PRIVATE | $TRANSIENT, $field(GapContent, marks)},
	{"search", "Ljavax/swing/text/GapContent$MarkData;", nullptr, $PRIVATE | $TRANSIENT, $field(GapContent, search)},
	{"unusedMarks", "I", nullptr, $PRIVATE | $TRANSIENT, $field(GapContent, unusedMarks)},
	{"queue", "Ljava/lang/ref/ReferenceQueue;", "Ljava/lang/ref/ReferenceQueue<Ljavax/swing/text/GapContent$StickyPosition;>;", $PRIVATE | $TRANSIENT, $field(GapContent, queue)},
	{"GROWTH_SIZE", "I", nullptr, $STATIC | $FINAL, $constField(GapContent, GROWTH_SIZE)},
	{}
};

$MethodInfo _GapContent_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GapContent::*)()>(&GapContent::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(GapContent::*)(int32_t)>(&GapContent::init$))},
	{"allocateArray", "(I)Ljava/lang/Object;", nullptr, $PROTECTED},
	{"compare", "(Ljavax/swing/text/GapContent$MarkData;Ljavax/swing/text/GapContent$MarkData;)I", nullptr, $FINAL, $method(static_cast<int32_t(GapContent::*)($GapContent$MarkData*,$GapContent$MarkData*)>(&GapContent::compare))},
	{"createPosition", "(I)Ljavax/swing/text/Position;", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"findMarkAdjustIndex", "(I)I", nullptr, $FINAL, $method(static_cast<int32_t(GapContent::*)(int32_t)>(&GapContent::findMarkAdjustIndex))},
	{"findSortIndex", "(Ljavax/swing/text/GapContent$MarkData;)I", nullptr, $FINAL, $method(static_cast<int32_t(GapContent::*)($GapContent$MarkData*)>(&GapContent::findSortIndex))},
	{"getArrayLength", "()I", nullptr, $PROTECTED},
	{"getChars", "(IILjavax/swing/text/Segment;)V", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"getNewArraySize", "(I)I", nullptr, 0},
	{"getPositionsInRange", "(Ljava/util/Vector;II)Ljava/util/Vector;", nullptr, $PROTECTED},
	{"getString", "(II)Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"insertString", "(ILjava/lang/String;)Ljavax/swing/undo/UndoableEdit;", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"length", "()I", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(GapContent::*)($ObjectInputStream*)>(&GapContent::readObject)), "java.lang.ClassNotFoundException,java.io.IOException"},
	{"remove", "(II)Ljavax/swing/undo/UndoableEdit;", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"removeUnusedMarks", "()V", nullptr, $FINAL, $method(static_cast<void(GapContent::*)()>(&GapContent::removeUnusedMarks))},
	{"resetMarksAtZero", "()V", nullptr, $PROTECTED},
	{"resize", "(I)V", nullptr, 0},
	{"shiftEnd", "(I)V", nullptr, $PROTECTED},
	{"shiftGap", "(I)V", nullptr, $PROTECTED},
	{"shiftGapEndUp", "(I)V", nullptr, $PROTECTED},
	{"shiftGapStartDown", "(I)V", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateUndoPositions", "(Ljava/util/Vector;II)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _GapContent_InnerClassesInfo_[] = {
	{"javax.swing.text.AbstractDocument$Content", "javax.swing.text.AbstractDocument", "Content", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"javax.swing.text.GapContent$RemoveUndo", "javax.swing.text.GapContent", "RemoveUndo", 0},
	{"javax.swing.text.GapContent$InsertUndo", "javax.swing.text.GapContent", "InsertUndo", 0},
	{"javax.swing.text.GapContent$UndoPosRef", "javax.swing.text.GapContent", "UndoPosRef", $FINAL},
	{"javax.swing.text.GapContent$MarkVector", "javax.swing.text.GapContent", "MarkVector", $STATIC},
	{"javax.swing.text.GapContent$StickyPosition", "javax.swing.text.GapContent", "StickyPosition", $FINAL},
	{"javax.swing.text.GapContent$MarkData", "javax.swing.text.GapContent", "MarkData", $FINAL},
	{}
};

$ClassInfo _GapContent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.GapContent",
	"javax.swing.text.GapVector",
	"javax.swing.text.AbstractDocument$Content",
	_GapContent_FieldInfo_,
	_GapContent_MethodInfo_,
	nullptr,
	nullptr,
	_GapContent_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.text.GapContent$RemoveUndo,javax.swing.text.GapContent$InsertUndo,javax.swing.text.GapContent$UndoPosRef,javax.swing.text.GapContent$MarkVector,javax.swing.text.GapContent$StickyPosition,javax.swing.text.GapContent$MarkData"
};

$Object* allocate$GapContent($Class* clazz) {
	return $of($alloc(GapContent));
}

int32_t GapContent::hashCode() {
	 return this->$GapVector::hashCode();
}

bool GapContent::equals(Object$* arg0) {
	 return this->$GapVector::equals(arg0);
}

$Object* GapContent::clone() {
	 return this->$GapVector::clone();
}

$String* GapContent::toString() {
	 return this->$GapVector::toString();
}

void GapContent::finalize() {
	this->$GapVector::finalize();
}

$chars* GapContent::empty = nullptr;

void GapContent::init$() {
	GapContent::init$(10);
}

void GapContent::init$(int32_t initialLength) {
	$GapVector::init$($Math::max(initialLength, 2));
	this->unusedMarks = 0;
	$var($chars, implied, $new($chars, 1));
	implied->set(0, u'\n');
	replace(0, 0, implied, implied->length);
	$set(this, marks, $new($GapContent$MarkVector));
	$set(this, search, $new($GapContent$MarkData, this, 0));
	$set(this, queue, $new($ReferenceQueue));
}

$Object* GapContent::allocateArray(int32_t len) {
	return $of($new($chars, len));
}

int32_t GapContent::getArrayLength() {
	$var($chars, carray, $cast($chars, getArray()));
	return $nc(carray)->length;
}

void GapContent::resize(int32_t nsize) {
	$var($chars, carray, $cast($chars, getArray()));
	$GapVector::resize(nsize);
	$Arrays::fill(carray, u'\0');
}

int32_t GapContent::length() {
	int32_t var$0 = getArrayLength();
	int32_t var$2 = getGapEnd();
	int32_t var$1 = (var$2 - getGapStart());
	int32_t len = var$0 - var$1;
	return len;
}

$UndoableEdit* GapContent::insertString(int32_t where, $String* str) {
	if (where > length() || where < 0) {
		$throwNew($BadLocationException, "Invalid insert"_s, length());
	}
	$var($chars, chars, $nc(str)->toCharArray());
	replace(where, 0, chars, chars->length);
	return $new($GapContent$InsertUndo, this, where, str->length());
}

$UndoableEdit* GapContent::remove(int32_t where, int32_t nitems) {
	$useLocalCurrentObjectStackCache();
	if (where + nitems >= length()) {
		$throwNew($BadLocationException, "Invalid remove"_s, length() + 1);
	}
	$var($String, removedString, getString(where, nitems));
	$var($UndoableEdit, edit, $new($GapContent$RemoveUndo, this, where, removedString));
	replace(where, nitems, GapContent::empty, 0);
	return edit;
}

$String* GapContent::getString(int32_t where, int32_t len) {
	$var($Segment, s, $new($Segment));
	getChars(where, len, s);
	return $new($String, s->array, s->offset, s->count);
}

void GapContent::getChars(int32_t where, int32_t len, $Segment* chars) {
	int32_t end = where + len;
	if (where < 0 || end < 0) {
		$throwNew($BadLocationException, "Invalid location"_s, -1);
	}
	bool var$0 = end > length();
	if (var$0 || where > length()) {
		$throwNew($BadLocationException, "Invalid location"_s, length() + 1);
	}
	int32_t g0 = getGapStart();
	int32_t g1 = getGapEnd();
	$var($chars, array, $cast($chars, getArray()));
	if ((where + len) <= g0) {
		$set($nc(chars), array, array);
		chars->copy = false;
		chars->offset = where;
	} else if (where >= g0) {
		$set($nc(chars), array, array);
		chars->copy = false;
		chars->offset = g1 + where - g0;
	} else {
		int32_t before = g0 - where;
		if ($nc(chars)->isPartialReturn()) {
			$set(chars, array, array);
			chars->copy = false;
			chars->offset = where;
			chars->count = before;
			return;
		}
		$set($nc(chars), array, $new($chars, len));
		chars->copy = true;
		chars->offset = 0;
		$System::arraycopy(array, where, chars->array, 0, before);
		$System::arraycopy(array, g1, chars->array, before, len - before);
	}
	$nc(chars)->count = len;
}

$Position* GapContent::createPosition(int32_t offset) {
	$useLocalCurrentObjectStackCache();
	while ($nc(this->queue)->poll() != nullptr) {
		++this->unusedMarks;
	}
	if (this->unusedMarks > $Math::max(5, ($nc(this->marks)->size() / 10))) {
		removeUnusedMarks();
	}
	int32_t g0 = getGapStart();
	int32_t g1 = getGapEnd();
	int32_t index = (offset < g0) ? offset : offset + (g1 - g0);
	$nc(this->search)->index = index;
	int32_t sortIndex = findSortIndex(this->search);
	$var($GapContent$MarkData, m, nullptr);
	$var($GapContent$StickyPosition, position, nullptr);
	bool var$1 = sortIndex < $nc(this->marks)->size();
	bool var$0 = var$1 && $nc(($assign(m, $nc(this->marks)->elementAt(sortIndex))))->index == index;
	if (var$0 && ($assign(position, $nc(m)->getPosition())) != nullptr) {
	} else {
		$assign(position, $new($GapContent$StickyPosition, this));
		$assign(m, $new($GapContent$MarkData, this, index, position, this->queue));
		position->setMark(m);
		$nc(this->marks)->insertElementAt(m, sortIndex);
	}
	return position;
}

void GapContent::shiftEnd(int32_t newSize) {
	$useLocalCurrentObjectStackCache();
	int32_t oldGapEnd = getGapEnd();
	$GapVector::shiftEnd(newSize);
	int32_t dg = getGapEnd() - oldGapEnd;
	int32_t adjustIndex = findMarkAdjustIndex(oldGapEnd);
	int32_t n = $nc(this->marks)->size();
	for (int32_t i = adjustIndex; i < n; ++i) {
		$var($GapContent$MarkData, mark, $nc(this->marks)->elementAt(i));
		$nc(mark)->index += dg;
	}
}

int32_t GapContent::getNewArraySize(int32_t reqSize) {
	if (reqSize < GapContent::GROWTH_SIZE) {
		return $GapVector::getNewArraySize(reqSize);
	} else {
		return reqSize + GapContent::GROWTH_SIZE;
	}
}

void GapContent::shiftGap(int32_t newGapStart) {
	$useLocalCurrentObjectStackCache();
	int32_t oldGapStart = getGapStart();
	int32_t dg = newGapStart - oldGapStart;
	int32_t oldGapEnd = getGapEnd();
	int32_t newGapEnd = oldGapEnd + dg;
	int32_t gapSize = oldGapEnd - oldGapStart;
	$GapVector::shiftGap(newGapStart);
	if (dg > 0) {
		int32_t adjustIndex = findMarkAdjustIndex(oldGapStart);
		int32_t n = $nc(this->marks)->size();
		for (int32_t i = adjustIndex; i < n; ++i) {
			$var($GapContent$MarkData, mark, $nc(this->marks)->elementAt(i));
			if ($nc(mark)->index >= newGapEnd) {
				break;
			}
			$nc(mark)->index -= gapSize;
		}
	} else if (dg < 0) {
		int32_t adjustIndex = findMarkAdjustIndex(newGapStart);
		int32_t n = $nc(this->marks)->size();
		for (int32_t i = adjustIndex; i < n; ++i) {
			$var($GapContent$MarkData, mark, $nc(this->marks)->elementAt(i));
			if ($nc(mark)->index >= oldGapEnd) {
				break;
			}
			$nc(mark)->index += gapSize;
		}
	}
	resetMarksAtZero();
}

void GapContent::resetMarksAtZero() {
	$useLocalCurrentObjectStackCache();
	if (this->marks != nullptr && getGapStart() == 0) {
		int32_t g1 = getGapEnd();
		{
			int32_t counter = 0;
			int32_t maxCounter = $nc(this->marks)->size();
			for (; counter < maxCounter; ++counter) {
				$var($GapContent$MarkData, mark, $nc(this->marks)->elementAt(counter));
				if ($nc(mark)->index <= g1) {
					mark->index = 0;
				} else {
					break;
				}
			}
		}
	}
}

void GapContent::shiftGapStartDown(int32_t newGapStart) {
	$useLocalCurrentObjectStackCache();
	int32_t adjustIndex = findMarkAdjustIndex(newGapStart);
	int32_t n = $nc(this->marks)->size();
	int32_t g0 = getGapStart();
	int32_t g1 = getGapEnd();
	for (int32_t i = adjustIndex; i < n; ++i) {
		$var($GapContent$MarkData, mark, $nc(this->marks)->elementAt(i));
		if ($nc(mark)->index > g0) {
			break;
		}
		$nc(mark)->index = g1;
	}
	$GapVector::shiftGapStartDown(newGapStart);
	resetMarksAtZero();
}

void GapContent::shiftGapEndUp(int32_t newGapEnd) {
	$useLocalCurrentObjectStackCache();
	int32_t adjustIndex = findMarkAdjustIndex(getGapEnd());
	int32_t n = $nc(this->marks)->size();
	for (int32_t i = adjustIndex; i < n; ++i) {
		$var($GapContent$MarkData, mark, $nc(this->marks)->elementAt(i));
		if ($nc(mark)->index >= newGapEnd) {
			break;
		}
		$nc(mark)->index = newGapEnd;
	}
	$GapVector::shiftGapEndUp(newGapEnd);
	resetMarksAtZero();
}

int32_t GapContent::compare($GapContent$MarkData* o1, $GapContent$MarkData* o2) {
	if ($nc(o1)->index < $nc(o2)->index) {
		return -1;
	} else if (o1->index > o2->index) {
		return 1;
	} else {
		return 0;
	}
}

int32_t GapContent::findMarkAdjustIndex(int32_t searchIndex) {
	$useLocalCurrentObjectStackCache();
	$nc(this->search)->index = $Math::max(searchIndex, 1);
	int32_t index = findSortIndex(this->search);
	for (int32_t i = index - 1; i >= 0; --i) {
		$var($GapContent$MarkData, d, $nc(this->marks)->elementAt(i));
		if ($nc(d)->index != $nc(this->search)->index) {
			break;
		}
		index -= 1;
	}
	return index;
}

int32_t GapContent::findSortIndex($GapContent$MarkData* o) {
	$useLocalCurrentObjectStackCache();
	int32_t lower = 0;
	int32_t upper = $nc(this->marks)->size() - 1;
	int32_t mid = 0;
	if (upper == -1) {
		return 0;
	}
	int32_t cmp = 0;
	$var($GapContent$MarkData, last, $nc(this->marks)->elementAt(upper));
	cmp = compare(o, last);
	if (cmp > 0) {
		return upper + 1;
	}
	while (lower <= upper) {
		mid = lower + ((upper - lower) / 2);
		$var($GapContent$MarkData, entry, $nc(this->marks)->elementAt(mid));
		cmp = compare(o, entry);
		if (cmp == 0) {
			return mid;
		} else if (cmp < 0) {
			upper = mid - 1;
		} else {
			lower = mid + 1;
		}
	}
	return (cmp < 0) ? mid : mid + 1;
}

void GapContent::removeUnusedMarks() {
	$useLocalCurrentObjectStackCache();
	int32_t n = $nc(this->marks)->size();
	$var($GapContent$MarkVector, cleaned, $new($GapContent$MarkVector, n));
	for (int32_t i = 0; i < n; ++i) {
		$var($GapContent$MarkData, mark, $nc(this->marks)->elementAt(i));
		if ($nc(mark)->get() != nullptr) {
			cleaned->addElement(mark);
		}
	}
	$set(this, marks, cleaned);
	this->unusedMarks = 0;
}

void GapContent::readObject($ObjectInputStream* s) {
	$nc(s)->defaultReadObject();
	$set(this, marks, $new($GapContent$MarkVector));
	$set(this, search, $new($GapContent$MarkData, this, 0));
	$set(this, queue, $new($ReferenceQueue));
}

$Vector* GapContent::getPositionsInRange($Vector* v, int32_t offset, int32_t length) {
	$useLocalCurrentObjectStackCache();
	int32_t endOffset = offset + length;
	int32_t startIndex = 0;
	int32_t endIndex = 0;
	int32_t g0 = getGapStart();
	int32_t g1 = getGapEnd();
	if (offset < g0) {
		if (offset == 0) {
			startIndex = 0;
		} else {
			startIndex = findMarkAdjustIndex(offset);
		}
		if (endOffset >= g0) {
			endIndex = findMarkAdjustIndex(endOffset + (g1 - g0) + 1);
		} else {
			endIndex = findMarkAdjustIndex(endOffset + 1);
		}
	} else {
		startIndex = findMarkAdjustIndex(offset + (g1 - g0));
		endIndex = findMarkAdjustIndex(endOffset + (g1 - g0) + 1);
	}
	$var($Vector, placeIn, (v == nullptr) ? $new($Vector, $Math::max(1, endIndex - startIndex)) : v);
	for (int32_t counter = startIndex; counter < endIndex; ++counter) {
		$nc(placeIn)->addElement($$new($GapContent$UndoPosRef, this, $($nc(this->marks)->elementAt(counter))));
	}
	return placeIn;
}

void GapContent::updateUndoPositions($Vector* positions, int32_t offset, int32_t length) {
	$useLocalCurrentObjectStackCache();
	int32_t endOffset = offset + length;
	int32_t g1 = getGapEnd();
	int32_t startIndex = 0;
	int32_t endIndex = findMarkAdjustIndex(g1 + 1);
	if (offset != 0) {
		startIndex = findMarkAdjustIndex(g1);
	} else {
		startIndex = 0;
	}
	for (int32_t counter = $nc(positions)->size() - 1; counter >= 0; --counter) {
		$var($GapContent$UndoPosRef, ref, $cast($GapContent$UndoPosRef, positions->elementAt(counter)));
		$nc(ref)->resetLocation(endOffset, g1);
	}
	if (startIndex < endIndex) {
		$var($ObjectArray, sorted, $new($ObjectArray, endIndex - startIndex));
		int32_t addIndex = 0;
		int32_t counter = 0;
		if (offset == 0) {
			for (counter = startIndex; counter < endIndex; ++counter) {
				$var($GapContent$MarkData, mark, $nc(this->marks)->elementAt(counter));
				if ($nc(mark)->index == 0) {
					sorted->set(addIndex++, mark);
				}
			}
			for (counter = startIndex; counter < endIndex; ++counter) {
				$var($GapContent$MarkData, mark, $nc(this->marks)->elementAt(counter));
				if ($nc(mark)->index != 0) {
					sorted->set(addIndex++, mark);
				}
			}
		} else {
			for (counter = startIndex; counter < endIndex; ++counter) {
				$var($GapContent$MarkData, mark, $nc(this->marks)->elementAt(counter));
				if ($nc(mark)->index != g1) {
					sorted->set(addIndex++, mark);
				}
			}
			for (counter = startIndex; counter < endIndex; ++counter) {
				$var($GapContent$MarkData, mark, $nc(this->marks)->elementAt(counter));
				if ($nc(mark)->index == g1) {
					sorted->set(addIndex++, mark);
				}
			}
		}
		$nc(this->marks)->replaceRange(startIndex, endIndex, sorted);
	}
}

void clinit$GapContent($Class* class$) {
	$assignStatic(GapContent::empty, $new($chars, 0));
}

GapContent::GapContent() {
}

$Class* GapContent::load$($String* name, bool initialize) {
	$loadClass(GapContent, name, initialize, &_GapContent_ClassInfo_, clinit$GapContent, allocate$GapContent);
	return class$;
}

$Class* GapContent::class$ = nullptr;

		} // text
	} // swing
} // javax