#ifndef _sun_java2d_marlin_OffHeapArray_h_
#define _sun_java2d_marlin_OffHeapArray_h_
//$ class sun.java2d.marlin.OffHeapArray
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("SIZE_INT")
#undef SIZE_INT
#pragma push_macro("UNSAFE")
#undef UNSAFE

namespace jdk {
	namespace internal {
		namespace misc {
			class Unsafe;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace marlin {

class OffHeapArray : public ::java::lang::Object {
	$class(OffHeapArray, 0, ::java::lang::Object)
public:
	OffHeapArray();
	void init$(Object$* parent, int64_t len);
	void fill(int8_t val);
	void free();
	void lambda$new$0();
	void resize(int64_t len);
	static ::jdk::internal::misc::Unsafe* UNSAFE;
	static int32_t SIZE_INT;
	int64_t address = 0;
	int64_t length = 0;
	int32_t used = 0;
};

		} // marlin
	} // java2d
} // sun

#pragma pop_macro("SIZE_INT")
#pragma pop_macro("UNSAFE")

#endif // _sun_java2d_marlin_OffHeapArray_h_