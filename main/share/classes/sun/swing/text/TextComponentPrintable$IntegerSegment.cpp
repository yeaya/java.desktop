#include <sun/swing/text/TextComponentPrintable$IntegerSegment.h>

#include <sun/swing/text/TextComponentPrintable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace swing {
		namespace text {

$FieldInfo _TextComponentPrintable$IntegerSegment_FieldInfo_[] = {
	{"start", "I", nullptr, $FINAL, $field(TextComponentPrintable$IntegerSegment, start)},
	{"end", "I", nullptr, $FINAL, $field(TextComponentPrintable$IntegerSegment, end)},
	{}
};

$MethodInfo _TextComponentPrintable$IntegerSegment_MethodInfo_[] = {
	{"<init>", "(II)V", nullptr, 0, $method(static_cast<void(TextComponentPrintable$IntegerSegment::*)(int32_t,int32_t)>(&TextComponentPrintable$IntegerSegment::init$))},
	{"compareTo", "(Lsun/swing/text/TextComponentPrintable$IntegerSegment;)I", nullptr, $PUBLIC},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TextComponentPrintable$IntegerSegment_InnerClassesInfo_[] = {
	{"sun.swing.text.TextComponentPrintable$IntegerSegment", "sun.swing.text.TextComponentPrintable", "IntegerSegment", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _TextComponentPrintable$IntegerSegment_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.text.TextComponentPrintable$IntegerSegment",
	"java.lang.Object",
	"java.lang.Comparable",
	_TextComponentPrintable$IntegerSegment_FieldInfo_,
	_TextComponentPrintable$IntegerSegment_MethodInfo_,
	"Ljava/lang/Object;Ljava/lang/Comparable<Lsun/swing/text/TextComponentPrintable$IntegerSegment;>;",
	nullptr,
	_TextComponentPrintable$IntegerSegment_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.text.TextComponentPrintable"
};

$Object* allocate$TextComponentPrintable$IntegerSegment($Class* clazz) {
	return $of($alloc(TextComponentPrintable$IntegerSegment));
}

void TextComponentPrintable$IntegerSegment::init$(int32_t start, int32_t end) {
	this->start = start;
	this->end = end;
}

int32_t TextComponentPrintable$IntegerSegment::compareTo(TextComponentPrintable$IntegerSegment* object) {
	int32_t startsDelta = this->start - $nc(object)->start;
	return (startsDelta != 0) ? startsDelta : this->end - object->end;
}

bool TextComponentPrintable$IntegerSegment::equals(Object$* obj) {
	if ($instanceOf(TextComponentPrintable$IntegerSegment, obj)) {
		return compareTo($cast(TextComponentPrintable$IntegerSegment, obj)) == 0;
	} else {
		return false;
	}
}

int32_t TextComponentPrintable$IntegerSegment::hashCode() {
	int32_t result = 17;
	result = 37 * result + this->start;
	result = 37 * result + this->end;
	return result;
}

$String* TextComponentPrintable$IntegerSegment::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({"IntegerSegment ["_s, $$str(this->start), ", "_s, $$str(this->end), "]"_s});
}

int32_t TextComponentPrintable$IntegerSegment::compareTo(Object$* object) {
	return this->compareTo($cast(TextComponentPrintable$IntegerSegment, object));
}

TextComponentPrintable$IntegerSegment::TextComponentPrintable$IntegerSegment() {
}

$Class* TextComponentPrintable$IntegerSegment::load$($String* name, bool initialize) {
	$loadClass(TextComponentPrintable$IntegerSegment, name, initialize, &_TextComponentPrintable$IntegerSegment_ClassInfo_, allocate$TextComponentPrintable$IntegerSegment);
	return class$;
}

$Class* TextComponentPrintable$IntegerSegment::class$ = nullptr;

		} // text
	} // swing
} // sun