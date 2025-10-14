#ifndef _javax_swing_plaf_nimbus_Effect$ArrayCache_h_
#define _javax_swing_plaf_nimbus_Effect$ArrayCache_h_
//$ class javax.swing.plaf.nimbus.Effect$ArrayCache
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace ref {
			class SoftReference;
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

class Effect$ArrayCache : public ::java::lang::Object {
	$class(Effect$ArrayCache, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Effect$ArrayCache();
	void init$();
	virtual $bytes* getTmpByteArray1(int32_t size);
	virtual $bytes* getTmpByteArray2(int32_t size);
	virtual $bytes* getTmpByteArray3(int32_t size);
	virtual $ints* getTmpIntArray(int32_t size);
	::java::lang::ref::SoftReference* tmpIntArray = nullptr;
	::java::lang::ref::SoftReference* tmpByteArray1 = nullptr;
	::java::lang::ref::SoftReference* tmpByteArray2 = nullptr;
	::java::lang::ref::SoftReference* tmpByteArray3 = nullptr;
};

			} // nimbus
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_nimbus_Effect$ArrayCache_h_