#ifndef _NimbusPropertiesDoNotImplUIResource_h_
#define _NimbusPropertiesDoNotImplUIResource_h_
//$ class NimbusPropertiesDoNotImplUIResource
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export NimbusPropertiesDoNotImplUIResource : public ::java::lang::Object {
	$class(NimbusPropertiesDoNotImplUIResource, 0, ::java::lang::Object)
public:
	NimbusPropertiesDoNotImplUIResource();
	void init$();
	static void main($StringArray* args);
	static void verifyProperty($String* propertyKey);
	static $StringArray* defPropertyKeys;
	static $String* failedKeys;
};

#endif // _NimbusPropertiesDoNotImplUIResource_h_