#include <java/awt/image/ByteLookupTable.h>

#include <java/awt/image/LookupTable.h>
#include <java/lang/Array.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $byteArray2 = $Array<int8_t, 2>;
using $LookupTable = ::java::awt::image::LookupTable;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace image {

$FieldInfo _ByteLookupTable_FieldInfo_[] = {
	{"data", "[[B", nullptr, 0, $field(ByteLookupTable, data)},
	{}
};

$MethodInfo _ByteLookupTable_MethodInfo_[] = {
	{"<init>", "(I[[B)V", nullptr, $PUBLIC, $method(static_cast<void(ByteLookupTable::*)(int32_t,$byteArray2*)>(&ByteLookupTable::init$))},
	{"<init>", "(I[B)V", nullptr, $PUBLIC, $method(static_cast<void(ByteLookupTable::*)(int32_t,$bytes*)>(&ByteLookupTable::init$))},
	{"getTable", "()[[B", nullptr, $PUBLIC | $FINAL, $method(static_cast<$byteArray2*(ByteLookupTable::*)()>(&ByteLookupTable::getTable))},
	{"lookupPixel", "([I[I)[I", nullptr, $PUBLIC},
	{"lookupPixel", "([B[B)[B", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ByteLookupTable_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.image.ByteLookupTable",
	"java.awt.image.LookupTable",
	nullptr,
	_ByteLookupTable_FieldInfo_,
	_ByteLookupTable_MethodInfo_
};

$Object* allocate$ByteLookupTable($Class* clazz) {
	return $of($alloc(ByteLookupTable));
}

void ByteLookupTable::init$(int32_t offset, $byteArray2* data) {
	$LookupTable::init$(offset, $nc(data)->length);
	this->numComponents = $nc(data)->length;
	this->numEntries = $nc(data->get(0))->length;
	$set(this, data, $new($byteArray2, this->numComponents));
	for (int32_t i = 0; i < this->numComponents; ++i) {
		$nc(this->data)->set(i, data->get(i));
	}
}

void ByteLookupTable::init$(int32_t offset, $bytes* data) {
	$LookupTable::init$(offset, $nc(data)->length);
	this->numComponents = 1;
	this->numEntries = $nc(data)->length;
	$set(this, data, $new($byteArray2, 1));
	$nc(this->data)->set(0, data);
}

$byteArray2* ByteLookupTable::getTable() {
	return this->data;
}

$ints* ByteLookupTable::lookupPixel($ints* src, $ints* dst$renamed) {
	$var($ints, dst, dst$renamed);
	if (dst == nullptr) {
		$assign(dst, $new($ints, $nc(src)->length));
	}
	if (this->numComponents == 1) {
		for (int32_t i = 0; i < $nc(src)->length; ++i) {
			int32_t s = src->get(i) - this->offset;
			if (s < 0) {
				$throwNew($ArrayIndexOutOfBoundsException, $$str({"src["_s, $$str(i), "]-offset is less than zero"_s}));
			}
			$nc(dst)->set(i, (int32_t)$nc($nc(this->data)->get(0))->get(s));
		}
	} else {
		for (int32_t i = 0; i < $nc(src)->length; ++i) {
			int32_t s = src->get(i) - this->offset;
			if (s < 0) {
				$throwNew($ArrayIndexOutOfBoundsException, $$str({"src["_s, $$str(i), "]-offset is less than zero"_s}));
			}
			$nc(dst)->set(i, (int32_t)$nc($nc(this->data)->get(i))->get(s));
		}
	}
	return dst;
}

$bytes* ByteLookupTable::lookupPixel($bytes* src, $bytes* dst$renamed) {
	$var($bytes, dst, dst$renamed);
	if (dst == nullptr) {
		$assign(dst, $new($bytes, $nc(src)->length));
	}
	if (this->numComponents == 1) {
		for (int32_t i = 0; i < $nc(src)->length; ++i) {
			int32_t s = ((int32_t)(src->get(i) & (uint32_t)255)) - this->offset;
			if (s < 0) {
				$throwNew($ArrayIndexOutOfBoundsException, $$str({"src["_s, $$str(i), "]-offset is less than zero"_s}));
			}
			$nc(dst)->set(i, $nc($nc(this->data)->get(0))->get(s));
		}
	} else {
		for (int32_t i = 0; i < $nc(src)->length; ++i) {
			int32_t s = ((int32_t)(src->get(i) & (uint32_t)255)) - this->offset;
			if (s < 0) {
				$throwNew($ArrayIndexOutOfBoundsException, $$str({"src["_s, $$str(i), "]-offset is less than zero"_s}));
			}
			$nc(dst)->set(i, $nc($nc(this->data)->get(i))->get(s));
		}
	}
	return dst;
}

ByteLookupTable::ByteLookupTable() {
}

$Class* ByteLookupTable::load$($String* name, bool initialize) {
	$loadClass(ByteLookupTable, name, initialize, &_ByteLookupTable_ClassInfo_, allocate$ByteLookupTable);
	return class$;
}

$Class* ByteLookupTable::class$ = nullptr;

		} // image
	} // awt
} // java