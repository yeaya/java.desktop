#include <javax/swing/text/StringContent.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Vector.h>
#include <javax/swing/text/AbstractDocument$Content.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Position.h>
#include <javax/swing/text/Segment.h>
#include <javax/swing/text/StringContent$InsertUndo.h>
#include <javax/swing/text/StringContent$PosRec.h>
#include <javax/swing/text/StringContent$RemoveUndo.h>
#include <javax/swing/text/StringContent$StickyPosition.h>
#include <javax/swing/text/StringContent$UndoPosRef.h>
#include <javax/swing/undo/AbstractUndoableEdit.h>
#include <javax/swing/undo/UndoableEdit.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $AbstractDocument$Content = ::javax::swing::text::AbstractDocument$Content;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Position = ::javax::swing::text::Position;
using $Segment = ::javax::swing::text::Segment;
using $StringContent$InsertUndo = ::javax::swing::text::StringContent$InsertUndo;
using $StringContent$PosRec = ::javax::swing::text::StringContent$PosRec;
using $StringContent$RemoveUndo = ::javax::swing::text::StringContent$RemoveUndo;
using $StringContent$StickyPosition = ::javax::swing::text::StringContent$StickyPosition;
using $StringContent$UndoPosRef = ::javax::swing::text::StringContent$UndoPosRef;
using $AbstractUndoableEdit = ::javax::swing::undo::AbstractUndoableEdit;
using $UndoableEdit = ::javax::swing::undo::UndoableEdit;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _StringContent_FieldInfo_[] = {
	{"empty", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StringContent, empty)},
	{"data", "[C", nullptr, $PRIVATE, $field(StringContent, data)},
	{"count", "I", nullptr, $PRIVATE, $field(StringContent, count)},
	{"marks", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/swing/text/StringContent$PosRec;>;", $TRANSIENT, $field(StringContent, marks)},
	{}
};

$MethodInfo _StringContent_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StringContent::*)()>(&StringContent::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(StringContent::*)(int32_t)>(&StringContent::init$))},
	{"createPosition", "(I)Ljavax/swing/text/Position;", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"getChars", "(IILjavax/swing/text/Segment;)V", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"getPositionsInRange", "(Ljava/util/Vector;II)Ljava/util/Vector;", nullptr, $PROTECTED, $method(static_cast<$Vector*(StringContent::*)($Vector*,int32_t,int32_t)>(&StringContent::getPositionsInRange))},
	{"getString", "(II)Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"insertString", "(ILjava/lang/String;)Ljavax/swing/undo/UndoableEdit;", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"length", "()I", nullptr, $PUBLIC},
	{"remove", "(II)Ljavax/swing/undo/UndoableEdit;", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"replace", "(II[CII)V", nullptr, 0, $method(static_cast<void(StringContent::*)(int32_t,int32_t,$chars*,int32_t,int32_t)>(&StringContent::replace))},
	{"resize", "(I)V", nullptr, 0, $method(static_cast<void(StringContent::*)(int32_t)>(&StringContent::resize))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateMarksForInsert", "(II)V", nullptr, $SYNCHRONIZED, $method(static_cast<void(StringContent::*)(int32_t,int32_t)>(&StringContent::updateMarksForInsert))},
	{"updateMarksForRemove", "(II)V", nullptr, $SYNCHRONIZED, $method(static_cast<void(StringContent::*)(int32_t,int32_t)>(&StringContent::updateMarksForRemove))},
	{"updateUndoPositions", "(Ljava/util/Vector;)V", nullptr, $PROTECTED, $method(static_cast<void(StringContent::*)($Vector*)>(&StringContent::updateUndoPositions))},
	{}
};

$InnerClassInfo _StringContent_InnerClassesInfo_[] = {
	{"javax.swing.text.AbstractDocument$Content", "javax.swing.text.AbstractDocument", "Content", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"javax.swing.text.StringContent$RemoveUndo", "javax.swing.text.StringContent", "RemoveUndo", 0},
	{"javax.swing.text.StringContent$InsertUndo", "javax.swing.text.StringContent", "InsertUndo", 0},
	{"javax.swing.text.StringContent$UndoPosRef", "javax.swing.text.StringContent", "UndoPosRef", $FINAL},
	{"javax.swing.text.StringContent$StickyPosition", "javax.swing.text.StringContent", "StickyPosition", $FINAL},
	{"javax.swing.text.StringContent$PosRec", "javax.swing.text.StringContent", "PosRec", $FINAL},
	{}
};

$ClassInfo _StringContent_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.swing.text.StringContent",
	"java.lang.Object",
	"javax.swing.text.AbstractDocument$Content,java.io.Serializable",
	_StringContent_FieldInfo_,
	_StringContent_MethodInfo_,
	nullptr,
	nullptr,
	_StringContent_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.text.StringContent$RemoveUndo,javax.swing.text.StringContent$InsertUndo,javax.swing.text.StringContent$UndoPosRef,javax.swing.text.StringContent$StickyPosition,javax.swing.text.StringContent$PosRec"
};

