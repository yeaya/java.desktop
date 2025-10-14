#ifndef _com_sun_beans_finder_Signature_h_
#define _com_sun_beans_finder_Signature_h_
//$ class com.sun.beans.finder.Signature
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace beans {
			namespace finder {

class Signature : public ::java::lang::Object {
	$class(Signature, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Signature();
	void init$($Class* type, $ClassArray* args);
	void init$($Class* type, $String* name, $ClassArray* args);
	static int32_t addHashCode(int32_t code, Object$* object);
	virtual bool equals(Object$* object) override;
	$ClassArray* getArgs();
	$String* getName();
	$Class* getType();
	virtual int32_t hashCode() override;
	static bool isEqual(Object$* obj1, Object$* obj2);
	static bool isEqual($ClassArray* args1, $ClassArray* args2);
	$Class* type = nullptr;
	$String* name = nullptr;
	$ClassArray* args = nullptr;
	$volatile(int32_t) code = 0;
};

			} // finder
		} // beans
	} // sun
} // com

#endif // _com_sun_beans_finder_Signature_h_