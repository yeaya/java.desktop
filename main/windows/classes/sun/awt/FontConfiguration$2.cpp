#include <sun/awt/FontConfiguration$2.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/FontConfiguration.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $FontConfiguration = ::sun::awt::FontConfiguration;

namespace sun {
	namespace awt {

$FieldInfo _FontConfiguration$2_FieldInfo_[] = {
	{"this$0", "Lsun/awt/FontConfiguration;", nullptr, $FINAL | $SYNTHETIC, $field(FontConfiguration$2, this$0)},
	{"val$charsetName", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(FontConfiguration$2, val$charsetName)},
	{}
};

$MethodInfo _FontConfiguration$2_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/FontConfiguration;Ljava/lang/String;)V", "()V", 0, $method(static_cast<void(FontConfiguration$2::*)($FontConfiguration*,$String*)>(&FontConfiguration$2::init$))},
	{"run", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _FontConfiguration$2_EnclosingMethodInfo_ = {
	"sun.awt.FontConfiguration",
	"getFontCharsetEncoder",
	"(Ljava/lang/String;Ljava/lang/String;)Ljava/nio/charset/CharsetEncoder;"
};

$InnerClassInfo _FontConfiguration$2_InnerClassesInfo_[] = {
	{"sun.awt.FontConfiguration$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FontConfiguration$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.FontConfiguration$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_FontConfiguration$2_FieldInfo_,
	_FontConfiguration$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Class<*>;>;",
	&_FontConfiguration$2_EnclosingMethodInfo_,
	_FontConfiguration$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.FontConfiguration"
};

$Object* allocate$FontConfiguration$2($Class* clazz) {
	return $of($alloc(FontConfiguration$2));
}

void FontConfiguration$2::init$($FontConfiguration* this$0, $String* val$charsetName) {
	$set(this, this$0, this$0);
	$set(this, val$charsetName, val$charsetName);
}

$Object* FontConfiguration$2::run() {
	$beforeCallerSensitive();
	try {
		return $of($Class::forName(this->val$charsetName, true, $($ClassLoader::getSystemClassLoader())));
	} catch ($ClassNotFoundException&) {
		$catch();
	}
	return $of(nullptr);
}

FontConfiguration$2::FontConfiguration$2() {
}

$Class* FontConfiguration$2::load$($String* name, bool initialize) {
	$loadClass(FontConfiguration$2, name, initialize, &_FontConfiguration$2_ClassInfo_, allocate$FontConfiguration$2);
	return class$;
}

$Class* FontConfiguration$2::class$ = nullptr;

	} // awt
} // sun