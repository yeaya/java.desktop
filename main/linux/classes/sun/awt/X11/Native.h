#ifndef _sun_awt_X11_Native_h_
#define _sun_awt_X11_Native_h_
//$ class sun.awt.X11.Native
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Vector;
	}
}
namespace jdk {
	namespace internal {
		namespace misc {
			class Unsafe;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class Native : public ::java::lang::Object {
	$class(Native, 0, ::java::lang::Object)
public:
	Native();
	void init$();
	static int64_t allocateLongArray(int32_t length);
	static $longs* card32ToArray(int64_t ptr, int32_t length);
	static int64_t card32ToData($longs* arr);
	static bool getBool(int64_t ptr);
	static bool getBool(int64_t ptr, int32_t index);
	static int8_t getByte(int64_t ptr);
	static int8_t getByte(int64_t ptr, int32_t index);
	static int32_t getByteSize();
	static int64_t getCard32(int64_t ptr);
	static int64_t getCard32(int64_t ptr, int32_t index);
	static int32_t getCard32Size();
	static int32_t getInt(int64_t ptr);
	static int32_t getInt(int64_t ptr, int32_t index);
	static int32_t getIntSize();
	static int64_t getLong(int64_t ptr);
	static int64_t getLong(int64_t ptr, int32_t index);
	static int32_t getLongSize();
	static int16_t getShort(int64_t ptr);
	static int32_t getShortSize();
	static int16_t getUByte(int64_t ptr);
	static int16_t getUByte(int64_t ptr, int32_t index);
	static int32_t getUByteSize();
	static int64_t getUInt(int64_t ptr);
	static int64_t getUInt(int64_t ptr, int32_t index);
	static int32_t getUIntSize();
	static int64_t getULong(int64_t ptr);
	static int32_t getUShort(int64_t ptr);
	static int32_t getUShortSize();
	static int64_t getWindow(int64_t ptr);
	static int64_t getWindow(int64_t ptr, int32_t index);
	static int32_t getWindowSize();
	static void put(int64_t ptr, $longs* arr);
	static void putBool(int64_t ptr, bool data);
	static void putBool(int64_t ptr, int32_t index, bool data);
	static void putByte(int64_t ptr, int8_t data);
	static void putByte(int64_t ptr, int32_t index, int8_t data);
	static void putCard32(int64_t ptr, int64_t value);
	static void putCard32(int64_t ptr, int32_t index, int64_t value);
	static void putInt(int64_t ptr, int32_t data);
	static void putInt(int64_t ptr, int32_t index, int32_t data);
	static void putLong(int64_t ptr, int64_t data);
	static void putLong(int64_t ptr, int32_t index, int64_t data);
	static void putLong(int64_t ptr, ::java::util::Vector* arr);
	static void putLongReverse(int64_t ptr, ::java::util::Vector* arr);
	static void putShort(int64_t ptr, int16_t data);
	static void putShort(int64_t ptr, int32_t index, int16_t data);
	static void putUByte(int64_t ptr, int16_t data);
	static void putUByte(int64_t ptr, int32_t index, int16_t data);
	static void putUInt(int64_t ptr, int64_t data);
	static void putUInt(int64_t ptr, int32_t index, int64_t data);
	static void putULong(int64_t ptr, int64_t value);
	static void putUShort(int64_t ptr, int32_t data);
	static void putUShort(int64_t ptr, int32_t index, int32_t data);
	static void putWindow(int64_t ptr, int64_t window);
	static void putWindow(int64_t ptr, int32_t index, int64_t window);
	static $bytes* toBytes(int64_t data, int32_t length);
	static int64_t toData($bytes* bytes);
	static int64_t toData($shorts* shorts);
	static int64_t toData($ints* ints);
	static int64_t toData($longs* longs);
	static $longs* toLongs(int64_t data, int32_t length);
	static $shorts* toUBytes(int64_t data, int32_t length);
	static int64_t toUData($shorts* bytes);
	static int64_t toUData($ints* shorts);
	static int64_t toUData($longs* ints);
	static ::jdk::internal::misc::Unsafe* unsafe;
	static int32_t longSize;
	static int32_t dataModel;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_Native_h_