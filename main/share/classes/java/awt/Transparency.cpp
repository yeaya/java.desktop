#include <java/awt/Transparency.h>

#include <jcpp.h>

#undef BITMASK
#undef OPAQUE
#undef TRANSLUCENT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$FieldInfo _Transparency_FieldInfo_[] = {
	{"OPAQUE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Transparency, OPAQUE)},
	{"BITMASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Transparency, BITMASK)},
	{"TRANSLUCENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Transparency, TRANSLUCENT)},
	{}
};

$MethodInfo _Transparency_MethodInfo_[] = {
	{"getTransparency", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Transparency_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.Transparency",
	nullptr,
	nullptr,
	_Transparency_FieldInfo_,
	_Transparency_MethodInfo_
};

$Object* allocate$Transparency($Class* clazz) {
	return $of($alloc(Transparency));
}

$Class* Transparency::load$($String* name, bool initialize) {
	$loadClass(Transparency, name, initialize, &_Transparency_ClassInfo_, allocate$Transparency);
	return class$;
}

$Class* Transparency::class$ = nullptr;

	} // awt
} // java