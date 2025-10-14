#include <java/awt/image/LookupTable.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace image {

$FieldInfo _LookupTable_FieldInfo_[] = {
	{"numComponents", "I", nullptr, 0, $field(LookupTable, numComponents)},
	{"offset", "I", nullptr, 0, $field(LookupTable, offset)},
	{"numEntries", "I", nullptr, 0, $field(LookupTable, numEntries)},
	{}
};

$MethodInfo _LookupTable_MethodInfo_[] = {
	{"<init>", "(II)V", nullptr, $PROTECTED, $method(static_cast<void(LookupTable::*)(int32_t,int32_t)>(&LookupTable::init$))},
	{"getNumComponents", "()I", nullptr, $PUBLIC},
	{"getOffset", "()I", nullptr, $PUBLIC},
	{"lookupPixel", "([I[I)[I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _LookupTable_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.awt.image.LookupTable",
	"java.lang.Object",
	nullptr,
	_LookupTable_FieldInfo_,
	_LookupTable_MethodInfo_
};

$Object* allocate$LookupTable($Class* clazz) {
	return $of($alloc(LookupTable));
}

void LookupTable::init$(int32_t offset, int32_t numComponents) {
	if (offset < 0) {
		$throwNew($IllegalArgumentException, "Offset must be greater than 0"_s);
	}
	if (numComponents < 1) {
		$throwNew($IllegalArgumentException, "Number of components must  be at least 1"_s);
	}
	this->numComponents = numComponents;
	this->offset = offset;
}

int32_t LookupTable::getNumComponents() {
	return this->numComponents;
}

int32_t LookupTable::getOffset() {
	return this->offset;
}

LookupTable::LookupTable() {
}

$Class* LookupTable::load$($String* name, bool initialize) {
	$loadClass(LookupTable, name, initialize, &_LookupTable_ClassInfo_, allocate$LookupTable);
	return class$;
}

$Class* LookupTable::class$ = nullptr;

		} // image
	} // awt
} // java