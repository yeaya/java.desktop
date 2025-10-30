#include <com/sun/media/sound/JSSecurityManager$1.h>

#include <com/sun/media/sound/JSSecurityManager.h>
#include <java/util/Iterator.h>
#include <java/util/ServiceLoader.h>
#include <jcpp.h>

using $JSSecurityManager = ::com::sun::media::sound::JSSecurityManager;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Iterator = ::java::util::Iterator;
using $ServiceLoader = ::java::util::ServiceLoader;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _JSSecurityManager$1_FieldInfo_[] = {
	{"val$providerClass", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(JSSecurityManager$1, val$providerClass)},
	{}
};

$MethodInfo _JSSecurityManager$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;)V", "()V", 0, $method(static_cast<void(JSSecurityManager$1::*)($Class*)>(&JSSecurityManager$1::init$))},
	{"run", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TT;>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _JSSecurityManager$1_EnclosingMethodInfo_ = {
	"com.sun.media.sound.JSSecurityManager",
	"getProviders",
	"(Ljava/lang/Class;)Ljava/util/List;"
};

$InnerClassInfo _JSSecurityManager$1_InnerClassesInfo_[] = {
	{"com.sun.media.sound.JSSecurityManager$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JSSecurityManager$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.JSSecurityManager$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_JSSecurityManager$1_FieldInfo_,
	_JSSecurityManager$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/util/Iterator<TT;>;>;",
	&_JSSecurityManager$1_EnclosingMethodInfo_,
	_JSSecurityManager$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.JSSecurityManager"
};

$Object* allocate$JSSecurityManager$1($Class* clazz) {
	return $of($alloc(JSSecurityManager$1));
}

void JSSecurityManager$1::init$($Class* val$providerClass) {
	$set(this, val$providerClass, val$providerClass);
}

$Object* JSSecurityManager$1::run() {
	$beforeCallerSensitive();
	return $of($nc($($ServiceLoader::load(this->val$providerClass)))->iterator());
}

JSSecurityManager$1::JSSecurityManager$1() {
}

$Class* JSSecurityManager$1::load$($String* name, bool initialize) {
	$loadClass(JSSecurityManager$1, name, initialize, &_JSSecurityManager$1_ClassInfo_, allocate$JSSecurityManager$1);
	return class$;
}

$Class* JSSecurityManager$1::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com