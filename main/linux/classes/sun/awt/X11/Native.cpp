#include <sun/awt/X11/Native.h>

#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Vector.h>
#include <jdk/internal/misc/Unsafe.h>
#include <sun/awt/X11/Native$1.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Vector = ::java::util::Vector;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $Native$1 = ::sun::awt::X11::Native$1;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _Native_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC, $staticField(Native, unsafe)},
	{"longSize", "I", nullptr, $STATIC, $staticField(Native, longSize)},
	{"dataModel", "I", nullptr, $STATIC, $staticField(Native, dataModel)},
	{}
};

$MethodInfo _Native_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Native::*)()>(&Native::init$))},
	{"allocateLongArray", "(I)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(int32_t)>(&Native::allocateLongArray))},
	{"card32ToArray", "(JI)[J", nullptr, $STATIC, $method(static_cast<$longs*(*)(int64_t,int32_t)>(&Native::card32ToArray))},
	{"card32ToData", "([J)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($longs*)>(&Native::card32ToData))},
	{"getBool", "(J)Z", nullptr, $STATIC, $method(static_cast<bool(*)(int64_t)>(&Native::getBool))},
	{"getBool", "(JI)Z", nullptr, $STATIC, $method(static_cast<bool(*)(int64_t,int32_t)>(&Native::getBool))},
	{"getByte", "(J)B", nullptr, $STATIC, $method(static_cast<int8_t(*)(int64_t)>(&Native::getByte))},
	{"getByte", "(JI)B", nullptr, $STATIC, $method(static_cast<int8_t(*)(int64_t,int32_t)>(&Native::getByte))},
	{"getByteSize", "()I", nullptr, $STATIC, $method(static_cast<int32_t(*)()>(&Native::getByteSize))},
	{"getCard32", "(J)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(int64_t)>(&Native::getCard32))},
	{"getCard32", "(JI)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(int64_t,int32_t)>(&Native::getCard32))},
	{"getCard32Size", "()I", nullptr, $STATIC, $method(static_cast<int32_t(*)()>(&Native::getCard32Size))},
	{"getInt", "(J)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int64_t)>(&Native::getInt))},
	{"getInt", "(JI)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int64_t,int32_t)>(&Native::getInt))},
	{"getIntSize", "()I", nullptr, $STATIC, $method(static_cast<int32_t(*)()>(&Native::getIntSize))},
	{"getLong", "(J)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(int64_t)>(&Native::getLong))},
	{"getLong", "(JI)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(int64_t,int32_t)>(&Native::getLong))},
	{"getLongSize", "()I", nullptr, $STATIC, $method(static_cast<int32_t(*)()>(&Native::getLongSize))},
	{"getShort", "(J)S", nullptr, $STATIC, $method(static_cast<int16_t(*)(int64_t)>(&Native::getShort))},
	{"getShortSize", "()I", nullptr, $STATIC, $method(static_cast<int32_t(*)()>(&Native::getShortSize))},
	{"getUByte", "(J)S", nullptr, $STATIC, $method(static_cast<int16_t(*)(int64_t)>(&Native::getUByte))},
	{"getUByte", "(JI)S", nullptr, $STATIC, $method(static_cast<int16_t(*)(int64_t,int32_t)>(&Native::getUByte))},
	{"getUByteSize", "()I", nullptr, $STATIC, $method(static_cast<int32_t(*)()>(&Native::getUByteSize))},
	{"getUInt", "(J)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(int64_t)>(&Native::getUInt))},
	{"getUInt", "(JI)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(int64_t,int32_t)>(&Native::getUInt))},
	{"getUIntSize", "()I", nullptr, $STATIC, $method(static_cast<int32_t(*)()>(&Native::getUIntSize))},
	{"getULong", "(J)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(int64_t)>(&Native::getULong))},
	{"getUShort", "(J)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int64_t)>(&Native::getUShort))},
	{"getUShortSize", "()I", nullptr, $STATIC, $method(static_cast<int32_t(*)()>(&Native::getUShortSize))},
	{"getWindow", "(J)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(int64_t)>(&Native::getWindow))},
	{"getWindow", "(JI)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(int64_t,int32_t)>(&Native::getWindow))},
	{"getWindowSize", "()I", nullptr, $STATIC, $method(static_cast<int32_t(*)()>(&Native::getWindowSize))},
	{"put", "(J[J)V", nullptr, $STATIC, $method(static_cast<void(*)(int64_t,$longs*)>(&Native::put))},
	{"putBool", "(JZ)V", nullptr, $STATIC, $method(static_cast<void(*)(int64_t,bool)>(&Native::putBool))},
	{"putBool", "(JIZ)V", nullptr, $STATIC, $method(static_cast<void(*)(int64_t,int32_t,bool)>(&Native::putBool))},
	{"putByte", "(JB)V", nullptr, $STATIC, $method(static_cast<void(*)(int64_t,int8_t)>(&Native::putByte))},
	{"putByte", "(JIB)V", nullptr, $STATIC, $method(static_cast<void(*)(int64_t,int32_t,int8_t)>(&Native::putByte))},
	{"putCard32", "(JJ)V", nullptr, $STATIC, $method(static_cast<void(*)(int64_t,int64_t)>(&Native::putCard32))},
	{"putCard32", "(JIJ)V", nullptr, $STATIC, $method(static_cast<void(*)(int64_t,int32_t,int64_t)>(&Native::putCard32))},
	{"putInt", "(JI)V", nullptr, $STATIC, $method(static_cast<void(*)(int64_t,int32_t)>(&Native::putInt))},
	{"putInt", "(JII)V", nullptr, $STATIC, $method(static_cast<void(*)(int64_t,int32_t,int32_t)>(&Native::putInt))},
	{"putLong", "(JJ)V", nullptr, $STATIC, $method(static_cast<void(*)(int64_t,int64_t)>(&Native::putLong))},
	{"putLong", "(JIJ)V", nullptr, $STATIC, $method(static_cast<void(*)(int64_t,int32_t,int64_t)>(&Native::putLong))},
	{"putLong", "(JLjava/util/Vector;)V", "(JLjava/util/Vector<Ljava/lang/Long;>;)V", $STATIC, $method(static_cast<void(*)(int64_t,$Vector*)>(&Native::putLong))},
	{"putLongReverse", "(JLjava/util/Vector;)V", "(JLjava/util/Vector<Ljava/lang/Long;>;)V", $STATIC, $method(static_cast<void(*)(int64_t,$Vector*)>(&Native::putLongReverse))},
	{"putShort", "(JS)V", nullptr, $STATIC, $method(static_cast<void(*)(int64_t,int16_t)>(&Native::putShort))},
	{"putShort", "(JIS)V", nullptr, $STATIC, $method(static_cast<void(*)(int64_t,int32_t,int16_t)>(&Native::putShort))},
	{"putUByte", "(JS)V", nullptr, $STATIC, $method(static_cast<void(*)(int64_t,int16_t)>(&Native::putUByte))},
	{"putUByte", "(JIS)V", nullptr, $STATIC, $method(static_cast<void(*)(int64_t,int32_t,int16_t)>(&Native::putUByte))},
	{"putUInt", "(JJ)V", nullptr, $STATIC, $method(static_cast<void(*)(int64_t,int64_t)>(&Native::putUInt))},
	{"putUInt", "(JIJ)V", nullptr, $STATIC, $method(static_cast<void(*)(int64_t,int32_t,int64_t)>(&Native::putUInt))},
	{"putULong", "(JJ)V", nullptr, $STATIC, $method(static_cast<void(*)(int64_t,int64_t)>(&Native::putULong))},
	{"putUShort", "(JI)V", nullptr, $STATIC, $method(static_cast<void(*)(int64_t,int32_t)>(&Native::putUShort))},
	{"putUShort", "(JII)V", nullptr, $STATIC, $method(static_cast<void(*)(int64_t,int32_t,int32_t)>(&Native::putUShort))},
	{"putWindow", "(JJ)V", nullptr, $STATIC, $method(static_cast<void(*)(int64_t,int64_t)>(&Native::putWindow))},
	{"putWindow", "(JIJ)V", nullptr, $STATIC, $method(static_cast<void(*)(int64_t,int32_t,int64_t)>(&Native::putWindow))},
	{"toBytes", "(JI)[B", nullptr, $STATIC, $method(static_cast<$bytes*(*)(int64_t,int32_t)>(&Native::toBytes))},
	{"toData", "([B)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($bytes*)>(&Native::toData))},
	{"toData", "([S)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($shorts*)>(&Native::toData))},
	{"toData", "([I)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($ints*)>(&Native::toData))},
	{"toData", "([J)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($longs*)>(&Native::toData))},
	{"toLongs", "(JI)[J", nullptr, $STATIC, $method(static_cast<$longs*(*)(int64_t,int32_t)>(&Native::toLongs))},
	{"toUBytes", "(JI)[S", nullptr, $STATIC, $method(static_cast<$shorts*(*)(int64_t,int32_t)>(&Native::toUBytes))},
	{"toUData", "([S)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($shorts*)>(&Native::toUData))},
	{"toUData", "([I)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($ints*)>(&Native::toUData))},
	{"toUData", "([J)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($longs*)>(&Native::toUData))},
	{}
};

$InnerClassInfo _Native_InnerClassesInfo_[] = {
	{"sun.awt.X11.Native$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Native_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.Native",
	"java.lang.Object",
	nullptr,
	_Native_FieldInfo_,
	_Native_MethodInfo_,
	nullptr,
	nullptr,
	_Native_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.X11.Native$1"
};

$Object* allocate$Native($Class* clazz) {
	return $of($alloc(Native));
}

$Unsafe* Native::unsafe = nullptr;
int32_t Native::longSize = 0;
int32_t Native::dataModel = 0;

void Native::init$() {
}

bool Native::getBool(int64_t ptr) {
	$init(Native);
	return getInt(ptr) != 0;
}

bool Native::getBool(int64_t ptr, int32_t index) {
	$init(Native);
	return getInt(ptr, index) != 0;
}

void Native::putBool(int64_t ptr, bool data) {
	$init(Native);
	putInt(ptr, (data) ? (1) : (0));
}

void Native::putBool(int64_t ptr, int32_t index, bool data) {
	$init(Native);
	putInt(ptr, index, (data) ? (1) : (0));
}

int32_t Native::getByteSize() {
	$init(Native);
	return 1;
}

int8_t Native::getByte(int64_t ptr) {
	$init(Native);
	return $nc(Native::unsafe)->getByte(ptr);
}

int8_t Native::getByte(int64_t ptr, int32_t index) {
	$init(Native);
	return getByte(ptr + index);
}

void Native::putByte(int64_t ptr, int8_t data) {
	$init(Native);
	$nc(Native::unsafe)->putByte(ptr, data);
}

void Native::putByte(int64_t ptr, int32_t index, int8_t data) {
	$init(Native);
	putByte(ptr + index, data);
}

$bytes* Native::toBytes(int64_t data, int32_t length) {
	$init(Native);
	if (data == 0) {
		return nullptr;
	}
	$var($bytes, res, $new($bytes, length));
	for (int32_t i = 0; i < length; ++i, ++data) {
		res->set(i, getByte(data));
	}
	return res;
}

int64_t Native::toData($bytes* bytes) {
	$init(Native);
	if (bytes == nullptr) {
		return 0;
	}
	$init($XlibWrapper);
	int64_t res = $nc($XlibWrapper::unsafe)->allocateMemory($nc(bytes)->length);
	for (int32_t i = 0; i < $nc(bytes)->length; ++i) {
		putByte(res + i, bytes->get(i));
	}
	return res;
}

int32_t Native::getUByteSize() {
	$init(Native);
	return 1;
}

int16_t Native::getUByte(int64_t ptr) {
	$init(Native);
	return (int16_t)((int32_t)(255 & (uint32_t)(int32_t)$nc(Native::unsafe)->getByte(ptr)));
}

int16_t Native::getUByte(int64_t ptr, int32_t index) {
	$init(Native);
	return getUByte(ptr + index);
}

void Native::putUByte(int64_t ptr, int16_t data) {
	$init(Native);
	$nc(Native::unsafe)->putByte(ptr, (int8_t)data);
}

void Native::putUByte(int64_t ptr, int32_t index, int16_t data) {
	$init(Native);
	putUByte(ptr + index, data);
}

$shorts* Native::toUBytes(int64_t data, int32_t length) {
	$init(Native);
	if (data == 0) {
		return nullptr;
	}
	$var($shorts, res, $new($shorts, length));
	for (int32_t i = 0; i < length; ++i, ++data) {
		res->set(i, getUByte(data));
	}
	return res;
}

int64_t Native::toUData($shorts* bytes) {
	$init(Native);
	if (bytes == nullptr) {
		return 0;
	}
	$init($XlibWrapper);
	int64_t res = $nc($XlibWrapper::unsafe)->allocateMemory($nc(bytes)->length);
	for (int32_t i = 0; i < $nc(bytes)->length; ++i) {
		putUByte(res + i, bytes->get(i));
	}
	return res;
}

int32_t Native::getShortSize() {
	$init(Native);
	return 2;
}

int16_t Native::getShort(int64_t ptr) {
	$init(Native);
	return $nc(Native::unsafe)->getShort(ptr);
}

void Native::putShort(int64_t ptr, int16_t data) {
	$init(Native);
	$nc(Native::unsafe)->putShort(ptr, data);
}

void Native::putShort(int64_t ptr, int32_t index, int16_t data) {
	$init(Native);
	putShort(ptr + index * getShortSize(), data);
}

int64_t Native::toData($shorts* shorts) {
	$init(Native);
	if (shorts == nullptr) {
		return 0;
	}
	$init($XlibWrapper);
	int64_t res = $nc($XlibWrapper::unsafe)->allocateMemory($nc(shorts)->length * getShortSize());
	for (int32_t i = 0; i < $nc(shorts)->length; ++i) {
		putShort(res, i, shorts->get(i));
	}
	return res;
}

int32_t Native::getUShortSize() {
	$init(Native);
	return 2;
}

int32_t Native::getUShort(int64_t ptr) {
	$init(Native);
	return (int32_t)(0x0000FFFF & (uint32_t)(int32_t)$nc(Native::unsafe)->getShort(ptr));
}

void Native::putUShort(int64_t ptr, int32_t data) {
	$init(Native);
	$nc(Native::unsafe)->putShort(ptr, (int16_t)data);
}

void Native::putUShort(int64_t ptr, int32_t index, int32_t data) {
	$init(Native);
	putUShort(ptr + index * getShortSize(), data);
}

int64_t Native::toUData($ints* shorts) {
	$init(Native);
	if (shorts == nullptr) {
		return 0;
	}
	$init($XlibWrapper);
	int64_t res = $nc($XlibWrapper::unsafe)->allocateMemory($nc(shorts)->length * getShortSize());
	for (int32_t i = 0; i < $nc(shorts)->length; ++i) {
		putUShort(res, i, shorts->get(i));
	}
	return res;
}

int32_t Native::getIntSize() {
	$init(Native);
	return 4;
}

int32_t Native::getInt(int64_t ptr) {
	$init(Native);
	return $nc(Native::unsafe)->getInt(ptr);
}

int32_t Native::getInt(int64_t ptr, int32_t index) {
	$init(Native);
	return getInt(ptr + getIntSize() * index);
}

void Native::putInt(int64_t ptr, int32_t data) {
	$init(Native);
	$nc(Native::unsafe)->putInt(ptr, data);
}

void Native::putInt(int64_t ptr, int32_t index, int32_t data) {
	$init(Native);
	putInt(ptr + index * getIntSize(), data);
}

int64_t Native::toData($ints* ints) {
	$init(Native);
	if (ints == nullptr) {
		return 0;
	}
	$init($XlibWrapper);
	int64_t res = $nc($XlibWrapper::unsafe)->allocateMemory($nc(ints)->length * getIntSize());
	for (int32_t i = 0; i < $nc(ints)->length; ++i) {
		putInt(res, i, ints->get(i));
	}
	return res;
}

int32_t Native::getUIntSize() {
	$init(Native);
	return 4;
}

int64_t Native::getUInt(int64_t ptr) {
	$init(Native);
	return (int64_t)((int64_t)0x00000000FFFFFFFF & (uint64_t)(int64_t)$nc(Native::unsafe)->getInt(ptr));
}

int64_t Native::getUInt(int64_t ptr, int32_t index) {
	$init(Native);
	return getUInt(ptr + getIntSize() * index);
}

void Native::putUInt(int64_t ptr, int64_t data) {
	$init(Native);
	$nc(Native::unsafe)->putInt(ptr, (int32_t)data);
}

void Native::putUInt(int64_t ptr, int32_t index, int64_t data) {
	$init(Native);
	putUInt(ptr + index * getIntSize(), data);
}

int64_t Native::toUData($longs* ints) {
	$init(Native);
	if (ints == nullptr) {
		return 0;
	}
	$init($XlibWrapper);
	int64_t res = $nc($XlibWrapper::unsafe)->allocateMemory($nc(ints)->length * getIntSize());
	for (int32_t i = 0; i < $nc(ints)->length; ++i) {
		putUInt(res, i, ints->get(i));
	}
	return res;
}

int32_t Native::getLongSize() {
	$init(Native);
	return Native::longSize;
}

int64_t Native::getLong(int64_t ptr) {
	$init(Native);
	$init($XlibWrapper);
	if ($XlibWrapper::dataModel == 32) {
		return $nc(Native::unsafe)->getInt(ptr);
	} else {
		return $nc(Native::unsafe)->getLong(ptr);
	}
}

void Native::putLong(int64_t ptr, int64_t data) {
	$init(Native);
	$init($XlibWrapper);
	if ($XlibWrapper::dataModel == 32) {
		$nc(Native::unsafe)->putInt(ptr, (int32_t)data);
	} else {
		$nc(Native::unsafe)->putLong(ptr, data);
	}
}

void Native::putLong(int64_t ptr, int32_t index, int64_t data) {
	$init(Native);
	putLong(ptr + index * getLongSize(), data);
}

int64_t Native::getLong(int64_t ptr, int32_t index) {
	$init(Native);
	return getLong(ptr + index * getLongSize());
}

void Native::put(int64_t ptr, $longs* arr) {
	$init(Native);
	for (int32_t i = 0; i < $nc(arr)->length; ++i, ptr += getLongSize()) {
		putLong(ptr, arr->get(i));
	}
}

void Native::putLong(int64_t ptr, $Vector* arr) {
	$init(Native);
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(arr)->size(); ++i, ptr += getLongSize()) {
		putLong(ptr, $nc(($cast($Long, $(arr->elementAt(i)))))->longValue());
	}
}

void Native::putLongReverse(int64_t ptr, $Vector* arr) {
	$init(Native);
	$useLocalCurrentObjectStackCache();
	for (int32_t i = $nc(arr)->size() - 1; i >= 0; --i, ptr += getLongSize()) {
		putLong(ptr, $nc(($cast($Long, $(arr->elementAt(i)))))->longValue());
	}
}

$longs* Native::toLongs(int64_t data, int32_t length) {
	$init(Native);
	if (data == 0) {
		return nullptr;
	}
	$var($longs, res, $new($longs, length));
	for (int32_t i = 0; i < length; ++i, data += getLongSize()) {
		res->set(i, getLong(data));
	}
	return res;
}

int64_t Native::toData($longs* longs) {
	$init(Native);
	if (longs == nullptr) {
		return 0;
	}
	$init($XlibWrapper);
	int64_t res = $nc($XlibWrapper::unsafe)->allocateMemory($nc(longs)->length * getLongSize());
	for (int32_t i = 0; i < $nc(longs)->length; ++i) {
		putLong(res, i, longs->get(i));
	}
	return res;
}

int64_t Native::getULong(int64_t ptr) {
	$init(Native);
	$init($XlibWrapper);
	if ($XlibWrapper::dataModel == 32) {
		return (int64_t)(((int64_t)$nc(Native::unsafe)->getInt(ptr)) & (uint64_t)(int64_t)0x00000000FFFFFFFF);
	} else {
		return $nc(Native::unsafe)->getLong(ptr);
	}
}

void Native::putULong(int64_t ptr, int64_t value) {
	$init(Native);
	putLong(ptr, value);
}

int64_t Native::allocateLongArray(int32_t length) {
	$init(Native);
	return $nc(Native::unsafe)->allocateMemory(getLongSize() * length);
}

int64_t Native::getWindow(int64_t ptr) {
	$init(Native);
	return getLong(ptr);
}

int64_t Native::getWindow(int64_t ptr, int32_t index) {
	$init(Native);
	return getLong(ptr + getWindowSize() * index);
}

void Native::putWindow(int64_t ptr, int64_t window) {
	$init(Native);
	putLong(ptr, window);
}

void Native::putWindow(int64_t ptr, int32_t index, int64_t window) {
	$init(Native);
	putLong(ptr, index, window);
}

int32_t Native::getWindowSize() {
	$init(Native);
	return getLongSize();
}

int64_t Native::getCard32(int64_t ptr) {
	$init(Native);
	return getLong(ptr);
}

void Native::putCard32(int64_t ptr, int64_t value) {
	$init(Native);
	putLong(ptr, value);
}

int64_t Native::getCard32(int64_t ptr, int32_t index) {
	$init(Native);
	return getLong(ptr, index);
}

void Native::putCard32(int64_t ptr, int32_t index, int64_t value) {
	$init(Native);
	putLong(ptr, index, value);
}

int32_t Native::getCard32Size() {
	$init(Native);
	return getLongSize();
}

$longs* Native::card32ToArray(int64_t ptr, int32_t length) {
	$init(Native);
	return toLongs(ptr, length);
}

int64_t Native::card32ToData($longs* arr) {
	$init(Native);
	return toData(arr);
}

void clinit$Native($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$init($XlibWrapper);
	$assignStatic(Native::unsafe, $XlibWrapper::unsafe);
	{
		$var($String, dataModelProp, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($Native$1)))));
		try {
			Native::dataModel = $Integer::parseInt(dataModelProp);
		} catch ($Exception& e) {
			Native::dataModel = 32;
		}
		if (Native::dataModel == 32) {
			Native::longSize = 4;
		} else {
			Native::longSize = 8;
		}
	}
}

Native::Native() {
}

$Class* Native::load$($String* name, bool initialize) {
	$loadClass(Native, name, initialize, &_Native_ClassInfo_, clinit$Native, allocate$Native);
	return class$;
}

$Class* Native::class$ = nullptr;

		} // X11
	} // awt
} // sun