$Object* allocate$StringContent($Class* clazz) {
	return $of($alloc(StringContent));
}

int32_t StringContent::hashCode() {
	 return this->$AbstractDocument$Content::hashCode();
}

bool StringContent::equals(Object$* arg0) {
	 return this->$AbstractDocument$Content::equals(arg0);
}

$Object* StringContent::clone() {
	 return this->$AbstractDocument$Content::clone();
}

$String* StringContent::toString() {
	 return this->$AbstractDocument$Content::toString();
}

void StringContent::finalize() {
	this->$AbstractDocument$Content::finalize();
}

$chars* StringContent::empty = nullptr;

void StringContent::init$() {
	StringContent::init$(10);
}

void StringContent::init$(int32_t initialLength) {
	if (initialLength < 1) {
		initialLength = 1;
	}
	$set(this, data, $new($chars, initialLength));
	$nc(this->data)->set(0, u'\n');
	this->count = 1;
}

int32_t StringContent::length() {
	return this->count;
}

$UndoableEdit* StringContent::insertString(int32_t where, $String* str) {
	if (where >= this->count || where < 0) {
		$throwNew($BadLocationException, "Invalid location"_s, this->count);
	}
	$var($chars, chars, $nc(str)->toCharArray());
	replace(where, 0, chars, 0, chars->length);
	if (this->marks != nullptr) {
		updateMarksForInsert(where, str->length());
	}
	return $new($StringContent$InsertUndo, this, where, str->length());
}

$UndoableEdit* StringContent::remove(int32_t where, int32_t nitems) {
	if (where + nitems >= this->count) {
		$throwNew($BadLocationException, "Invalid range"_s, this->count);
	}
	$var($String, removedString, getString(where, nitems));
	$var($UndoableEdit, edit, $new($StringContent$RemoveUndo, this, where, removedString));
	replace(where, nitems, StringContent::empty, 0, 0);
	if (this->marks != nullptr) {
		updateMarksForRemove(where, nitems);
	}
	return edit;
}

$String* StringContent::getString(int32_t where, int32_t len) {
	if (where + len > this->count) {
		$throwNew($BadLocationException, "Invalid range"_s, this->count);
	}
	return $new($String, this->data, where, len);
}

void StringContent::getChars(int32_t where, int32_t len, $Segment* chars) {
	if (where + len > this->count) {
		$throwNew($BadLocationException, "Invalid location"_s, this->count);
	}
	$set($nc(chars), array, this->data);
	chars->offset = where;
	chars->count = len;
}

$Position* StringContent::createPosition(int32_t offset) {
	if (this->marks == nullptr) {
		$set(this, marks, $new($Vector));
	}
	return $new($StringContent$StickyPosition, this, offset);
}

