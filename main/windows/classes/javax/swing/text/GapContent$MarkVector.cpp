#include <javax/swing/text/GapContent$MarkVector.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/GapContent$MarkData.h>
#include <javax/swing/text/GapContent.h>
#include <javax/swing/text/GapVector.h>
#include <jcpp.h>

using $GapContent$MarkDataArray = $Array<::javax::swing::text::GapContent$MarkData>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GapContent = ::javax::swing::text::GapContent;
using $GapContent$MarkData = ::javax::swing::text::GapContent$MarkData;
using $GapVector = ::javax::swing::text::GapVector;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _GapContent$MarkVector_FieldInfo_[] = {
	{"oneMark", "[Ljavax/swing/text/GapContent$MarkData;", nullptr, 0, $field(GapContent$MarkVector, oneMark)},
	{}
};

$MethodInfo _GapContent$MarkVector_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(GapContent$MarkVector::*)()>(&GapContent$MarkVector::init$))},
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(GapContent$MarkVector::*)(int32_t)>(&GapContent$MarkVector::init$))},
	{"addElement", "(Ljavax/swing/text/GapContent$MarkData;)V", nullptr, $PUBLIC},
	{"allocateArray", "(I)Ljava/lang/Object;", nullptr, $PROTECTED},
	{"elementAt", "(I)Ljavax/swing/text/GapContent$MarkData;", nullptr, $PUBLIC},
	{"getArrayLength", "()I", nullptr, $PROTECTED},
	{"insertElementAt", "(Ljavax/swing/text/GapContent$MarkData;I)V", nullptr, $PUBLIC},
	{"replaceRange", "(II[Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"size", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GapContent$MarkVector_InnerClassesInfo_[] = {
	{"javax.swing.text.GapContent$MarkVector", "javax.swing.text.GapContent", "MarkVector", $STATIC},
	{}
};

$ClassInfo _GapContent$MarkVector_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.GapContent$MarkVector",
	"javax.swing.text.GapVector",
	nullptr,
	_GapContent$MarkVector_FieldInfo_,
	_GapContent$MarkVector_MethodInfo_,
	nullptr,
	nullptr,
	_GapContent$MarkVector_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.GapContent"
};

$Object* allocate$GapContent$MarkVector($Class* clazz) {
	return $of($alloc(GapContent$MarkVector));
}

void GapContent$MarkVector::init$() {
	$GapVector::init$();
	$set(this, oneMark, $new($GapContent$MarkDataArray, 1));
}

void GapContent$MarkVector::init$(int32_t size) {
	$GapVector::init$(size);
	$set(this, oneMark, $new($GapContent$MarkDataArray, 1));
}

$Object* GapContent$MarkVector::allocateArray(int32_t len) {
	return $of($new($GapContent$MarkDataArray, len));
}

int32_t GapContent$MarkVector::getArrayLength() {
	$var($GapContent$MarkDataArray, marks, $cast($GapContent$MarkDataArray, getArray()));
	return $nc(marks)->length;
}

int32_t GapContent$MarkVector::size() {
	int32_t var$0 = getArrayLength();
	int32_t var$2 = getGapEnd();
	int32_t var$1 = (var$2 - getGapStart());
	int32_t len = var$0 - var$1;
	return len;
}

void GapContent$MarkVector::insertElementAt($GapContent$MarkData* m, int32_t index) {
	$nc(this->oneMark)->set(0, m);
	replace(index, 0, this->oneMark, 1);
}

void GapContent$MarkVector::addElement($GapContent$MarkData* m) {
	insertElementAt(m, size());
}

$GapContent$MarkData* GapContent$MarkVector::elementAt(int32_t index) {
	int32_t g0 = getGapStart();
	int32_t g1 = getGapEnd();
	$var($GapContent$MarkDataArray, array, $cast($GapContent$MarkDataArray, getArray()));
	if (index < g0) {
		return $nc(array)->get(index);
	} else {
		index += g1 - g0;
		return $nc(array)->get(index);
	}
}

void GapContent$MarkVector::replaceRange(int32_t start, int32_t end, $ObjectArray* marks) {
	int32_t g0 = getGapStart();
	int32_t g1 = getGapEnd();
	int32_t index = start;
	int32_t newIndex = 0;
	$var($ObjectArray, array, $cast($ObjectArray, getArray()));
	if (start >= g0) {
		index += (g1 - g0);
		end += (g1 - g0);
	} else if (end >= g0) {
		end += (g1 - g0);
		while (index < g0) {
			$nc(array)->set(index++, $nc(marks)->get(newIndex++));
		}
		index = g1;
	} else {
		while (index < end) {
			$nc(array)->set(index++, $nc(marks)->get(newIndex++));
		}
	}
	while (index < end) {
		$nc(array)->set(index++, $nc(marks)->get(newIndex++));
	}
}

GapContent$MarkVector::GapContent$MarkVector() {
}

$Class* GapContent$MarkVector::load$($String* name, bool initialize) {
	$loadClass(GapContent$MarkVector, name, initialize, &_GapContent$MarkVector_ClassInfo_, allocate$GapContent$MarkVector);
	return class$;
}

$Class* GapContent$MarkVector::class$ = nullptr;

		} // text
	} // swing
} // javax