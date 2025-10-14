#include <javax/swing/KeyboardManager$ComponentKeyStrokePair.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/KeyboardManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $KeyboardManager = ::javax::swing::KeyboardManager;

namespace javax {
	namespace swing {

$FieldInfo _KeyboardManager$ComponentKeyStrokePair_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/KeyboardManager;", nullptr, $FINAL | $SYNTHETIC, $field(KeyboardManager$ComponentKeyStrokePair, this$0)},
	{"component", "Ljava/lang/Object;", nullptr, 0, $field(KeyboardManager$ComponentKeyStrokePair, component)},
	{"keyStroke", "Ljava/lang/Object;", nullptr, 0, $field(KeyboardManager$ComponentKeyStrokePair, keyStroke)},
	{}
};

$MethodInfo _KeyboardManager$ComponentKeyStrokePair_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/KeyboardManager;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(KeyboardManager$ComponentKeyStrokePair::*)($KeyboardManager*,Object$*,Object$*)>(&KeyboardManager$ComponentKeyStrokePair::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _KeyboardManager$ComponentKeyStrokePair_InnerClassesInfo_[] = {
	{"javax.swing.KeyboardManager$ComponentKeyStrokePair", "javax.swing.KeyboardManager", "ComponentKeyStrokePair", 0},
	{}
};

$ClassInfo _KeyboardManager$ComponentKeyStrokePair_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.KeyboardManager$ComponentKeyStrokePair",
	"java.lang.Object",
	nullptr,
	_KeyboardManager$ComponentKeyStrokePair_FieldInfo_,
	_KeyboardManager$ComponentKeyStrokePair_MethodInfo_,
	nullptr,
	nullptr,
	_KeyboardManager$ComponentKeyStrokePair_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.KeyboardManager"
};

$Object* allocate$KeyboardManager$ComponentKeyStrokePair($Class* clazz) {
	return $of($alloc(KeyboardManager$ComponentKeyStrokePair));
}

void KeyboardManager$ComponentKeyStrokePair::init$($KeyboardManager* this$0, Object$* comp, Object$* key) {
	$set(this, this$0, this$0);
	$set(this, component, comp);
	$set(this, keyStroke, key);
}

bool KeyboardManager$ComponentKeyStrokePair::equals(Object$* o) {
	if (!($instanceOf(KeyboardManager$ComponentKeyStrokePair, o))) {
		return false;
	}
	$var(KeyboardManager$ComponentKeyStrokePair, ckp, $cast(KeyboardManager$ComponentKeyStrokePair, o));
	bool var$0 = ($nc($of(this->component))->equals($nc(ckp)->component));
	return (var$0 && ($nc($of(this->keyStroke))->equals($nc(ckp)->keyStroke)));
}

int32_t KeyboardManager$ComponentKeyStrokePair::hashCode() {
	int32_t var$0 = $nc($of(this->component))->hashCode();
	return var$0 * $nc($of(this->keyStroke))->hashCode();
}

KeyboardManager$ComponentKeyStrokePair::KeyboardManager$ComponentKeyStrokePair() {
}

$Class* KeyboardManager$ComponentKeyStrokePair::load$($String* name, bool initialize) {
	$loadClass(KeyboardManager$ComponentKeyStrokePair, name, initialize, &_KeyboardManager$ComponentKeyStrokePair_ClassInfo_, allocate$KeyboardManager$ComponentKeyStrokePair);
	return class$;
}

$Class* KeyboardManager$ComponentKeyStrokePair::class$ = nullptr;

	} // swing
} // javax