void StringContent::replace(int32_t offset, int32_t length, $chars* replArray, int32_t replOffset, int32_t replLength) {
	int32_t delta = replLength - length;
	int32_t src = offset + length;
	int32_t nmove = this->count - src;
	int32_t dest = src + delta;
	if ((this->count + delta) >= $nc(this->data)->length) {
		int32_t newLength = $Math::max(2 * $nc(this->data)->length, this->count + delta);
		$var($chars, newData, $new($chars, newLength));
		$System::arraycopy(this->data, 0, newData, 0, offset);
		$System::arraycopy(replArray, replOffset, newData, offset, replLength);
		$System::arraycopy(this->data, src, newData, dest, nmove);
		$set(this, data, newData);
	} else {
		$System::arraycopy(this->data, src, this->data, dest, nmove);
		$System::arraycopy(replArray, replOffset, this->data, offset, replLength);
	}
	this->count = this->count + delta;
}

void StringContent::resize(int32_t ncount) {
	$var($chars, ndata, $new($chars, ncount));
	$System::arraycopy(this->data, 0, ndata, 0, $Math::min(ncount, this->count));
	$set(this, data, ndata);
}

void StringContent::updateMarksForInsert(int32_t offset, int32_t length) {
	$synchronized(this) {
		if (offset == 0) {
			offset = 1;
		}
		int32_t n = $nc(this->marks)->size();
		for (int32_t i = 0; i < n; ++i) {
			$var($StringContent$PosRec, mark, $cast($StringContent$PosRec, $nc(this->marks)->elementAt(i)));
			if ($nc(mark)->unused) {
				$nc(this->marks)->removeElementAt(i);
				i -= 1;
				n -= 1;
			} else if (mark->offset >= offset) {
				mark->offset += length;
			}
		}
	}
}

void StringContent::updateMarksForRemove(int32_t offset, int32_t length) {
	$synchronized(this) {
		int32_t n = $nc(this->marks)->size();
		for (int32_t i = 0; i < n; ++i) {
			$var($StringContent$PosRec, mark, $cast($StringContent$PosRec, $nc(this->marks)->elementAt(i)));
			if ($nc(mark)->unused) {
				$nc(this->marks)->removeElementAt(i);
				i -= 1;
				n -= 1;
			} else if (mark->offset >= (offset + length)) {
				mark->offset -= length;
			} else if (mark->offset >= offset) {
				mark->offset = offset;
			}
		}
	}
}

$Vector* StringContent::getPositionsInRange($Vector* v, int32_t offset, int32_t length) {
	int32_t n = $nc(this->marks)->size();
	int32_t end = offset + length;
	$var($Vector, placeIn, (v == nullptr) ? $new($Vector) : v);
	for (int32_t i = 0; i < n; ++i) {
		$var($StringContent$PosRec, mark, $cast($StringContent$PosRec, $nc(this->marks)->elementAt(i)));
		if ($nc(mark)->unused) {
			$nc(this->marks)->removeElementAt(i);
			i -= 1;
			n -= 1;
		} else if (mark->offset >= offset && mark->offset <= end) {
			$nc(placeIn)->addElement($$new($StringContent$UndoPosRef, this, mark));
		}
	}
	return placeIn;
}

void StringContent::updateUndoPositions($Vector* positions) {
	for (int32_t counter = $nc(positions)->size() - 1; counter >= 0; --counter) {
		$var($StringContent$UndoPosRef, ref, $cast($StringContent$UndoPosRef, positions->elementAt(counter)));
		if ($nc($nc(ref)->rec)->unused) {
			positions->removeElementAt(counter);
		} else {
			ref->resetLocation();
		}
	}
}

void clinit$StringContent($Class* class$) {
	$assignStatic(StringContent::empty, $new($chars, 0));
}

StringContent::StringContent() {
}

$Class* StringContent::load$($String* name, bool initialize) {
	$loadClass(StringContent, name, initialize, &_StringContent_ClassInfo_, clinit$StringContent, allocate$StringContent);
	return class$;
}

$Class* StringContent::class$ = nullptr;

		} // text
	} // swing
} // javax