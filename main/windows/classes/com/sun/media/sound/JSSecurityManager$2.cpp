#include <com/sun/media/sound/JSSecurityManager$2.h>

#include <com/sun/media/sound/JSSecurityManager.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $JSSecurityManager = ::com::sun::media::sound::JSSecurityManager;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _JSSecurityManager$2_FieldInfo_[] = {
	{"val$ps", "Ljava/util/Iterator;", nullptr, $FINAL | $SYNTHETIC, $field(JSSecurityManager$2, val$ps)},
	{}
};

$MethodInfo _JSSecurityManager$2_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Iterator;)V", "()V", 0, $method(static_cast<void(JSSecurityManager$2::*)($Iterator*)>(&JSSecurityManager$2::init$))},
	{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JSSecurityManager$2_EnclosingMethodInfo_ = {
	"com.sun.media.sound.JSSecurityManager",
	"getProviders",
	"(Ljava/lang/Class;)Ljava/util/List;"
};

$InnerClassInfo _JSSecurityManager$2_InnerClassesInfo_[] = {
	{"com.sun.media.sound.JSSecurityManager$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JSSecurityManager$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.JSSecurityManager$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_JSSecurityManager$2_FieldInfo_,
	_JSSecurityManager$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Boolean;>;",
	&_JSSecurityManager$2_EnclosingMethodInfo_,
	_JSSecurityManager$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.JSSecurityManager"
};

$Object* allocate$JSSecurityManager$2($Class* clazz) {
	return $of($alloc(JSSecurityManager$2));
}

void JSSecurityManager$2::init$($Iterator* val$ps) {
	$set(this, val$ps, val$ps);
}

$Object* JSSecurityManager$2::run() {
	return $of($Boolean::valueOf($nc(this->val$ps)->hasNext()));
}

JSSecurityManager$2::JSSecurityManager$2() {
}

$Class* JSSecurityManager$2::load$($String* name, bool initialize) {
	$loadClass(JSSecurityManager$2, name, initialize, &_JSSecurityManager$2_ClassInfo_, allocate$JSSecurityManager$2);
	return class$;
}

$Class* JSSecurityManager$2::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com