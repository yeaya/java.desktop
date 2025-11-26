#include <sun/awt/CharsetString.h>

#include <sun/awt/FontDescriptor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FontDescriptor = ::sun::awt::FontDescriptor;

namespace sun {
	namespace awt {

$FieldInfo _CharsetString_FieldInfo_[] = {
	{"charsetChars", "[C", nullptr, $PUBLIC, $field(CharsetString, charsetChars)},
	{"offset", "I", nullptr, $PUBLIC, $field(CharsetString, offset)},
	{"length", "I", nullptr, $PUBLIC, $field(CharsetString, length)},
	{"fontDescriptor", "Lsun/awt/FontDescriptor;", nullptr, $PUBLIC, $field(CharsetString, fontDescriptor)},
	{}
};

$MethodInfo _CharsetString_MethodInfo_[] = {
	{"<init>", "([CIILsun/awt/FontDescriptor;)V", nullptr, $PUBLIC, $method(static_cast<void(CharsetString::*)($chars*,int32_t,int32_t,$FontDescriptor*)>(&CharsetString::init$))},
	{}
};

$ClassInfo _CharsetString_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.CharsetString",
	"java.lang.Object",
	nullptr,
	_CharsetString_FieldInfo_,
	_CharsetString_MethodInfo_
};

$Object* allocate$CharsetString($Class* clazz) {
	return $of($alloc(CharsetString));
}

void CharsetString::init$($chars* charsetChars, int32_t offset, int32_t length, $FontDescriptor* fontDescriptor) {
	$set(this, charsetChars, charsetChars);
	this->offset = offset;
	this->length = length;
	$set(this, fontDescriptor, fontDescriptor);
}

CharsetString::CharsetString() {
}

$Class* CharsetString::load$($String* name, bool initialize) {
	$loadClass(CharsetString, name, initialize, &_CharsetString_ClassInfo_, allocate$CharsetString);
	return class$;
}

$Class* CharsetString::class$ = nullptr;

	} // awt
} // sun