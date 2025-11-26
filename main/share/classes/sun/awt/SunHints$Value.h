#ifndef _sun_awt_SunHints$Value_h_
#define _sun_awt_SunHints$Value_h_
//$ class sun.awt.SunHints$Value
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace awt {
		class SunHints$Key;
	}
}

namespace sun {
	namespace awt {

class $export SunHints$Value : public ::java::lang::Object {
	$class(SunHints$Value, 0, ::java::lang::Object)
public:
	SunHints$Value();
	void init$(::sun::awt::SunHints$Key* key, int32_t index, $String* description);
	virtual bool equals(Object$* o) override;
	static ::sun::awt::SunHints$Value* get(int32_t keyindex, int32_t valueindex);
	int32_t getIndex();
	virtual int32_t hashCode() override;
	bool isCompatibleKey(::sun::awt::SunHints$Key* k);
	static void register$(::sun::awt::SunHints$Key* key, ::sun::awt::SunHints$Value* value);
	virtual $String* toString() override;
	::sun::awt::SunHints$Key* myKey = nullptr;
	int32_t index = 0;
	$String* description = nullptr;
	static $Array<::sun::awt::SunHints$Value, 2>* ValueObjects;
};

	} // awt
} // sun

#endif // _sun_awt_SunHints$Value_h_