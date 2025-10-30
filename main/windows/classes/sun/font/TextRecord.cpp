#include <sun/font/TextRecord.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace font {

$FieldInfo _TextRecord_FieldInfo_[] = {
	{"text", "[C", nullptr, $PUBLIC, $field(TextRecord, text)},
	{"start", "I", nullptr, $PUBLIC, $field(TextRecord, start)},
	{"limit", "I", nullptr, $PUBLIC, $field(TextRecord, limit)},
	{"min", "I", nullptr, $PUBLIC, $field(TextRecord, min)},
	{"max", "I", nullptr, $PUBLIC, $field(TextRecord, max)},
	{}
};

$MethodInfo _TextRecord_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TextRecord::*)()>(&TextRecord::init$))},
	{"init", "([CIIII)V", nullptr, $PUBLIC, $method(static_cast<void(TextRecord::*)($chars*,int32_t,int32_t,int32_t,int32_t)>(&TextRecord::init))},
	{}
};

$ClassInfo _TextRecord_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.font.TextRecord",
	"java.lang.Object",
	nullptr,
	_TextRecord_FieldInfo_,
	_TextRecord_MethodInfo_
};

$Object* allocate$TextRecord($Class* clazz) {
	return $of($alloc(TextRecord));
}

void TextRecord::init$() {
}

void TextRecord::init($chars* text, int32_t start, int32_t limit, int32_t min, int32_t max) {
	$set(this, text, text);
	this->start = start;
	this->limit = limit;
	this->min = min;
	this->max = max;
}

TextRecord::TextRecord() {
}

$Class* TextRecord::load$($String* name, bool initialize) {
	$loadClass(TextRecord, name, initialize, &_TextRecord_ClassInfo_, allocate$TextRecord);
	return class$;
}

$Class* TextRecord::class$ = nullptr;

	} // font
} // sun