#include <sun/swing/SwingUtilities2$KeyPair.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace sun {
	namespace swing {

$FieldInfo _SwingUtilities2$KeyPair_FieldInfo_[] = {
	{"key1", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(SwingUtilities2$KeyPair, key1)},
	{"key2", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(SwingUtilities2$KeyPair, key2)},
	{}
};

$MethodInfo _SwingUtilities2$KeyPair_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(SwingUtilities2$KeyPair::*)(Object$*,Object$*)>(&SwingUtilities2$KeyPair::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SwingUtilities2$KeyPair_InnerClassesInfo_[] = {
	{"sun.swing.SwingUtilities2$KeyPair", "sun.swing.SwingUtilities2", "KeyPair", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SwingUtilities2$KeyPair_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.SwingUtilities2$KeyPair",
	"java.lang.Object",
	nullptr,
	_SwingUtilities2$KeyPair_FieldInfo_,
	_SwingUtilities2$KeyPair_MethodInfo_,
	nullptr,
	nullptr,
	_SwingUtilities2$KeyPair_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.SwingUtilities2"
};

$Object* allocate$SwingUtilities2$KeyPair($Class* clazz) {
	return $of($alloc(SwingUtilities2$KeyPair));
}

void SwingUtilities2$KeyPair::init$(Object$* key1, Object$* key2) {
	$set(this, key1, key1);
	$set(this, key2, key2);
}

bool SwingUtilities2$KeyPair::equals(Object$* obj) {
	if (!($instanceOf(SwingUtilities2$KeyPair, obj))) {
		return false;
	}
	$var(SwingUtilities2$KeyPair, that, $cast(SwingUtilities2$KeyPair, obj));
	bool var$0 = $nc($of(this->key1))->equals($nc(that)->key1);
	return var$0 && $nc($of(this->key2))->equals($nc(that)->key2);
}

int32_t SwingUtilities2$KeyPair::hashCode() {
	int32_t var$0 = $nc($of(this->key1))->hashCode();
	return var$0 + 37 * $nc($of(this->key2))->hashCode();
}

SwingUtilities2$KeyPair::SwingUtilities2$KeyPair() {
}

$Class* SwingUtilities2$KeyPair::load$($String* name, bool initialize) {
	$loadClass(SwingUtilities2$KeyPair, name, initialize, &_SwingUtilities2$KeyPair_ClassInfo_, allocate$SwingUtilities2$KeyPair);
	return class$;
}

$Class* SwingUtilities2$KeyPair::class$ = nullptr;

	} // swing
} // sun