#ifndef _javax_swing_plaf_nimbus_NimbusStyle$CacheKey_h_
#define _javax_swing_plaf_nimbus_NimbusStyle$CacheKey_h_
//$ class javax.swing.plaf.nimbus.NimbusStyle$CacheKey
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

class NimbusStyle$CacheKey : public ::java::lang::Object {
	$class(NimbusStyle$CacheKey, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NimbusStyle$CacheKey();
	void init$(Object$* key, int32_t xstate);
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	void init(Object$* key, int32_t xstate);
	$String* key = nullptr;
	int32_t xstate = 0;
};

			} // nimbus
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_nimbus_NimbusStyle$CacheKey_h_