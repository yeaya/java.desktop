#include <sun/awt/FontConfiguration$PropertiesHandler$FontProperties.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Properties.h>
#include <sun/awt/FontConfiguration$PropertiesHandler.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Properties = ::java::util::Properties;
using $FontConfiguration$PropertiesHandler = ::sun::awt::FontConfiguration$PropertiesHandler;

namespace sun {
	namespace awt {

$FieldInfo _FontConfiguration$PropertiesHandler$FontProperties_FieldInfo_[] = {
	{"this$0", "Lsun/awt/FontConfiguration$PropertiesHandler;", nullptr, $FINAL | $SYNTHETIC, $field(FontConfiguration$PropertiesHandler$FontProperties, this$0)},
	{}
};

$MethodInfo _FontConfiguration$PropertiesHandler$FontProperties_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/FontConfiguration$PropertiesHandler;)V", nullptr, 0, $method(static_cast<void(FontConfiguration$PropertiesHandler$FontProperties::*)($FontConfiguration$PropertiesHandler*)>(&FontConfiguration$PropertiesHandler$FontProperties::init$))},
	{"put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{}
};

$InnerClassInfo _FontConfiguration$PropertiesHandler$FontProperties_InnerClassesInfo_[] = {
	{"sun.awt.FontConfiguration$PropertiesHandler", "sun.awt.FontConfiguration", "PropertiesHandler", $STATIC},
	{"sun.awt.FontConfiguration$PropertiesHandler$FontProperties", "sun.awt.FontConfiguration$PropertiesHandler", "FontProperties", 0},
	{}
};

$ClassInfo _FontConfiguration$PropertiesHandler$FontProperties_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.FontConfiguration$PropertiesHandler$FontProperties",
	"java.util.Properties",
	nullptr,
	_FontConfiguration$PropertiesHandler$FontProperties_FieldInfo_,
	_FontConfiguration$PropertiesHandler$FontProperties_MethodInfo_,
	nullptr,
	nullptr,
	_FontConfiguration$PropertiesHandler$FontProperties_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.FontConfiguration"
};

$Object* allocate$FontConfiguration$PropertiesHandler$FontProperties($Class* clazz) {
	return $of($alloc(FontConfiguration$PropertiesHandler$FontProperties));
}

void FontConfiguration$PropertiesHandler$FontProperties::init$($FontConfiguration$PropertiesHandler* this$0) {
	$set(this, this$0, this$0);
	$Properties::init$();
}

$Object* FontConfiguration$PropertiesHandler$FontProperties::put(Object$* k, Object$* v) {
	$synchronized(this) {
		this->this$0->parseProperty($cast($String, k), $cast($String, v));
		return $of(nullptr);
	}
}

FontConfiguration$PropertiesHandler$FontProperties::FontConfiguration$PropertiesHandler$FontProperties() {
}

$Class* FontConfiguration$PropertiesHandler$FontProperties::load$($String* name, bool initialize) {
	$loadClass(FontConfiguration$PropertiesHandler$FontProperties, name, initialize, &_FontConfiguration$PropertiesHandler$FontProperties_ClassInfo_, allocate$FontConfiguration$PropertiesHandler$FontProperties);
	return class$;
}

$Class* FontConfiguration$PropertiesHandler$FontProperties::class$ = nullptr;

	} // awt
} // sun