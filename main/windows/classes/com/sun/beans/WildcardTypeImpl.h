#ifndef _com_sun_beans_WildcardTypeImpl_h_
#define _com_sun_beans_WildcardTypeImpl_h_
//$ class com.sun.beans.WildcardTypeImpl
//$ extends java.lang.reflect.WildcardType

#include <java/lang/Array.h>
#include <java/lang/reflect/WildcardType.h>

namespace java {
	namespace lang {
		namespace reflect {
			class Type;
		}
	}
}

namespace com {
	namespace sun {
		namespace beans {

class WildcardTypeImpl : public ::java::lang::reflect::WildcardType {
	$class(WildcardTypeImpl, $NO_CLASS_INIT, ::java::lang::reflect::WildcardType)
public:
	WildcardTypeImpl();
	void init$($Array<::java::lang::reflect::Type>* upperBounds, $Array<::java::lang::reflect::Type>* lowerBounds);
	virtual bool equals(Object$* object) override;
	virtual $Array<::java::lang::reflect::Type>* getLowerBounds() override;
	virtual $Array<::java::lang::reflect::Type>* getUpperBounds() override;
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	$Array<::java::lang::reflect::Type>* upperBounds = nullptr;
	$Array<::java::lang::reflect::Type>* lowerBounds = nullptr;
};

		} // beans
	} // sun
} // com

#endif // _com_sun_beans_WildcardTypeImpl_h_