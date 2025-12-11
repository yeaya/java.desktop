#include <sun/java2d/DataBufferNIOInt.h>

#include <java/awt/image/DataBuffer.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/IntBuffer.h>
#include <jcpp.h>

#undef TYPE_INT

using $IntBufferArray = $Array<::java::nio::IntBuffer>;
using $intArray2 = $Array<int32_t, 2>;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ByteOrder = ::java::nio::ByteOrder;
using $IntBuffer = ::java::nio::IntBuffer;

namespace sun {
	namespace java2d {

$FieldInfo _DataBufferNIOInt_FieldInfo_[] = {
	{"data", "Ljava/nio/IntBuffer;", nullptr, 0, $field(DataBufferNIOInt, data)},
	{"bankdata", "[Ljava/nio/IntBuffer;", nullptr, 0, $field(DataBufferNIOInt, bankdata)},
	{}
};

$MethodInfo _DataBufferNIOInt_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(DataBufferNIOInt::*)(int32_t)>(&DataBufferNIOInt::init$))},
	{"getBankData", "()[[I", nullptr, $PUBLIC, $method(static_cast<$intArray2*(DataBufferNIOInt::*)()>(&DataBufferNIOInt::getBankData))},
	{"getBuffer", "()Ljava/nio/IntBuffer;", nullptr, $PUBLIC, $method(static_cast<$IntBuffer*(DataBufferNIOInt::*)()>(&DataBufferNIOInt::getBuffer))},
	{"getBuffer", "(I)Ljava/nio/IntBuffer;", nullptr, $PUBLIC, $method(static_cast<$IntBuffer*(DataBufferNIOInt::*)(int32_t)>(&DataBufferNIOInt::getBuffer))},
	{"getBufferOfSize", "(I)Ljava/nio/ByteBuffer;", nullptr, 0, $method(static_cast<$ByteBuffer*(DataBufferNIOInt::*)(int32_t)>(&DataBufferNIOInt::getBufferOfSize))},
	{"getData", "()[I", nullptr, $PUBLIC, $method(static_cast<$ints*(DataBufferNIOInt::*)()>(&DataBufferNIOInt::getData))},
	{"getData", "(I)[I", nullptr, $PUBLIC, $method(static_cast<$ints*(DataBufferNIOInt::*)(int32_t)>(&DataBufferNIOInt::getData))},
	{"getElem", "(I)I", nullptr, $PUBLIC},
	{"getElem", "(II)I", nullptr, $PUBLIC},
	{"setElem", "(II)V", nullptr, $PUBLIC},
	{"setElem", "(III)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DataBufferNIOInt_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.java2d.DataBufferNIOInt",
	"java.awt.image.DataBuffer",
	nullptr,
	_DataBufferNIOInt_FieldInfo_,
	_DataBufferNIOInt_MethodInfo_
};

$Object* allocate$DataBufferNIOInt($Class* clazz) {
	return $of($alloc(DataBufferNIOInt));
}

void DataBufferNIOInt::init$(int32_t size) {
	$DataBuffer::init$($DataBuffer::TYPE_INT, size);
	$set(this, data, $nc($(getBufferOfSize(size * 4)))->asIntBuffer());
	$set(this, bankdata, $new($IntBufferArray, 1));
	$nc(this->bankdata)->set(0, this->data);
}

$IntBuffer* DataBufferNIOInt::getBuffer() {
	return this->data;
}

$IntBuffer* DataBufferNIOInt::getBuffer(int32_t bank) {
	return $nc(this->bankdata)->get(bank);
}

$ints* DataBufferNIOInt::getData() {
	return $cast($ints, $nc(this->data)->array());
}

$ints* DataBufferNIOInt::getData(int32_t bank) {
	return $cast($ints, $nc($nc(this->bankdata)->get(bank))->array());
}

$intArray2* DataBufferNIOInt::getBankData() {
	return nullptr;
}

int32_t DataBufferNIOInt::getElem(int32_t i) {
	return $nc(this->data)->get(i + this->offset);
}

int32_t DataBufferNIOInt::getElem(int32_t bank, int32_t i) {
	return $nc($nc(this->bankdata)->get(bank))->get(i + $nc(this->offsets)->get(bank));
}

void DataBufferNIOInt::setElem(int32_t i, int32_t val) {
	$nc(this->data)->put(i + this->offset, val);
}

void DataBufferNIOInt::setElem(int32_t bank, int32_t i, int32_t val) {
	$nc($nc(this->bankdata)->get(bank))->put(i + $nc(this->offsets)->get(bank), val);
}

$ByteBuffer* DataBufferNIOInt::getBufferOfSize(int32_t size) {
	$useLocalCurrentObjectStackCache();
	$var($ByteBuffer, buffer, $ByteBuffer::allocateDirect(size));
	$nc(buffer)->order($($ByteOrder::nativeOrder()));
	return buffer;
}

DataBufferNIOInt::DataBufferNIOInt() {
}

$Class* DataBufferNIOInt::load$($String* name, bool initialize) {
	$loadClass(DataBufferNIOInt, name, initialize, &_DataBufferNIOInt_ClassInfo_, allocate$DataBufferNIOInt);
	return class$;
}

$Class* DataBufferNIOInt::class$ = nullptr;

	} // java2d
} // sun